module.exports = grammar({
  name: 'wdl',

  rules: {
    //source_file: $ => repeat($._definition),

    /*
    _definition: $ => choice(
      //$.function_definition,
      //$.call_definition,
      //$.workflow_definition,
      $.output_definition
    ),
    */
/*
    workflow_definition: $ => seq(
      'workflow',
      $.identifier,
      '{',
      repeat($.call_definition),
      $.output_definition,
      '}'
    ),
*/
  /*
    call_definition: $ => seq(
      'call',
      $.identifier,
      '{',
        'input:',
        repeat($.input_param),
      '}'
    ),
    */
    /*
    output_definition: $ => seq(
      'output',
      '{',


             '}'
    ),
    */
    /*
    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameter_list,
      $._type,
      $.block
    ),

    */
    // need to change output_param
    /*
    output_param: $ => seq(
        $.__type,
        $.identifier,
        '=',
        $.identifier
    ),
    */
    /*
    __type: $ => seq('bool'),

    input_param: $ => seq(
      $.identifier,
      '=',
      $.identifier
    ),

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),


    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    */
    // ws: $ => /((%x20) | (%x9) | (%xD) | (%xA))+/,
    ws: $ => /(' ')+/,
    identifier: $ => /[a-zA-Z][a-zA-Z0-9_]+/ ,
    integer: $ => /[1-9][0-9]*|0[xX][0-9a-fA-F]+|0[0-7]*/,
    float: $ => /(([0-9]+)?\.([0-9]+)|[0-9]+\.|[0-9]+)([eE][-+]?[0-9]+)?/,
    boolean: $ => choice('true', 'false'),
    object_type: $ => 'Object',
    string: $ =>
    choice(/'([^\\\'\n]|\\[\\"\'nrbtfav\?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU]([0-9a-fA-F]{4})([0-9a-fA-F]{4})?)*'/,
    /"([^\\\"\n]|\\[\\"\'nrbtfav\?]|\\[0-7]{1,3}|\\x[0-9a-fA-F]+|\\[uU]([0-9a-fA-F]{4})([0-9a-fA-F]{4})?)*"/),


    _type: $ => seq(choice($.primitive_type,
      $.array_type,
      $.map_type,
      $.object_type),
      optional($.type_postfix_quantifier)),
    primitive_type: $ => choice(
        'Boolean',
        'Int',
        'Float',
        'File',
        'String'
            ),

    array_type: $ => seq('Array',
        '[',
        choice($.primitive_type, $.object_type, $.array_type),
         ']'
       ),
    map_type: $ => seq('Map', '[', $.primitive_type, ',',
    choice($.primitive_type, $.array_type, $.map_type, $.object_type), ']'),

    type_postfix_quantifier: $ => choice('?', '+'),

     fully_qualified_name: $ => seq($.identifier,
       repeat(seq('.', $.identifier))),
     namespaced_identifier: $ => seq($.identifier,
       repeat(seq('.', $.identifier))),
      number: $ => /\d+/,

      declaration: $ => seq($._type, $.identifier,
                optional(
                  seq('=', $.expression) ) ),
      center_operator: $ => choice('%', '/', '+', '*', '-', '<', '=<', '>', '>=',
      '==', '!=', '&&', '||'),
      expression: $ => prec(3, choice(seq('(', $.expression, ')'),
                              seq($.expression, '.', $.expression),
                              seq($.expression, '[', $.expression, ']'),
                              seq($.expression,'(',
                              optional(
                                seq($.expression,
                                  repeat(
                                    seq(',',$.expression)
                                  ),')'
                                )
                              )),
                              seq('!', $.expression),
                              seq('+', $.expression),
                              seq( '-', $.expression),
                              seq('if', $.expression, 'then',
                              $.expression, 'else',
                              $.expression),
                              seq($.expression, $.center_operator, $.expression),
                              seq('{',
                                repeat(
                                  seq($.expression, ':', $.expression)
                                ),
                              '}'),
                              seq('[',
                                repeat($.expression), ']'),
                                choice($.string,
                                  $.integer,
                                  $.float,
                                  $.boolean,
                                  $.identifier))),

      document: $ => prec(2, repeat1(choice($.import, $.task, $.workflow))),
      import: $ => seq('import', repeat1($.ws),
                      $.string,
                      optional(
                      seq(
                        repeat1($.ws),
                        'as',
                        repeat1($.ws), $.identifier)
                      )
                    ),
      task: $ => prec(1, seq('task', repeat1($.ws),
            $.identifier,
            repeat($.ws),
            '{', repeat($.ws), repeat($.declaration),
            $.task_sections, repeat($.ws), '}')),

      task_sections: $ => prec(1, repeat1(choice($.command, $.runtime, $.task_output, $.parameter_meta, $.meta))),

      command: $ =>choice(
                  seq('command', repeat($.ws), '{', /(0xA | 0xD)*/, repeat1($.command_part), repeat1($.ws), '}'),
                  seq('command', repeat($.ws), '<<<', /(0xA | 0xD)*/, repeat1($.command_part), repeat1($.ws), '>>>')),

      command_part: $ => choice($.command_part_string, $.command_part_var),
      command_part_string: $ => /\{+/,
      command_part_var: $ => seq(/\{/, repeat($.var_option), $.expression, '}'),

      var_option: $ => seq($.var_option_key, repeat($.ws), '=', repeat($.ws), $.var_option_value),
      var_option_key: $ => choice('sep', 'true', 'false', 'quote', 'default'),
      var_option_value: $ => $.expression,

      task_output: $ => seq('output', repeat($.ws), '{', repeat(seq(repeat($.ws), $.task_output_kv, repeat($.ws))), '}'),
      task_output_kv: $ => seq($._type, $.identifier, repeat($.ws), '=', repeat($.ws), $.string),

      runtime: $ => seq('runtime', repeat($.ws), '{', repeat(seq(repeat($.ws), $.runtime_kv, repeat($.ws))), '}'),
      runtime_kv: $ => seq($.identifier, repeat($.ws), '=', repeat($.ws), $.expression),

      parameter_meta: $ => seq('parameter_meta', repeat($.ws),
      '{', repeat(seq(repeat($.ws), $.parameter_meta_kv, repeat($.ws))), '}'),
      parameter_meta_kv: $ => seq($.identifier, repeat($.ws), '=', repeat($.ws), $.string),

      meta: $ => seq('meta', repeat($.ws), '{', repeat(seq(repeat($.ws), $.meta_kv, repeat($.ws))), '}'),
      meta_kv: $ => seq($.identifier, repeat($.ws), '=', repeat($.ws), $.string),

      workflow: $ => seq('workflow', repeat1($.ws), $.identifier, repeat($.ws),  '{', repeat($.ws), repeat($.workflow_element), repeat($.ws), '}'),
      workflow_element: $ => choice($.call, $.loop, $.conditional, $.declaration, $.scatter, $.parameter_meta, $.meta),

      call: $ => seq('call', repeat($.ws), $.namespaced_identifier, repeat1($.ws),
                            optional(seq('as', $.identifier)),
                            repeat($.ws), optional($.call_body)),

      call_body: $ => seq('{', repeat($.ws), optional($.inputs), repeat($.ws), '}'),
      inputs: $ => seq('input', repeat($.ws), ':', repeat($.ws), $.variable_mappings),

      variable_mappings: $ => seq($.variable_mapping_kv, repeat(seq(',', $.variable_mapping_kv))),
      variable_mapping_kv: $ => seq($.identifier, repeat($.ws), '=', repeat($.ws), $.expression),

      scatter: $ => seq('scatter',
                      repeat($.ws), '(', repeat($.ws),
                       repeat($.scatter_iteration_statment), repeat($.ws),  ')', repeat($.ws), $.scatter_body),
      scatter_iteration_statment: $ => seq($.identifier, repeat($.ws), 'in', repeat($.ws), $.expression),
      scatter_body: $ => seq('{', repeat($.ws),
                            repeat($.workflow_element),
                            repeat($.ws), '}'),
      loop: $ => seq('while', '(', $.expression, ')', '{', repeat($.workflow_element), '}'),

      conditional: $ => seq('if', '(', $.expression, ')', '{', repeat($.workflow_element), '}'),

      wf_parameter_meta: $ => seq('parameter_meta', repeat($.ws), '{', repeat(seq(repeat($.ws), $.wf_parameter_meta_kv, repeat($.ws))), '}'),
      wf_parameter_meta_kv: $ => seq($.identifier, repeat($.ws), '=', repeat($.ws), $.string),
      wf_meta: $ => seq('meta', repeat($.ws), '{', repeat(seq(repeat($.ws), $.wf_meta_kv, repeat($.ws))), '}'),
      wf_meta_kv: $ => seq($.identifier, repeat($.ws), '=', repeat($.ws), $.string)
      }
});
