const PREC = {
  PAREN_DECLARATOR: -10,
  ASSIGNMENT: -1,
  CONDITIONAL: -2,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SIZEOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,
  UNARY: 13,
  CALL: 14,
  FIELD: 15,
  SUBSCRIPT: 16
};

module.exports = grammar({
  name: 'wdl',

  rules: {
    // ws: $ => /((%x20) | (%x9) | (%xD) | (%xA))+/,
    // ws: $ => /(' ')+/,
    definition: $ => choice($.expression, $.type, $.runtime, $.document, $.call),
    identifier: $ => prec(-1, /[a-zA-Z][a-zA-Z0-9_]+/),
    integer: $ => /[1-9][0-9]*|0[xX][0-9a-fA-F]+|0[0-7]*/,
    float: $ => /(([0-9]+)?\.([0-9]+)|[0-9]+\.|[0-9]+)([eE][-+]?[0-9]+)?/,
    boolean: $ => choice('true', 'false'),
    object_type: $ => 'Object',
    primitive_type: $ => choice(
        'Boolean',
        'Int',
        'Float',
        'File',
        'String'
      ),
    // string: $ => prec(2,
    // choice(/'([\\\'\n]|\\[\\"\'nrbtfav\?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU]([0-9a-fA-F]{4})([0-9a-fA-F]{4})?)*'/,
    // /"([\\\"\n]|\\[\\"\'nrbtfav\?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU]([0-9a-fA-F]{4})([0-9a-fA-F]{4})?)*"/))

    string_literal: $ => choice(seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"'
    ),
    seq(
      "\'",
      repeat(choice(
        choice(
        $.escape_sequence,
        token.immediate(/[^\n']/)
      ),
        $.escape_sequence
      )),
      "\'"
    )),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

      /// center_operator: $ => choice('%', '/', '+', '*', '-', '<', '=<', '>', '>=',
      // '==', '!=', '&&', '||'),
      expression: $ =>  prec.left(6, choice(
                              prec.left(seq($.expression, '.', $.expression)),
                              seq($.expression, '[', $.expression, ']'),
                              prec.left($.function_expression),
                              prec.left(seq('if', $.expression, 'then',
                              $.expression, 'else',
                              $.expression)),
                              // seq($.expression, $.center_operator, $.expression),,
                                choice($.string_literal,
                                  $.integer,
                                  $.float,
                                  $.boolean,
                                  $.identifier),
                                  $.parentheses_expression,
                                 $.dictionary_expression,
                                 $.math_expression,
                                 $.bracket_expression,
                                 $.equality_expression
                                    ),
                                ),
      function_expression: $=> seq($.expression, '(', optional(
        seq($.expression,
          repeat(
            seq(',',$.expression)
          ))), ')'),
      parentheses_expression: $ => prec(PREC.PAREN_DECLARATOR, seq('(', $.expression, ')')),
      dictionary_expression: $ => seq('{',
        choice(repeat(
          seq($.expression, ':', $.expression)
        ),
        seq( seq($.expression, ':', $.expression), repeat1(seq(",", $.expression, ':', $.expression))))
      ,'}'),
      bracket_expression: $ =>  prec(PREC.PAREN_DECLARATOR, seq('[', repeat($.expression), ']')),
      math_expression: $ => choice(
        prec.left(PREC.ADD, seq($.expression, '+', $.expression)),
        prec.left(PREC.ADD, seq($.expression, '-', $.expression)),
        prec.left(PREC.MULTIPLY, seq($.expression, '*', $.expression)),
        prec.left(PREC.MULTIPLY, seq($.expression, '/', $.expression)),
        prec.left(PREC.MULTIPLY, seq($.expression, '%', $.expression)),
        prec.right(PREC.UNARY, seq('-', $.expression)),
        prec.right(PREC.UNARY, seq('+', $.expression))),
        logical_expression: $ => choice(
        prec.left(PREC.LOGICAL_OR, seq($.expression, '||', $.expression)),
        prec.left(PREC.LOGICAL_AND, seq($.expression, '&&', $.expression)),
        prec.left(PREC.UNARY, seq('!', $.expression))
      ),
      equality_expression: $ => prec.left(PREC.EQUAL, seq(
      $.expression, choice('==', '!='), $.expression
      )),

      relational_expression: $ => prec.left(PREC.RELATIONAL, seq(
      $.expression, choice('<', '>', '<=', '>='), $.expression
    )),

    type: $ => prec.left(seq(choice($.primitive_type,
        $.array_type,
        $.map_type,
        $.object_type),
        optional($.type_postfix_quantifier))),

      array_type: $ => seq('Array',
            '[',
            choice($.primitive_type, $.object_type, $.array_type),
             ']'
      ),

      map_type: $ => seq('Map', '[', $.primitive_type, ',',
      choice($.primitive_type, $.array_type, $.map_type, $.object_type), ']'),
      type_postfix_quantifier: $ => choice('?', '+'),

      runtime: $ => seq('runtime',
                                '{',
                                      repeat(seq( $.runtime_kv)),
                                '}'),
      runtime_kv: $ => seq($.identifier,  ':',  $.expression),

      task_output: $ => seq('output',  '{', repeat(seq( $.task_output_kv)), '}'),
      task_output_kv: $ => seq($.type, $.identifier,  '=',  $.string_literal),
      parameter_meta: $ => seq('parameter_meta',
      '{', repeat(seq( $.parameter_meta_kv, '}'))),
      parameter_meta_kv: $ => seq($.identifier,  '=',  $.string_literal),
      meta: $ => seq('meta',  '{', repeat(seq( $.meta_kv)),'}'),
      meta_kv: $ => seq($.identifier,  '=',  $.string_literal),


      task: $ => prec(1, seq('task',
             $.identifier,

            '{',  repeat($.declaration),
             $.task_sections,  '}')),
      task_sections: $ => prec(1, repeat1(choice($.command,
                                                    $.runtime,
                                                    $.task_output,
                                                    $.parameter_meta,
                                                    $.meta))),

      declaration: $ => seq($.type, $.identifier,
                  optional(
                    seq('=', $.expression) ) ),

      command: $ =>choice(
                  seq('command',  '{', repeat1($.command_part),  '}'),
                  seq('command',  '<<<', repeat1($.command_part),  '>>>')),

      command_part: $ => choice($.command_part_string, $.command_part_var),
      command_part_string: $ => /[a-zA-Z]+/,
      command_part_var: $ => seq('$', '{', repeat($.var_option), $.expression, '}'),

      var_option: $ => seq($.var_option_key,  '=',  $.var_option_value),
      var_option_key: $ => choice('sep', 'true', 'false', 'quote', 'default'),
      var_option_value: $ => $.expression,

      call: $ => prec.right(6, seq('call', $.namespaced_identifier,
                           optional(seq('as', $.identifier)),
                           optional($.call_body))),
      call_body: $ => seq('{', optional($.inputs), '}'),
      inputs: $ => seq('input',  ':',  $.variable_mappings),

      variable_mappings: $ => seq($.variable_mapping_kv, repeat(seq(',', $.variable_mapping_kv))),
      variable_mapping_kv: $ => seq($.identifier,  '=',  $.expression),
       namespaced_identifier: $ => seq($.identifier,
         repeat(seq('.', $.identifier))),


      loop: $ => seq('while', '(', $.expression, ')',
                    '{', repeat($.workflow_element), '}'),
      conditional: $ => seq('if', '(', $.expression, ')',
                            '{', repeat($.workflow_element), '}'),


      document: $ => repeat1(choice($.import, $.task, $.workflow)),
      import: $ => seq('import',
                      $.string_literal,
                      optional(
                      seq(
                        'as',
                         $.identifier)
                      )
                    ),
      workflow: $ => prec.right(6, seq('workflow',  $.identifier,   '{',  repeat($.workflow_element),  '}')),
      workflow_element: $ => choice($.call,
                                    $.loop,
                                    $.conditional,
                                    $.declaration,
                                    $.scatter,
                                    $.parameter_meta,
                                    $.meta),

      scatter: $ => seq('scatter',
                       '(',
                       repeat($.scatter_iteration_statment),   ')',  $.scatter_body),
      scatter_iteration_statment: $ => seq($.identifier,  'in',  $.expression),
      scatter_body: $ => seq('{',
                            repeat($.workflow_element),
                             '}'),
      fully_qualified_name: $ => seq($.identifier,
         repeat(seq('.', $.identifier)))

      // wf_parameter_meta: $ => seq('parameter_meta',  '{', repeat(seq( $.wf_parameter_meta_kv, repeat($.ws))), '}'),
      // wf_parameter_meta_kv: $ => seq($.identifier,  '=',  $.string_literal),
      // wf_meta: $ => seq('meta',  '{', repeat(seq( $.wf_meta_kv, repeat($.ws))), '}'),
      // wf_meta_kv: $ => seq($.identifier,  '=',  $.string_literal),

      }
});
