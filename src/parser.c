#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 562
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  aux_sym_identifier_token1 = 1,
  sym_integer = 2,
  sym_float = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_object_type = 6,
  anon_sym_Boolean = 7,
  anon_sym_Int = 8,
  anon_sym_Float = 9,
  anon_sym_File = 10,
  anon_sym_String = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_literal_token1 = 13,
  sym_escape_sequence = 14,
  anon_sym_DOT = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LPAREN = 18,
  anon_sym_COMMA = 19,
  anon_sym_RPAREN = 20,
  anon_sym_if = 21,
  anon_sym_then = 22,
  anon_sym_else = 23,
  anon_sym_LBRACE = 24,
  anon_sym_COLON = 25,
  anon_sym_RBRACE = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_PERCENT = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_BANG = 34,
  anon_sym_EQ_EQ = 35,
  anon_sym_BANG_EQ = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_LT_EQ = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_Array = 41,
  anon_sym_Map = 42,
  anon_sym_QMARK = 43,
  anon_sym_runtime = 44,
  anon_sym_EQ = 45,
  anon_sym_output = 46,
  anon_sym_parameter_meta = 47,
  anon_sym_meta = 48,
  anon_sym_task = 49,
  anon_sym_command = 50,
  anon_sym_LT_LT_LT = 51,
  anon_sym_GT_GT_GT = 52,
  sym_command_part_string = 53,
  anon_sym_DOLLAR = 54,
  anon_sym_sep = 55,
  anon_sym_quote = 56,
  anon_sym_default = 57,
  anon_sym_call = 58,
  anon_sym_as = 59,
  anon_sym_input = 60,
  anon_sym_while = 61,
  anon_sym_workflow = 62,
  anon_sym_scatter = 63,
  anon_sym_in = 64,
  sym_definition = 65,
  sym_identifier = 66,
  sym_boolean = 67,
  sym_primitive_type = 68,
  sym_string_literal = 69,
  sym_expression = 70,
  sym_parentheses_expression = 71,
  sym_dictionary_expression = 72,
  sym_bracket_expression = 73,
  sym_math_expression = 74,
  sym_equality_expression = 75,
  sym_type = 76,
  sym_array_type = 77,
  sym_map_type = 78,
  sym_type_postfix_quantifier = 79,
  sym_runtime = 80,
  sym_runtime_kv = 81,
  sym_task_output = 82,
  sym_task_output_kv = 83,
  sym_parameter_meta = 84,
  sym_parameter_meta_kv = 85,
  sym_meta = 86,
  sym_meta_kv = 87,
  sym_task = 88,
  sym_task_sections = 89,
  sym_declaration = 90,
  sym_command = 91,
  sym_command_part = 92,
  sym_command_part_var = 93,
  sym_var_option = 94,
  sym_var_option_key = 95,
  sym_var_option_value = 96,
  sym_call = 97,
  sym_call_body = 98,
  sym_inputs = 99,
  sym_variable_mappings = 100,
  sym_variable_mapping_kv = 101,
  sym_namespaced_identifier = 102,
  sym_loop = 103,
  sym_conditional = 104,
  sym_workflow = 105,
  sym_workflow_element = 106,
  sym_scatter = 107,
  sym_scatter_iteration_statment = 108,
  sym_scatter_body = 109,
  aux_sym_definition_repeat1 = 110,
  aux_sym_definition_repeat2 = 111,
  aux_sym_definition_repeat3 = 112,
  aux_sym_definition_repeat4 = 113,
  aux_sym_definition_repeat5 = 114,
  aux_sym_definition_repeat6 = 115,
  aux_sym_string_literal_repeat1 = 116,
  aux_sym_expression_repeat1 = 117,
  aux_sym_dictionary_expression_repeat1 = 118,
  aux_sym_runtime_repeat1 = 119,
  aux_sym_task_output_repeat1 = 120,
  aux_sym_parameter_meta_repeat1 = 121,
  aux_sym_meta_repeat1 = 122,
  aux_sym_task_repeat1 = 123,
  aux_sym_task_sections_repeat1 = 124,
  aux_sym_command_repeat1 = 125,
  aux_sym_command_part_var_repeat1 = 126,
  aux_sym_variable_mappings_repeat1 = 127,
  aux_sym_namespaced_identifier_repeat1 = 128,
  aux_sym_loop_repeat1 = 129,
  aux_sym_scatter_repeat1 = 130,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_object_type] = "object_type",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Int] = "Int",
  [anon_sym_Float] = "Float",
  [anon_sym_File] = "File",
  [anon_sym_String] = "String",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_Array] = "Array",
  [anon_sym_Map] = "Map",
  [anon_sym_QMARK] = "?",
  [anon_sym_runtime] = "runtime",
  [anon_sym_EQ] = "=",
  [anon_sym_output] = "output",
  [anon_sym_parameter_meta] = "parameter_meta",
  [anon_sym_meta] = "meta",
  [anon_sym_task] = "task",
  [anon_sym_command] = "command",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [sym_command_part_string] = "command_part_string",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_sep] = "sep",
  [anon_sym_quote] = "quote",
  [anon_sym_default] = "default",
  [anon_sym_call] = "call",
  [anon_sym_as] = "as",
  [anon_sym_input] = "input",
  [anon_sym_while] = "while",
  [anon_sym_workflow] = "workflow",
  [anon_sym_scatter] = "scatter",
  [anon_sym_in] = "in",
  [sym_definition] = "definition",
  [sym_identifier] = "identifier",
  [sym_boolean] = "boolean",
  [sym_primitive_type] = "primitive_type",
  [sym_string_literal] = "string_literal",
  [sym_expression] = "expression",
  [sym_parentheses_expression] = "parentheses_expression",
  [sym_dictionary_expression] = "dictionary_expression",
  [sym_bracket_expression] = "bracket_expression",
  [sym_math_expression] = "math_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_type] = "type",
  [sym_array_type] = "array_type",
  [sym_map_type] = "map_type",
  [sym_type_postfix_quantifier] = "type_postfix_quantifier",
  [sym_runtime] = "runtime",
  [sym_runtime_kv] = "runtime_kv",
  [sym_task_output] = "task_output",
  [sym_task_output_kv] = "task_output_kv",
  [sym_parameter_meta] = "parameter_meta",
  [sym_parameter_meta_kv] = "parameter_meta_kv",
  [sym_meta] = "meta",
  [sym_meta_kv] = "meta_kv",
  [sym_task] = "task",
  [sym_task_sections] = "task_sections",
  [sym_declaration] = "declaration",
  [sym_command] = "command",
  [sym_command_part] = "command_part",
  [sym_command_part_var] = "command_part_var",
  [sym_var_option] = "var_option",
  [sym_var_option_key] = "var_option_key",
  [sym_var_option_value] = "var_option_value",
  [sym_call] = "call",
  [sym_call_body] = "call_body",
  [sym_inputs] = "inputs",
  [sym_variable_mappings] = "variable_mappings",
  [sym_variable_mapping_kv] = "variable_mapping_kv",
  [sym_namespaced_identifier] = "namespaced_identifier",
  [sym_loop] = "loop",
  [sym_conditional] = "conditional",
  [sym_workflow] = "workflow",
  [sym_workflow_element] = "workflow_element",
  [sym_scatter] = "scatter",
  [sym_scatter_iteration_statment] = "scatter_iteration_statment",
  [sym_scatter_body] = "scatter_body",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_definition_repeat2] = "definition_repeat2",
  [aux_sym_definition_repeat3] = "definition_repeat3",
  [aux_sym_definition_repeat4] = "definition_repeat4",
  [aux_sym_definition_repeat5] = "definition_repeat5",
  [aux_sym_definition_repeat6] = "definition_repeat6",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_dictionary_expression_repeat1] = "dictionary_expression_repeat1",
  [aux_sym_runtime_repeat1] = "runtime_repeat1",
  [aux_sym_task_output_repeat1] = "task_output_repeat1",
  [aux_sym_parameter_meta_repeat1] = "parameter_meta_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_task_repeat1] = "task_repeat1",
  [aux_sym_task_sections_repeat1] = "task_sections_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_part_var_repeat1] = "command_part_var_repeat1",
  [aux_sym_variable_mappings_repeat1] = "variable_mappings_repeat1",
  [aux_sym_namespaced_identifier_repeat1] = "namespaced_identifier_repeat1",
  [aux_sym_loop_repeat1] = "loop_repeat1",
  [aux_sym_scatter_repeat1] = "scatter_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_runtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_task] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_command_part_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scatter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parentheses_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_math_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_postfix_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime] = {
    .visible = true,
    .named = true,
  },
  [sym_runtime_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_task_output] = {
    .visible = true,
    .named = true,
  },
  [sym_task_output_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_meta_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_task_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_part] = {
    .visible = true,
    .named = true,
  },
  [sym_command_part_var] = {
    .visible = true,
    .named = true,
  },
  [sym_var_option] = {
    .visible = true,
    .named = true,
  },
  [sym_var_option_key] = {
    .visible = true,
    .named = true,
  },
  [sym_var_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_call_body] = {
    .visible = true,
    .named = true,
  },
  [sym_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_mappings] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_mapping_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_namespaced_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_element] = {
    .visible = true,
    .named = true,
  },
  [sym_scatter] = {
    .visible = true,
    .named = true,
  },
  [sym_scatter_iteration_statment] = {
    .visible = true,
    .named = true,
  },
  [sym_scatter_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runtime_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_output_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_part_var_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_mappings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespaced_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loop_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scatter_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == 'f')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(36);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'q')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == 'w')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 6:
      if (lookahead == '&')
        ADVANCE(51);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(54);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(56);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 21:
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(64);
      if (lookahead == 'l')
        ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'n')
        ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'b')
        ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 't')
        ADVANCE(69);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      if (lookahead == 'U')
        ADVANCE(70);
      if (lookahead == 'u')
        ADVANCE(71);
      if (lookahead == 'x')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead != 0)
        ADVANCE(74);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      if (lookahead == 's')
        ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'a')
        ADVANCE(76);
      if (lookahead == 'o')
        ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'l')
        ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'f')
        ADVANCE(81);
      if (lookahead == 'n')
        ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'u')
        ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(88);
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(90);
      if (lookahead == 'h')
        ADVANCE(91);
      if (lookahead == 'r')
        ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'h')
        ADVANCE(93);
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      if (lookahead == '|')
        ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == 'f')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(36);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'q')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == 'w')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(98);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '<')
        ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 61:
      if (lookahead == '>')
        ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'o')
        ADVANCE(102);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'p')
        ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == 'j')
        ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 76:
      if (lookahead == 'l')
        ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'm')
        ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'f')
        ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead == 's')
        ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'o')
        ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'n')
        ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'p')
        ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'u')
        ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == 'i')
        ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'r')
        ADVANCE(129);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 101:
      if (lookahead == 'a')
        ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 'l')
        ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'a')
        ADVANCE(133);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 107:
      if (lookahead == 'e')
        ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(135);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(136);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(74);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'l')
        ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == 'm')
        ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == 's')
        ADVANCE(141);
      END_STATE();
    case 118:
      if (lookahead == 'a')
        ADVANCE(142);
      END_STATE();
    case 119:
      if (lookahead == 'p')
        ADVANCE(143);
      END_STATE();
    case 120:
      if (lookahead == 'a')
        ADVANCE(144);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 't')
        ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 125:
      if (lookahead == 'k')
        ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'n')
        ADVANCE(149);
      END_STATE();
    case 127:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 128:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 129:
      if (lookahead == 'k')
        ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'y')
        ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 133:
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'c')
        ADVANCE(156);
      END_STATE();
    case 135:
      if (lookahead == 'n')
        ADVANCE(157);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 138:
      if (lookahead == 'a')
        ADVANCE(159);
      END_STATE();
    case 139:
      if (lookahead == 'u')
        ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 141:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 143:
      if (lookahead == 'u')
        ADVANCE(162);
      END_STATE();
    case 144:
      if (lookahead == 'm')
        ADVANCE(163);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 146:
      if (lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'f')
        ADVANCE(168);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 154:
      if (lookahead == 'a')
        ADVANCE(169);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 156:
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 157:
      if (lookahead == 'g')
        ADVANCE(171);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(71);
      END_STATE();
    case 159:
      if (lookahead == 'n')
        ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'l')
        ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(175);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 165:
      if (lookahead == 'm')
        ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 168:
      if (lookahead == 'l')
        ADVANCE(178);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 172:
      if (lookahead == 'd')
        ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 175:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 'o')
        ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 185:
      if (lookahead == 'w')
        ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 188:
      if (lookahead == '_')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'm')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'a')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 194:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(195);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == 'A')
        ADVANCE(196);
      if (lookahead == 'B')
        ADVANCE(197);
      if (lookahead == 'F')
        ADVANCE(198);
      if (lookahead == 'I')
        ADVANCE(199);
      if (lookahead == 'M')
        ADVANCE(200);
      if (lookahead == 'O')
        ADVANCE(201);
      if (lookahead == 'S')
        ADVANCE(202);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(203);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'r')
        ADVANCE(206);
      if (lookahead == 't')
        ADVANCE(207);
      if (lookahead == 'w')
        ADVANCE(208);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      END_STATE();
    case 196:
      if (lookahead == 'r')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 197:
      if (lookahead == 'o')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 198:
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 199:
      if (lookahead == 'n')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 200:
      if (lookahead == 'a')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 201:
      if (lookahead == 'b')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 't')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 203:
      if (lookahead == 'a')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 204:
      if (lookahead == 'a')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 205:
      if (lookahead == 'f')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 206:
      if (lookahead == 'u')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 207:
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 208:
      if (lookahead == 'o')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'j')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_object_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 269:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 270:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 271:
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 272:
      if (lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 273:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      END_STATE();
    case 274:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 275:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      END_STATE();
    case 276:
      if (lookahead == '\n')
        SKIP(277);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(279);
      END_STATE();
    case 277:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(279);
      END_STATE();
    case 280:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 282:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 283:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 284:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'c')
        ADVANCE(285);
      if (lookahead == 't')
        ADVANCE(286);
      if (lookahead == 'w')
        ADVANCE(287);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      END_STATE();
    case 285:
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 286:
      if (lookahead == 'a')
        ADVANCE(90);
      END_STATE();
    case 287:
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 288:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == 'i')
        ADVANCE(289);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(292);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      END_STATE();
    case 289:
      if (lookahead == 'f')
        ADVANCE(81);
      END_STATE();
    case 290:
      if (lookahead == 'c')
        ADVANCE(88);
      END_STATE();
    case 291:
      if (lookahead == 'h')
        ADVANCE(91);
      END_STATE();
    case 292:
      if (lookahead == 'h')
        ADVANCE(93);
      END_STATE();
    case 293:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == 'i')
        ADVANCE(36);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(292);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      END_STATE();
    case 294:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 296:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'c')
        ADVANCE(285);
      if (lookahead == 'i')
        ADVANCE(289);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(290);
      if (lookahead == 'w')
        ADVANCE(292);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(296);
      END_STATE();
    case 297:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(297);
      END_STATE();
    case 298:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(195);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 299:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      END_STATE();
    case 300:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(301);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      END_STATE();
    case 301:
      if (lookahead == 'o')
        ADVANCE(77);
      END_STATE();
    case 302:
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(302);
      END_STATE();
    case 303:
      if (lookahead == 'n')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'p')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'u')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 308:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      END_STATE();
    case 309:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(309);
      END_STATE();
    case 310:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      END_STATE();
    case 311:
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 312:
      if (lookahead == '<')
        ADVANCE(313);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(312);
      END_STATE();
    case 313:
      if (lookahead == '<')
        ADVANCE(57);
      END_STATE();
    case 314:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 315:
      if (lookahead == 'c')
        ADVANCE(316);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 'o')
        ADVANCE(318);
      if (lookahead == 'p')
        ADVANCE(319);
      if (lookahead == 'r')
        ADVANCE(206);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 316:
      if (lookahead == 'o')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 318:
      if (lookahead == 'u')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 319:
      if (lookahead == 'a')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 347:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(348);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(349);
      END_STATE();
    case 348:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_command_part_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(349);
      END_STATE();
    case 350:
      if (lookahead == 'A')
        ADVANCE(196);
      if (lookahead == 'B')
        ADVANCE(197);
      if (lookahead == 'F')
        ADVANCE(198);
      if (lookahead == 'I')
        ADVANCE(199);
      if (lookahead == 'M')
        ADVANCE(200);
      if (lookahead == 'O')
        ADVANCE(201);
      if (lookahead == 'S')
        ADVANCE(202);
      if (lookahead == 'c')
        ADVANCE(203);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(351);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 351:
      if (lookahead == 'c')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 352:
      if (lookahead == 'h')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 363:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(285);
      if (lookahead == 'i')
        ADVANCE(289);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(290);
      if (lookahead == 'w')
        ADVANCE(292);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      END_STATE();
    case 364:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(281);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(364);
      END_STATE();
    case 365:
      if (lookahead == 'A')
        ADVANCE(21);
      if (lookahead == 'B')
        ADVANCE(22);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(24);
      if (lookahead == 'M')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'i')
        ADVANCE(289);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(290);
      if (lookahead == 'w')
        ADVANCE(292);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      END_STATE();
    case 366:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(349);
      END_STATE();
    case 367:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(349);
      END_STATE();
    case 368:
      if (lookahead == 'i')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(368);
      END_STATE();
    case 369:
      if (lookahead == 'n')
        ADVANCE(82);
      END_STATE();
    case 370:
      if (lookahead == '!')
        ADVANCE(270);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'd')
        ADVANCE(371);
      if (lookahead == 'f')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'q')
        ADVANCE(372);
      if (lookahead == 's')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 371:
      if (lookahead == 'e')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 372:
      if (lookahead == 'u')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 373:
      if (lookahead == 'e')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 194},
  [2] = {.lex_state = 269},
  [3] = {.lex_state = 273},
  [4] = {.lex_state = 194},
  [5] = {.lex_state = 269},
  [6] = {.lex_state = 274},
  [7] = {.lex_state = 275},
  [8] = {.lex_state = 269},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 276},
  [11] = {.lex_state = 194},
  [12] = {.lex_state = 269},
  [13] = {.lex_state = 194},
  [14] = {.lex_state = 280},
  [15] = {.lex_state = 280},
  [16] = {.lex_state = 282},
  [17] = {.lex_state = 280},
  [18] = {.lex_state = 283},
  [19] = {.lex_state = 269},
  [20] = {.lex_state = 284},
  [21] = {.lex_state = 284},
  [22] = {.lex_state = 284},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 269},
  [25] = {.lex_state = 275},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 288},
  [28] = {.lex_state = 269},
  [29] = {.lex_state = 293},
  [30] = {.lex_state = 269},
  [31] = {.lex_state = 282},
  [32] = {.lex_state = 288},
  [33] = {.lex_state = 269},
  [34] = {.lex_state = 276},
  [35] = {.lex_state = 283},
  [36] = {.lex_state = 294},
  [37] = {.lex_state = 275},
  [38] = {.lex_state = 275},
  [39] = {.lex_state = 275},
  [40] = {.lex_state = 269},
  [41] = {.lex_state = 269},
  [42] = {.lex_state = 269},
  [43] = {.lex_state = 280},
  [44] = {.lex_state = 269},
  [45] = {.lex_state = 276},
  [46] = {.lex_state = 275},
  [47] = {.lex_state = 295},
  [48] = {.lex_state = 296},
  [49] = {.lex_state = 296},
  [50] = {.lex_state = 296},
  [51] = {.lex_state = 194},
  [52] = {.lex_state = 269},
  [53] = {.lex_state = 269},
  [54] = {.lex_state = 269},
  [55] = {.lex_state = 282},
  [56] = {.lex_state = 282},
  [57] = {.lex_state = 194},
  [58] = {.lex_state = 269},
  [59] = {.lex_state = 269},
  [60] = {.lex_state = 269},
  [61] = {.lex_state = 297},
  [62] = {.lex_state = 283},
  [63] = {.lex_state = 269},
  [64] = {.lex_state = 284},
  [65] = {.lex_state = 284},
  [66] = {.lex_state = 284},
  [67] = {.lex_state = 269},
  [68] = {.lex_state = 269},
  [69] = {.lex_state = 269},
  [70] = {.lex_state = 269},
  [71] = {.lex_state = 269},
  [72] = {.lex_state = 298},
  [73] = {.lex_state = 275},
  [74] = {.lex_state = 194},
  [75] = {.lex_state = 294},
  [76] = {.lex_state = 288},
  [77] = {.lex_state = 288},
  [78] = {.lex_state = 282},
  [79] = {.lex_state = 280},
  [80] = {.lex_state = 288},
  [81] = {.lex_state = 276},
  [82] = {.lex_state = 288},
  [83] = {.lex_state = 283},
  [84] = {.lex_state = 269},
  [85] = {.lex_state = 269},
  [86] = {.lex_state = 269},
  [87] = {.lex_state = 269},
  [88] = {.lex_state = 269},
  [89] = {.lex_state = 269},
  [90] = {.lex_state = 298},
  [91] = {.lex_state = 299},
  [92] = {.lex_state = 294},
  [93] = {.lex_state = 269},
  [94] = {.lex_state = 269},
  [95] = {.lex_state = 269},
  [96] = {.lex_state = 269},
  [97] = {.lex_state = 269},
  [98] = {.lex_state = 269},
  [99] = {.lex_state = 276},
  [100] = {.lex_state = 282},
  [101] = {.lex_state = 194},
  [102] = {.lex_state = 295},
  [103] = {.lex_state = 300},
  [104] = {.lex_state = 280},
  [105] = {.lex_state = 302},
  [106] = {.lex_state = 284},
  [107] = {.lex_state = 280},
  [108] = {.lex_state = 296},
  [109] = {.lex_state = 300},
  [110] = {.lex_state = 294},
  [111] = {.lex_state = 269},
  [112] = {.lex_state = 282},
  [113] = {.lex_state = 269},
  [114] = {.lex_state = 269},
  [115] = {.lex_state = 269},
  [116] = {.lex_state = 269},
  [117] = {.lex_state = 296},
  [118] = {.lex_state = 294},
  [119] = {.lex_state = 269},
  [120] = {.lex_state = 269},
  [121] = {.lex_state = 269},
  [122] = {.lex_state = 269},
  [123] = {.lex_state = 269},
  [124] = {.lex_state = 269},
  [125] = {.lex_state = 283},
  [126] = {.lex_state = 269},
  [127] = {.lex_state = 269},
  [128] = {.lex_state = 269},
  [129] = {.lex_state = 269},
  [130] = {.lex_state = 269},
  [131] = {.lex_state = 269},
  [132] = {.lex_state = 308},
  [133] = {.lex_state = 269},
  [134] = {.lex_state = 269},
  [135] = {.lex_state = 269},
  [136] = {.lex_state = 299},
  [137] = {.lex_state = 269},
  [138] = {.lex_state = 288},
  [139] = {.lex_state = 288},
  [140] = {.lex_state = 288},
  [141] = {.lex_state = 288},
  [142] = {.lex_state = 294},
  [143] = {.lex_state = 288},
  [144] = {.lex_state = 294},
  [145] = {.lex_state = 269},
  [146] = {.lex_state = 269},
  [147] = {.lex_state = 309},
  [148] = {.lex_state = 294},
  [149] = {.lex_state = 308},
  [150] = {.lex_state = 288},
  [151] = {.lex_state = 299},
  [152] = {.lex_state = 275},
  [153] = {.lex_state = 269},
  [154] = {.lex_state = 280},
  [155] = {.lex_state = 280},
  [156] = {.lex_state = 280},
  [157] = {.lex_state = 310},
  [158] = {.lex_state = 194},
  [159] = {.lex_state = 295},
  [160] = {.lex_state = 269},
  [161] = {.lex_state = 284},
  [162] = {.lex_state = 284},
  [163] = {.lex_state = 284},
  [164] = {.lex_state = 297},
  [165] = {.lex_state = 283},
  [166] = {.lex_state = 296},
  [167] = {.lex_state = 296},
  [168] = {.lex_state = 311},
  [169] = {.lex_state = 194},
  [170] = {.lex_state = 194},
  [171] = {.lex_state = 311},
  [172] = {.lex_state = 194},
  [173] = {.lex_state = 312},
  [174] = {.lex_state = 194},
  [175] = {.lex_state = 194},
  [176] = {.lex_state = 194},
  [177] = {.lex_state = 300},
  [178] = {.lex_state = 280},
  [179] = {.lex_state = 283},
  [180] = {.lex_state = 300},
  [181] = {.lex_state = 269},
  [182] = {.lex_state = 282},
  [183] = {.lex_state = 282},
  [184] = {.lex_state = 282},
  [185] = {.lex_state = 194},
  [186] = {.lex_state = 194},
  [187] = {.lex_state = 194},
  [188] = {.lex_state = 280},
  [189] = {.lex_state = 194},
  [190] = {.lex_state = 284},
  [191] = {.lex_state = 296},
  [192] = {.lex_state = 296},
  [193] = {.lex_state = 280},
  [194] = {.lex_state = 269},
  [195] = {.lex_state = 297},
  [196] = {.lex_state = 297},
  [197] = {.lex_state = 297},
  [198] = {.lex_state = 269},
  [199] = {.lex_state = 269},
  [200] = {.lex_state = 283},
  [201] = {.lex_state = 294},
  [202] = {.lex_state = 269},
  [203] = {.lex_state = 269},
  [204] = {.lex_state = 269},
  [205] = {.lex_state = 269},
  [206] = {.lex_state = 269},
  [207] = {.lex_state = 294},
  [208] = {.lex_state = 269},
  [209] = {.lex_state = 269},
  [210] = {.lex_state = 269},
  [211] = {.lex_state = 269},
  [212] = {.lex_state = 269},
  [213] = {.lex_state = 299},
  [214] = {.lex_state = 309},
  [215] = {.lex_state = 294},
  [216] = {.lex_state = 269},
  [217] = {.lex_state = 269},
  [218] = {.lex_state = 269},
  [219] = {.lex_state = 269},
  [220] = {.lex_state = 269},
  [221] = {.lex_state = 288},
  [222] = {.lex_state = 299},
  [223] = {.lex_state = 282},
  [224] = {.lex_state = 309},
  [225] = {.lex_state = 314},
  [226] = {.lex_state = 269},
  [227] = {.lex_state = 314},
  [228] = {.lex_state = 269},
  [229] = {.lex_state = 282},
  [230] = {.lex_state = 314},
  [231] = {.lex_state = 269},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 283},
  [234] = {.lex_state = 295},
  [235] = {.lex_state = 284},
  [236] = {.lex_state = 280},
  [237] = {.lex_state = 284},
  [238] = {.lex_state = 275},
  [239] = {.lex_state = 315},
  [240] = {.lex_state = 280},
  [241] = {.lex_state = 280},
  [242] = {.lex_state = 295},
  [243] = {.lex_state = 347},
  [244] = {.lex_state = 347},
  [245] = {.lex_state = 295},
  [246] = {.lex_state = 275},
  [247] = {.lex_state = 296},
  [248] = {.lex_state = 300},
  [249] = {.lex_state = 300},
  [250] = {.lex_state = 284},
  [251] = {.lex_state = 283},
  [252] = {.lex_state = 300},
  [253] = {.lex_state = 309},
  [254] = {.lex_state = 269},
  [255] = {.lex_state = 350},
  [256] = {.lex_state = 269},
  [257] = {.lex_state = 296},
  [258] = {.lex_state = 296},
  [259] = {.lex_state = 280},
  [260] = {.lex_state = 284},
  [261] = {.lex_state = 296},
  [262] = {.lex_state = 363},
  [263] = {.lex_state = 309},
  [264] = {.lex_state = 294},
  [265] = {.lex_state = 269},
  [266] = {.lex_state = 269},
  [267] = {.lex_state = 269},
  [268] = {.lex_state = 269},
  [269] = {.lex_state = 269},
  [270] = {.lex_state = 308},
  [271] = {.lex_state = 308},
  [272] = {.lex_state = 308},
  [273] = {.lex_state = 269},
  [274] = {.lex_state = 299},
  [275] = {.lex_state = 299},
  [276] = {.lex_state = 299},
  [277] = {.lex_state = 299},
  [278] = {.lex_state = 269},
  [279] = {.lex_state = 299},
  [280] = {.lex_state = 269},
  [281] = {.lex_state = 269},
  [282] = {.lex_state = 309},
  [283] = {.lex_state = 309},
  [284] = {.lex_state = 309},
  [285] = {.lex_state = 269},
  [286] = {.lex_state = 288},
  [287] = {.lex_state = 310},
  [288] = {.lex_state = 269},
  [289] = {.lex_state = 294},
  [290] = {.lex_state = 314},
  [291] = {.lex_state = 314},
  [292] = {.lex_state = 282},
  [293] = {.lex_state = 280},
  [294] = {.lex_state = 314},
  [295] = {.lex_state = 276},
  [296] = {.lex_state = 314},
  [297] = {.lex_state = 283},
  [298] = {.lex_state = 269},
  [299] = {.lex_state = 269},
  [300] = {.lex_state = 269},
  [301] = {.lex_state = 269},
  [302] = {.lex_state = 269},
  [303] = {.lex_state = 298},
  [304] = {.lex_state = 364},
  [305] = {.lex_state = 283},
  [306] = {.lex_state = 300},
  [307] = {.lex_state = 299},
  [308] = {.lex_state = 283},
  [309] = {.lex_state = 315},
  [310] = {.lex_state = 300},
  [311] = {.lex_state = 365},
  [312] = {.lex_state = 295},
  [313] = {.lex_state = 300},
  [314] = {.lex_state = 347},
  [315] = {.lex_state = 194},
  [316] = {.lex_state = 366},
  [317] = {.lex_state = 367},
  [318] = {.lex_state = 300},
  [319] = {.lex_state = 295},
  [320] = {.lex_state = 282},
  [321] = {.lex_state = 300},
  [322] = {.lex_state = 296},
  [323] = {.lex_state = 280},
  [324] = {.lex_state = 269},
  [325] = {.lex_state = 284},
  [326] = {.lex_state = 269},
  [327] = {.lex_state = 280},
  [328] = {.lex_state = 283},
  [329] = {.lex_state = 350},
  [330] = {.lex_state = 280},
  [331] = {.lex_state = 280},
  [332] = {.lex_state = 302},
  [333] = {.lex_state = 296},
  [334] = {.lex_state = 280},
  [335] = {.lex_state = 296},
  [336] = {.lex_state = 194},
  [337] = {.lex_state = 280},
  [338] = {.lex_state = 368},
  [339] = {.lex_state = 269},
  [340] = {.lex_state = 269},
  [341] = {.lex_state = 269},
  [342] = {.lex_state = 283},
  [343] = {.lex_state = 283},
  [344] = {.lex_state = 283},
  [345] = {.lex_state = 309},
  [346] = {.lex_state = 309},
  [347] = {.lex_state = 294},
  [348] = {.lex_state = 309},
  [349] = {.lex_state = 280},
  [350] = {.lex_state = 269},
  [351] = {.lex_state = 314},
  [352] = {.lex_state = 314},
  [353] = {.lex_state = 314},
  [354] = {.lex_state = 314},
  [355] = {.lex_state = 295},
  [356] = {.lex_state = 314},
  [357] = {.lex_state = 295},
  [358] = {.lex_state = 295},
  [359] = {.lex_state = 308},
  [360] = {.lex_state = 314},
  [361] = {.lex_state = 299},
  [362] = {.lex_state = 280},
  [363] = {.lex_state = 364},
  [364] = {.lex_state = 269},
  [365] = {.lex_state = 275},
  [366] = {.lex_state = 315},
  [367] = {.lex_state = 315},
  [368] = {.lex_state = 194},
  [369] = {.lex_state = 365},
  [370] = {.lex_state = 295},
  [371] = {.lex_state = 194},
  [372] = {.lex_state = 370},
  [373] = {.lex_state = 300},
  [374] = {.lex_state = 366},
  [375] = {.lex_state = 367},
  [376] = {.lex_state = 300},
  [377] = {.lex_state = 311},
  [378] = {.lex_state = 300},
  [379] = {.lex_state = 296},
  [380] = {.lex_state = 300},
  [381] = {.lex_state = 269},
  [382] = {.lex_state = 269},
  [383] = {.lex_state = 300},
  [384] = {.lex_state = 282},
  [385] = {.lex_state = 194},
  [386] = {.lex_state = 350},
  [387] = {.lex_state = 350},
  [388] = {.lex_state = 194},
  [389] = {.lex_state = 296},
  [390] = {.lex_state = 296},
  [391] = {.lex_state = 283},
  [392] = {.lex_state = 296},
  [393] = {.lex_state = 296},
  [394] = {.lex_state = 296},
  [395] = {.lex_state = 296},
  [396] = {.lex_state = 194},
  [397] = {.lex_state = 280},
  [398] = {.lex_state = 269},
  [399] = {.lex_state = 269},
  [400] = {.lex_state = 269},
  [401] = {.lex_state = 363},
  [402] = {.lex_state = 297},
  [403] = {.lex_state = 309},
  [404] = {.lex_state = 269},
  [405] = {.lex_state = 269},
  [406] = {.lex_state = 269},
  [407] = {.lex_state = 309},
  [408] = {.lex_state = 314},
  [409] = {.lex_state = 299},
  [410] = {.lex_state = 364},
  [411] = {.lex_state = 364},
  [412] = {.lex_state = 269},
  [413] = {.lex_state = 269},
  [414] = {.lex_state = 364},
  [415] = {.lex_state = 282},
  [416] = {.lex_state = 283},
  [417] = {.lex_state = 295},
  [418] = {.lex_state = 269},
  [419] = {.lex_state = 300},
  [420] = {.lex_state = 269},
  [421] = {.lex_state = 300},
  [422] = {.lex_state = 300},
  [423] = {.lex_state = 295},
  [424] = {.lex_state = 370},
  [425] = {.lex_state = 194},
  [426] = {.lex_state = 294},
  [427] = {.lex_state = 269},
  [428] = {.lex_state = 269},
  [429] = {.lex_state = 269},
  [430] = {.lex_state = 269},
  [431] = {.lex_state = 296},
  [432] = {.lex_state = 296},
  [433] = {.lex_state = 296},
  [434] = {.lex_state = 296},
  [435] = {.lex_state = 296},
  [436] = {.lex_state = 296},
  [437] = {.lex_state = 296},
  [438] = {.lex_state = 269},
  [439] = {.lex_state = 269},
  [440] = {.lex_state = 280},
  [441] = {.lex_state = 294},
  [442] = {.lex_state = 269},
  [443] = {.lex_state = 269},
  [444] = {.lex_state = 269},
  [445] = {.lex_state = 269},
  [446] = {.lex_state = 269},
  [447] = {.lex_state = 308},
  [448] = {.lex_state = 299},
  [449] = {.lex_state = 309},
  [450] = {.lex_state = 269},
  [451] = {.lex_state = 314},
  [452] = {.lex_state = 294},
  [453] = {.lex_state = 269},
  [454] = {.lex_state = 269},
  [455] = {.lex_state = 269},
  [456] = {.lex_state = 269},
  [457] = {.lex_state = 311},
  [458] = {.lex_state = 294},
  [459] = {.lex_state = 269},
  [460] = {.lex_state = 347},
  [461] = {.lex_state = 269},
  [462] = {.lex_state = 269},
  [463] = {.lex_state = 269},
  [464] = {.lex_state = 269},
  [465] = {.lex_state = 295},
  [466] = {.lex_state = 370},
  [467] = {.lex_state = 296},
  [468] = {.lex_state = 269},
  [469] = {.lex_state = 300},
  [470] = {.lex_state = 300},
  [471] = {.lex_state = 300},
  [472] = {.lex_state = 296},
  [473] = {.lex_state = 296},
  [474] = {.lex_state = 296},
  [475] = {.lex_state = 296},
  [476] = {.lex_state = 296},
  [477] = {.lex_state = 294},
  [478] = {.lex_state = 269},
  [479] = {.lex_state = 269},
  [480] = {.lex_state = 269},
  [481] = {.lex_state = 269},
  [482] = {.lex_state = 269},
  [483] = {.lex_state = 363},
  [484] = {.lex_state = 363},
  [485] = {.lex_state = 363},
  [486] = {.lex_state = 283},
  [487] = {.lex_state = 295},
  [488] = {.lex_state = 269},
  [489] = {.lex_state = 364},
  [490] = {.lex_state = 364},
  [491] = {.lex_state = 364},
  [492] = {.lex_state = 269},
  [493] = {.lex_state = 370},
  [494] = {.lex_state = 269},
  [495] = {.lex_state = 370},
  [496] = {.lex_state = 269},
  [497] = {.lex_state = 282},
  [498] = {.lex_state = 370},
  [499] = {.lex_state = 269},
  [500] = {.lex_state = 276},
  [501] = {.lex_state = 283},
  [502] = {.lex_state = 370},
  [503] = {.lex_state = 370},
  [504] = {.lex_state = 295},
  [505] = {.lex_state = 295},
  [506] = {.lex_state = 295},
  [507] = {.lex_state = 347},
  [508] = {.lex_state = 309},
  [509] = {.lex_state = 296},
  [510] = {.lex_state = 296},
  [511] = {.lex_state = 269},
  [512] = {.lex_state = 280},
  [513] = {.lex_state = 280},
  [514] = {.lex_state = 280},
  [515] = {.lex_state = 309},
  [516] = {.lex_state = 309},
  [517] = {.lex_state = 309},
  [518] = {.lex_state = 294},
  [519] = {.lex_state = 370},
  [520] = {.lex_state = 370},
  [521] = {.lex_state = 282},
  [522] = {.lex_state = 280},
  [523] = {.lex_state = 370},
  [524] = {.lex_state = 276},
  [525] = {.lex_state = 370},
  [526] = {.lex_state = 283},
  [527] = {.lex_state = 269},
  [528] = {.lex_state = 269},
  [529] = {.lex_state = 269},
  [530] = {.lex_state = 269},
  [531] = {.lex_state = 269},
  [532] = {.lex_state = 298},
  [533] = {.lex_state = 269},
  [534] = {.lex_state = 309},
  [535] = {.lex_state = 269},
  [536] = {.lex_state = 269},
  [537] = {.lex_state = 269},
  [538] = {.lex_state = 269},
  [539] = {.lex_state = 370},
  [540] = {.lex_state = 370},
  [541] = {.lex_state = 370},
  [542] = {.lex_state = 370},
  [543] = {.lex_state = 370},
  [544] = {.lex_state = 370},
  [545] = {.lex_state = 370},
  [546] = {.lex_state = 370},
  [547] = {.lex_state = 308},
  [548] = {.lex_state = 370},
  [549] = {.lex_state = 299},
  [550] = {.lex_state = 300},
  [551] = {.lex_state = 269},
  [552] = {.lex_state = 363},
  [553] = {.lex_state = 364},
  [554] = {.lex_state = 295},
  [555] = {.lex_state = 309},
  [556] = {.lex_state = 370},
  [557] = {.lex_state = 299},
  [558] = {.lex_state = 280},
  [559] = {.lex_state = 269},
  [560] = {.lex_state = 370},
  [561] = {.lex_state = 370},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_parameter_meta] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_sep] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_object_type] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_scatter] = ACTIONS(1),
    [anon_sym_task] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_primitive_type] = STATE(7),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_workflow] = STATE(20),
    [sym_map_type] = STATE(7),
    [aux_sym_definition_repeat1] = STATE(19),
    [aux_sym_definition_repeat6] = STATE(20),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [sym_type] = STATE(25),
    [sym_array_type] = STATE(7),
    [aux_sym_definition_repeat4] = STATE(21),
    [aux_sym_definition_repeat5] = STATE(22),
    [sym_task] = STATE(21),
    [sym_call] = STATE(22),
    [sym_definition] = STATE(23),
    [sym_expression] = STATE(24),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [aux_sym_definition_repeat2] = STATE(25),
    [aux_sym_definition_repeat3] = STATE(26),
    [sym_runtime] = STATE(26),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_object_type] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_Float] = ACTIONS(5),
    [anon_sym_Array] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [anon_sym_Int] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_runtime] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_call] = ACTIONS(29),
    [anon_sym_task] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_Boolean] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_workflow] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [2] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(36),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [3] = {
    [anon_sym_File] = ACTIONS(57),
    [anon_sym_Map] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [sym_object_type] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_String] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(57),
    [anon_sym_Boolean] = ACTIONS(57),
    [anon_sym_Float] = ACTIONS(57),
    [anon_sym_Array] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_Int] = ACTIONS(57),
  },
  [4] = {
    [anon_sym_LBRACK] = ACTIONS(59),
  },
  [5] = {
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_float] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym_integer] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [6] = {
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_float] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [sym_integer] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [7] = {
    [sym_type_postfix_quantifier] = STATE(39),
    [anon_sym_File] = ACTIONS(69),
    [anon_sym_Map] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_object_type] = ACTIONS(69),
    [anon_sym_String] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_Boolean] = ACTIONS(69),
    [anon_sym_Array] = ACTIONS(69),
    [anon_sym_Float] = ACTIONS(69),
    [anon_sym_Int] = ACTIONS(69),
  },
  [8] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(40),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [9] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [10] = {
    [aux_sym_string_literal_repeat1] = STATE(45),
    [aux_sym_string_literal_token1] = ACTIONS(77),
    [sym_escape_sequence] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
  },
  [11] = {
    [anon_sym_LBRACK] = ACTIONS(81),
  },
  [12] = {
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_float] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(87),
  },
  [14] = {
    [sym_namespaced_identifier] = STATE(49),
    [sym_identifier] = STATE(50),
    [aux_sym_identifier_token1] = ACTIONS(89),
  },
  [15] = {
    [sym_identifier] = STATE(51),
    [aux_sym_identifier_token1] = ACTIONS(91),
  },
  [16] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(55),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [17] = {
    [sym_identifier] = STATE(57),
    [aux_sym_identifier_token1] = ACTIONS(91),
  },
  [18] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(62),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [19] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(63),
    [sym_expression] = STATE(24),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [20] = {
    [sym_workflow] = STATE(64),
    [aux_sym_definition_repeat6] = STATE(64),
    [anon_sym_workflow] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(105),
  },
  [21] = {
    [aux_sym_definition_repeat4] = STATE(65),
    [sym_task] = STATE(65),
    [anon_sym_task] = ACTIONS(109),
    [ts_builtin_sym_end] = ACTIONS(105),
  },
  [22] = {
    [sym_call] = STATE(66),
    [aux_sym_definition_repeat5] = STATE(66),
    [anon_sym_call] = ACTIONS(111),
    [ts_builtin_sym_end] = ACTIONS(105),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(113),
  },
  [24] = {
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(115),
    [aux_sym_identifier_token1] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_float] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(127),
  },
  [25] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [aux_sym_definition_repeat2] = STATE(73),
    [sym_map_type] = STATE(7),
    [sym_type] = STATE(73),
    [anon_sym_File] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_Map] = ACTIONS(133),
    [sym_object_type] = ACTIONS(135),
    [anon_sym_String] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_Float] = ACTIONS(131),
    [anon_sym_Int] = ACTIONS(131),
  },
  [26] = {
    [aux_sym_definition_repeat3] = STATE(74),
    [sym_runtime] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_runtime] = ACTIONS(139),
  },
  [27] = {
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_Map] = ACTIONS(63),
    [anon_sym_parameter_meta] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_while] = ACTIONS(63),
    [anon_sym_command] = ACTIONS(63),
    [anon_sym_Float] = ACTIONS(63),
    [anon_sym_Int] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_then] = ACTIONS(63),
    [anon_sym_meta] = ACTIONS(63),
    [anon_sym_File] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [sym_object_type] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_runtime] = ACTIONS(63),
    [anon_sym_Array] = ACTIONS(63),
    [anon_sym_output] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_call] = ACTIONS(63),
    [anon_sym_scatter] = ACTIONS(63),
    [anon_sym_String] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_Boolean] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
  },
  [28] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(75),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [29] = {
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_Map] = ACTIONS(67),
    [anon_sym_parameter_meta] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_as] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(67),
    [anon_sym_while] = ACTIONS(67),
    [anon_sym_command] = ACTIONS(67),
    [anon_sym_Float] = ACTIONS(67),
    [anon_sym_Int] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_then] = ACTIONS(67),
    [anon_sym_meta] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_File] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [sym_object_type] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_else] = ACTIONS(67),
    [anon_sym_runtime] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(67),
    [anon_sym_output] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_call] = ACTIONS(67),
    [anon_sym_scatter] = ACTIONS(67),
    [anon_sym_String] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_Boolean] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [30] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [31] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(78),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_Map] = ACTIONS(85),
    [anon_sym_parameter_meta] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_command] = ACTIONS(85),
    [anon_sym_Float] = ACTIONS(85),
    [anon_sym_Int] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_then] = ACTIONS(85),
    [anon_sym_meta] = ACTIONS(85),
    [anon_sym_File] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_object_type] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_else] = ACTIONS(85),
    [anon_sym_runtime] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(85),
    [anon_sym_output] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_call] = ACTIONS(85),
    [anon_sym_scatter] = ACTIONS(85),
    [anon_sym_String] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_Boolean] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
  },
  [33] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(79),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [34] = {
    [aux_sym_string_literal_repeat1] = STATE(81),
    [aux_sym_string_literal_token1] = ACTIONS(143),
    [sym_escape_sequence] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
  },
  [35] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(83),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [36] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [37] = {
    [sym_primitive_type] = STATE(91),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [anon_sym_String] = ACTIONS(131),
    [anon_sym_Int] = ACTIONS(131),
  },
  [38] = {
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(163),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_object_type] = ACTIONS(163),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Array] = ACTIONS(163),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
  },
  [39] = {
    [anon_sym_File] = ACTIONS(165),
    [anon_sym_Map] = ACTIONS(165),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_object_type] = ACTIONS(165),
    [anon_sym_String] = ACTIONS(165),
    [anon_sym_Boolean] = ACTIONS(165),
    [anon_sym_Array] = ACTIONS(165),
    [anon_sym_Float] = ACTIONS(165),
    [anon_sym_Int] = ACTIONS(165),
  },
  [40] = {
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [aux_sym_identifier_token1] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_float] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_integer] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
  },
  [41] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(92),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [42] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [43] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [44] = {
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [aux_sym_identifier_token1] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_float] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_integer] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
  },
  [45] = {
    [aux_sym_string_literal_repeat1] = STATE(99),
    [aux_sym_string_literal_token1] = ACTIONS(185),
    [sym_escape_sequence] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
  },
  [46] = {
    [sym_array_type] = STATE(100),
    [sym_primitive_type] = STATE(100),
    [anon_sym_Int] = ACTIONS(131),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [sym_object_type] = ACTIONS(189),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_String] = ACTIONS(131),
  },
  [47] = {
    [sym_runtime_kv] = STATE(102),
    [sym_identifier] = STATE(103),
    [aux_sym_runtime_repeat1] = STATE(102),
    [aux_sym_identifier_token1] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(191),
  },
  [48] = {
    [anon_sym_call] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_as] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [49] = {
    [sym_call_body] = STATE(106),
    [anon_sym_call] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
  },
  [50] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(108),
    [anon_sym_call] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
  },
  [51] = {
    [anon_sym_LBRACE] = ACTIONS(203),
  },
  [52] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(110),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [53] = {
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [aux_sym_identifier_token1] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym_float] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_integer] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
  },
  [54] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(40),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [55] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(112),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [56] = {
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(115),
    [aux_sym_identifier_token1] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_float] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(127),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(219),
  },
  [58] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [59] = {
    [anon_sym_if] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [aux_sym_identifier_token1] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym_float] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym_integer] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
  },
  [60] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(227),
  },
  [62] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(125),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [63] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(63),
    [sym_expression] = STATE(24),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(240),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_true] = ACTIONS(237),
    [aux_sym_identifier_token1] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_integer] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(248),
    [sym_float] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(263),
  },
  [64] = {
    [sym_workflow] = STATE(64),
    [aux_sym_definition_repeat6] = STATE(64),
    [anon_sym_workflow] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(269),
  },
  [65] = {
    [aux_sym_definition_repeat4] = STATE(65),
    [sym_task] = STATE(65),
    [anon_sym_task] = ACTIONS(271),
    [ts_builtin_sym_end] = ACTIONS(274),
  },
  [66] = {
    [sym_call] = STATE(66),
    [aux_sym_definition_repeat5] = STATE(66),
    [anon_sym_call] = ACTIONS(276),
    [ts_builtin_sym_end] = ACTIONS(279),
  },
  [67] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(126),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [68] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(127),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [69] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(128),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [70] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(129),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [71] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(132),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [72] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(136),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [73] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [aux_sym_definition_repeat2] = STATE(73),
    [sym_map_type] = STATE(7),
    [sym_type] = STATE(73),
    [anon_sym_File] = ACTIONS(291),
    [anon_sym_Map] = ACTIONS(294),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_object_type] = ACTIONS(299),
    [anon_sym_String] = ACTIONS(291),
    [anon_sym_Boolean] = ACTIONS(291),
    [anon_sym_Array] = ACTIONS(302),
    [anon_sym_Float] = ACTIONS(291),
    [anon_sym_Int] = ACTIONS(291),
  },
  [74] = {
    [aux_sym_definition_repeat3] = STATE(74),
    [sym_runtime] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_runtime] = ACTIONS(307),
  },
  [75] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [76] = {
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_Map] = ACTIONS(169),
    [anon_sym_parameter_meta] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_while] = ACTIONS(169),
    [anon_sym_command] = ACTIONS(169),
    [anon_sym_Float] = ACTIONS(169),
    [anon_sym_Int] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_then] = ACTIONS(169),
    [anon_sym_meta] = ACTIONS(169),
    [anon_sym_File] = ACTIONS(169),
    [anon_sym_DOT] = ACTIONS(169),
    [sym_object_type] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_else] = ACTIONS(169),
    [anon_sym_runtime] = ACTIONS(169),
    [anon_sym_Array] = ACTIONS(169),
    [anon_sym_output] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_call] = ACTIONS(169),
    [anon_sym_scatter] = ACTIONS(169),
    [anon_sym_String] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_Boolean] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [77] = {
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_Map] = ACTIONS(207),
    [anon_sym_parameter_meta] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(207),
    [anon_sym_command] = ACTIONS(207),
    [anon_sym_Float] = ACTIONS(207),
    [anon_sym_Int] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_then] = ACTIONS(207),
    [anon_sym_meta] = ACTIONS(207),
    [anon_sym_File] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [sym_object_type] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_else] = ACTIONS(207),
    [anon_sym_runtime] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(207),
    [anon_sym_output] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_call] = ACTIONS(207),
    [anon_sym_scatter] = ACTIONS(207),
    [anon_sym_String] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_Boolean] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
  },
  [78] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(112),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [79] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [80] = {
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_Map] = ACTIONS(183),
    [anon_sym_parameter_meta] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_command] = ACTIONS(183),
    [anon_sym_Float] = ACTIONS(183),
    [anon_sym_Int] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym_meta] = ACTIONS(183),
    [anon_sym_File] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_object_type] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_runtime] = ACTIONS(183),
    [anon_sym_Array] = ACTIONS(183),
    [anon_sym_output] = ACTIONS(183),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_call] = ACTIONS(183),
    [anon_sym_scatter] = ACTIONS(183),
    [anon_sym_String] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_Boolean] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
  },
  [81] = {
    [aux_sym_string_literal_repeat1] = STATE(99),
    [aux_sym_string_literal_token1] = ACTIONS(185),
    [sym_escape_sequence] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(316),
  },
  [82] = {
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_Map] = ACTIONS(223),
    [anon_sym_parameter_meta] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_while] = ACTIONS(223),
    [anon_sym_command] = ACTIONS(223),
    [anon_sym_Float] = ACTIONS(223),
    [anon_sym_Int] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_then] = ACTIONS(223),
    [anon_sym_meta] = ACTIONS(223),
    [anon_sym_File] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [sym_object_type] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_else] = ACTIONS(223),
    [anon_sym_runtime] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(223),
    [anon_sym_output] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_call] = ACTIONS(223),
    [anon_sym_scatter] = ACTIONS(223),
    [anon_sym_String] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_Boolean] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
  },
  [83] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(125),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [84] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(142),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [85] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [86] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(144),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [87] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(147),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [88] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(148),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [89] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(149),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [90] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(151),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(326),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [93] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(154),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [94] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [95] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(155),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [96] = {
    [anon_sym_if] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_true] = ACTIONS(330),
    [aux_sym_identifier_token1] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym_float] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_false] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(332),
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [sym_integer] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(332),
  },
  [97] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(156),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [98] = {
    [anon_sym_if] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_true] = ACTIONS(334),
    [aux_sym_identifier_token1] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym_float] = ACTIONS(334),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_false] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [sym_integer] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
  },
  [99] = {
    [aux_sym_string_literal_repeat1] = STATE(99),
    [aux_sym_string_literal_token1] = ACTIONS(338),
    [sym_escape_sequence] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(341),
  },
  [100] = {
    [anon_sym_RBRACK] = ACTIONS(343),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_runtime] = ACTIONS(345),
  },
  [102] = {
    [sym_runtime_kv] = STATE(159),
    [sym_identifier] = STATE(103),
    [aux_sym_runtime_repeat1] = STATE(159),
    [aux_sym_identifier_token1] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(347),
  },
  [103] = {
    [anon_sym_EQ] = ACTIONS(349),
  },
  [104] = {
    [sym_identifier] = STATE(162),
    [aux_sym_identifier_token1] = ACTIONS(351),
  },
  [105] = {
    [sym_inputs] = STATE(165),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_input] = ACTIONS(355),
  },
  [106] = {
    [anon_sym_call] = ACTIONS(357),
    [ts_builtin_sym_end] = ACTIONS(357),
  },
  [107] = {
    [sym_identifier] = STATE(166),
    [aux_sym_identifier_token1] = ACTIONS(89),
  },
  [108] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(167),
    [anon_sym_call] = ACTIONS(359),
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
  },
  [109] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_task_sections_repeat1] = STATE(177),
    [sym_task_output] = STATE(177),
    [sym_task_sections] = STATE(179),
    [sym_map_type] = STATE(171),
    [aux_sym_task_repeat1] = STATE(180),
    [sym_parameter_meta] = STATE(177),
    [sym_declaration] = STATE(180),
    [sym_command] = STATE(177),
    [sym_runtime] = STATE(177),
    [sym_meta] = STATE(177),
    [sym_type] = STATE(178),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(365),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_command] = ACTIONS(371),
    [anon_sym_Boolean] = ACTIONS(361),
    [anon_sym_runtime] = ACTIONS(373),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_output] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(361),
  },
  [110] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [111] = {
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(381),
    [aux_sym_identifier_token1] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [sym_float] = ACTIONS(381),
    [anon_sym_EQ_EQ] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_integer] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
  },
  [112] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(112),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(385),
    [anon_sym_true] = ACTIONS(237),
    [aux_sym_identifier_token1] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_integer] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(388),
    [sym_float] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(263),
  },
  [113] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(182),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [114] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(127),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [115] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(183),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [116] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(184),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [117] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(191),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(191),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [118] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(403),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [119] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(195),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [120] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [121] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(196),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [122] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(197),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [123] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(200),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [124] = {
    [anon_sym_if] = ACTIONS(409),
    [anon_sym_DOT] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(409),
    [aux_sym_identifier_token1] = ACTIONS(409),
    [anon_sym_BANG_EQ] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [sym_float] = ACTIONS(409),
    [anon_sym_EQ_EQ] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_integer] = ACTIONS(409),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
  },
  [125] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(125),
    [anon_sym_false] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(413),
    [aux_sym_identifier_token1] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(427),
    [sym_integer] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(436),
    [anon_sym_DASH] = ACTIONS(424),
    [sym_float] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(439),
  },
  [126] = {
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(442),
    [aux_sym_identifier_token1] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym_float] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(444),
  },
  [127] = {
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(446),
    [aux_sym_identifier_token1] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym_float] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_integer] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [128] = {
    [anon_sym_if] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_true] = ACTIONS(450),
    [aux_sym_identifier_token1] = ACTIONS(450),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [sym_float] = ACTIONS(450),
    [anon_sym_EQ_EQ] = ACTIONS(452),
    [anon_sym_false] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_integer] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(452),
  },
  [129] = {
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(446),
    [aux_sym_identifier_token1] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym_float] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_integer] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [130] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(201),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [131] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [132] = {
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_BANG_EQ] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(460),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(456),
  },
  [133] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(207),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [134] = {
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(442),
    [aux_sym_identifier_token1] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym_float] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(444),
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
    [sym_integer] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
  },
  [135] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [136] = {
    [aux_sym_expression_repeat1] = STATE(213),
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [137] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(214),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [138] = {
    [anon_sym_if] = ACTIONS(383),
    [anon_sym_Map] = ACTIONS(383),
    [anon_sym_parameter_meta] = ACTIONS(383),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_while] = ACTIONS(383),
    [anon_sym_command] = ACTIONS(383),
    [anon_sym_Float] = ACTIONS(383),
    [anon_sym_Int] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [anon_sym_then] = ACTIONS(383),
    [anon_sym_meta] = ACTIONS(383),
    [anon_sym_File] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(383),
    [sym_object_type] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_else] = ACTIONS(383),
    [anon_sym_runtime] = ACTIONS(383),
    [anon_sym_Array] = ACTIONS(383),
    [anon_sym_output] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(383),
    [anon_sym_call] = ACTIONS(383),
    [anon_sym_scatter] = ACTIONS(383),
    [anon_sym_String] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_Boolean] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(383),
  },
  [139] = {
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_Map] = ACTIONS(332),
    [anon_sym_parameter_meta] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_while] = ACTIONS(332),
    [anon_sym_command] = ACTIONS(332),
    [anon_sym_Float] = ACTIONS(332),
    [anon_sym_Int] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_then] = ACTIONS(332),
    [anon_sym_meta] = ACTIONS(332),
    [anon_sym_File] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(332),
    [sym_object_type] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_else] = ACTIONS(332),
    [anon_sym_runtime] = ACTIONS(332),
    [anon_sym_Array] = ACTIONS(332),
    [anon_sym_output] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_call] = ACTIONS(332),
    [anon_sym_scatter] = ACTIONS(332),
    [anon_sym_String] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_Boolean] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(332),
  },
  [140] = {
    [anon_sym_if] = ACTIONS(336),
    [anon_sym_Map] = ACTIONS(336),
    [anon_sym_parameter_meta] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_while] = ACTIONS(336),
    [anon_sym_command] = ACTIONS(336),
    [anon_sym_Float] = ACTIONS(336),
    [anon_sym_Int] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_then] = ACTIONS(336),
    [anon_sym_meta] = ACTIONS(336),
    [anon_sym_File] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_object_type] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_else] = ACTIONS(336),
    [anon_sym_runtime] = ACTIONS(336),
    [anon_sym_Array] = ACTIONS(336),
    [anon_sym_output] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_call] = ACTIONS(336),
    [anon_sym_scatter] = ACTIONS(336),
    [anon_sym_String] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_Boolean] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(336),
  },
  [141] = {
    [anon_sym_if] = ACTIONS(411),
    [anon_sym_Map] = ACTIONS(411),
    [anon_sym_parameter_meta] = ACTIONS(411),
    [anon_sym_BANG_EQ] = ACTIONS(411),
    [anon_sym_while] = ACTIONS(411),
    [anon_sym_command] = ACTIONS(411),
    [anon_sym_Float] = ACTIONS(411),
    [anon_sym_Int] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_then] = ACTIONS(411),
    [anon_sym_meta] = ACTIONS(411),
    [anon_sym_File] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(411),
    [sym_object_type] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_else] = ACTIONS(411),
    [anon_sym_runtime] = ACTIONS(411),
    [anon_sym_Array] = ACTIONS(411),
    [anon_sym_output] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(411),
    [anon_sym_call] = ACTIONS(411),
    [anon_sym_scatter] = ACTIONS(411),
    [anon_sym_String] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_Boolean] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
  },
  [142] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_then] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [143] = {
    [anon_sym_if] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [anon_sym_parameter_meta] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_while] = ACTIONS(448),
    [anon_sym_command] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_then] = ACTIONS(448),
    [anon_sym_meta] = ACTIONS(448),
    [anon_sym_File] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [sym_object_type] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_else] = ACTIONS(448),
    [anon_sym_runtime] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_output] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_call] = ACTIONS(448),
    [anon_sym_scatter] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_Boolean] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_COLON] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
  },
  [144] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_then] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [145] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(215),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [146] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [147] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [148] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_then] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [149] = {
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_BANG_EQ] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(456),
  },
  [150] = {
    [anon_sym_if] = ACTIONS(444),
    [anon_sym_Map] = ACTIONS(444),
    [anon_sym_parameter_meta] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_while] = ACTIONS(444),
    [anon_sym_command] = ACTIONS(444),
    [anon_sym_Float] = ACTIONS(444),
    [anon_sym_Int] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_then] = ACTIONS(444),
    [anon_sym_meta] = ACTIONS(444),
    [anon_sym_File] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [sym_object_type] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_else] = ACTIONS(444),
    [anon_sym_runtime] = ACTIONS(444),
    [anon_sym_Array] = ACTIONS(444),
    [anon_sym_output] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_call] = ACTIONS(444),
    [anon_sym_scatter] = ACTIONS(444),
    [anon_sym_String] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
    [anon_sym_Boolean] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
  },
  [151] = {
    [aux_sym_expression_repeat1] = STATE(222),
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [152] = {
    [sym_array_type] = STATE(223),
    [sym_primitive_type] = STATE(223),
    [sym_map_type] = STATE(223),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_Map] = ACTIONS(133),
    [sym_object_type] = ACTIONS(486),
    [anon_sym_String] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_Int] = ACTIONS(131),
  },
  [153] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(224),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [154] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [155] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [156] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [157] = {
    [anon_sym_File] = ACTIONS(488),
    [anon_sym_Map] = ACTIONS(488),
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [sym_object_type] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_String] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_Boolean] = ACTIONS(488),
    [anon_sym_Float] = ACTIONS(488),
    [anon_sym_Array] = ACTIONS(488),
    [anon_sym_Int] = ACTIONS(488),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [anon_sym_runtime] = ACTIONS(490),
  },
  [159] = {
    [sym_runtime_kv] = STATE(159),
    [sym_identifier] = STATE(103),
    [aux_sym_runtime_repeat1] = STATE(159),
    [aux_sym_identifier_token1] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(495),
  },
  [160] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(234),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [161] = {
    [anon_sym_call] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [162] = {
    [sym_call_body] = STATE(235),
    [anon_sym_call] = ACTIONS(515),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(197),
  },
  [163] = {
    [anon_sym_call] = ACTIONS(517),
    [ts_builtin_sym_end] = ACTIONS(517),
  },
  [164] = {
    [anon_sym_COLON] = ACTIONS(519),
  },
  [165] = {
    [anon_sym_RBRACE] = ACTIONS(521),
  },
  [166] = {
    [anon_sym_call] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_as] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
  },
  [167] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(167),
    [anon_sym_call] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(525),
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_as] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
  },
  [168] = {
    [aux_sym_identifier_token1] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(57),
  },
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(528),
  },
  [170] = {
    [anon_sym_LBRACE] = ACTIONS(530),
  },
  [171] = {
    [sym_type_postfix_quantifier] = STATE(241),
    [aux_sym_identifier_token1] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(532),
    [anon_sym_QMARK] = ACTIONS(532),
  },
  [172] = {
    [anon_sym_LBRACE] = ACTIONS(534),
  },
  [173] = {
    [anon_sym_LT_LT_LT] = ACTIONS(536),
    [anon_sym_LBRACE] = ACTIONS(538),
  },
  [174] = {
    [anon_sym_LBRACE] = ACTIONS(540),
  },
  [175] = {
    [anon_sym_LBRACK] = ACTIONS(542),
  },
  [176] = {
    [anon_sym_LBRACE] = ACTIONS(544),
  },
  [177] = {
    [aux_sym_task_sections_repeat1] = STATE(248),
    [sym_task_output] = STATE(248),
    [sym_command] = STATE(248),
    [sym_runtime] = STATE(248),
    [sym_meta] = STATE(248),
    [sym_parameter_meta] = STATE(248),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_command] = ACTIONS(371),
    [anon_sym_parameter_meta] = ACTIONS(365),
    [anon_sym_runtime] = ACTIONS(373),
    [anon_sym_output] = ACTIONS(377),
    [anon_sym_meta] = ACTIONS(369),
  },
  [178] = {
    [sym_identifier] = STATE(249),
    [aux_sym_identifier_token1] = ACTIONS(548),
  },
  [179] = {
    [anon_sym_RBRACE] = ACTIONS(550),
  },
  [180] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_task_sections_repeat1] = STATE(177),
    [sym_task_output] = STATE(177),
    [sym_task_sections] = STATE(251),
    [sym_map_type] = STATE(171),
    [aux_sym_task_repeat1] = STATE(252),
    [sym_parameter_meta] = STATE(177),
    [sym_declaration] = STATE(252),
    [sym_command] = STATE(177),
    [sym_runtime] = STATE(177),
    [sym_meta] = STATE(177),
    [sym_type] = STATE(178),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(365),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_command] = ACTIONS(371),
    [anon_sym_Boolean] = ACTIONS(361),
    [anon_sym_runtime] = ACTIONS(373),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_output] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(361),
  },
  [181] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(253),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [182] = {
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(442),
    [aux_sym_identifier_token1] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym_float] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(444),
  },
  [183] = {
    [anon_sym_if] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_true] = ACTIONS(450),
    [aux_sym_identifier_token1] = ACTIONS(450),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [sym_float] = ACTIONS(450),
    [anon_sym_EQ_EQ] = ACTIONS(452),
    [anon_sym_false] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_integer] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(452),
  },
  [184] = {
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(446),
    [aux_sym_identifier_token1] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym_float] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_integer] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [185] = {
    [anon_sym_LPAREN] = ACTIONS(552),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(554),
  },
  [187] = {
    [anon_sym_LPAREN] = ACTIONS(556),
  },
  [188] = {
    [sym_namespaced_identifier] = STATE(257),
    [sym_identifier] = STATE(258),
    [aux_sym_identifier_token1] = ACTIONS(548),
  },
  [189] = {
    [anon_sym_LPAREN] = ACTIONS(558),
  },
  [190] = {
    [anon_sym_workflow] = ACTIONS(560),
    [ts_builtin_sym_end] = ACTIONS(560),
  },
  [191] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(261),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(261),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(562),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [192] = {
    [anon_sym_if] = ACTIONS(564),
    [anon_sym_File] = ACTIONS(564),
    [anon_sym_Map] = ACTIONS(564),
    [anon_sym_parameter_meta] = ACTIONS(564),
    [sym_object_type] = ACTIONS(564),
    [anon_sym_while] = ACTIONS(564),
    [anon_sym_Float] = ACTIONS(564),
    [anon_sym_Array] = ACTIONS(564),
    [anon_sym_Int] = ACTIONS(564),
    [anon_sym_RBRACE] = ACTIONS(564),
    [anon_sym_call] = ACTIONS(564),
    [anon_sym_scatter] = ACTIONS(564),
    [anon_sym_String] = ACTIONS(564),
    [anon_sym_meta] = ACTIONS(564),
    [anon_sym_Boolean] = ACTIONS(564),
  },
  [193] = {
    [sym_identifier] = STATE(262),
    [aux_sym_identifier_token1] = ACTIONS(548),
  },
  [194] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(263),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [195] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(227),
  },
  [196] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [197] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_COLON] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [198] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(264),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [199] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(40),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [200] = {
    [anon_sym_if] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(568),
    [anon_sym_true] = ACTIONS(566),
    [aux_sym_identifier_token1] = ACTIONS(566),
    [anon_sym_BANG_EQ] = ACTIONS(570),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [sym_float] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(570),
    [anon_sym_false] = ACTIONS(566),
    [anon_sym_RBRACE] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(576),
  },
  [201] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [202] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(270),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [203] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [204] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(271),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [205] = {
    [anon_sym_if] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(580),
    [aux_sym_identifier_token1] = ACTIONS(580),
    [anon_sym_BANG_EQ] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [sym_float] = ACTIONS(580),
    [anon_sym_EQ_EQ] = ACTIONS(582),
    [anon_sym_false] = ACTIONS(580),
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_PERCENT] = ACTIONS(582),
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [sym_integer] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(582),
  },
  [206] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(272),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [207] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(584),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [208] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(274),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [209] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [210] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(275),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [211] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(276),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [212] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(277),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [213] = {
    [aux_sym_expression_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(586),
  },
  [214] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(588),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(590),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [216] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(282),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [217] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [218] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(283),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [219] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(284),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [220] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(285),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [221] = {
    [anon_sym_if] = ACTIONS(582),
    [anon_sym_Map] = ACTIONS(582),
    [anon_sym_parameter_meta] = ACTIONS(582),
    [anon_sym_BANG_EQ] = ACTIONS(582),
    [anon_sym_while] = ACTIONS(582),
    [anon_sym_command] = ACTIONS(582),
    [anon_sym_Float] = ACTIONS(582),
    [anon_sym_Int] = ACTIONS(582),
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_PERCENT] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [anon_sym_then] = ACTIONS(582),
    [anon_sym_meta] = ACTIONS(582),
    [anon_sym_File] = ACTIONS(582),
    [anon_sym_DOT] = ACTIONS(582),
    [sym_object_type] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_else] = ACTIONS(582),
    [anon_sym_runtime] = ACTIONS(582),
    [anon_sym_Array] = ACTIONS(582),
    [anon_sym_output] = ACTIONS(582),
    [anon_sym_EQ_EQ] = ACTIONS(582),
    [anon_sym_call] = ACTIONS(582),
    [anon_sym_scatter] = ACTIONS(582),
    [anon_sym_String] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_Boolean] = ACTIONS(582),
    [anon_sym_DASH] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_COMMA] = ACTIONS(582),
  },
  [222] = {
    [aux_sym_expression_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(592),
  },
  [223] = {
    [anon_sym_RBRACK] = ACTIONS(594),
  },
  [224] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [225] = {
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
  },
  [226] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(289),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [227] = {
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [aux_sym_identifier_token1] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
  },
  [228] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(290),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [229] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(292),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(598),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [230] = {
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
  },
  [231] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(293),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [232] = {
    [aux_sym_string_literal_repeat1] = STATE(295),
    [aux_sym_string_literal_token1] = ACTIONS(600),
    [sym_escape_sequence] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(602),
  },
  [233] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(297),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(606),
    [anon_sym_DOT] = ACTIONS(608),
    [anon_sym_PERCENT] = ACTIONS(610),
    [aux_sym_identifier_token1] = ACTIONS(606),
    [anon_sym_BANG_EQ] = ACTIONS(612),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_EQ_EQ] = ACTIONS(612),
  },
  [235] = {
    [anon_sym_call] = ACTIONS(620),
    [ts_builtin_sym_end] = ACTIONS(620),
  },
  [236] = {
    [sym_variable_mapping_kv] = STATE(304),
    [sym_identifier] = STATE(306),
    [sym_variable_mappings] = STATE(305),
    [aux_sym_identifier_token1] = ACTIONS(91),
  },
  [237] = {
    [anon_sym_call] = ACTIONS(622),
    [ts_builtin_sym_end] = ACTIONS(622),
  },
  [238] = {
    [sym_primitive_type] = STATE(307),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [anon_sym_String] = ACTIONS(131),
    [anon_sym_Int] = ACTIONS(131),
  },
  [239] = {
    [sym_parameter_meta_kv] = STATE(308),
    [aux_sym_parameter_meta_repeat1] = STATE(309),
    [sym_identifier] = STATE(310),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_parameter_meta] = ACTIONS(626),
    [anon_sym_runtime] = ACTIONS(626),
    [anon_sym_command] = ACTIONS(626),
    [anon_sym_output] = ACTIONS(626),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(626),
  },
  [240] = {
    [aux_sym_identifier_token1] = ACTIONS(163),
  },
  [241] = {
    [aux_sym_identifier_token1] = ACTIONS(165),
  },
  [242] = {
    [sym_identifier] = STATE(313),
    [aux_sym_meta_repeat1] = STATE(312),
    [sym_meta_kv] = STATE(312),
    [aux_sym_identifier_token1] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(628),
  },
  [243] = {
    [sym_command_part_var] = STATE(314),
    [aux_sym_command_repeat1] = STATE(316),
    [sym_command_part] = STATE(316),
    [sym_command_part_string] = ACTIONS(630),
    [anon_sym_DOLLAR] = ACTIONS(632),
  },
  [244] = {
    [sym_command_part_var] = STATE(314),
    [aux_sym_command_repeat1] = STATE(317),
    [sym_command_part] = STATE(317),
    [sym_command_part_string] = ACTIONS(630),
    [anon_sym_DOLLAR] = ACTIONS(632),
  },
  [245] = {
    [sym_runtime_kv] = STATE(319),
    [sym_identifier] = STATE(103),
    [aux_sym_runtime_repeat1] = STATE(319),
    [aux_sym_identifier_token1] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(634),
  },
  [246] = {
    [sym_array_type] = STATE(320),
    [sym_primitive_type] = STATE(320),
    [anon_sym_Int] = ACTIONS(131),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [sym_object_type] = ACTIONS(636),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_String] = ACTIONS(131),
  },
  [247] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [sym_task_output_kv] = STATE(322),
    [aux_sym_task_output_repeat1] = STATE(322),
    [sym_map_type] = STATE(171),
    [sym_type] = STATE(323),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(638),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_Boolean] = ACTIONS(361),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
  },
  [248] = {
    [aux_sym_task_sections_repeat1] = STATE(248),
    [sym_task_output] = STATE(248),
    [sym_command] = STATE(248),
    [sym_runtime] = STATE(248),
    [sym_meta] = STATE(248),
    [sym_parameter_meta] = STATE(248),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_parameter_meta] = ACTIONS(642),
    [anon_sym_runtime] = ACTIONS(645),
    [anon_sym_command] = ACTIONS(648),
    [anon_sym_output] = ACTIONS(651),
    [anon_sym_meta] = ACTIONS(654),
  },
  [249] = {
    [anon_sym_File] = ACTIONS(657),
    [anon_sym_Map] = ACTIONS(657),
    [anon_sym_parameter_meta] = ACTIONS(657),
    [sym_object_type] = ACTIONS(657),
    [anon_sym_String] = ACTIONS(657),
    [anon_sym_meta] = ACTIONS(657),
    [anon_sym_EQ] = ACTIONS(659),
    [anon_sym_command] = ACTIONS(657),
    [anon_sym_Boolean] = ACTIONS(657),
    [anon_sym_runtime] = ACTIONS(657),
    [anon_sym_Array] = ACTIONS(657),
    [anon_sym_Float] = ACTIONS(657),
    [anon_sym_output] = ACTIONS(657),
    [anon_sym_Int] = ACTIONS(657),
  },
  [250] = {
    [anon_sym_task] = ACTIONS(661),
    [ts_builtin_sym_end] = ACTIONS(661),
  },
  [251] = {
    [anon_sym_RBRACE] = ACTIONS(663),
  },
  [252] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [sym_declaration] = STATE(252),
    [sym_type] = STATE(178),
    [sym_map_type] = STATE(171),
    [aux_sym_task_repeat1] = STATE(252),
    [anon_sym_File] = ACTIONS(665),
    [anon_sym_Map] = ACTIONS(668),
    [anon_sym_parameter_meta] = ACTIONS(671),
    [sym_object_type] = ACTIONS(673),
    [anon_sym_String] = ACTIONS(665),
    [anon_sym_meta] = ACTIONS(671),
    [anon_sym_command] = ACTIONS(671),
    [anon_sym_Boolean] = ACTIONS(665),
    [anon_sym_runtime] = ACTIONS(671),
    [anon_sym_Array] = ACTIONS(676),
    [anon_sym_Float] = ACTIONS(665),
    [anon_sym_output] = ACTIONS(671),
    [anon_sym_Int] = ACTIONS(665),
  },
  [253] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(679),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [254] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(327),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [255] = {
    [sym_parameter_meta_kv] = STATE(328),
    [aux_sym_parameter_meta_repeat1] = STATE(329),
    [sym_identifier] = STATE(310),
    [anon_sym_if] = ACTIONS(626),
    [anon_sym_File] = ACTIONS(626),
    [anon_sym_Map] = ACTIONS(626),
    [anon_sym_parameter_meta] = ACTIONS(626),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_object_type] = ACTIONS(626),
    [anon_sym_while] = ACTIONS(626),
    [anon_sym_Float] = ACTIONS(626),
    [anon_sym_Array] = ACTIONS(626),
    [anon_sym_Int] = ACTIONS(626),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_call] = ACTIONS(626),
    [anon_sym_scatter] = ACTIONS(626),
    [anon_sym_String] = ACTIONS(626),
    [anon_sym_meta] = ACTIONS(626),
    [anon_sym_Boolean] = ACTIONS(626),
  },
  [256] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(330),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [257] = {
    [sym_call_body] = STATE(333),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_File] = ACTIONS(193),
    [anon_sym_Map] = ACTIONS(193),
    [anon_sym_parameter_meta] = ACTIONS(193),
    [sym_object_type] = ACTIONS(193),
    [anon_sym_as] = ACTIONS(681),
    [anon_sym_while] = ACTIONS(193),
    [anon_sym_Float] = ACTIONS(193),
    [anon_sym_Array] = ACTIONS(193),
    [anon_sym_Int] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_call] = ACTIONS(193),
    [anon_sym_scatter] = ACTIONS(193),
    [anon_sym_String] = ACTIONS(193),
    [anon_sym_meta] = ACTIONS(193),
    [anon_sym_Boolean] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(683),
  },
  [258] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(335),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_File] = ACTIONS(199),
    [anon_sym_Map] = ACTIONS(199),
    [anon_sym_parameter_meta] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(685),
    [sym_object_type] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_Float] = ACTIONS(199),
    [anon_sym_Array] = ACTIONS(199),
    [anon_sym_Int] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_call] = ACTIONS(199),
    [anon_sym_scatter] = ACTIONS(199),
    [anon_sym_String] = ACTIONS(199),
    [anon_sym_meta] = ACTIONS(199),
    [anon_sym_Boolean] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
  },
  [259] = {
    [sym_identifier] = STATE(338),
    [aux_sym_scatter_repeat1] = STATE(337),
    [sym_scatter_iteration_statment] = STATE(337),
    [aux_sym_identifier_token1] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(687),
  },
  [260] = {
    [anon_sym_workflow] = ACTIONS(689),
    [ts_builtin_sym_end] = ACTIONS(689),
  },
  [261] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(261),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(261),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(691),
    [anon_sym_File] = ACTIONS(694),
    [anon_sym_Map] = ACTIONS(697),
    [anon_sym_parameter_meta] = ACTIONS(700),
    [sym_object_type] = ACTIONS(703),
    [anon_sym_while] = ACTIONS(706),
    [anon_sym_Float] = ACTIONS(694),
    [anon_sym_Array] = ACTIONS(709),
    [anon_sym_Int] = ACTIONS(694),
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_call] = ACTIONS(714),
    [anon_sym_scatter] = ACTIONS(717),
    [anon_sym_String] = ACTIONS(694),
    [anon_sym_meta] = ACTIONS(720),
    [anon_sym_Boolean] = ACTIONS(694),
  },
  [262] = {
    [anon_sym_if] = ACTIONS(657),
    [anon_sym_File] = ACTIONS(657),
    [anon_sym_Map] = ACTIONS(657),
    [anon_sym_parameter_meta] = ACTIONS(657),
    [sym_object_type] = ACTIONS(657),
    [anon_sym_while] = ACTIONS(657),
    [anon_sym_Float] = ACTIONS(657),
    [anon_sym_Array] = ACTIONS(657),
    [anon_sym_Int] = ACTIONS(657),
    [anon_sym_RBRACE] = ACTIONS(657),
    [anon_sym_call] = ACTIONS(657),
    [anon_sym_scatter] = ACTIONS(657),
    [anon_sym_String] = ACTIONS(657),
    [anon_sym_meta] = ACTIONS(657),
    [anon_sym_EQ] = ACTIONS(723),
    [anon_sym_Boolean] = ACTIONS(657),
  },
  [263] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(725),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [264] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(727),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [265] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(342),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [266] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(127),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [267] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(343),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [268] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(344),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [269] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(345),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [270] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(456),
  },
  [271] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(452),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [272] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [273] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(346),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [274] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [275] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [276] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [277] = {
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [278] = {
    [anon_sym_if] = ACTIONS(731),
    [anon_sym_DOT] = ACTIONS(731),
    [anon_sym_true] = ACTIONS(731),
    [aux_sym_identifier_token1] = ACTIONS(731),
    [anon_sym_BANG_EQ] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(733),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(733),
    [sym_float] = ACTIONS(731),
    [anon_sym_EQ_EQ] = ACTIONS(733),
    [anon_sym_false] = ACTIONS(731),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_PERCENT] = ACTIONS(733),
    [ts_builtin_sym_end] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [sym_integer] = ACTIONS(731),
    [anon_sym_DASH] = ACTIONS(733),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
  },
  [279] = {
    [aux_sym_expression_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(735),
    [anon_sym_RPAREN] = ACTIONS(729),
  },
  [280] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(347),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [281] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(348),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [282] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [283] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_else] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [284] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_else] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [285] = {
    [anon_sym_if] = ACTIONS(738),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [aux_sym_identifier_token1] = ACTIONS(738),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym_float] = ACTIONS(738),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_PERCENT] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(738),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(740),
  },
  [286] = {
    [anon_sym_if] = ACTIONS(733),
    [anon_sym_Map] = ACTIONS(733),
    [anon_sym_parameter_meta] = ACTIONS(733),
    [anon_sym_BANG_EQ] = ACTIONS(733),
    [anon_sym_while] = ACTIONS(733),
    [anon_sym_command] = ACTIONS(733),
    [anon_sym_Float] = ACTIONS(733),
    [anon_sym_Int] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_PERCENT] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [anon_sym_then] = ACTIONS(733),
    [anon_sym_meta] = ACTIONS(733),
    [anon_sym_File] = ACTIONS(733),
    [anon_sym_DOT] = ACTIONS(733),
    [sym_object_type] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(733),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_else] = ACTIONS(733),
    [anon_sym_runtime] = ACTIONS(733),
    [anon_sym_Array] = ACTIONS(733),
    [anon_sym_output] = ACTIONS(733),
    [anon_sym_EQ_EQ] = ACTIONS(733),
    [anon_sym_call] = ACTIONS(733),
    [anon_sym_scatter] = ACTIONS(733),
    [anon_sym_String] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_Boolean] = ACTIONS(733),
    [anon_sym_DASH] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(733),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(733),
  },
  [287] = {
    [anon_sym_File] = ACTIONS(742),
    [anon_sym_Map] = ACTIONS(742),
    [ts_builtin_sym_end] = ACTIONS(742),
    [anon_sym_RBRACK] = ACTIONS(742),
    [sym_object_type] = ACTIONS(742),
    [anon_sym_PLUS] = ACTIONS(742),
    [anon_sym_String] = ACTIONS(742),
    [anon_sym_QMARK] = ACTIONS(742),
    [anon_sym_Boolean] = ACTIONS(742),
    [anon_sym_Float] = ACTIONS(742),
    [anon_sym_Array] = ACTIONS(742),
    [anon_sym_Int] = ACTIONS(742),
  },
  [288] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(349),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [289] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(744),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [290] = {
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [aux_sym_identifier_token1] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
  },
  [291] = {
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [aux_sym_identifier_token1] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
  },
  [292] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(112),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(746),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [293] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [aux_sym_identifier_token1] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_EQ_EQ] = ACTIONS(183),
  },
  [295] = {
    [aux_sym_string_literal_repeat1] = STATE(99),
    [aux_sym_string_literal_token1] = ACTIONS(185),
    [sym_escape_sequence] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(750),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [aux_sym_identifier_token1] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
  },
  [297] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(125),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(752),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [298] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(355),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [299] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(356),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [300] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(357),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [301] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(358),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [302] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(359),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [303] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(361),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [304] = {
    [aux_sym_variable_mappings_repeat1] = STATE(363),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_COMMA] = ACTIONS(758),
  },
  [305] = {
    [anon_sym_RBRACE] = ACTIONS(760),
  },
  [306] = {
    [anon_sym_EQ] = ACTIONS(762),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(764),
  },
  [308] = {
    [anon_sym_RBRACE] = ACTIONS(766),
  },
  [309] = {
    [sym_parameter_meta_kv] = STATE(308),
    [aux_sym_parameter_meta_repeat1] = STATE(367),
    [sym_identifier] = STATE(310),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_parameter_meta] = ACTIONS(770),
    [anon_sym_runtime] = ACTIONS(770),
    [anon_sym_command] = ACTIONS(770),
    [anon_sym_output] = ACTIONS(770),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(770),
  },
  [310] = {
    [anon_sym_EQ] = ACTIONS(772),
  },
  [311] = {
    [anon_sym_if] = ACTIONS(774),
    [anon_sym_File] = ACTIONS(774),
    [anon_sym_parameter_meta] = ACTIONS(774),
    [anon_sym_Map] = ACTIONS(774),
    [sym_object_type] = ACTIONS(774),
    [anon_sym_while] = ACTIONS(774),
    [anon_sym_command] = ACTIONS(774),
    [anon_sym_runtime] = ACTIONS(774),
    [anon_sym_Float] = ACTIONS(774),
    [anon_sym_output] = ACTIONS(774),
    [anon_sym_Array] = ACTIONS(774),
    [anon_sym_Int] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_call] = ACTIONS(774),
    [anon_sym_scatter] = ACTIONS(774),
    [anon_sym_String] = ACTIONS(774),
    [anon_sym_meta] = ACTIONS(774),
    [anon_sym_Boolean] = ACTIONS(774),
  },
  [312] = {
    [sym_identifier] = STATE(313),
    [aux_sym_meta_repeat1] = STATE(370),
    [sym_meta_kv] = STATE(370),
    [aux_sym_identifier_token1] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(776),
  },
  [313] = {
    [anon_sym_EQ] = ACTIONS(778),
  },
  [314] = {
    [sym_command_part_string] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_GT_GT_GT] = ACTIONS(780),
    [anon_sym_DOLLAR] = ACTIONS(780),
  },
  [315] = {
    [anon_sym_LBRACE] = ACTIONS(782),
  },
  [316] = {
    [sym_command_part_var] = STATE(314),
    [aux_sym_command_repeat1] = STATE(374),
    [sym_command_part] = STATE(374),
    [sym_command_part_string] = ACTIONS(630),
    [anon_sym_DOLLAR] = ACTIONS(632),
    [anon_sym_GT_GT_GT] = ACTIONS(784),
  },
  [317] = {
    [sym_command_part_var] = STATE(314),
    [aux_sym_command_repeat1] = STATE(375),
    [sym_command_part] = STATE(375),
    [sym_command_part_string] = ACTIONS(630),
    [anon_sym_DOLLAR] = ACTIONS(632),
    [anon_sym_RBRACE] = ACTIONS(784),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_parameter_meta] = ACTIONS(345),
    [anon_sym_runtime] = ACTIONS(345),
    [anon_sym_command] = ACTIONS(345),
    [anon_sym_output] = ACTIONS(345),
    [anon_sym_meta] = ACTIONS(345),
  },
  [319] = {
    [sym_runtime_kv] = STATE(159),
    [sym_identifier] = STATE(103),
    [aux_sym_runtime_repeat1] = STATE(159),
    [aux_sym_identifier_token1] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(786),
  },
  [320] = {
    [anon_sym_RBRACK] = ACTIONS(788),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(790),
    [anon_sym_parameter_meta] = ACTIONS(790),
    [anon_sym_runtime] = ACTIONS(790),
    [anon_sym_command] = ACTIONS(790),
    [anon_sym_output] = ACTIONS(790),
    [anon_sym_meta] = ACTIONS(790),
  },
  [322] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [sym_task_output_kv] = STATE(379),
    [aux_sym_task_output_repeat1] = STATE(379),
    [sym_map_type] = STATE(171),
    [sym_type] = STATE(323),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(792),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_Boolean] = ACTIONS(361),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
  },
  [323] = {
    [sym_identifier] = STATE(380),
    [aux_sym_identifier_token1] = ACTIONS(91),
  },
  [324] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(383),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [325] = {
    [anon_sym_task] = ACTIONS(798),
    [ts_builtin_sym_end] = ACTIONS(798),
  },
  [326] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(384),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [327] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [328] = {
    [anon_sym_RBRACE] = ACTIONS(802),
  },
  [329] = {
    [sym_parameter_meta_kv] = STATE(328),
    [aux_sym_parameter_meta_repeat1] = STATE(387),
    [sym_identifier] = STATE(310),
    [anon_sym_if] = ACTIONS(770),
    [anon_sym_File] = ACTIONS(770),
    [anon_sym_Map] = ACTIONS(770),
    [anon_sym_parameter_meta] = ACTIONS(770),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_object_type] = ACTIONS(770),
    [anon_sym_while] = ACTIONS(770),
    [anon_sym_Float] = ACTIONS(770),
    [anon_sym_Array] = ACTIONS(770),
    [anon_sym_Int] = ACTIONS(770),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_call] = ACTIONS(770),
    [anon_sym_scatter] = ACTIONS(770),
    [anon_sym_String] = ACTIONS(770),
    [anon_sym_meta] = ACTIONS(770),
    [anon_sym_Boolean] = ACTIONS(770),
  },
  [330] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(804),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [331] = {
    [sym_identifier] = STATE(389),
    [aux_sym_identifier_token1] = ACTIONS(548),
  },
  [332] = {
    [sym_inputs] = STATE(391),
    [anon_sym_RBRACE] = ACTIONS(806),
    [anon_sym_input] = ACTIONS(355),
  },
  [333] = {
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_File] = ACTIONS(357),
    [anon_sym_Map] = ACTIONS(357),
    [anon_sym_parameter_meta] = ACTIONS(357),
    [sym_object_type] = ACTIONS(357),
    [anon_sym_while] = ACTIONS(357),
    [anon_sym_Float] = ACTIONS(357),
    [anon_sym_Array] = ACTIONS(357),
    [anon_sym_Int] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_call] = ACTIONS(357),
    [anon_sym_scatter] = ACTIONS(357),
    [anon_sym_String] = ACTIONS(357),
    [anon_sym_meta] = ACTIONS(357),
    [anon_sym_Boolean] = ACTIONS(357),
  },
  [334] = {
    [sym_identifier] = STATE(392),
    [aux_sym_identifier_token1] = ACTIONS(548),
  },
  [335] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(393),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_File] = ACTIONS(359),
    [anon_sym_Map] = ACTIONS(359),
    [anon_sym_parameter_meta] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(685),
    [sym_object_type] = ACTIONS(359),
    [anon_sym_as] = ACTIONS(359),
    [anon_sym_while] = ACTIONS(359),
    [anon_sym_Float] = ACTIONS(359),
    [anon_sym_Array] = ACTIONS(359),
    [anon_sym_Int] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(359),
    [anon_sym_call] = ACTIONS(359),
    [anon_sym_scatter] = ACTIONS(359),
    [anon_sym_String] = ACTIONS(359),
    [anon_sym_meta] = ACTIONS(359),
    [anon_sym_Boolean] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
  },
  [336] = {
    [sym_scatter_body] = STATE(395),
    [anon_sym_LBRACE] = ACTIONS(808),
  },
  [337] = {
    [sym_identifier] = STATE(338),
    [aux_sym_scatter_repeat1] = STATE(397),
    [sym_scatter_iteration_statment] = STATE(397),
    [aux_sym_identifier_token1] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(810),
  },
  [338] = {
    [anon_sym_in] = ACTIONS(812),
  },
  [339] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(401),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [340] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(402),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [341] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(403),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [342] = {
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(442),
    [aux_sym_identifier_token1] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(570),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym_float] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(570),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(444),
  },
  [343] = {
    [anon_sym_if] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_true] = ACTIONS(450),
    [aux_sym_identifier_token1] = ACTIONS(450),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [sym_float] = ACTIONS(450),
    [anon_sym_EQ_EQ] = ACTIONS(452),
    [anon_sym_false] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_integer] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(452),
  },
  [344] = {
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(446),
    [aux_sym_identifier_token1] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym_float] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_integer] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [345] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(818),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [346] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(820),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [347] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_then] = ACTIONS(740),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [348] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(822),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [349] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [350] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(407),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [aux_sym_identifier_token1] = ACTIONS(383),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(383),
  },
  [352] = {
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(332),
    [aux_sym_identifier_token1] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(332),
  },
  [353] = {
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [aux_sym_identifier_token1] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
  },
  [354] = {
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [aux_sym_identifier_token1] = ACTIONS(411),
    [anon_sym_BANG_EQ] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_EQ_EQ] = ACTIONS(411),
  },
  [355] = {
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(610),
    [aux_sym_identifier_token1] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(612),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_EQ_EQ] = ACTIONS(612),
  },
  [356] = {
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [aux_sym_identifier_token1] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [357] = {
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(610),
    [aux_sym_identifier_token1] = ACTIONS(452),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(610),
    [aux_sym_identifier_token1] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [359] = {
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_BANG_EQ] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(824),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(456),
  },
  [360] = {
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(444),
    [aux_sym_identifier_token1] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(444),
  },
  [361] = {
    [aux_sym_expression_repeat1] = STATE(409),
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(824),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [362] = {
    [sym_variable_mapping_kv] = STATE(410),
    [sym_identifier] = STATE(306),
    [aux_sym_identifier_token1] = ACTIONS(91),
  },
  [363] = {
    [aux_sym_variable_mappings_repeat1] = STATE(411),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_COMMA] = ACTIONS(758),
  },
  [364] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(414),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [365] = {
    [sym_array_type] = STATE(415),
    [sym_primitive_type] = STATE(415),
    [sym_map_type] = STATE(415),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_Map] = ACTIONS(133),
    [sym_object_type] = ACTIONS(832),
    [anon_sym_String] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_Int] = ACTIONS(131),
  },
  [366] = {
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_parameter_meta] = ACTIONS(836),
    [anon_sym_runtime] = ACTIONS(836),
    [aux_sym_identifier_token1] = ACTIONS(836),
    [anon_sym_output] = ACTIONS(836),
    [anon_sym_command] = ACTIONS(836),
    [anon_sym_meta] = ACTIONS(836),
  },
  [367] = {
    [sym_parameter_meta_kv] = STATE(308),
    [aux_sym_parameter_meta_repeat1] = STATE(367),
    [sym_identifier] = STATE(310),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_parameter_meta] = ACTIONS(836),
    [anon_sym_runtime] = ACTIONS(836),
    [aux_sym_identifier_token1] = ACTIONS(838),
    [anon_sym_output] = ACTIONS(836),
    [anon_sym_command] = ACTIONS(836),
    [anon_sym_meta] = ACTIONS(836),
  },
  [368] = {
    [sym_string_literal] = STATE(416),
    [anon_sym_DQUOTE] = ACTIONS(19),
  },
  [369] = {
    [anon_sym_if] = ACTIONS(841),
    [anon_sym_File] = ACTIONS(841),
    [anon_sym_parameter_meta] = ACTIONS(841),
    [anon_sym_Map] = ACTIONS(841),
    [sym_object_type] = ACTIONS(841),
    [anon_sym_while] = ACTIONS(841),
    [anon_sym_command] = ACTIONS(841),
    [anon_sym_runtime] = ACTIONS(841),
    [anon_sym_Float] = ACTIONS(841),
    [anon_sym_output] = ACTIONS(841),
    [anon_sym_Array] = ACTIONS(841),
    [anon_sym_Int] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_call] = ACTIONS(841),
    [anon_sym_scatter] = ACTIONS(841),
    [anon_sym_String] = ACTIONS(841),
    [anon_sym_meta] = ACTIONS(841),
    [anon_sym_Boolean] = ACTIONS(841),
  },
  [370] = {
    [sym_identifier] = STATE(313),
    [aux_sym_meta_repeat1] = STATE(370),
    [sym_meta_kv] = STATE(370),
    [aux_sym_identifier_token1] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(846),
  },
  [371] = {
    [sym_string_literal] = STATE(417),
    [anon_sym_DQUOTE] = ACTIONS(511),
  },
  [372] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_var_option] = STATE(424),
    [sym_var_option_key] = STATE(422),
    [sym_expression] = STATE(423),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [aux_sym_command_part_var_repeat1] = STATE(424),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_quote] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(852),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_sep] = ACTIONS(850),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_float] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(854),
    [anon_sym_default] = ACTIONS(850),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_parameter_meta] = ACTIONS(856),
    [anon_sym_runtime] = ACTIONS(856),
    [anon_sym_command] = ACTIONS(856),
    [anon_sym_output] = ACTIONS(856),
    [anon_sym_meta] = ACTIONS(856),
  },
  [374] = {
    [sym_command_part_var] = STATE(314),
    [aux_sym_command_repeat1] = STATE(374),
    [sym_command_part] = STATE(374),
    [sym_command_part_string] = ACTIONS(858),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_GT_GT_GT] = ACTIONS(864),
  },
  [375] = {
    [sym_command_part_var] = STATE(314),
    [aux_sym_command_repeat1] = STATE(375),
    [sym_command_part] = STATE(375),
    [sym_command_part_string] = ACTIONS(858),
    [anon_sym_RBRACE] = ACTIONS(864),
    [anon_sym_DOLLAR] = ACTIONS(861),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_parameter_meta] = ACTIONS(490),
    [anon_sym_runtime] = ACTIONS(490),
    [anon_sym_command] = ACTIONS(490),
    [anon_sym_output] = ACTIONS(490),
    [anon_sym_meta] = ACTIONS(490),
  },
  [377] = {
    [aux_sym_identifier_token1] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
  },
  [378] = {
    [anon_sym_RBRACE] = ACTIONS(866),
    [anon_sym_parameter_meta] = ACTIONS(866),
    [anon_sym_runtime] = ACTIONS(866),
    [anon_sym_command] = ACTIONS(866),
    [anon_sym_output] = ACTIONS(866),
    [anon_sym_meta] = ACTIONS(866),
  },
  [379] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [sym_task_output_kv] = STATE(379),
    [aux_sym_task_output_repeat1] = STATE(379),
    [sym_map_type] = STATE(171),
    [sym_type] = STATE(323),
    [anon_sym_File] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(871),
    [anon_sym_Map] = ACTIONS(873),
    [sym_object_type] = ACTIONS(876),
    [anon_sym_String] = ACTIONS(868),
    [anon_sym_Boolean] = ACTIONS(868),
    [anon_sym_Float] = ACTIONS(868),
    [anon_sym_Array] = ACTIONS(879),
    [anon_sym_Int] = ACTIONS(868),
  },
  [380] = {
    [anon_sym_EQ] = ACTIONS(882),
  },
  [381] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(426),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [382] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [383] = {
    [anon_sym_File] = ACTIONS(884),
    [anon_sym_Map] = ACTIONS(884),
    [anon_sym_parameter_meta] = ACTIONS(884),
    [anon_sym_DOT] = ACTIONS(886),
    [sym_object_type] = ACTIONS(884),
    [anon_sym_BANG_EQ] = ACTIONS(888),
    [anon_sym_PLUS] = ACTIONS(890),
    [anon_sym_STAR] = ACTIONS(892),
    [anon_sym_command] = ACTIONS(884),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_runtime] = ACTIONS(884),
    [anon_sym_Array] = ACTIONS(884),
    [anon_sym_Float] = ACTIONS(884),
    [anon_sym_output] = ACTIONS(884),
    [anon_sym_Int] = ACTIONS(884),
    [anon_sym_EQ_EQ] = ACTIONS(888),
    [anon_sym_PERCENT] = ACTIONS(892),
    [anon_sym_String] = ACTIONS(884),
    [anon_sym_meta] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_Boolean] = ACTIONS(884),
    [anon_sym_DASH] = ACTIONS(890),
    [anon_sym_SLASH] = ACTIONS(892),
  },
  [384] = {
    [anon_sym_if] = ACTIONS(738),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [aux_sym_identifier_token1] = ACTIONS(738),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym_float] = ACTIONS(738),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(738),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(740),
  },
  [385] = {
    [anon_sym_LBRACE] = ACTIONS(894),
  },
  [386] = {
    [anon_sym_if] = ACTIONS(836),
    [anon_sym_File] = ACTIONS(836),
    [anon_sym_Map] = ACTIONS(836),
    [anon_sym_parameter_meta] = ACTIONS(836),
    [aux_sym_identifier_token1] = ACTIONS(836),
    [sym_object_type] = ACTIONS(836),
    [anon_sym_while] = ACTIONS(836),
    [anon_sym_Float] = ACTIONS(836),
    [anon_sym_Array] = ACTIONS(836),
    [anon_sym_Int] = ACTIONS(836),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_call] = ACTIONS(836),
    [anon_sym_scatter] = ACTIONS(836),
    [anon_sym_String] = ACTIONS(836),
    [anon_sym_meta] = ACTIONS(836),
    [anon_sym_Boolean] = ACTIONS(836),
  },
  [387] = {
    [sym_parameter_meta_kv] = STATE(328),
    [aux_sym_parameter_meta_repeat1] = STATE(387),
    [sym_identifier] = STATE(310),
    [anon_sym_if] = ACTIONS(836),
    [anon_sym_File] = ACTIONS(836),
    [anon_sym_Map] = ACTIONS(836),
    [anon_sym_parameter_meta] = ACTIONS(836),
    [aux_sym_identifier_token1] = ACTIONS(838),
    [sym_object_type] = ACTIONS(836),
    [anon_sym_while] = ACTIONS(836),
    [anon_sym_Float] = ACTIONS(836),
    [anon_sym_Array] = ACTIONS(836),
    [anon_sym_Int] = ACTIONS(836),
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_call] = ACTIONS(836),
    [anon_sym_scatter] = ACTIONS(836),
    [anon_sym_String] = ACTIONS(836),
    [anon_sym_meta] = ACTIONS(836),
    [anon_sym_Boolean] = ACTIONS(836),
  },
  [388] = {
    [anon_sym_LBRACE] = ACTIONS(896),
  },
  [389] = {
    [sym_call_body] = STATE(433),
    [anon_sym_if] = ACTIONS(515),
    [anon_sym_File] = ACTIONS(515),
    [anon_sym_Map] = ACTIONS(515),
    [anon_sym_parameter_meta] = ACTIONS(515),
    [sym_object_type] = ACTIONS(515),
    [anon_sym_while] = ACTIONS(515),
    [anon_sym_Float] = ACTIONS(515),
    [anon_sym_Array] = ACTIONS(515),
    [anon_sym_Int] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_call] = ACTIONS(515),
    [anon_sym_scatter] = ACTIONS(515),
    [anon_sym_String] = ACTIONS(515),
    [anon_sym_meta] = ACTIONS(515),
    [anon_sym_Boolean] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(683),
  },
  [390] = {
    [anon_sym_if] = ACTIONS(517),
    [anon_sym_File] = ACTIONS(517),
    [anon_sym_Map] = ACTIONS(517),
    [anon_sym_parameter_meta] = ACTIONS(517),
    [sym_object_type] = ACTIONS(517),
    [anon_sym_while] = ACTIONS(517),
    [anon_sym_Float] = ACTIONS(517),
    [anon_sym_Array] = ACTIONS(517),
    [anon_sym_Int] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_call] = ACTIONS(517),
    [anon_sym_scatter] = ACTIONS(517),
    [anon_sym_String] = ACTIONS(517),
    [anon_sym_meta] = ACTIONS(517),
    [anon_sym_Boolean] = ACTIONS(517),
  },
  [391] = {
    [anon_sym_RBRACE] = ACTIONS(898),
  },
  [392] = {
    [anon_sym_if] = ACTIONS(523),
    [anon_sym_File] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_parameter_meta] = ACTIONS(523),
    [sym_object_type] = ACTIONS(523),
    [anon_sym_as] = ACTIONS(523),
    [anon_sym_while] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_call] = ACTIONS(523),
    [anon_sym_scatter] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_meta] = ACTIONS(523),
    [anon_sym_Boolean] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
  },
  [393] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(393),
    [anon_sym_if] = ACTIONS(523),
    [anon_sym_File] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(900),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_parameter_meta] = ACTIONS(523),
    [sym_object_type] = ACTIONS(523),
    [anon_sym_as] = ACTIONS(523),
    [anon_sym_while] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_call] = ACTIONS(523),
    [anon_sym_scatter] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_meta] = ACTIONS(523),
    [anon_sym_Boolean] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
  },
  [394] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(436),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(436),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(903),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [395] = {
    [anon_sym_if] = ACTIONS(905),
    [anon_sym_File] = ACTIONS(905),
    [anon_sym_Map] = ACTIONS(905),
    [anon_sym_parameter_meta] = ACTIONS(905),
    [sym_object_type] = ACTIONS(905),
    [anon_sym_while] = ACTIONS(905),
    [anon_sym_Float] = ACTIONS(905),
    [anon_sym_Array] = ACTIONS(905),
    [anon_sym_Int] = ACTIONS(905),
    [anon_sym_RBRACE] = ACTIONS(905),
    [anon_sym_call] = ACTIONS(905),
    [anon_sym_scatter] = ACTIONS(905),
    [anon_sym_String] = ACTIONS(905),
    [anon_sym_meta] = ACTIONS(905),
    [anon_sym_Boolean] = ACTIONS(905),
  },
  [396] = {
    [sym_scatter_body] = STATE(437),
    [anon_sym_LBRACE] = ACTIONS(808),
  },
  [397] = {
    [sym_identifier] = STATE(338),
    [aux_sym_scatter_repeat1] = STATE(397),
    [sym_scatter_iteration_statment] = STATE(397),
    [aux_sym_identifier_token1] = ACTIONS(907),
    [anon_sym_RPAREN] = ACTIONS(910),
  },
  [398] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(440),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [399] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(441),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [400] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [401] = {
    [anon_sym_if] = ACTIONS(884),
    [anon_sym_File] = ACTIONS(884),
    [anon_sym_Map] = ACTIONS(884),
    [anon_sym_parameter_meta] = ACTIONS(884),
    [anon_sym_DOT] = ACTIONS(916),
    [sym_object_type] = ACTIONS(884),
    [anon_sym_BANG_EQ] = ACTIONS(918),
    [anon_sym_PLUS] = ACTIONS(920),
    [anon_sym_while] = ACTIONS(884),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_Float] = ACTIONS(884),
    [anon_sym_Array] = ACTIONS(884),
    [anon_sym_EQ_EQ] = ACTIONS(918),
    [anon_sym_Int] = ACTIONS(884),
    [anon_sym_RBRACE] = ACTIONS(884),
    [anon_sym_call] = ACTIONS(884),
    [anon_sym_scatter] = ACTIONS(884),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_String] = ACTIONS(884),
    [anon_sym_meta] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_Boolean] = ACTIONS(884),
    [anon_sym_DASH] = ACTIONS(920),
    [anon_sym_SLASH] = ACTIONS(922),
  },
  [402] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(740),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(227),
  },
  [403] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [404] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(447),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [405] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(448),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [406] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(449),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [407] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(926),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [408] = {
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_DOT] = ACTIONS(582),
    [anon_sym_PERCENT] = ACTIONS(582),
    [aux_sym_identifier_token1] = ACTIONS(582),
    [anon_sym_BANG_EQ] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [anon_sym_DASH] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_EQ_EQ] = ACTIONS(582),
  },
  [409] = {
    [aux_sym_expression_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(928),
  },
  [410] = {
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_COMMA] = ACTIONS(930),
  },
  [411] = {
    [aux_sym_variable_mappings_repeat1] = STATE(411),
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_COMMA] = ACTIONS(932),
  },
  [412] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(452),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [413] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(937),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_BANG_EQ] = ACTIONS(941),
    [anon_sym_PLUS] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(943),
    [anon_sym_SLASH] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(935),
    [anon_sym_EQ_EQ] = ACTIONS(941),
  },
  [415] = {
    [anon_sym_RBRACK] = ACTIONS(945),
  },
  [416] = {
    [anon_sym_RBRACE] = ACTIONS(947),
  },
  [417] = {
    [aux_sym_identifier_token1] = ACTIONS(949),
    [anon_sym_RBRACE] = ACTIONS(949),
  },
  [418] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(458),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [419] = {
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(951),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
  },
  [420] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(854),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [421] = {
    [anon_sym_EQ] = ACTIONS(953),
  },
  [422] = {
    [anon_sym_EQ] = ACTIONS(955),
  },
  [423] = {
    [anon_sym_RBRACE] = ACTIONS(957),
    [anon_sym_DOT] = ACTIONS(959),
    [anon_sym_PERCENT] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(963),
    [anon_sym_PLUS] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(965),
    [anon_sym_SLASH] = ACTIONS(961),
    [anon_sym_EQ_EQ] = ACTIONS(963),
  },
  [424] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_var_option] = STATE(466),
    [sym_var_option_key] = STATE(422),
    [sym_expression] = STATE(465),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [aux_sym_command_part_var_repeat1] = STATE(466),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_quote] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(852),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_sep] = ACTIONS(850),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_float] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(854),
    [anon_sym_default] = ACTIONS(850),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [425] = {
    [sym_string_literal] = STATE(467),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [426] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(967),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [427] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(469),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [428] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [429] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(470),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [430] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(471),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [431] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(473),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(473),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [432] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(475),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(475),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [433] = {
    [anon_sym_if] = ACTIONS(620),
    [anon_sym_File] = ACTIONS(620),
    [anon_sym_Map] = ACTIONS(620),
    [anon_sym_parameter_meta] = ACTIONS(620),
    [sym_object_type] = ACTIONS(620),
    [anon_sym_while] = ACTIONS(620),
    [anon_sym_Float] = ACTIONS(620),
    [anon_sym_Array] = ACTIONS(620),
    [anon_sym_Int] = ACTIONS(620),
    [anon_sym_RBRACE] = ACTIONS(620),
    [anon_sym_call] = ACTIONS(620),
    [anon_sym_scatter] = ACTIONS(620),
    [anon_sym_String] = ACTIONS(620),
    [anon_sym_meta] = ACTIONS(620),
    [anon_sym_Boolean] = ACTIONS(620),
  },
  [434] = {
    [anon_sym_if] = ACTIONS(622),
    [anon_sym_File] = ACTIONS(622),
    [anon_sym_Map] = ACTIONS(622),
    [anon_sym_parameter_meta] = ACTIONS(622),
    [sym_object_type] = ACTIONS(622),
    [anon_sym_while] = ACTIONS(622),
    [anon_sym_Float] = ACTIONS(622),
    [anon_sym_Array] = ACTIONS(622),
    [anon_sym_Int] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(622),
    [anon_sym_call] = ACTIONS(622),
    [anon_sym_scatter] = ACTIONS(622),
    [anon_sym_String] = ACTIONS(622),
    [anon_sym_meta] = ACTIONS(622),
    [anon_sym_Boolean] = ACTIONS(622),
  },
  [435] = {
    [anon_sym_if] = ACTIONS(973),
    [anon_sym_File] = ACTIONS(973),
    [anon_sym_Map] = ACTIONS(973),
    [anon_sym_parameter_meta] = ACTIONS(973),
    [sym_object_type] = ACTIONS(973),
    [anon_sym_while] = ACTIONS(973),
    [anon_sym_Float] = ACTIONS(973),
    [anon_sym_Array] = ACTIONS(973),
    [anon_sym_Int] = ACTIONS(973),
    [anon_sym_RBRACE] = ACTIONS(973),
    [anon_sym_call] = ACTIONS(973),
    [anon_sym_scatter] = ACTIONS(973),
    [anon_sym_String] = ACTIONS(973),
    [anon_sym_meta] = ACTIONS(973),
    [anon_sym_Boolean] = ACTIONS(973),
  },
  [436] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(261),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(261),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [437] = {
    [anon_sym_if] = ACTIONS(977),
    [anon_sym_File] = ACTIONS(977),
    [anon_sym_Map] = ACTIONS(977),
    [anon_sym_parameter_meta] = ACTIONS(977),
    [sym_object_type] = ACTIONS(977),
    [anon_sym_while] = ACTIONS(977),
    [anon_sym_Float] = ACTIONS(977),
    [anon_sym_Array] = ACTIONS(977),
    [anon_sym_Int] = ACTIONS(977),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_call] = ACTIONS(977),
    [anon_sym_scatter] = ACTIONS(977),
    [anon_sym_String] = ACTIONS(977),
    [anon_sym_meta] = ACTIONS(977),
    [anon_sym_Boolean] = ACTIONS(977),
  },
  [438] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(477),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [439] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(290),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [440] = {
    [anon_sym_DOT] = ACTIONS(979),
    [anon_sym_RPAREN] = ACTIONS(981),
    [aux_sym_identifier_token1] = ACTIONS(981),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_BANG_EQ] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_EQ_EQ] = ACTIONS(985),
  },
  [441] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(989),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [442] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(483),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [443] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [444] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(484),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [445] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(485),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [446] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(486),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [447] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(740),
    [anon_sym_BANG_EQ] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(456),
  },
  [448] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [449] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(740),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [450] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(487),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(503),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [451] = {
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_DOT] = ACTIONS(733),
    [anon_sym_PERCENT] = ACTIONS(733),
    [aux_sym_identifier_token1] = ACTIONS(733),
    [anon_sym_BANG_EQ] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(733),
    [anon_sym_DASH] = ACTIONS(733),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_EQ_EQ] = ACTIONS(733),
  },
  [452] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [453] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(489),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [454] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [455] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(490),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [456] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(491),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [457] = {
    [aux_sym_identifier_token1] = ACTIONS(742),
    [anon_sym_PLUS] = ACTIONS(742),
    [anon_sym_QMARK] = ACTIONS(742),
  },
  [458] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(993),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [459] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(502),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [sym_var_option_value] = STATE(503),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [460] = {
    [sym_command_part_string] = ACTIONS(1013),
    [anon_sym_RBRACE] = ACTIONS(1013),
    [anon_sym_GT_GT_GT] = ACTIONS(1013),
    [anon_sym_DOLLAR] = ACTIONS(1013),
  },
  [461] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(504),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(854),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [462] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(143),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(854),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [463] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(505),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(854),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [464] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(506),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(854),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [465] = {
    [anon_sym_RBRACE] = ACTIONS(1015),
    [anon_sym_DOT] = ACTIONS(959),
    [anon_sym_PERCENT] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(963),
    [anon_sym_PLUS] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(965),
    [anon_sym_SLASH] = ACTIONS(961),
    [anon_sym_EQ_EQ] = ACTIONS(963),
  },
  [466] = {
    [sym_var_option] = STATE(466),
    [sym_var_option_key] = STATE(422),
    [aux_sym_command_part_var_repeat1] = STATE(466),
    [anon_sym_if] = ACTIONS(1017),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [anon_sym_true] = ACTIONS(1021),
    [aux_sym_identifier_token1] = ACTIONS(1017),
    [anon_sym_PLUS] = ACTIONS(1019),
    [anon_sym_LPAREN] = ACTIONS(1019),
    [anon_sym_sep] = ACTIONS(1021),
    [anon_sym_DQUOTE] = ACTIONS(1019),
    [sym_float] = ACTIONS(1017),
    [anon_sym_false] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [sym_integer] = ACTIONS(1017),
    [anon_sym_DASH] = ACTIONS(1019),
    [anon_sym_default] = ACTIONS(1021),
    [anon_sym_quote] = ACTIONS(1021),
  },
  [467] = {
    [anon_sym_File] = ACTIONS(1024),
    [anon_sym_RBRACE] = ACTIONS(1024),
    [anon_sym_Map] = ACTIONS(1024),
    [sym_object_type] = ACTIONS(1024),
    [anon_sym_String] = ACTIONS(1024),
    [anon_sym_Boolean] = ACTIONS(1024),
    [anon_sym_Float] = ACTIONS(1024),
    [anon_sym_Array] = ACTIONS(1024),
    [anon_sym_Int] = ACTIONS(1024),
  },
  [468] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(508),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [469] = {
    [anon_sym_File] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(888),
    [anon_sym_Map] = ACTIONS(444),
    [sym_object_type] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(890),
    [anon_sym_parameter_meta] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_command] = ACTIONS(444),
    [anon_sym_runtime] = ACTIONS(444),
    [anon_sym_Float] = ACTIONS(444),
    [anon_sym_Array] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(888),
    [anon_sym_Int] = ACTIONS(444),
    [anon_sym_output] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(892),
    [anon_sym_String] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(444),
    [anon_sym_Boolean] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(890),
    [anon_sym_SLASH] = ACTIONS(892),
  },
  [470] = {
    [anon_sym_File] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_Map] = ACTIONS(452),
    [sym_object_type] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(890),
    [anon_sym_parameter_meta] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_command] = ACTIONS(452),
    [anon_sym_runtime] = ACTIONS(452),
    [anon_sym_Float] = ACTIONS(452),
    [anon_sym_Array] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(452),
    [anon_sym_Int] = ACTIONS(452),
    [anon_sym_output] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(892),
    [anon_sym_String] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_meta] = ACTIONS(452),
    [anon_sym_Boolean] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(890),
    [anon_sym_SLASH] = ACTIONS(892),
  },
  [471] = {
    [anon_sym_File] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [sym_object_type] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_parameter_meta] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_command] = ACTIONS(448),
    [anon_sym_runtime] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_output] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(892),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_meta] = ACTIONS(448),
    [anon_sym_Boolean] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(892),
  },
  [472] = {
    [anon_sym_if] = ACTIONS(1026),
    [anon_sym_File] = ACTIONS(1026),
    [anon_sym_Map] = ACTIONS(1026),
    [anon_sym_parameter_meta] = ACTIONS(1026),
    [sym_object_type] = ACTIONS(1026),
    [anon_sym_while] = ACTIONS(1026),
    [anon_sym_Float] = ACTIONS(1026),
    [anon_sym_Array] = ACTIONS(1026),
    [anon_sym_Int] = ACTIONS(1026),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_call] = ACTIONS(1026),
    [anon_sym_scatter] = ACTIONS(1026),
    [anon_sym_String] = ACTIONS(1026),
    [anon_sym_meta] = ACTIONS(1026),
    [anon_sym_Boolean] = ACTIONS(1026),
  },
  [473] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(261),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(261),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(1028),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [474] = {
    [anon_sym_if] = ACTIONS(1030),
    [anon_sym_File] = ACTIONS(1030),
    [anon_sym_Map] = ACTIONS(1030),
    [anon_sym_parameter_meta] = ACTIONS(1030),
    [sym_object_type] = ACTIONS(1030),
    [anon_sym_while] = ACTIONS(1030),
    [anon_sym_Float] = ACTIONS(1030),
    [anon_sym_Array] = ACTIONS(1030),
    [anon_sym_Int] = ACTIONS(1030),
    [anon_sym_RBRACE] = ACTIONS(1030),
    [anon_sym_call] = ACTIONS(1030),
    [anon_sym_scatter] = ACTIONS(1030),
    [anon_sym_String] = ACTIONS(1030),
    [anon_sym_meta] = ACTIONS(1030),
    [anon_sym_Boolean] = ACTIONS(1030),
  },
  [475] = {
    [sym_array_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [aux_sym_loop_repeat1] = STATE(261),
    [sym_conditional] = STATE(192),
    [sym_map_type] = STATE(171),
    [sym_parameter_meta] = STATE(192),
    [sym_declaration] = STATE(192),
    [sym_scatter] = STATE(192),
    [sym_workflow_element] = STATE(261),
    [sym_call] = STATE(192),
    [sym_meta] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_type] = STATE(193),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_File] = ACTIONS(361),
    [anon_sym_Map] = ACTIONS(363),
    [anon_sym_parameter_meta] = ACTIONS(393),
    [sym_object_type] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(375),
    [anon_sym_Float] = ACTIONS(361),
    [anon_sym_Int] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(397),
    [anon_sym_scatter] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(1032),
    [anon_sym_String] = ACTIONS(361),
    [anon_sym_meta] = ACTIONS(369),
    [anon_sym_Boolean] = ACTIONS(361),
  },
  [476] = {
    [anon_sym_if] = ACTIONS(1034),
    [anon_sym_File] = ACTIONS(1034),
    [anon_sym_Map] = ACTIONS(1034),
    [anon_sym_parameter_meta] = ACTIONS(1034),
    [sym_object_type] = ACTIONS(1034),
    [anon_sym_while] = ACTIONS(1034),
    [anon_sym_Float] = ACTIONS(1034),
    [anon_sym_Array] = ACTIONS(1034),
    [anon_sym_Int] = ACTIONS(1034),
    [anon_sym_RBRACE] = ACTIONS(1034),
    [anon_sym_call] = ACTIONS(1034),
    [anon_sym_scatter] = ACTIONS(1034),
    [anon_sym_String] = ACTIONS(1034),
    [anon_sym_meta] = ACTIONS(1034),
    [anon_sym_Boolean] = ACTIONS(1034),
  },
  [477] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(1036),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [478] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(512),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [479] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(356),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [480] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(513),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [481] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(514),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [482] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(515),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [483] = {
    [anon_sym_if] = ACTIONS(444),
    [anon_sym_File] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(918),
    [anon_sym_Map] = ACTIONS(444),
    [sym_object_type] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(920),
    [anon_sym_parameter_meta] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(444),
    [anon_sym_Float] = ACTIONS(444),
    [anon_sym_Array] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(918),
    [anon_sym_Int] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_call] = ACTIONS(444),
    [anon_sym_scatter] = ACTIONS(444),
    [anon_sym_String] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(444),
    [anon_sym_Boolean] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(920),
    [anon_sym_SLASH] = ACTIONS(922),
  },
  [484] = {
    [anon_sym_if] = ACTIONS(452),
    [anon_sym_File] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_Map] = ACTIONS(452),
    [sym_object_type] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(920),
    [anon_sym_parameter_meta] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_while] = ACTIONS(452),
    [anon_sym_Float] = ACTIONS(452),
    [anon_sym_Array] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(452),
    [anon_sym_Int] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_call] = ACTIONS(452),
    [anon_sym_scatter] = ACTIONS(452),
    [anon_sym_String] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_meta] = ACTIONS(452),
    [anon_sym_Boolean] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(920),
    [anon_sym_SLASH] = ACTIONS(922),
  },
  [485] = {
    [anon_sym_if] = ACTIONS(448),
    [anon_sym_File] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [sym_object_type] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_parameter_meta] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_while] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_call] = ACTIONS(448),
    [anon_sym_scatter] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_meta] = ACTIONS(448),
    [anon_sym_Boolean] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(922),
  },
  [486] = {
    [anon_sym_if] = ACTIONS(738),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [aux_sym_identifier_token1] = ACTIONS(738),
    [anon_sym_BANG_EQ] = ACTIONS(570),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym_float] = ACTIONS(738),
    [anon_sym_EQ_EQ] = ACTIONS(570),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_integer] = ACTIONS(738),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(740),
  },
  [487] = {
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(610),
    [aux_sym_identifier_token1] = ACTIONS(740),
    [anon_sym_BANG_EQ] = ACTIONS(612),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_EQ_EQ] = ACTIONS(612),
  },
  [488] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(516),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_BANG_EQ] = ACTIONS(941),
    [anon_sym_PLUS] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(943),
    [anon_sym_SLASH] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(941),
  },
  [490] = {
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(943),
    [anon_sym_SLASH] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [492] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(517),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [493] = {
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_quote] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_sep] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_float] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym_integer] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [494] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(518),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [495] = {
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_quote] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_sep] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_float] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_integer] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_default] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
  },
  [496] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(519),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [497] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(521),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(1038),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [498] = {
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_sep] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_float] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
  },
  [499] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(522),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [500] = {
    [aux_sym_string_literal_repeat1] = STATE(524),
    [aux_sym_string_literal_token1] = ACTIONS(1040),
    [sym_escape_sequence] = ACTIONS(1040),
    [anon_sym_DQUOTE] = ACTIONS(1042),
  },
  [501] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(526),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [502] = {
    [anon_sym_if] = ACTIONS(1046),
    [anon_sym_LBRACE] = ACTIONS(1048),
    [anon_sym_DOT] = ACTIONS(1050),
    [anon_sym_true] = ACTIONS(1046),
    [aux_sym_identifier_token1] = ACTIONS(1046),
    [anon_sym_BANG_EQ] = ACTIONS(1052),
    [anon_sym_PLUS] = ACTIONS(1054),
    [anon_sym_STAR] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(1058),
    [anon_sym_sep] = ACTIONS(1046),
    [anon_sym_DQUOTE] = ACTIONS(1048),
    [sym_float] = ACTIONS(1046),
    [anon_sym_EQ_EQ] = ACTIONS(1052),
    [anon_sym_false] = ACTIONS(1046),
    [anon_sym_PERCENT] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(1060),
    [sym_integer] = ACTIONS(1046),
    [anon_sym_DASH] = ACTIONS(1054),
    [anon_sym_default] = ACTIONS(1046),
    [anon_sym_SLASH] = ACTIONS(1056),
    [anon_sym_quote] = ACTIONS(1046),
  },
  [503] = {
    [anon_sym_if] = ACTIONS(1062),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [anon_sym_true] = ACTIONS(1062),
    [aux_sym_identifier_token1] = ACTIONS(1062),
    [anon_sym_PLUS] = ACTIONS(1064),
    [anon_sym_LPAREN] = ACTIONS(1064),
    [anon_sym_sep] = ACTIONS(1062),
    [anon_sym_DQUOTE] = ACTIONS(1064),
    [sym_float] = ACTIONS(1062),
    [anon_sym_false] = ACTIONS(1062),
    [anon_sym_LBRACK] = ACTIONS(1064),
    [sym_integer] = ACTIONS(1062),
    [anon_sym_DASH] = ACTIONS(1064),
    [anon_sym_default] = ACTIONS(1062),
    [anon_sym_quote] = ACTIONS(1062),
  },
  [504] = {
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(963),
    [anon_sym_PLUS] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(965),
    [anon_sym_SLASH] = ACTIONS(961),
    [anon_sym_EQ_EQ] = ACTIONS(963),
  },
  [505] = {
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(965),
    [anon_sym_SLASH] = ACTIONS(961),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [506] = {
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(961),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [507] = {
    [sym_command_part_string] = ACTIONS(1066),
    [anon_sym_RBRACE] = ACTIONS(1066),
    [anon_sym_GT_GT_GT] = ACTIONS(1066),
    [anon_sym_DOLLAR] = ACTIONS(1066),
  },
  [508] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1068),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [509] = {
    [anon_sym_if] = ACTIONS(1070),
    [anon_sym_File] = ACTIONS(1070),
    [anon_sym_Map] = ACTIONS(1070),
    [anon_sym_parameter_meta] = ACTIONS(1070),
    [sym_object_type] = ACTIONS(1070),
    [anon_sym_while] = ACTIONS(1070),
    [anon_sym_Float] = ACTIONS(1070),
    [anon_sym_Array] = ACTIONS(1070),
    [anon_sym_Int] = ACTIONS(1070),
    [anon_sym_RBRACE] = ACTIONS(1070),
    [anon_sym_call] = ACTIONS(1070),
    [anon_sym_scatter] = ACTIONS(1070),
    [anon_sym_String] = ACTIONS(1070),
    [anon_sym_meta] = ACTIONS(1070),
    [anon_sym_Boolean] = ACTIONS(1070),
  },
  [510] = {
    [anon_sym_if] = ACTIONS(1072),
    [anon_sym_File] = ACTIONS(1072),
    [anon_sym_Map] = ACTIONS(1072),
    [anon_sym_parameter_meta] = ACTIONS(1072),
    [sym_object_type] = ACTIONS(1072),
    [anon_sym_while] = ACTIONS(1072),
    [anon_sym_Float] = ACTIONS(1072),
    [anon_sym_Array] = ACTIONS(1072),
    [anon_sym_Int] = ACTIONS(1072),
    [anon_sym_RBRACE] = ACTIONS(1072),
    [anon_sym_call] = ACTIONS(1072),
    [anon_sym_scatter] = ACTIONS(1072),
    [anon_sym_String] = ACTIONS(1072),
    [anon_sym_meta] = ACTIONS(1072),
    [anon_sym_Boolean] = ACTIONS(1072),
  },
  [511] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(534),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [512] = {
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [aux_sym_identifier_token1] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_BANG_EQ] = ACTIONS(985),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_EQ_EQ] = ACTIONS(985),
  },
  [513] = {
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [aux_sym_identifier_token1] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_EQ_EQ] = ACTIONS(452),
  },
  [514] = {
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [aux_sym_identifier_token1] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_EQ_EQ] = ACTIONS(448),
  },
  [515] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1074),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [516] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1076),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [517] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1078),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [518] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(1080),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [519] = {
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [aux_sym_identifier_token1] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_sep] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_float] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_integer] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
  },
  [520] = {
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_quote] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [aux_sym_identifier_token1] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_sep] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym_float] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_integer] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
  },
  [521] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [aux_sym_definition_repeat1] = STATE(112),
    [sym_expression] = STATE(56),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(1082),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [522] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(1084),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [523] = {
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_quote] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [aux_sym_identifier_token1] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_sep] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_float] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [sym_integer] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
  },
  [524] = {
    [aux_sym_string_literal_repeat1] = STATE(99),
    [aux_sym_string_literal_token1] = ACTIONS(185),
    [sym_escape_sequence] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(1086),
  },
  [525] = {
    [anon_sym_if] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [aux_sym_identifier_token1] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_sep] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym_float] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym_integer] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_default] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
  },
  [526] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(61),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [aux_sym_dictionary_expression_repeat1] = STATE(125),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(1088),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [527] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(543),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [528] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(544),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [529] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(545),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [530] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(546),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [531] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(547),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(283),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [532] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(549),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(1090),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(289),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [533] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(550),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(796),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [534] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1092),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [535] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(552),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(816),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [536] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(553),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(830),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [537] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(554),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(854),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [538] = {
    [sym_string_literal] = STATE(32),
    [sym_math_expression] = STATE(32),
    [sym_expression] = STATE(555),
    [sym_parentheses_expression] = STATE(32),
    [sym_equality_expression] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_dictionary_expression] = STATE(32),
    [sym_bracket_expression] = STATE(32),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(322),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [539] = {
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_quote] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(381),
    [aux_sym_identifier_token1] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_sep] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [sym_float] = ACTIONS(381),
    [anon_sym_EQ_EQ] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_integer] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_default] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
  },
  [540] = {
    [anon_sym_if] = ACTIONS(330),
    [anon_sym_quote] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_true] = ACTIONS(330),
    [aux_sym_identifier_token1] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_sep] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym_float] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_false] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [sym_integer] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(332),
  },
  [541] = {
    [anon_sym_if] = ACTIONS(334),
    [anon_sym_quote] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_true] = ACTIONS(334),
    [aux_sym_identifier_token1] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_sep] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym_float] = ACTIONS(334),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_false] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [sym_integer] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_default] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
  },
  [542] = {
    [anon_sym_if] = ACTIONS(409),
    [anon_sym_quote] = ACTIONS(409),
    [anon_sym_DOT] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(409),
    [aux_sym_identifier_token1] = ACTIONS(409),
    [anon_sym_BANG_EQ] = ACTIONS(411),
    [anon_sym_PLUS] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_sep] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [sym_float] = ACTIONS(409),
    [anon_sym_EQ_EQ] = ACTIONS(411),
    [anon_sym_false] = ACTIONS(409),
    [anon_sym_PERCENT] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_integer] = ACTIONS(409),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_default] = ACTIONS(409),
    [anon_sym_SLASH] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
  },
  [543] = {
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_quote] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(442),
    [aux_sym_identifier_token1] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(1052),
    [anon_sym_PLUS] = ACTIONS(1054),
    [anon_sym_STAR] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(1058),
    [anon_sym_sep] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym_float] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(1052),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(1060),
    [sym_integer] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(1054),
    [anon_sym_default] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(444),
  },
  [544] = {
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_quote] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(446),
    [aux_sym_identifier_token1] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_sep] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym_float] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_integer] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_default] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [545] = {
    [anon_sym_if] = ACTIONS(450),
    [anon_sym_quote] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_true] = ACTIONS(450),
    [aux_sym_identifier_token1] = ACTIONS(450),
    [anon_sym_BANG_EQ] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(1054),
    [anon_sym_STAR] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_sep] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [sym_float] = ACTIONS(450),
    [anon_sym_EQ_EQ] = ACTIONS(452),
    [anon_sym_false] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_integer] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(1054),
    [anon_sym_default] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(452),
  },
  [546] = {
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_quote] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_true] = ACTIONS(446),
    [aux_sym_identifier_token1] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_sep] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym_float] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [anon_sym_false] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_integer] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_default] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(448),
  },
  [547] = {
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_BANG_EQ] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(1094),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(462),
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(456),
  },
  [548] = {
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_quote] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(442),
    [aux_sym_identifier_token1] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_sep] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym_float] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_false] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
    [sym_integer] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_default] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
  },
  [549] = {
    [aux_sym_expression_repeat1] = STATE(557),
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_EQ_EQ] = ACTIONS(466),
  },
  [550] = {
    [anon_sym_File] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_BANG_EQ] = ACTIONS(888),
    [anon_sym_Map] = ACTIONS(740),
    [sym_object_type] = ACTIONS(740),
    [anon_sym_PLUS] = ACTIONS(890),
    [anon_sym_parameter_meta] = ACTIONS(740),
    [anon_sym_STAR] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_command] = ACTIONS(740),
    [anon_sym_runtime] = ACTIONS(740),
    [anon_sym_Float] = ACTIONS(740),
    [anon_sym_Array] = ACTIONS(740),
    [anon_sym_EQ_EQ] = ACTIONS(888),
    [anon_sym_Int] = ACTIONS(740),
    [anon_sym_output] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(892),
    [anon_sym_String] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(740),
    [anon_sym_Boolean] = ACTIONS(740),
    [anon_sym_DASH] = ACTIONS(890),
    [anon_sym_SLASH] = ACTIONS(892),
  },
  [551] = {
    [sym_string_literal] = STATE(230),
    [sym_math_expression] = STATE(230),
    [sym_expression] = STATE(558),
    [sym_parentheses_expression] = STATE(230),
    [sym_equality_expression] = STATE(230),
    [sym_identifier] = STATE(230),
    [sym_boolean] = STATE(230),
    [sym_dictionary_expression] = STATE(230),
    [sym_bracket_expression] = STATE(230),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_true] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(914),
    [sym_float] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [552] = {
    [anon_sym_if] = ACTIONS(740),
    [anon_sym_File] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_BANG_EQ] = ACTIONS(918),
    [anon_sym_Map] = ACTIONS(740),
    [sym_object_type] = ACTIONS(740),
    [anon_sym_PLUS] = ACTIONS(920),
    [anon_sym_parameter_meta] = ACTIONS(740),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(740),
    [anon_sym_Float] = ACTIONS(740),
    [anon_sym_Array] = ACTIONS(740),
    [anon_sym_EQ_EQ] = ACTIONS(918),
    [anon_sym_Int] = ACTIONS(740),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_call] = ACTIONS(740),
    [anon_sym_scatter] = ACTIONS(740),
    [anon_sym_String] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(740),
    [anon_sym_Boolean] = ACTIONS(740),
    [anon_sym_DASH] = ACTIONS(920),
    [anon_sym_SLASH] = ACTIONS(922),
  },
  [553] = {
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_BANG_EQ] = ACTIONS(941),
    [anon_sym_PLUS] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(943),
    [anon_sym_SLASH] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_EQ_EQ] = ACTIONS(941),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(963),
    [anon_sym_PLUS] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(965),
    [anon_sym_SLASH] = ACTIONS(961),
    [anon_sym_EQ_EQ] = ACTIONS(963),
  },
  [555] = {
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1096),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(476),
  },
  [556] = {
    [anon_sym_if] = ACTIONS(580),
    [anon_sym_quote] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(580),
    [aux_sym_identifier_token1] = ACTIONS(580),
    [anon_sym_BANG_EQ] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_sep] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [sym_float] = ACTIONS(580),
    [anon_sym_EQ_EQ] = ACTIONS(582),
    [anon_sym_false] = ACTIONS(580),
    [anon_sym_PERCENT] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [sym_integer] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(582),
    [anon_sym_default] = ACTIONS(580),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(582),
  },
  [557] = {
    [aux_sym_expression_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(1098),
  },
  [558] = {
    [anon_sym_DOT] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [aux_sym_identifier_token1] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_BANG_EQ] = ACTIONS(985),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_EQ_EQ] = ACTIONS(985),
  },
  [559] = {
    [sym_string_literal] = STATE(498),
    [sym_math_expression] = STATE(498),
    [sym_expression] = STATE(561),
    [sym_parentheses_expression] = STATE(498),
    [sym_equality_expression] = STATE(498),
    [sym_identifier] = STATE(498),
    [sym_boolean] = STATE(498),
    [sym_dictionary_expression] = STATE(498),
    [sym_bracket_expression] = STATE(498),
    [anon_sym_false] = ACTIONS(995),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_true] = ACTIONS(995),
    [aux_sym_identifier_token1] = ACTIONS(999),
    [anon_sym_PLUS] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_integer] = ACTIONS(1005),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [anon_sym_DASH] = ACTIONS(1001),
    [sym_float] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1011),
  },
  [560] = {
    [anon_sym_if] = ACTIONS(731),
    [anon_sym_quote] = ACTIONS(731),
    [anon_sym_DOT] = ACTIONS(731),
    [anon_sym_true] = ACTIONS(731),
    [aux_sym_identifier_token1] = ACTIONS(731),
    [anon_sym_BANG_EQ] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(733),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_sep] = ACTIONS(731),
    [anon_sym_DQUOTE] = ACTIONS(733),
    [sym_float] = ACTIONS(731),
    [anon_sym_EQ_EQ] = ACTIONS(733),
    [anon_sym_false] = ACTIONS(731),
    [anon_sym_PERCENT] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [sym_integer] = ACTIONS(731),
    [anon_sym_DASH] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(731),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
  },
  [561] = {
    [anon_sym_if] = ACTIONS(738),
    [anon_sym_quote] = ACTIONS(738),
    [anon_sym_DOT] = ACTIONS(738),
    [anon_sym_true] = ACTIONS(738),
    [aux_sym_identifier_token1] = ACTIONS(738),
    [anon_sym_BANG_EQ] = ACTIONS(1052),
    [anon_sym_PLUS] = ACTIONS(1054),
    [anon_sym_STAR] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(1058),
    [anon_sym_sep] = ACTIONS(738),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym_float] = ACTIONS(738),
    [anon_sym_EQ_EQ] = ACTIONS(1052),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_PERCENT] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(1060),
    [sym_integer] = ACTIONS(738),
    [anon_sym_DASH] = ACTIONS(1054),
    [anon_sym_default] = ACTIONS(738),
    [anon_sym_SLASH] = ACTIONS(1056),
    [anon_sym_LBRACE] = ACTIONS(740),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = false}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 0),
  [29] = {.count = 1, .reusable = false}, SHIFT(14),
  [31] = {.count = 1, .reusable = false}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(27),
  [41] = {.count = 1, .reusable = false}, SHIFT(28),
  [43] = {.count = 1, .reusable = false}, SHIFT(29),
  [45] = {.count = 1, .reusable = true}, SHIFT(30),
  [47] = {.count = 1, .reusable = true}, SHIFT(31),
  [49] = {.count = 1, .reusable = false}, SHIFT(32),
  [51] = {.count = 1, .reusable = true}, SHIFT(33),
  [53] = {.count = 1, .reusable = true}, SHIFT(34),
  [55] = {.count = 1, .reusable = true}, SHIFT(35),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(38),
  [73] = {.count = 1, .reusable = false}, SHIFT(41),
  [75] = {.count = 1, .reusable = true}, SHIFT(42),
  [77] = {.count = 1, .reusable = true}, SHIFT(45),
  [79] = {.count = 1, .reusable = false}, SHIFT(44),
  [81] = {.count = 1, .reusable = true}, SHIFT(46),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(47),
  [89] = {.count = 1, .reusable = true}, SHIFT(48),
  [91] = {.count = 1, .reusable = true}, SHIFT(6),
  [93] = {.count = 1, .reusable = false}, SHIFT(52),
  [95] = {.count = 1, .reusable = true}, SHIFT(53),
  [97] = {.count = 1, .reusable = true}, SHIFT(54),
  [99] = {.count = 1, .reusable = false}, SHIFT(58),
  [101] = {.count = 1, .reusable = true}, SHIFT(59),
  [103] = {.count = 1, .reusable = true}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(17),
  [109] = {.count = 1, .reusable = true}, SHIFT(15),
  [111] = {.count = 1, .reusable = true}, SHIFT(14),
  [113] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [115] = {.count = 1, .reusable = false}, REDUCE(aux_sym_definition_repeat1, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(67),
  [119] = {.count = 1, .reusable = true}, SHIFT(69),
  [121] = {.count = 1, .reusable = true}, SHIFT(70),
  [123] = {.count = 1, .reusable = true}, SHIFT(68),
  [125] = {.count = 1, .reusable = true}, SHIFT(72),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(71),
  [131] = {.count = 1, .reusable = true}, SHIFT(3),
  [133] = {.count = 1, .reusable = true}, SHIFT(4),
  [135] = {.count = 1, .reusable = true}, SHIFT(7),
  [137] = {.count = 1, .reusable = true}, SHIFT(11),
  [139] = {.count = 1, .reusable = true}, SHIFT(13),
  [141] = {.count = 1, .reusable = true}, SHIFT(77),
  [143] = {.count = 1, .reusable = true}, SHIFT(81),
  [145] = {.count = 1, .reusable = false}, SHIFT(80),
  [147] = {.count = 1, .reusable = true}, SHIFT(82),
  [149] = {.count = 1, .reusable = true}, SHIFT(84),
  [151] = {.count = 1, .reusable = true}, SHIFT(86),
  [153] = {.count = 1, .reusable = true}, SHIFT(85),
  [155] = {.count = 1, .reusable = true}, SHIFT(87),
  [157] = {.count = 1, .reusable = true}, SHIFT(88),
  [159] = {.count = 1, .reusable = true}, SHIFT(89),
  [161] = {.count = 1, .reusable = true}, SHIFT(90),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_math_expression, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_math_expression, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(93),
  [173] = {.count = 1, .reusable = true}, SHIFT(95),
  [175] = {.count = 1, .reusable = true}, SHIFT(94),
  [177] = {.count = 1, .reusable = true}, SHIFT(96),
  [179] = {.count = 1, .reusable = true}, SHIFT(97),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(99),
  [187] = {.count = 1, .reusable = false}, SHIFT(98),
  [189] = {.count = 1, .reusable = true}, SHIFT(100),
  [191] = {.count = 1, .reusable = true}, SHIFT(101),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(104),
  [197] = {.count = 1, .reusable = true}, SHIFT(105),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(107),
  [203] = {.count = 1, .reusable = true}, SHIFT(109),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(111),
  [211] = {.count = 1, .reusable = false}, SHIFT(113),
  [213] = {.count = 1, .reusable = true}, SHIFT(115),
  [215] = {.count = 1, .reusable = true}, SHIFT(116),
  [217] = {.count = 1, .reusable = true}, SHIFT(114),
  [219] = {.count = 1, .reusable = true}, SHIFT(117),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(119),
  [227] = {.count = 1, .reusable = true}, SHIFT(121),
  [229] = {.count = 1, .reusable = true}, SHIFT(120),
  [231] = {.count = 1, .reusable = true}, SHIFT(122),
  [233] = {.count = 1, .reusable = true}, SHIFT(123),
  [235] = {.count = 1, .reusable = true}, SHIFT(124),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(5),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(2),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(6),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(8),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(16),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(12),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(9),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(10),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(18),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat6, 2), SHIFT_REPEAT(17),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat6, 2),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat4, 2), SHIFT_REPEAT(15),
  [274] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat4, 2),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat5, 2), SHIFT_REPEAT(14),
  [279] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat5, 2),
  [281] = {.count = 1, .reusable = false}, SHIFT(130),
  [283] = {.count = 1, .reusable = true}, SHIFT(131),
  [285] = {.count = 1, .reusable = false}, SHIFT(133),
  [287] = {.count = 1, .reusable = true}, SHIFT(134),
  [289] = {.count = 1, .reusable = true}, SHIFT(135),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat2, 2), SHIFT_REPEAT(3),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat2, 2), SHIFT_REPEAT(4),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat2, 2),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat2, 2), SHIFT_REPEAT(7),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat2, 2), SHIFT_REPEAT(11),
  [305] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat3, 2),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat3, 2), SHIFT_REPEAT(13),
  [310] = {.count = 1, .reusable = true}, SHIFT(137),
  [312] = {.count = 1, .reusable = true}, SHIFT(138),
  [314] = {.count = 1, .reusable = true}, SHIFT(139),
  [316] = {.count = 1, .reusable = false}, SHIFT(140),
  [318] = {.count = 1, .reusable = true}, SHIFT(141),
  [320] = {.count = 1, .reusable = false}, SHIFT(145),
  [322] = {.count = 1, .reusable = true}, SHIFT(146),
  [324] = {.count = 1, .reusable = true}, SHIFT(150),
  [326] = {.count = 1, .reusable = true}, SHIFT(152),
  [328] = {.count = 1, .reusable = true}, SHIFT(153),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(99),
  [341] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [343] = {.count = 1, .reusable = true}, SHIFT(157),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [347] = {.count = 1, .reusable = true}, SHIFT(158),
  [349] = {.count = 1, .reusable = true}, SHIFT(160),
  [351] = {.count = 1, .reusable = true}, SHIFT(161),
  [353] = {.count = 1, .reusable = true}, SHIFT(163),
  [355] = {.count = 1, .reusable = true}, SHIFT(164),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [361] = {.count = 1, .reusable = true}, SHIFT(168),
  [363] = {.count = 1, .reusable = true}, SHIFT(169),
  [365] = {.count = 1, .reusable = true}, SHIFT(170),
  [367] = {.count = 1, .reusable = true}, SHIFT(171),
  [369] = {.count = 1, .reusable = true}, SHIFT(172),
  [371] = {.count = 1, .reusable = true}, SHIFT(173),
  [373] = {.count = 1, .reusable = true}, SHIFT(174),
  [375] = {.count = 1, .reusable = true}, SHIFT(175),
  [377] = {.count = 1, .reusable = true}, SHIFT(176),
  [379] = {.count = 1, .reusable = true}, SHIFT(181),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(52),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(54),
  [391] = {.count = 1, .reusable = true}, SHIFT(185),
  [393] = {.count = 1, .reusable = true}, SHIFT(186),
  [395] = {.count = 1, .reusable = true}, SHIFT(187),
  [397] = {.count = 1, .reusable = true}, SHIFT(188),
  [399] = {.count = 1, .reusable = true}, SHIFT(189),
  [401] = {.count = 1, .reusable = true}, SHIFT(190),
  [403] = {.count = 1, .reusable = true}, SHIFT(194),
  [405] = {.count = 1, .reusable = false}, SHIFT(198),
  [407] = {.count = 1, .reusable = true}, SHIFT(199),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 3),
  [413] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(27),
  [416] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(58),
  [419] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [421] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(29),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(60),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(31),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(32),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(33),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(34),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(35),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_math_expression, 3),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_math_expression, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_equality_expression, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_equality_expression, 3),
  [454] = {.count = 1, .reusable = true}, SHIFT(202),
  [456] = {.count = 1, .reusable = true}, SHIFT(204),
  [458] = {.count = 1, .reusable = true}, SHIFT(203),
  [460] = {.count = 1, .reusable = true}, SHIFT(205),
  [462] = {.count = 1, .reusable = true}, SHIFT(206),
  [464] = {.count = 1, .reusable = true}, SHIFT(208),
  [466] = {.count = 1, .reusable = true}, SHIFT(210),
  [468] = {.count = 1, .reusable = true}, SHIFT(209),
  [470] = {.count = 1, .reusable = true}, SHIFT(211),
  [472] = {.count = 1, .reusable = true}, SHIFT(212),
  [474] = {.count = 1, .reusable = true}, SHIFT(216),
  [476] = {.count = 1, .reusable = true}, SHIFT(218),
  [478] = {.count = 1, .reusable = true}, SHIFT(217),
  [480] = {.count = 1, .reusable = true}, SHIFT(219),
  [482] = {.count = 1, .reusable = true}, SHIFT(220),
  [484] = {.count = 1, .reusable = true}, SHIFT(221),
  [486] = {.count = 1, .reusable = true}, SHIFT(223),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(6),
  [495] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [497] = {.count = 1, .reusable = false}, SHIFT(225),
  [499] = {.count = 1, .reusable = false}, SHIFT(226),
  [501] = {.count = 1, .reusable = false}, SHIFT(227),
  [503] = {.count = 1, .reusable = true}, SHIFT(228),
  [505] = {.count = 1, .reusable = true}, SHIFT(229),
  [507] = {.count = 1, .reusable = false}, SHIFT(230),
  [509] = {.count = 1, .reusable = true}, SHIFT(231),
  [511] = {.count = 1, .reusable = true}, SHIFT(232),
  [513] = {.count = 1, .reusable = true}, SHIFT(233),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [519] = {.count = 1, .reusable = true}, SHIFT(236),
  [521] = {.count = 1, .reusable = true}, SHIFT(237),
  [523] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(107),
  [528] = {.count = 1, .reusable = true}, SHIFT(238),
  [530] = {.count = 1, .reusable = true}, SHIFT(239),
  [532] = {.count = 1, .reusable = true}, SHIFT(240),
  [534] = {.count = 1, .reusable = true}, SHIFT(242),
  [536] = {.count = 1, .reusable = true}, SHIFT(243),
  [538] = {.count = 1, .reusable = true}, SHIFT(244),
  [540] = {.count = 1, .reusable = true}, SHIFT(245),
  [542] = {.count = 1, .reusable = true}, SHIFT(246),
  [544] = {.count = 1, .reusable = true}, SHIFT(247),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(29),
  [550] = {.count = 1, .reusable = true}, SHIFT(250),
  [552] = {.count = 1, .reusable = true}, SHIFT(254),
  [554] = {.count = 1, .reusable = true}, SHIFT(255),
  [556] = {.count = 1, .reusable = true}, SHIFT(256),
  [558] = {.count = 1, .reusable = true}, SHIFT(259),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [562] = {.count = 1, .reusable = true}, SHIFT(260),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [566] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 3),
  [568] = {.count = 1, .reusable = false}, SHIFT(265),
  [570] = {.count = 1, .reusable = true}, SHIFT(267),
  [572] = {.count = 1, .reusable = true}, SHIFT(268),
  [574] = {.count = 1, .reusable = true}, SHIFT(266),
  [576] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 3),
  [578] = {.count = 1, .reusable = true}, SHIFT(269),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 4),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 4),
  [584] = {.count = 1, .reusable = true}, SHIFT(273),
  [586] = {.count = 1, .reusable = true}, SHIFT(278),
  [588] = {.count = 1, .reusable = true}, SHIFT(280),
  [590] = {.count = 1, .reusable = true}, SHIFT(281),
  [592] = {.count = 1, .reusable = true}, SHIFT(286),
  [594] = {.count = 1, .reusable = true}, SHIFT(287),
  [596] = {.count = 1, .reusable = true}, SHIFT(288),
  [598] = {.count = 1, .reusable = true}, SHIFT(291),
  [600] = {.count = 1, .reusable = true}, SHIFT(295),
  [602] = {.count = 1, .reusable = false}, SHIFT(294),
  [604] = {.count = 1, .reusable = true}, SHIFT(296),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [608] = {.count = 1, .reusable = true}, SHIFT(298),
  [610] = {.count = 1, .reusable = true}, SHIFT(299),
  [612] = {.count = 1, .reusable = true}, SHIFT(300),
  [614] = {.count = 1, .reusable = true}, SHIFT(301),
  [616] = {.count = 1, .reusable = true}, SHIFT(302),
  [618] = {.count = 1, .reusable = true}, SHIFT(303),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [628] = {.count = 1, .reusable = true}, SHIFT(311),
  [630] = {.count = 1, .reusable = true}, SHIFT(314),
  [632] = {.count = 1, .reusable = true}, SHIFT(315),
  [634] = {.count = 1, .reusable = true}, SHIFT(318),
  [636] = {.count = 1, .reusable = true}, SHIFT(320),
  [638] = {.count = 1, .reusable = true}, SHIFT(321),
  [640] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(170),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(174),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(173),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(176),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(172),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [659] = {.count = 1, .reusable = true}, SHIFT(324),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [663] = {.count = 1, .reusable = true}, SHIFT(325),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(168),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(169),
  [671] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(171),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(175),
  [679] = {.count = 1, .reusable = true}, SHIFT(326),
  [681] = {.count = 1, .reusable = true}, SHIFT(331),
  [683] = {.count = 1, .reusable = true}, SHIFT(332),
  [685] = {.count = 1, .reusable = true}, SHIFT(334),
  [687] = {.count = 1, .reusable = true}, SHIFT(336),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(185),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(168),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(169),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(186),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(171),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(187),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(175),
  [712] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(188),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(189),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(172),
  [723] = {.count = 1, .reusable = true}, SHIFT(339),
  [725] = {.count = 1, .reusable = true}, SHIFT(340),
  [727] = {.count = 1, .reusable = true}, SHIFT(341),
  [729] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 5),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 5),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(212),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 6),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 6),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [744] = {.count = 1, .reusable = true}, SHIFT(350),
  [746] = {.count = 1, .reusable = true}, SHIFT(351),
  [748] = {.count = 1, .reusable = true}, SHIFT(352),
  [750] = {.count = 1, .reusable = false}, SHIFT(353),
  [752] = {.count = 1, .reusable = true}, SHIFT(354),
  [754] = {.count = 1, .reusable = true}, SHIFT(360),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [758] = {.count = 1, .reusable = true}, SHIFT(362),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [762] = {.count = 1, .reusable = true}, SHIFT(364),
  [764] = {.count = 1, .reusable = true}, SHIFT(365),
  [766] = {.count = 1, .reusable = true}, SHIFT(366),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [772] = {.count = 1, .reusable = true}, SHIFT(368),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [776] = {.count = 1, .reusable = true}, SHIFT(369),
  [778] = {.count = 1, .reusable = true}, SHIFT(371),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym_command_part, 1),
  [782] = {.count = 1, .reusable = true}, SHIFT(372),
  [784] = {.count = 1, .reusable = true}, SHIFT(373),
  [786] = {.count = 1, .reusable = true}, SHIFT(376),
  [788] = {.count = 1, .reusable = true}, SHIFT(377),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [792] = {.count = 1, .reusable = true}, SHIFT(378),
  [794] = {.count = 1, .reusable = false}, SHIFT(381),
  [796] = {.count = 1, .reusable = true}, SHIFT(382),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [800] = {.count = 1, .reusable = true}, SHIFT(385),
  [802] = {.count = 1, .reusable = true}, SHIFT(386),
  [804] = {.count = 1, .reusable = true}, SHIFT(388),
  [806] = {.count = 1, .reusable = true}, SHIFT(390),
  [808] = {.count = 1, .reusable = true}, SHIFT(394),
  [810] = {.count = 1, .reusable = true}, SHIFT(396),
  [812] = {.count = 1, .reusable = true}, SHIFT(398),
  [814] = {.count = 1, .reusable = false}, SHIFT(399),
  [816] = {.count = 1, .reusable = true}, SHIFT(400),
  [818] = {.count = 1, .reusable = true}, SHIFT(404),
  [820] = {.count = 1, .reusable = true}, SHIFT(405),
  [822] = {.count = 1, .reusable = true}, SHIFT(406),
  [824] = {.count = 1, .reusable = true}, SHIFT(408),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [828] = {.count = 1, .reusable = false}, SHIFT(412),
  [830] = {.count = 1, .reusable = true}, SHIFT(413),
  [832] = {.count = 1, .reusable = true}, SHIFT(415),
  [834] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [836] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [838] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(6),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [843] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(6),
  [846] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [848] = {.count = 1, .reusable = false}, SHIFT(418),
  [850] = {.count = 1, .reusable = false}, SHIFT(421),
  [852] = {.count = 1, .reusable = false}, SHIFT(419),
  [854] = {.count = 1, .reusable = true}, SHIFT(420),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(314),
  [861] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(315),
  [864] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(168),
  [871] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [873] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(169),
  [876] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(171),
  [879] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(175),
  [882] = {.count = 1, .reusable = true}, SHIFT(425),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [886] = {.count = 1, .reusable = true}, SHIFT(427),
  [888] = {.count = 1, .reusable = true}, SHIFT(429),
  [890] = {.count = 1, .reusable = true}, SHIFT(430),
  [892] = {.count = 1, .reusable = true}, SHIFT(428),
  [894] = {.count = 1, .reusable = true}, SHIFT(431),
  [896] = {.count = 1, .reusable = true}, SHIFT(432),
  [898] = {.count = 1, .reusable = true}, SHIFT(434),
  [900] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(334),
  [903] = {.count = 1, .reusable = true}, SHIFT(435),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [907] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(29),
  [910] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [912] = {.count = 1, .reusable = false}, SHIFT(438),
  [914] = {.count = 1, .reusable = true}, SHIFT(439),
  [916] = {.count = 1, .reusable = true}, SHIFT(442),
  [918] = {.count = 1, .reusable = true}, SHIFT(444),
  [920] = {.count = 1, .reusable = true}, SHIFT(445),
  [922] = {.count = 1, .reusable = true}, SHIFT(443),
  [924] = {.count = 1, .reusable = true}, SHIFT(446),
  [926] = {.count = 1, .reusable = true}, SHIFT(450),
  [928] = {.count = 1, .reusable = true}, SHIFT(451),
  [930] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [932] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(362),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [937] = {.count = 1, .reusable = true}, SHIFT(453),
  [939] = {.count = 1, .reusable = true}, SHIFT(454),
  [941] = {.count = 1, .reusable = true}, SHIFT(455),
  [943] = {.count = 1, .reusable = true}, SHIFT(456),
  [945] = {.count = 1, .reusable = true}, SHIFT(457),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [951] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [955] = {.count = 1, .reusable = true}, SHIFT(459),
  [957] = {.count = 1, .reusable = true}, SHIFT(460),
  [959] = {.count = 1, .reusable = true}, SHIFT(461),
  [961] = {.count = 1, .reusable = true}, SHIFT(462),
  [963] = {.count = 1, .reusable = true}, SHIFT(463),
  [965] = {.count = 1, .reusable = true}, SHIFT(464),
  [967] = {.count = 1, .reusable = true}, SHIFT(468),
  [969] = {.count = 1, .reusable = true}, SHIFT(472),
  [971] = {.count = 1, .reusable = true}, SHIFT(474),
  [973] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [975] = {.count = 1, .reusable = true}, SHIFT(476),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [979] = {.count = 1, .reusable = true}, SHIFT(478),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [983] = {.count = 1, .reusable = true}, SHIFT(479),
  [985] = {.count = 1, .reusable = true}, SHIFT(480),
  [987] = {.count = 1, .reusable = true}, SHIFT(481),
  [989] = {.count = 1, .reusable = true}, SHIFT(482),
  [991] = {.count = 1, .reusable = true}, SHIFT(488),
  [993] = {.count = 1, .reusable = true}, SHIFT(492),
  [995] = {.count = 1, .reusable = false}, SHIFT(493),
  [997] = {.count = 1, .reusable = false}, SHIFT(494),
  [999] = {.count = 1, .reusable = false}, SHIFT(495),
  [1001] = {.count = 1, .reusable = true}, SHIFT(496),
  [1003] = {.count = 1, .reusable = true}, SHIFT(497),
  [1005] = {.count = 1, .reusable = false}, SHIFT(498),
  [1007] = {.count = 1, .reusable = true}, SHIFT(499),
  [1009] = {.count = 1, .reusable = true}, SHIFT(500),
  [1011] = {.count = 1, .reusable = true}, SHIFT(501),
  [1013] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 4),
  [1015] = {.count = 1, .reusable = true}, SHIFT(507),
  [1017] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [1019] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [1021] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(421),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [1026] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [1028] = {.count = 1, .reusable = true}, SHIFT(509),
  [1030] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [1032] = {.count = 1, .reusable = true}, SHIFT(510),
  [1034] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [1036] = {.count = 1, .reusable = true}, SHIFT(511),
  [1038] = {.count = 1, .reusable = true}, SHIFT(520),
  [1040] = {.count = 1, .reusable = true}, SHIFT(524),
  [1042] = {.count = 1, .reusable = false}, SHIFT(523),
  [1044] = {.count = 1, .reusable = true}, SHIFT(525),
  [1046] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [1050] = {.count = 1, .reusable = false}, SHIFT(527),
  [1052] = {.count = 1, .reusable = true}, SHIFT(529),
  [1054] = {.count = 1, .reusable = true}, SHIFT(530),
  [1056] = {.count = 1, .reusable = true}, SHIFT(528),
  [1058] = {.count = 1, .reusable = true}, SHIFT(532),
  [1060] = {.count = 1, .reusable = true}, SHIFT(531),
  [1062] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [1064] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 5),
  [1068] = {.count = 1, .reusable = true}, SHIFT(533),
  [1070] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [1072] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [1074] = {.count = 1, .reusable = true}, SHIFT(535),
  [1076] = {.count = 1, .reusable = true}, SHIFT(536),
  [1078] = {.count = 1, .reusable = true}, SHIFT(537),
  [1080] = {.count = 1, .reusable = true}, SHIFT(538),
  [1082] = {.count = 1, .reusable = true}, SHIFT(539),
  [1084] = {.count = 1, .reusable = true}, SHIFT(540),
  [1086] = {.count = 1, .reusable = false}, SHIFT(541),
  [1088] = {.count = 1, .reusable = true}, SHIFT(542),
  [1090] = {.count = 1, .reusable = true}, SHIFT(548),
  [1092] = {.count = 1, .reusable = true}, SHIFT(551),
  [1094] = {.count = 1, .reusable = true}, SHIFT(556),
  [1096] = {.count = 1, .reusable = true}, SHIFT(559),
  [1098] = {.count = 1, .reusable = true}, SHIFT(560),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wdl() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
