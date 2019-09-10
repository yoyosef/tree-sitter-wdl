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
#define STATE_COUNT 597
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
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
  anon_sym_SQUOTE = 14,
  aux_sym_string_literal_token2 = 15,
  sym_escape_sequence = 16,
  anon_sym_DOT = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LPAREN = 20,
  anon_sym_COMMA = 21,
  anon_sym_RPAREN = 22,
  anon_sym_if = 23,
  anon_sym_then = 24,
  anon_sym_else = 25,
  anon_sym_LBRACE = 26,
  anon_sym_COLON = 27,
  anon_sym_RBRACE = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_PIPE_PIPE = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_BANG = 36,
  anon_sym_EQ_EQ = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_LT = 39,
  anon_sym_GT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_Array = 43,
  anon_sym_Map = 44,
  anon_sym_QMARK = 45,
  anon_sym_runtime = 46,
  anon_sym_output = 47,
  anon_sym_EQ = 48,
  anon_sym_parameter_meta = 49,
  anon_sym_meta = 50,
  anon_sym_task = 51,
  anon_sym_command = 52,
  anon_sym_LT_LT_LT = 53,
  anon_sym_GT_GT_GT = 54,
  sym_command_part_string = 55,
  anon_sym_DOLLAR = 56,
  anon_sym_sep = 57,
  anon_sym_quote = 58,
  anon_sym_default = 59,
  anon_sym_call = 60,
  anon_sym_as = 61,
  anon_sym_input = 62,
  anon_sym_while = 63,
  anon_sym_import = 64,
  anon_sym_workflow = 65,
  anon_sym_scatter = 66,
  anon_sym_in = 67,
  sym_definition = 68,
  sym_identifier = 69,
  sym_boolean = 70,
  sym_primitive_type = 71,
  sym_string_literal = 72,
  sym_expression = 73,
  sym_parentheses_expression = 74,
  sym_dictionary_expression = 75,
  sym_bracket_expression = 76,
  sym_math_expression = 77,
  sym_equality_expression = 78,
  sym_type = 79,
  sym_array_type = 80,
  sym_map_type = 81,
  sym_type_postfix_quantifier = 82,
  sym_runtime = 83,
  sym_runtime_kv = 84,
  sym_task_output = 85,
  sym_task_output_kv = 86,
  sym_parameter_meta = 87,
  sym_parameter_meta_kv = 88,
  sym_meta = 89,
  sym_meta_kv = 90,
  sym_task = 91,
  sym_task_sections = 92,
  sym_declaration = 93,
  sym_command = 94,
  sym_command_part = 95,
  sym_command_part_var = 96,
  sym_var_option = 97,
  sym_var_option_key = 98,
  sym_var_option_value = 99,
  sym_call = 100,
  sym_call_body = 101,
  sym_inputs = 102,
  sym_variable_mappings = 103,
  sym_variable_mapping_kv = 104,
  sym_namespaced_identifier = 105,
  sym_loop = 106,
  sym_conditional = 107,
  sym_document = 108,
  sym_import = 109,
  sym_workflow = 110,
  sym_workflow_element = 111,
  sym_scatter = 112,
  sym_scatter_iteration_statment = 113,
  sym_scatter_body = 114,
  aux_sym_string_literal_repeat1 = 115,
  aux_sym_string_literal_repeat2 = 116,
  aux_sym_expression_repeat1 = 117,
  aux_sym_dictionary_expression_repeat1 = 118,
  aux_sym_dictionary_expression_repeat2 = 119,
  aux_sym_bracket_expression_repeat1 = 120,
  aux_sym_runtime_repeat1 = 121,
  aux_sym_task_output_repeat1 = 122,
  aux_sym_parameter_meta_repeat1 = 123,
  aux_sym_meta_repeat1 = 124,
  aux_sym_task_repeat1 = 125,
  aux_sym_task_sections_repeat1 = 126,
  aux_sym_command_repeat1 = 127,
  aux_sym_command_part_var_repeat1 = 128,
  aux_sym_variable_mappings_repeat1 = 129,
  aux_sym_namespaced_identifier_repeat1 = 130,
  aux_sym_loop_repeat1 = 131,
  aux_sym_document_repeat1 = 132,
  aux_sym_scatter_repeat1 = 133,
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
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
  [anon_sym_output] = "output",
  [anon_sym_EQ] = "=",
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
  [anon_sym_import] = "import",
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
  [sym_document] = "document",
  [sym_import] = "import",
  [sym_workflow] = "workflow",
  [sym_workflow_element] = "workflow_element",
  [sym_scatter] = "scatter",
  [sym_scatter_iteration_statment] = "scatter_iteration_statment",
  [sym_scatter_body] = "scatter_body",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_dictionary_expression_repeat1] = "dictionary_expression_repeat1",
  [aux_sym_dictionary_expression_repeat2] = "dictionary_expression_repeat2",
  [aux_sym_bracket_expression_repeat1] = "bracket_expression_repeat1",
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
  [aux_sym_document_repeat1] = "document_repeat1",
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
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
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_import] = {
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
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
  [aux_sym_dictionary_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracket_expression_repeat1] = {
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
  [aux_sym_document_repeat1] = {
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
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '\\')
        ADVANCE(30);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == 'a')
        ADVANCE(32);
      if (lookahead == 'c')
        ADVANCE(33);
      if (lookahead == 'd')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 'q')
        ADVANCE(41);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(43);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == 'w')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(51);
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
        ADVANCE(52);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(57);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 22:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'b')
        ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 't')
        ADVANCE(70);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      if (lookahead == 'U')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(72);
      if (lookahead == 'x')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(75);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      if (lookahead == 's')
        ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'a')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'f')
        ADVANCE(82);
      if (lookahead == 'm')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'a')
        ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'c')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(92);
      if (lookahead == 'h')
        ADVANCE(93);
      if (lookahead == 'r')
        ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'h')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      if (lookahead == '|')
        ADVANCE(97);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
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
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == 'a')
        ADVANCE(32);
      if (lookahead == 'c')
        ADVANCE(33);
      if (lookahead == 'd')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 'q')
        ADVANCE(41);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(43);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == 'w')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.')
        ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '<')
        ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 62:
      if (lookahead == '>')
        ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 't')
        ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'p')
        ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'j')
        ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'r')
        ADVANCE(110);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(114);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 77:
      if (lookahead == 'l')
        ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'm')
        ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'f')
        ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 's')
        ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'l')
        ADVANCE(119);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 83:
      if (lookahead == 'p')
        ADVANCE(120);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'n')
        ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'a')
        ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'p')
        ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 's')
        ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'u')
        ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 103:
      if (lookahead == 'a')
        ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(139);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(73);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'l')
        ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == 'm')
        ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'a')
        ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 's')
        ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'o')
        ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'a')
        ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 'p')
        ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'a')
        ADVANCE(148);
      END_STATE();
    case 124:
      if (lookahead == 't')
        ADVANCE(149);
      END_STATE();
    case 125:
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 't')
        ADVANCE(151);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 128:
      if (lookahead == 'k')
        ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'n')
        ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'l')
        ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'k')
        ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'y')
        ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(158);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'c')
        ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 'n')
        ADVANCE(161);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 141:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'u')
        ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(165);
      END_STATE();
    case 145:
      if (lookahead == 'r')
        ADVANCE(166);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 147:
      if (lookahead == 'u')
        ADVANCE(167);
      END_STATE();
    case 148:
      if (lookahead == 'm')
        ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'i')
        ADVANCE(170);
      END_STATE();
    case 151:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 155:
      if (lookahead == 'e')
        ADVANCE(172);
      END_STATE();
    case 156:
      if (lookahead == 'f')
        ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 158:
      if (lookahead == 'a')
        ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 160:
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 161:
      if (lookahead == 'g')
        ADVANCE(176);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      END_STATE();
    case 163:
      if (lookahead == 'n')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'l')
        ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 166:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 't')
        ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 170:
      if (lookahead == 'm')
        ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 173:
      if (lookahead == 'l')
        ADVANCE(184);
      END_STATE();
    case 174:
      if (lookahead == 'n')
        ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 177:
      if (lookahead == 'd')
        ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 181:
      if (lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(189);
      END_STATE();
    case 183:
      if (lookahead == 'r')
        ADVANCE(190);
      END_STATE();
    case 184:
      if (lookahead == 'o')
        ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 188:
      if (lookahead == 'e')
        ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 191:
      if (lookahead == 'w')
        ADVANCE(193);
      END_STATE();
    case 192:
      if (lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 194:
      if (lookahead == '_')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'm')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'a')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 200:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(202);
      if (lookahead == 'B')
        ADVANCE(203);
      if (lookahead == 'F')
        ADVANCE(204);
      if (lookahead == 'I')
        ADVANCE(205);
      if (lookahead == 'M')
        ADVANCE(206);
      if (lookahead == 'O')
        ADVANCE(207);
      if (lookahead == 'S')
        ADVANCE(208);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead == 'r')
        ADVANCE(212);
      if (lookahead == 't')
        ADVANCE(213);
      if (lookahead == 'w')
        ADVANCE(214);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 202:
      if (lookahead == 'r')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 203:
      if (lookahead == 'o')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 204:
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 205:
      if (lookahead == 'n')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 206:
      if (lookahead == 'a')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 207:
      if (lookahead == 'b')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 't')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 209:
      if (lookahead == 'a')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 210:
      if (lookahead == 'a')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 211:
      if (lookahead == 'f')
        ADVANCE(227);
      if (lookahead == 'm')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 212:
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 213:
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead == 'r')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 214:
      if (lookahead == 'o')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'j')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_object_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 280:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 281:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 282:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 284:
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 285:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 286:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 287:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 288:
      if (lookahead == 'f')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 289:
      if (lookahead == 'r')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 290:
      if (lookahead == '\n')
        SKIP(291);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(292);
      if (lookahead != 0)
        ADVANCE(293);
      END_STATE();
    case 291:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(293);
      END_STATE();
    case 294:
      if (lookahead == '\n')
        SKIP(295);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(297);
      if (lookahead != 0)
        ADVANCE(297);
      END_STATE();
    case 295:
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == 'U')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(72);
      if (lookahead == 'x')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(75);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 298:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 299:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(32);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(302);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(299);
      END_STATE();
    case 300:
      if (lookahead == 'm')
        ADVANCE(83);
      END_STATE();
    case 301:
      if (lookahead == 'a')
        ADVANCE(92);
      END_STATE();
    case 302:
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 303:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 304:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'c')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(306);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      END_STATE();
    case 305:
      if (lookahead == 'f')
        ADVANCE(82);
      END_STATE();
    case 306:
      if (lookahead == 'c')
        ADVANCE(90);
      END_STATE();
    case 307:
      if (lookahead == 'h')
        ADVANCE(93);
      END_STATE();
    case 308:
      if (lookahead == 'h')
        ADVANCE(95);
      END_STATE();
    case 309:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(32);
      if (lookahead == 'c')
        ADVANCE(33);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(306);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(309);
      END_STATE();
    case 310:
      if (lookahead == 'f')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 311:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(311);
      END_STATE();
    case 312:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(312);
      END_STATE();
    case 313:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 314:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 315:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(32);
      if (lookahead == 'c')
        ADVANCE(316);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 's')
        ADVANCE(306);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(315);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(77);
      END_STATE();
    case 317:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(317);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 318:
      if (lookahead == 'i')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(318);
      END_STATE();
    case 319:
      if (lookahead == 'n')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'p')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'u')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 324:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'c')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      END_STATE();
    case 325:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 326:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      END_STATE();
    case 327:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    case 328:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 329:
      if (lookahead == '<')
        ADVANCE(330);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      END_STATE();
    case 330:
      if (lookahead == '<')
        ADVANCE(58);
      END_STATE();
    case 331:
      if (lookahead == 'A')
        ADVANCE(202);
      if (lookahead == 'B')
        ADVANCE(203);
      if (lookahead == 'F')
        ADVANCE(204);
      if (lookahead == 'I')
        ADVANCE(205);
      if (lookahead == 'M')
        ADVANCE(206);
      if (lookahead == 'O')
        ADVANCE(207);
      if (lookahead == 'S')
        ADVANCE(208);
      if (lookahead == 'c')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'p')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(334);
      if (lookahead == 'w')
        ADVANCE(335);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 332:
      if (lookahead == 'e')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 333:
      if (lookahead == 'a')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 334:
      if (lookahead == 'c')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 335:
      if (lookahead == 'h')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 362:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(283);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'c')
        ADVANCE(316);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 's')
        ADVANCE(306);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(362);
      END_STATE();
    case 363:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(364);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      END_STATE();
    case 364:
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_command_part_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      END_STATE();
    case 366:
      if (lookahead == 'c')
        ADVANCE(367);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(368);
      if (lookahead == 'p')
        ADVANCE(333);
      if (lookahead == 'r')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 367:
      if (lookahead == 'o')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 368:
      if (lookahead == 'u')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 380:
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(23);
      if (lookahead == 'F')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'M')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'm')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'p')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(306);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(380);
      END_STATE();
    case 381:
      if (lookahead == 'i')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(381);
      END_STATE();
    case 382:
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 383:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      END_STATE();
    case 384:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      END_STATE();
    case 385:
      if (lookahead == '!')
        ADVANCE(282);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(284);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'd')
        ADVANCE(386);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'q')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(388);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(385);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 386:
      if (lookahead == 'e')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 387:
      if (lookahead == 'u')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 388:
      if (lookahead == 'e')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 200},
  [2] = {.lex_state = 280},
  [3] = {.lex_state = 281},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 286},
  [6] = {.lex_state = 280},
  [7] = {.lex_state = 200},
  [8] = {.lex_state = 287},
  [9] = {.lex_state = 287},
  [10] = {.lex_state = 287},
  [11] = {.lex_state = 290},
  [12] = {.lex_state = 294},
  [13] = {.lex_state = 281},
  [14] = {.lex_state = 298},
  [15] = {.lex_state = 200},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 200},
  [18] = {.lex_state = 200},
  [19] = {.lex_state = 280},
  [20] = {.lex_state = 280},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 299},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 281},
  [25] = {.lex_state = 280},
  [26] = {.lex_state = 280},
  [27] = {.lex_state = 200},
  [28] = {.lex_state = 294},
  [29] = {.lex_state = 290},
  [30] = {.lex_state = 299},
  [31] = {.lex_state = 281},
  [32] = {.lex_state = 303},
  [33] = {.lex_state = 298},
  [34] = {.lex_state = 281},
  [35] = {.lex_state = 303},
  [36] = {.lex_state = 287},
  [37] = {.lex_state = 287},
  [38] = {.lex_state = 303},
  [39] = {.lex_state = 287},
  [40] = {.lex_state = 290},
  [41] = {.lex_state = 287},
  [42] = {.lex_state = 294},
  [43] = {.lex_state = 287},
  [44] = {.lex_state = 287},
  [45] = {.lex_state = 304},
  [46] = {.lex_state = 298},
  [47] = {.lex_state = 309},
  [48] = {.lex_state = 287},
  [49] = {.lex_state = 287},
  [50] = {.lex_state = 304},
  [51] = {.lex_state = 287},
  [52] = {.lex_state = 290},
  [53] = {.lex_state = 287},
  [54] = {.lex_state = 294},
  [55] = {.lex_state = 311},
  [56] = {.lex_state = 281},
  [57] = {.lex_state = 290},
  [58] = {.lex_state = 294},
  [59] = {.lex_state = 281},
  [60] = {.lex_state = 287},
  [61] = {.lex_state = 287},
  [62] = {.lex_state = 312},
  [63] = {.lex_state = 298},
  [64] = {.lex_state = 299},
  [65] = {.lex_state = 287},
  [66] = {.lex_state = 287},
  [67] = {.lex_state = 313},
  [68] = {.lex_state = 314},
  [69] = {.lex_state = 299},
  [70] = {.lex_state = 315},
  [71] = {.lex_state = 299},
  [72] = {.lex_state = 315},
  [73] = {.lex_state = 200},
  [74] = {.lex_state = 299},
  [75] = {.lex_state = 287},
  [76] = {.lex_state = 287},
  [77] = {.lex_state = 317},
  [78] = {.lex_state = 287},
  [79] = {.lex_state = 287},
  [80] = {.lex_state = 287},
  [81] = {.lex_state = 315},
  [82] = {.lex_state = 299},
  [83] = {.lex_state = 294},
  [84] = {.lex_state = 290},
  [85] = {.lex_state = 280},
  [86] = {.lex_state = 303},
  [87] = {.lex_state = 312},
  [88] = {.lex_state = 298},
  [89] = {.lex_state = 313},
  [90] = {.lex_state = 303},
  [91] = {.lex_state = 311},
  [92] = {.lex_state = 303},
  [93] = {.lex_state = 290},
  [94] = {.lex_state = 303},
  [95] = {.lex_state = 287},
  [96] = {.lex_state = 294},
  [97] = {.lex_state = 287},
  [98] = {.lex_state = 287},
  [99] = {.lex_state = 317},
  [100] = {.lex_state = 287},
  [101] = {.lex_state = 287},
  [102] = {.lex_state = 287},
  [103] = {.lex_state = 281},
  [104] = {.lex_state = 287},
  [105] = {.lex_state = 304},
  [106] = {.lex_state = 312},
  [107] = {.lex_state = 298},
  [108] = {.lex_state = 313},
  [109] = {.lex_state = 304},
  [110] = {.lex_state = 311},
  [111] = {.lex_state = 304},
  [112] = {.lex_state = 290},
  [113] = {.lex_state = 304},
  [114] = {.lex_state = 287},
  [115] = {.lex_state = 294},
  [116] = {.lex_state = 287},
  [117] = {.lex_state = 287},
  [118] = {.lex_state = 317},
  [119] = {.lex_state = 287},
  [120] = {.lex_state = 287},
  [121] = {.lex_state = 287},
  [122] = {.lex_state = 287},
  [123] = {.lex_state = 281},
  [124] = {.lex_state = 290},
  [125] = {.lex_state = 294},
  [126] = {.lex_state = 311},
  [127] = {.lex_state = 287},
  [128] = {.lex_state = 287},
  [129] = {.lex_state = 287},
  [130] = {.lex_state = 287},
  [131] = {.lex_state = 287},
  [132] = {.lex_state = 281},
  [133] = {.lex_state = 312},
  [134] = {.lex_state = 298},
  [135] = {.lex_state = 298},
  [136] = {.lex_state = 311},
  [137] = {.lex_state = 287},
  [138] = {.lex_state = 287},
  [139] = {.lex_state = 287},
  [140] = {.lex_state = 287},
  [141] = {.lex_state = 281},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 314},
  [144] = {.lex_state = 312},
  [145] = {.lex_state = 287},
  [146] = {.lex_state = 280},
  [147] = {.lex_state = 318},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 280},
  [150] = {.lex_state = 315},
  [151] = {.lex_state = 324},
  [152] = {.lex_state = 281},
  [153] = {.lex_state = 281},
  [154] = {.lex_state = 281},
  [155] = {.lex_state = 287},
  [156] = {.lex_state = 287},
  [157] = {.lex_state = 313},
  [158] = {.lex_state = 281},
  [159] = {.lex_state = 281},
  [160] = {.lex_state = 287},
  [161] = {.lex_state = 287},
  [162] = {.lex_state = 326},
  [163] = {.lex_state = 200},
  [164] = {.lex_state = 200},
  [165] = {.lex_state = 200},
  [166] = {.lex_state = 200},
  [167] = {.lex_state = 200},
  [168] = {.lex_state = 280},
  [169] = {.lex_state = 299},
  [170] = {.lex_state = 315},
  [171] = {.lex_state = 315},
  [172] = {.lex_state = 280},
  [173] = {.lex_state = 299},
  [174] = {.lex_state = 299},
  [175] = {.lex_state = 299},
  [176] = {.lex_state = 287},
  [177] = {.lex_state = 303},
  [178] = {.lex_state = 303},
  [179] = {.lex_state = 287},
  [180] = {.lex_state = 303},
  [181] = {.lex_state = 303},
  [182] = {.lex_state = 287},
  [183] = {.lex_state = 303},
  [184] = {.lex_state = 303},
  [185] = {.lex_state = 313},
  [186] = {.lex_state = 287},
  [187] = {.lex_state = 287},
  [188] = {.lex_state = 326},
  [189] = {.lex_state = 287},
  [190] = {.lex_state = 304},
  [191] = {.lex_state = 304},
  [192] = {.lex_state = 287},
  [193] = {.lex_state = 304},
  [194] = {.lex_state = 304},
  [195] = {.lex_state = 311},
  [196] = {.lex_state = 304},
  [197] = {.lex_state = 304},
  [198] = {.lex_state = 313},
  [199] = {.lex_state = 311},
  [200] = {.lex_state = 311},
  [201] = {.lex_state = 326},
  [202] = {.lex_state = 287},
  [203] = {.lex_state = 287},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 287},
  [206] = {.lex_state = 312},
  [207] = {.lex_state = 312},
  [208] = {.lex_state = 312},
  [209] = {.lex_state = 287},
  [210] = {.lex_state = 287},
  [211] = {.lex_state = 298},
  [212] = {.lex_state = 287},
  [213] = {.lex_state = 299},
  [214] = {.lex_state = 287},
  [215] = {.lex_state = 313},
  [216] = {.lex_state = 313},
  [217] = {.lex_state = 313},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 314},
  [220] = {.lex_state = 287},
  [221] = {.lex_state = 328},
  [222] = {.lex_state = 200},
  [223] = {.lex_state = 312},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 298},
  [226] = {.lex_state = 315},
  [227] = {.lex_state = 315},
  [228] = {.lex_state = 200},
  [229] = {.lex_state = 329},
  [230] = {.lex_state = 200},
  [231] = {.lex_state = 200},
  [232] = {.lex_state = 324},
  [233] = {.lex_state = 298},
  [234] = {.lex_state = 324},
  [235] = {.lex_state = 280},
  [236] = {.lex_state = 311},
  [237] = {.lex_state = 287},
  [238] = {.lex_state = 287},
  [239] = {.lex_state = 287},
  [240] = {.lex_state = 287},
  [241] = {.lex_state = 287},
  [242] = {.lex_state = 281},
  [243] = {.lex_state = 313},
  [244] = {.lex_state = 311},
  [245] = {.lex_state = 287},
  [246] = {.lex_state = 287},
  [247] = {.lex_state = 287},
  [248] = {.lex_state = 287},
  [249] = {.lex_state = 314},
  [250] = {.lex_state = 287},
  [251] = {.lex_state = 287},
  [252] = {.lex_state = 331},
  [253] = {.lex_state = 313},
  [254] = {.lex_state = 315},
  [255] = {.lex_state = 315},
  [256] = {.lex_state = 299},
  [257] = {.lex_state = 315},
  [258] = {.lex_state = 362},
  [259] = {.lex_state = 298},
  [260] = {.lex_state = 327},
  [261] = {.lex_state = 303},
  [262] = {.lex_state = 313},
  [263] = {.lex_state = 298},
  [264] = {.lex_state = 327},
  [265] = {.lex_state = 304},
  [266] = {.lex_state = 313},
  [267] = {.lex_state = 311},
  [268] = {.lex_state = 287},
  [269] = {.lex_state = 287},
  [270] = {.lex_state = 287},
  [271] = {.lex_state = 287},
  [272] = {.lex_state = 287},
  [273] = {.lex_state = 327},
  [274] = {.lex_state = 311},
  [275] = {.lex_state = 287},
  [276] = {.lex_state = 287},
  [277] = {.lex_state = 287},
  [278] = {.lex_state = 287},
  [279] = {.lex_state = 287},
  [280] = {.lex_state = 298},
  [281] = {.lex_state = 287},
  [282] = {.lex_state = 287},
  [283] = {.lex_state = 298},
  [284] = {.lex_state = 287},
  [285] = {.lex_state = 327},
  [286] = {.lex_state = 287},
  [287] = {.lex_state = 287},
  [288] = {.lex_state = 314},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 280},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 315},
  [293] = {.lex_state = 363},
  [294] = {.lex_state = 363},
  [295] = {.lex_state = 366},
  [296] = {.lex_state = 314},
  [297] = {.lex_state = 324},
  [298] = {.lex_state = 299},
  [299] = {.lex_state = 298},
  [300] = {.lex_state = 324},
  [301] = {.lex_state = 324},
  [302] = {.lex_state = 287},
  [303] = {.lex_state = 313},
  [304] = {.lex_state = 313},
  [305] = {.lex_state = 313},
  [306] = {.lex_state = 313},
  [307] = {.lex_state = 281},
  [308] = {.lex_state = 313},
  [309] = {.lex_state = 287},
  [310] = {.lex_state = 326},
  [311] = {.lex_state = 326},
  [312] = {.lex_state = 326},
  [313] = {.lex_state = 380},
  [314] = {.lex_state = 314},
  [315] = {.lex_state = 324},
  [316] = {.lex_state = 313},
  [317] = {.lex_state = 313},
  [318] = {.lex_state = 298},
  [319] = {.lex_state = 331},
  [320] = {.lex_state = 324},
  [321] = {.lex_state = 200},
  [322] = {.lex_state = 313},
  [323] = {.lex_state = 381},
  [324] = {.lex_state = 280},
  [325] = {.lex_state = 318},
  [326] = {.lex_state = 315},
  [327] = {.lex_state = 280},
  [328] = {.lex_state = 315},
  [329] = {.lex_state = 287},
  [330] = {.lex_state = 298},
  [331] = {.lex_state = 287},
  [332] = {.lex_state = 303},
  [333] = {.lex_state = 298},
  [334] = {.lex_state = 287},
  [335] = {.lex_state = 304},
  [336] = {.lex_state = 287},
  [337] = {.lex_state = 327},
  [338] = {.lex_state = 327},
  [339] = {.lex_state = 327},
  [340] = {.lex_state = 281},
  [341] = {.lex_state = 287},
  [342] = {.lex_state = 287},
  [343] = {.lex_state = 312},
  [344] = {.lex_state = 298},
  [345] = {.lex_state = 298},
  [346] = {.lex_state = 298},
  [347] = {.lex_state = 281},
  [348] = {.lex_state = 298},
  [349] = {.lex_state = 311},
  [350] = {.lex_state = 287},
  [351] = {.lex_state = 287},
  [352] = {.lex_state = 287},
  [353] = {.lex_state = 287},
  [354] = {.lex_state = 328},
  [355] = {.lex_state = 287},
  [356] = {.lex_state = 311},
  [357] = {.lex_state = 287},
  [358] = {.lex_state = 287},
  [359] = {.lex_state = 287},
  [360] = {.lex_state = 287},
  [361] = {.lex_state = 298},
  [362] = {.lex_state = 298},
  [363] = {.lex_state = 324},
  [364] = {.lex_state = 324},
  [365] = {.lex_state = 315},
  [366] = {.lex_state = 280},
  [367] = {.lex_state = 363},
  [368] = {.lex_state = 200},
  [369] = {.lex_state = 383},
  [370] = {.lex_state = 384},
  [371] = {.lex_state = 298},
  [372] = {.lex_state = 366},
  [373] = {.lex_state = 324},
  [374] = {.lex_state = 314},
  [375] = {.lex_state = 299},
  [376] = {.lex_state = 287},
  [377] = {.lex_state = 327},
  [378] = {.lex_state = 327},
  [379] = {.lex_state = 380},
  [380] = {.lex_state = 314},
  [381] = {.lex_state = 200},
  [382] = {.lex_state = 200},
  [383] = {.lex_state = 200},
  [384] = {.lex_state = 331},
  [385] = {.lex_state = 331},
  [386] = {.lex_state = 200},
  [387] = {.lex_state = 315},
  [388] = {.lex_state = 315},
  [389] = {.lex_state = 200},
  [390] = {.lex_state = 313},
  [391] = {.lex_state = 287},
  [392] = {.lex_state = 315},
  [393] = {.lex_state = 315},
  [394] = {.lex_state = 298},
  [395] = {.lex_state = 315},
  [396] = {.lex_state = 315},
  [397] = {.lex_state = 287},
  [398] = {.lex_state = 287},
  [399] = {.lex_state = 362},
  [400] = {.lex_state = 303},
  [401] = {.lex_state = 287},
  [402] = {.lex_state = 304},
  [403] = {.lex_state = 311},
  [404] = {.lex_state = 327},
  [405] = {.lex_state = 312},
  [406] = {.lex_state = 327},
  [407] = {.lex_state = 287},
  [408] = {.lex_state = 287},
  [409] = {.lex_state = 298},
  [410] = {.lex_state = 298},
  [411] = {.lex_state = 298},
  [412] = {.lex_state = 313},
  [413] = {.lex_state = 287},
  [414] = {.lex_state = 314},
  [415] = {.lex_state = 314},
  [416] = {.lex_state = 314},
  [417] = {.lex_state = 280},
  [418] = {.lex_state = 298},
  [419] = {.lex_state = 287},
  [420] = {.lex_state = 324},
  [421] = {.lex_state = 315},
  [422] = {.lex_state = 324},
  [423] = {.lex_state = 385},
  [424] = {.lex_state = 324},
  [425] = {.lex_state = 383},
  [426] = {.lex_state = 384},
  [427] = {.lex_state = 366},
  [428] = {.lex_state = 366},
  [429] = {.lex_state = 324},
  [430] = {.lex_state = 287},
  [431] = {.lex_state = 287},
  [432] = {.lex_state = 324},
  [433] = {.lex_state = 287},
  [434] = {.lex_state = 287},
  [435] = {.lex_state = 314},
  [436] = {.lex_state = 315},
  [437] = {.lex_state = 315},
  [438] = {.lex_state = 298},
  [439] = {.lex_state = 315},
  [440] = {.lex_state = 315},
  [441] = {.lex_state = 315},
  [442] = {.lex_state = 287},
  [443] = {.lex_state = 287},
  [444] = {.lex_state = 313},
  [445] = {.lex_state = 315},
  [446] = {.lex_state = 315},
  [447] = {.lex_state = 311},
  [448] = {.lex_state = 287},
  [449] = {.lex_state = 287},
  [450] = {.lex_state = 287},
  [451] = {.lex_state = 287},
  [452] = {.lex_state = 287},
  [453] = {.lex_state = 287},
  [454] = {.lex_state = 287},
  [455] = {.lex_state = 287},
  [456] = {.lex_state = 314},
  [457] = {.lex_state = 327},
  [458] = {.lex_state = 327},
  [459] = {.lex_state = 298},
  [460] = {.lex_state = 298},
  [461] = {.lex_state = 314},
  [462] = {.lex_state = 200},
  [463] = {.lex_state = 324},
  [464] = {.lex_state = 324},
  [465] = {.lex_state = 287},
  [466] = {.lex_state = 287},
  [467] = {.lex_state = 324},
  [468] = {.lex_state = 314},
  [469] = {.lex_state = 385},
  [470] = {.lex_state = 311},
  [471] = {.lex_state = 287},
  [472] = {.lex_state = 287},
  [473] = {.lex_state = 287},
  [474] = {.lex_state = 287},
  [475] = {.lex_state = 313},
  [476] = {.lex_state = 326},
  [477] = {.lex_state = 315},
  [478] = {.lex_state = 315},
  [479] = {.lex_state = 315},
  [480] = {.lex_state = 315},
  [481] = {.lex_state = 315},
  [482] = {.lex_state = 311},
  [483] = {.lex_state = 287},
  [484] = {.lex_state = 287},
  [485] = {.lex_state = 287},
  [486] = {.lex_state = 287},
  [487] = {.lex_state = 287},
  [488] = {.lex_state = 362},
  [489] = {.lex_state = 362},
  [490] = {.lex_state = 362},
  [491] = {.lex_state = 327},
  [492] = {.lex_state = 298},
  [493] = {.lex_state = 311},
  [494] = {.lex_state = 287},
  [495] = {.lex_state = 287},
  [496] = {.lex_state = 287},
  [497] = {.lex_state = 287},
  [498] = {.lex_state = 287},
  [499] = {.lex_state = 287},
  [500] = {.lex_state = 315},
  [501] = {.lex_state = 311},
  [502] = {.lex_state = 287},
  [503] = {.lex_state = 287},
  [504] = {.lex_state = 287},
  [505] = {.lex_state = 287},
  [506] = {.lex_state = 287},
  [507] = {.lex_state = 363},
  [508] = {.lex_state = 314},
  [509] = {.lex_state = 385},
  [510] = {.lex_state = 287},
  [511] = {.lex_state = 324},
  [512] = {.lex_state = 324},
  [513] = {.lex_state = 324},
  [514] = {.lex_state = 315},
  [515] = {.lex_state = 315},
  [516] = {.lex_state = 287},
  [517] = {.lex_state = 313},
  [518] = {.lex_state = 313},
  [519] = {.lex_state = 313},
  [520] = {.lex_state = 327},
  [521] = {.lex_state = 287},
  [522] = {.lex_state = 314},
  [523] = {.lex_state = 314},
  [524] = {.lex_state = 314},
  [525] = {.lex_state = 298},
  [526] = {.lex_state = 314},
  [527] = {.lex_state = 287},
  [528] = {.lex_state = 385},
  [529] = {.lex_state = 298},
  [530] = {.lex_state = 385},
  [531] = {.lex_state = 287},
  [532] = {.lex_state = 287},
  [533] = {.lex_state = 385},
  [534] = {.lex_state = 287},
  [535] = {.lex_state = 290},
  [536] = {.lex_state = 287},
  [537] = {.lex_state = 294},
  [538] = {.lex_state = 385},
  [539] = {.lex_state = 385},
  [540] = {.lex_state = 314},
  [541] = {.lex_state = 314},
  [542] = {.lex_state = 314},
  [543] = {.lex_state = 363},
  [544] = {.lex_state = 327},
  [545] = {.lex_state = 327},
  [546] = {.lex_state = 287},
  [547] = {.lex_state = 327},
  [548] = {.lex_state = 327},
  [549] = {.lex_state = 385},
  [550] = {.lex_state = 312},
  [551] = {.lex_state = 298},
  [552] = {.lex_state = 313},
  [553] = {.lex_state = 385},
  [554] = {.lex_state = 311},
  [555] = {.lex_state = 385},
  [556] = {.lex_state = 290},
  [557] = {.lex_state = 385},
  [558] = {.lex_state = 287},
  [559] = {.lex_state = 294},
  [560] = {.lex_state = 287},
  [561] = {.lex_state = 287},
  [562] = {.lex_state = 317},
  [563] = {.lex_state = 287},
  [564] = {.lex_state = 287},
  [565] = {.lex_state = 287},
  [566] = {.lex_state = 287},
  [567] = {.lex_state = 287},
  [568] = {.lex_state = 362},
  [569] = {.lex_state = 287},
  [570] = {.lex_state = 287},
  [571] = {.lex_state = 287},
  [572] = {.lex_state = 385},
  [573] = {.lex_state = 385},
  [574] = {.lex_state = 287},
  [575] = {.lex_state = 385},
  [576] = {.lex_state = 385},
  [577] = {.lex_state = 385},
  [578] = {.lex_state = 385},
  [579] = {.lex_state = 385},
  [580] = {.lex_state = 313},
  [581] = {.lex_state = 385},
  [582] = {.lex_state = 385},
  [583] = {.lex_state = 326},
  [584] = {.lex_state = 324},
  [585] = {.lex_state = 313},
  [586] = {.lex_state = 314},
  [587] = {.lex_state = 314},
  [588] = {.lex_state = 298},
  [589] = {.lex_state = 327},
  [590] = {.lex_state = 385},
  [591] = {.lex_state = 313},
  [592] = {.lex_state = 298},
  [593] = {.lex_state = 287},
  [594] = {.lex_state = 385},
  [595] = {.lex_state = 385},
  [596] = {.lex_state = 385},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [sym_object_type] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_parameter_meta] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_scatter] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_sep] = ACTIONS(1),
    [anon_sym_task] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
  },
  [1] = {
    [sym_primitive_type] = STATE(5),
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_document] = STATE(21),
    [sym_map_type] = STATE(5),
    [aux_sym_document_repeat1] = STATE(22),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [sym_type] = STATE(21),
    [sym_array_type] = STATE(5),
    [sym_call] = STATE(21),
    [sym_task] = STATE(22),
    [sym_definition] = STATE(23),
    [sym_expression] = STATE(24),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_import] = STATE(22),
    [sym_runtime] = STATE(21),
    [sym_workflow] = STATE(22),
    [anon_sym_File] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_workflow] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_Float] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_Int] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_runtime] = ACTIONS(33),
    [anon_sym_String] = ACTIONS(3),
    [anon_sym_Array] = ACTIONS(35),
    [sym_integer] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(3),
    [anon_sym_call] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_task] = ACTIONS(39),
  },
  [2] = {
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [aux_sym_identifier_token1] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [3] = {
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
  },
  [4] = {
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [aux_sym_identifier_token1] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
  },
  [5] = {
    [sym_type_postfix_quantifier] = STATE(26),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_QMARK] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_identifier_token1] = ACTIONS(51),
  },
  [6] = {
    [sym_identifier] = STATE(27),
    [aux_sym_identifier_token1] = ACTIONS(53),
  },
  [7] = {
    [sym_string_literal] = STATE(30),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
  },
  [8] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(15),
  },
  [9] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(44),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_float] = ACTIONS(69),
  },
  [10] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(55),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [11] = {
    [aux_sym_string_literal_repeat1] = STATE(57),
    [aux_sym_string_literal_token1] = ACTIONS(101),
    [sym_escape_sequence] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
  },
  [12] = {
    [aux_sym_string_literal_repeat2] = STATE(58),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [aux_sym_string_literal_token2] = ACTIONS(105),
    [sym_escape_sequence] = ACTIONS(107),
  },
  [13] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [aux_sym_identifier_token1] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
  },
  [14] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(63),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(62),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [15] = {
    [anon_sym_LBRACK] = ACTIONS(117),
  },
  [16] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(67),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(123),
  },
  [18] = {
    [anon_sym_LBRACK] = ACTIONS(125),
  },
  [19] = {
    [sym_namespaced_identifier] = STATE(71),
    [sym_identifier] = STATE(72),
    [aux_sym_identifier_token1] = ACTIONS(127),
  },
  [20] = {
    [sym_identifier] = STATE(73),
    [aux_sym_identifier_token1] = ACTIONS(53),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(129),
  },
  [22] = {
    [sym_import] = STATE(74),
    [sym_workflow] = STATE(74),
    [sym_task] = STATE(74),
    [aux_sym_document_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_workflow] = ACTIONS(133),
    [anon_sym_task] = ACTIONS(135),
    [anon_sym_import] = ACTIONS(137),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(139),
  },
  [24] = {
    [anon_sym_EQ_EQ] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(149),
  },
  [25] = {
    [aux_sym_identifier_token1] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(153),
  },
  [26] = {
    [aux_sym_identifier_token1] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
  },
  [27] = {
    [anon_sym_LBRACE] = ACTIONS(157),
  },
  [28] = {
    [aux_sym_string_literal_repeat2] = STATE(83),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [aux_sym_string_literal_token2] = ACTIONS(161),
    [sym_escape_sequence] = ACTIONS(163),
  },
  [29] = {
    [aux_sym_string_literal_repeat1] = STATE(84),
    [aux_sym_string_literal_token1] = ACTIONS(165),
    [sym_escape_sequence] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(159),
  },
  [30] = {
    [anon_sym_as] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_workflow] = ACTIONS(169),
    [anon_sym_task] = ACTIONS(169),
    [anon_sym_import] = ACTIONS(169),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [aux_sym_identifier_token1] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(173),
    [aux_sym_identifier_token1] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_float] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [sym_integer] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
  },
  [33] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(88),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(87),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [aux_sym_identifier_token1] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
    [aux_sym_identifier_token1] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [sym_integer] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
  },
  [36] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(89),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [37] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(90),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(179),
    [aux_sym_identifier_token1] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_float] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [sym_integer] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
  },
  [39] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(91),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [40] = {
    [aux_sym_string_literal_repeat1] = STATE(93),
    [aux_sym_string_literal_token1] = ACTIONS(181),
    [sym_escape_sequence] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
  },
  [41] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(95),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(185),
    [sym_float] = ACTIONS(69),
  },
  [42] = {
    [aux_sym_string_literal_repeat2] = STATE(96),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_string_literal_token2] = ACTIONS(187),
    [sym_escape_sequence] = ACTIONS(189),
  },
  [43] = {
    [anon_sym_true] = ACTIONS(191),
    [aux_sym_identifier_token1] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_float] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(205),
    [sym_integer] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(201),
  },
  [44] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(104),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_float] = ACTIONS(69),
  },
  [45] = {
    [anon_sym_output] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_meta] = ACTIONS(43),
    [anon_sym_Float] = ACTIONS(43),
    [anon_sym_Int] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_Array] = ACTIONS(43),
    [anon_sym_call] = ACTIONS(43),
    [anon_sym_File] = ACTIONS(43),
    [sym_object_type] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_Map] = ACTIONS(43),
    [anon_sym_runtime] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_command] = ACTIONS(43),
    [anon_sym_parameter_meta] = ACTIONS(43),
    [anon_sym_String] = ACTIONS(43),
    [anon_sym_scatter] = ACTIONS(43),
    [anon_sym_Boolean] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_then] = ACTIONS(43),
  },
  [46] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(107),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(106),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [47] = {
    [anon_sym_output] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(45),
    [anon_sym_meta] = ACTIONS(45),
    [anon_sym_Float] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_Int] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_call] = ACTIONS(45),
    [anon_sym_File] = ACTIONS(45),
    [sym_object_type] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_Map] = ACTIONS(45),
    [anon_sym_runtime] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_command] = ACTIONS(45),
    [anon_sym_parameter_meta] = ACTIONS(45),
    [anon_sym_String] = ACTIONS(45),
    [anon_sym_scatter] = ACTIONS(45),
    [anon_sym_Boolean] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_else] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_then] = ACTIONS(45),
  },
  [48] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(108),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [49] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(109),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [50] = {
    [anon_sym_output] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_meta] = ACTIONS(109),
    [anon_sym_Float] = ACTIONS(109),
    [anon_sym_Int] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_Array] = ACTIONS(109),
    [anon_sym_call] = ACTIONS(109),
    [anon_sym_File] = ACTIONS(109),
    [sym_object_type] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_Map] = ACTIONS(109),
    [anon_sym_runtime] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_command] = ACTIONS(109),
    [anon_sym_parameter_meta] = ACTIONS(109),
    [anon_sym_String] = ACTIONS(109),
    [anon_sym_scatter] = ACTIONS(109),
    [anon_sym_Boolean] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_else] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_then] = ACTIONS(109),
  },
  [51] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(110),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [52] = {
    [aux_sym_string_literal_repeat1] = STATE(112),
    [aux_sym_string_literal_token1] = ACTIONS(211),
    [sym_escape_sequence] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(213),
  },
  [53] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(114),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_float] = ACTIONS(69),
  },
  [54] = {
    [aux_sym_string_literal_repeat2] = STATE(115),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [aux_sym_string_literal_token2] = ACTIONS(217),
    [sym_escape_sequence] = ACTIONS(219),
  },
  [55] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(233),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_identifier_token1] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
  },
  [57] = {
    [aux_sym_string_literal_repeat1] = STATE(124),
    [aux_sym_string_literal_token1] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(239),
  },
  [58] = {
    [aux_sym_string_literal_repeat2] = STATE(125),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [aux_sym_string_literal_token2] = ACTIONS(241),
    [sym_escape_sequence] = ACTIONS(243),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [aux_sym_identifier_token1] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
  },
  [60] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [61] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(126),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [62] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [63] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(133),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [64] = {
    [sym_primitive_type] = STATE(135),
    [anon_sym_File] = ACTIONS(259),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
  },
  [65] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [66] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(136),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [67] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [68] = {
    [sym_runtime_kv] = STATE(143),
    [aux_sym_runtime_repeat1] = STATE(143),
    [sym_identifier] = STATE(144),
    [aux_sym_identifier_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(271),
  },
  [69] = {
    [sym_array_type] = STATE(145),
    [sym_primitive_type] = STATE(145),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_File] = ACTIONS(259),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Float] = ACTIONS(259),
    [sym_object_type] = ACTIONS(273),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
  },
  [70] = {
    [anon_sym_as] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
  },
  [71] = {
    [sym_call_body] = STATE(148),
    [anon_sym_as] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(281),
  },
  [72] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(150),
    [anon_sym_as] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(285),
  },
  [73] = {
    [anon_sym_LBRACE] = ACTIONS(287),
  },
  [74] = {
    [sym_import] = STATE(74),
    [sym_workflow] = STATE(74),
    [sym_task] = STATE(74),
    [aux_sym_document_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_workflow] = ACTIONS(291),
    [anon_sym_task] = ACTIONS(294),
    [anon_sym_import] = ACTIONS(297),
  },
  [75] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(152),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(15),
  },
  [76] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(15),
  },
  [77] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(157),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [78] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(158),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(15),
  },
  [79] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(159),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(15),
  },
  [80] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(162),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [81] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(171),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(171),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(326),
  },
  [82] = {
    [anon_sym_as] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_workflow] = ACTIONS(235),
    [anon_sym_task] = ACTIONS(235),
    [anon_sym_import] = ACTIONS(235),
  },
  [83] = {
    [aux_sym_string_literal_repeat2] = STATE(125),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [aux_sym_string_literal_token2] = ACTIONS(241),
    [sym_escape_sequence] = ACTIONS(243),
  },
  [84] = {
    [aux_sym_string_literal_repeat1] = STATE(124),
    [aux_sym_string_literal_token1] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(328),
  },
  [85] = {
    [sym_identifier] = STATE(175),
    [aux_sym_identifier_token1] = ACTIONS(330),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(332),
    [aux_sym_identifier_token1] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_float] = ACTIONS(332),
    [anon_sym_false] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [sym_integer] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
  },
  [87] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [88] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(133),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [89] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(340),
    [aux_sym_identifier_token1] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [sym_float] = ACTIONS(340),
    [anon_sym_false] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [sym_integer] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
  },
  [91] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(342),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(344),
    [aux_sym_identifier_token1] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_if] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_float] = ACTIONS(344),
    [anon_sym_false] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [sym_integer] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
  },
  [93] = {
    [aux_sym_string_literal_repeat1] = STATE(124),
    [aux_sym_string_literal_token1] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(346),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(348),
    [aux_sym_identifier_token1] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [sym_float] = ACTIONS(348),
    [anon_sym_false] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [sym_integer] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
  },
  [95] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(104),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_float] = ACTIONS(69),
  },
  [96] = {
    [aux_sym_string_literal_repeat2] = STATE(125),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [aux_sym_string_literal_token2] = ACTIONS(241),
    [sym_escape_sequence] = ACTIONS(243),
  },
  [97] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(182),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [98] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(183),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [99] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(185),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [100] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(186),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [101] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(187),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [102] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(188),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [aux_sym_identifier_token1] = ACTIONS(354),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
  },
  [104] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(104),
    [anon_sym_false] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(356),
    [aux_sym_identifier_token1] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(362),
    [sym_integer] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(380),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [sym_float] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(386),
  },
  [105] = {
    [anon_sym_output] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_meta] = ACTIONS(245),
    [anon_sym_Float] = ACTIONS(245),
    [anon_sym_Int] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(245),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_call] = ACTIONS(245),
    [anon_sym_File] = ACTIONS(245),
    [sym_object_type] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(245),
    [anon_sym_runtime] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_while] = ACTIONS(245),
    [anon_sym_command] = ACTIONS(245),
    [anon_sym_parameter_meta] = ACTIONS(245),
    [anon_sym_String] = ACTIONS(245),
    [anon_sym_scatter] = ACTIONS(245),
    [anon_sym_Boolean] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_else] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_then] = ACTIONS(245),
  },
  [106] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [107] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(133),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [108] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [109] = {
    [anon_sym_output] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_meta] = ACTIONS(171),
    [anon_sym_Float] = ACTIONS(171),
    [anon_sym_Int] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_Array] = ACTIONS(171),
    [anon_sym_call] = ACTIONS(171),
    [anon_sym_File] = ACTIONS(171),
    [sym_object_type] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_Map] = ACTIONS(171),
    [anon_sym_runtime] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_command] = ACTIONS(171),
    [anon_sym_parameter_meta] = ACTIONS(171),
    [anon_sym_String] = ACTIONS(171),
    [anon_sym_scatter] = ACTIONS(171),
    [anon_sym_Boolean] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
  },
  [110] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(394),
  },
  [111] = {
    [anon_sym_output] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_meta] = ACTIONS(235),
    [anon_sym_Float] = ACTIONS(235),
    [anon_sym_Int] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_Array] = ACTIONS(235),
    [anon_sym_call] = ACTIONS(235),
    [anon_sym_File] = ACTIONS(235),
    [sym_object_type] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_if] = ACTIONS(235),
    [anon_sym_Map] = ACTIONS(235),
    [anon_sym_runtime] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_while] = ACTIONS(235),
    [anon_sym_command] = ACTIONS(235),
    [anon_sym_parameter_meta] = ACTIONS(235),
    [anon_sym_String] = ACTIONS(235),
    [anon_sym_scatter] = ACTIONS(235),
    [anon_sym_Boolean] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_else] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_then] = ACTIONS(235),
  },
  [112] = {
    [aux_sym_string_literal_repeat1] = STATE(124),
    [aux_sym_string_literal_token1] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(396),
  },
  [113] = {
    [anon_sym_output] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_meta] = ACTIONS(177),
    [anon_sym_Float] = ACTIONS(177),
    [anon_sym_Int] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_Array] = ACTIONS(177),
    [anon_sym_call] = ACTIONS(177),
    [anon_sym_File] = ACTIONS(177),
    [sym_object_type] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_Map] = ACTIONS(177),
    [anon_sym_runtime] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_while] = ACTIONS(177),
    [anon_sym_command] = ACTIONS(177),
    [anon_sym_parameter_meta] = ACTIONS(177),
    [anon_sym_String] = ACTIONS(177),
    [anon_sym_scatter] = ACTIONS(177),
    [anon_sym_Boolean] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_then] = ACTIONS(177),
  },
  [114] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(104),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(398),
    [sym_float] = ACTIONS(69),
  },
  [115] = {
    [aux_sym_string_literal_repeat2] = STATE(125),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [aux_sym_string_literal_token2] = ACTIONS(241),
    [sym_escape_sequence] = ACTIONS(243),
  },
  [116] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(195),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [117] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(196),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [118] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(198),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [119] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(199),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [120] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(200),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [121] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(201),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [122] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(204),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [aux_sym_identifier_token1] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(406),
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(406),
  },
  [124] = {
    [aux_sym_string_literal_repeat1] = STATE(124),
    [aux_sym_string_literal_token1] = ACTIONS(408),
    [sym_escape_sequence] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(411),
  },
  [125] = {
    [aux_sym_string_literal_repeat2] = STATE(125),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [aux_sym_string_literal_token2] = ACTIONS(415),
    [sym_escape_sequence] = ACTIONS(418),
  },
  [126] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(421),
  },
  [127] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(206),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [128] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [129] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(207),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [130] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(208),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [131] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(211),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_BANG_EQ] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [aux_sym_identifier_token1] = ACTIONS(427),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(427),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
  },
  [133] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [134] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(133),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(431),
    [aux_sym_identifier_token1] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(437),
    [sym_integer] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_if] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [sym_float] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(461),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(463),
  },
  [136] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(465),
  },
  [137] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(215),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [138] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [139] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(216),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [140] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(217),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [aux_sym_identifier_token1] = ACTIONS(467),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(467),
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(469),
  },
  [143] = {
    [sym_runtime_kv] = STATE(219),
    [aux_sym_runtime_repeat1] = STATE(219),
    [sym_identifier] = STATE(144),
    [aux_sym_identifier_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(471),
  },
  [144] = {
    [anon_sym_COLON] = ACTIONS(473),
  },
  [145] = {
    [anon_sym_RBRACK] = ACTIONS(475),
  },
  [146] = {
    [sym_identifier] = STATE(222),
    [aux_sym_identifier_token1] = ACTIONS(53),
  },
  [147] = {
    [sym_inputs] = STATE(225),
    [anon_sym_input] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(479),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(481),
  },
  [149] = {
    [sym_identifier] = STATE(226),
    [aux_sym_identifier_token1] = ACTIONS(127),
  },
  [150] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(227),
    [anon_sym_as] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(285),
  },
  [151] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_task_output] = STATE(232),
    [sym_type] = STATE(235),
    [sym_task_sections] = STATE(233),
    [sym_map_type] = STATE(5),
    [sym_parameter_meta] = STATE(232),
    [sym_declaration] = STATE(234),
    [aux_sym_task_repeat1] = STATE(234),
    [sym_runtime] = STATE(232),
    [sym_command] = STATE(232),
    [sym_meta] = STATE(232),
    [aux_sym_task_sections_repeat1] = STATE(232),
    [anon_sym_File] = ACTIONS(259),
    [anon_sym_output] = ACTIONS(485),
    [anon_sym_command] = ACTIONS(487),
    [anon_sym_parameter_meta] = ACTIONS(489),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_runtime] = ACTIONS(491),
    [anon_sym_Int] = ACTIONS(259),
  },
  [152] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(493),
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(149),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [aux_sym_identifier_token1] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [ts_builtin_sym_end] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [aux_sym_identifier_token1] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
  },
  [155] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [156] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(236),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [157] = {
    [aux_sym_expression_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [158] = {
    [anon_sym_EQ_EQ] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(149),
  },
  [159] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [ts_builtin_sym_end] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [160] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [161] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(244),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [162] = {
    [anon_sym_EQ_EQ] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(509),
  },
  [163] = {
    [anon_sym_LBRACE] = ACTIONS(519),
  },
  [164] = {
    [anon_sym_LPAREN] = ACTIONS(521),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(523),
  },
  [166] = {
    [anon_sym_LBRACE] = ACTIONS(525),
  },
  [167] = {
    [anon_sym_LPAREN] = ACTIONS(527),
  },
  [168] = {
    [sym_namespaced_identifier] = STATE(254),
    [sym_identifier] = STATE(255),
    [aux_sym_identifier_token1] = ACTIONS(529),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [anon_sym_workflow] = ACTIONS(531),
    [anon_sym_task] = ACTIONS(531),
    [anon_sym_import] = ACTIONS(531),
  },
  [170] = {
    [anon_sym_File] = ACTIONS(533),
    [sym_object_type] = ACTIONS(533),
    [anon_sym_meta] = ACTIONS(533),
    [anon_sym_if] = ACTIONS(533),
    [anon_sym_Map] = ACTIONS(533),
    [anon_sym_Float] = ACTIONS(533),
    [anon_sym_Int] = ACTIONS(533),
    [anon_sym_while] = ACTIONS(533),
    [anon_sym_parameter_meta] = ACTIONS(533),
    [anon_sym_String] = ACTIONS(533),
    [anon_sym_Array] = ACTIONS(533),
    [anon_sym_scatter] = ACTIONS(533),
    [anon_sym_Boolean] = ACTIONS(533),
    [anon_sym_call] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
  },
  [171] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(257),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(257),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(535),
  },
  [172] = {
    [sym_identifier] = STATE(258),
    [aux_sym_identifier_token1] = ACTIONS(529),
  },
  [173] = {
    [anon_sym_as] = ACTIONS(406),
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_workflow] = ACTIONS(406),
    [anon_sym_task] = ACTIONS(406),
    [anon_sym_import] = ACTIONS(406),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_workflow] = ACTIONS(45),
    [anon_sym_task] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(45),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_workflow] = ACTIONS(537),
    [anon_sym_task] = ACTIONS(537),
    [anon_sym_import] = ACTIONS(537),
  },
  [176] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(259),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(539),
    [aux_sym_identifier_token1] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_BANG_EQ] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [sym_float] = ACTIONS(539),
    [anon_sym_false] = ACTIONS(539),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [sym_integer] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(541),
    [aux_sym_identifier_token1] = ACTIONS(541),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_if] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [sym_float] = ACTIONS(541),
    [anon_sym_false] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [sym_integer] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
  },
  [179] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(260),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(543),
    [aux_sym_identifier_token1] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [sym_float] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [sym_integer] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(406),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_true] = ACTIONS(545),
    [aux_sym_identifier_token1] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_if] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [sym_float] = ACTIONS(545),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [sym_integer] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
  },
  [182] = {
    [anon_sym_true] = ACTIONS(547),
    [aux_sym_identifier_token1] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_float] = ACTIONS(547),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [sym_integer] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(493),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [sym_float] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [sym_integer] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_float] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [sym_integer] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
  },
  [185] = {
    [aux_sym_expression_repeat1] = STATE(262),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [186] = {
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_float] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [sym_integer] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(497),
  },
  [187] = {
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [sym_float] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [sym_integer] = ACTIONS(549),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
  },
  [188] = {
    [anon_sym_EQ_EQ] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(553),
  },
  [189] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(263),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [190] = {
    [anon_sym_output] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_BANG_EQ] = ACTIONS(427),
    [anon_sym_meta] = ACTIONS(427),
    [anon_sym_Float] = ACTIONS(427),
    [anon_sym_Int] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(427),
    [anon_sym_Array] = ACTIONS(427),
    [anon_sym_call] = ACTIONS(427),
    [anon_sym_File] = ACTIONS(427),
    [sym_object_type] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_Map] = ACTIONS(427),
    [anon_sym_runtime] = ACTIONS(427),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [anon_sym_while] = ACTIONS(427),
    [anon_sym_command] = ACTIONS(427),
    [anon_sym_parameter_meta] = ACTIONS(427),
    [anon_sym_String] = ACTIONS(427),
    [anon_sym_scatter] = ACTIONS(427),
    [anon_sym_Boolean] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_else] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_then] = ACTIONS(427),
  },
  [191] = {
    [anon_sym_output] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_meta] = ACTIONS(467),
    [anon_sym_Float] = ACTIONS(467),
    [anon_sym_Int] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(467),
    [anon_sym_Array] = ACTIONS(467),
    [anon_sym_call] = ACTIONS(467),
    [anon_sym_File] = ACTIONS(467),
    [sym_object_type] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_if] = ACTIONS(467),
    [anon_sym_Map] = ACTIONS(467),
    [anon_sym_runtime] = ACTIONS(467),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_while] = ACTIONS(467),
    [anon_sym_command] = ACTIONS(467),
    [anon_sym_parameter_meta] = ACTIONS(467),
    [anon_sym_String] = ACTIONS(467),
    [anon_sym_scatter] = ACTIONS(467),
    [anon_sym_Boolean] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_else] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_then] = ACTIONS(467),
  },
  [192] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(264),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [193] = {
    [anon_sym_output] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_meta] = ACTIONS(406),
    [anon_sym_Float] = ACTIONS(406),
    [anon_sym_Int] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(406),
    [anon_sym_Array] = ACTIONS(406),
    [anon_sym_call] = ACTIONS(406),
    [anon_sym_File] = ACTIONS(406),
    [sym_object_type] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(406),
    [anon_sym_Map] = ACTIONS(406),
    [anon_sym_runtime] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_while] = ACTIONS(406),
    [anon_sym_command] = ACTIONS(406),
    [anon_sym_parameter_meta] = ACTIONS(406),
    [anon_sym_String] = ACTIONS(406),
    [anon_sym_scatter] = ACTIONS(406),
    [anon_sym_Boolean] = ACTIONS(406),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_then] = ACTIONS(406),
  },
  [194] = {
    [anon_sym_output] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_meta] = ACTIONS(354),
    [anon_sym_Float] = ACTIONS(354),
    [anon_sym_Int] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_Array] = ACTIONS(354),
    [anon_sym_call] = ACTIONS(354),
    [anon_sym_File] = ACTIONS(354),
    [sym_object_type] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_Map] = ACTIONS(354),
    [anon_sym_runtime] = ACTIONS(354),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_while] = ACTIONS(354),
    [anon_sym_command] = ACTIONS(354),
    [anon_sym_parameter_meta] = ACTIONS(354),
    [anon_sym_String] = ACTIONS(354),
    [anon_sym_scatter] = ACTIONS(354),
    [anon_sym_Boolean] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_else] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_then] = ACTIONS(354),
  },
  [195] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(493),
  },
  [196] = {
    [anon_sym_output] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_meta] = ACTIONS(495),
    [anon_sym_Float] = ACTIONS(495),
    [anon_sym_Int] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_Array] = ACTIONS(495),
    [anon_sym_call] = ACTIONS(495),
    [anon_sym_File] = ACTIONS(495),
    [sym_object_type] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_Map] = ACTIONS(495),
    [anon_sym_runtime] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_while] = ACTIONS(495),
    [anon_sym_command] = ACTIONS(495),
    [anon_sym_parameter_meta] = ACTIONS(495),
    [anon_sym_String] = ACTIONS(495),
    [anon_sym_scatter] = ACTIONS(495),
    [anon_sym_Boolean] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_then] = ACTIONS(495),
  },
  [197] = {
    [anon_sym_output] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_meta] = ACTIONS(497),
    [anon_sym_Float] = ACTIONS(497),
    [anon_sym_Int] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_Array] = ACTIONS(497),
    [anon_sym_call] = ACTIONS(497),
    [anon_sym_File] = ACTIONS(497),
    [sym_object_type] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(497),
    [anon_sym_Map] = ACTIONS(497),
    [anon_sym_runtime] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_while] = ACTIONS(497),
    [anon_sym_command] = ACTIONS(497),
    [anon_sym_parameter_meta] = ACTIONS(497),
    [anon_sym_String] = ACTIONS(497),
    [anon_sym_scatter] = ACTIONS(497),
    [anon_sym_Boolean] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_then] = ACTIONS(497),
  },
  [198] = {
    [aux_sym_expression_repeat1] = STATE(266),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [199] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(497),
  },
  [200] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_then] = ACTIONS(495),
  },
  [201] = {
    [anon_sym_EQ_EQ] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(555),
  },
  [202] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(109),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [203] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(267),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [204] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [205] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(273),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [206] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [207] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [208] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [209] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(90),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [210] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(274),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [211] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(569),
    [aux_sym_identifier_token1] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_float] = ACTIONS(569),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(579),
    [sym_integer] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [212] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(283),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [213] = {
    [sym_array_type] = STATE(284),
    [sym_primitive_type] = STATE(284),
    [sym_map_type] = STATE(284),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(585),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
  },
  [214] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(285),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [215] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [216] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [217] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(587),
  },
  [219] = {
    [sym_runtime_kv] = STATE(219),
    [aux_sym_runtime_repeat1] = STATE(219),
    [sym_identifier] = STATE(144),
    [aux_sym_identifier_token1] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(592),
  },
  [220] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(288),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [221] = {
    [anon_sym_PLUS] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(598),
    [ts_builtin_sym_end] = ACTIONS(598),
    [aux_sym_identifier_token1] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
  },
  [222] = {
    [sym_call_body] = STATE(289),
    [anon_sym_LBRACE] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(600),
  },
  [223] = {
    [anon_sym_COLON] = ACTIONS(602),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(604),
  },
  [225] = {
    [anon_sym_RBRACE] = ACTIONS(606),
  },
  [226] = {
    [anon_sym_as] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [ts_builtin_sym_end] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(608),
  },
  [227] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(227),
    [anon_sym_as] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [ts_builtin_sym_end] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(610),
  },
  [228] = {
    [anon_sym_LBRACE] = ACTIONS(613),
  },
  [229] = {
    [anon_sym_LT_LT_LT] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(617),
  },
  [230] = {
    [anon_sym_LBRACE] = ACTIONS(619),
  },
  [231] = {
    [anon_sym_LBRACE] = ACTIONS(621),
  },
  [232] = {
    [sym_parameter_meta] = STATE(297),
    [sym_task_output] = STATE(297),
    [sym_command] = STATE(297),
    [sym_runtime] = STATE(297),
    [sym_meta] = STATE(297),
    [aux_sym_task_sections_repeat1] = STATE(297),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_command] = ACTIONS(487),
    [anon_sym_parameter_meta] = ACTIONS(489),
    [anon_sym_runtime] = ACTIONS(491),
  },
  [233] = {
    [anon_sym_RBRACE] = ACTIONS(625),
  },
  [234] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_task_output] = STATE(232),
    [sym_type] = STATE(235),
    [sym_task_sections] = STATE(299),
    [sym_map_type] = STATE(5),
    [sym_parameter_meta] = STATE(232),
    [sym_declaration] = STATE(300),
    [aux_sym_task_repeat1] = STATE(300),
    [sym_runtime] = STATE(232),
    [sym_command] = STATE(232),
    [sym_meta] = STATE(232),
    [aux_sym_task_sections_repeat1] = STATE(232),
    [anon_sym_File] = ACTIONS(259),
    [anon_sym_output] = ACTIONS(485),
    [anon_sym_command] = ACTIONS(487),
    [anon_sym_parameter_meta] = ACTIONS(489),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_runtime] = ACTIONS(491),
    [anon_sym_Int] = ACTIONS(259),
  },
  [235] = {
    [sym_identifier] = STATE(301),
    [aux_sym_identifier_token1] = ACTIONS(529),
  },
  [236] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(627),
  },
  [237] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(303),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [238] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(304),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [239] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [240] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(305),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [241] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(306),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_BANG_EQ] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [aux_sym_identifier_token1] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(629),
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
  },
  [243] = {
    [aux_sym_expression_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(631),
  },
  [244] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(633),
  },
  [245] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(310),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [246] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [247] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(311),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [248] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(312),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [249] = {
    [aux_sym_meta_repeat1] = STATE(314),
    [sym_meta_kv] = STATE(314),
    [sym_identifier] = STATE(315),
    [aux_sym_identifier_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(635),
  },
  [250] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(316),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [251] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(317),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [252] = {
    [sym_parameter_meta_kv] = STATE(318),
    [aux_sym_parameter_meta_repeat1] = STATE(319),
    [sym_identifier] = STATE(320),
    [anon_sym_File] = ACTIONS(637),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym_object_type] = ACTIONS(637),
    [anon_sym_meta] = ACTIONS(637),
    [anon_sym_if] = ACTIONS(637),
    [anon_sym_Map] = ACTIONS(637),
    [anon_sym_Float] = ACTIONS(637),
    [anon_sym_Int] = ACTIONS(637),
    [anon_sym_while] = ACTIONS(637),
    [anon_sym_parameter_meta] = ACTIONS(637),
    [anon_sym_String] = ACTIONS(637),
    [anon_sym_Array] = ACTIONS(637),
    [anon_sym_scatter] = ACTIONS(637),
    [anon_sym_Boolean] = ACTIONS(637),
    [anon_sym_call] = ACTIONS(637),
    [anon_sym_RBRACE] = ACTIONS(639),
  },
  [253] = {
    [sym_scatter_iteration_statment] = STATE(322),
    [aux_sym_scatter_repeat1] = STATE(322),
    [sym_identifier] = STATE(323),
    [aux_sym_identifier_token1] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(641),
  },
  [254] = {
    [sym_call_body] = STATE(326),
    [anon_sym_File] = ACTIONS(281),
    [sym_object_type] = ACTIONS(281),
    [anon_sym_as] = ACTIONS(643),
    [anon_sym_meta] = ACTIONS(281),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_Map] = ACTIONS(281),
    [anon_sym_Float] = ACTIONS(281),
    [anon_sym_Int] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_while] = ACTIONS(281),
    [anon_sym_parameter_meta] = ACTIONS(281),
    [anon_sym_String] = ACTIONS(281),
    [anon_sym_Array] = ACTIONS(281),
    [anon_sym_scatter] = ACTIONS(281),
    [anon_sym_Boolean] = ACTIONS(281),
    [anon_sym_call] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
  },
  [255] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(328),
    [anon_sym_File] = ACTIONS(283),
    [sym_object_type] = ACTIONS(283),
    [anon_sym_as] = ACTIONS(283),
    [anon_sym_meta] = ACTIONS(283),
    [anon_sym_if] = ACTIONS(283),
    [anon_sym_Map] = ACTIONS(283),
    [anon_sym_Float] = ACTIONS(283),
    [anon_sym_Int] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_while] = ACTIONS(283),
    [anon_sym_parameter_meta] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(647),
    [anon_sym_String] = ACTIONS(283),
    [anon_sym_Array] = ACTIONS(283),
    [anon_sym_scatter] = ACTIONS(283),
    [anon_sym_Boolean] = ACTIONS(283),
    [anon_sym_call] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(649),
    [anon_sym_workflow] = ACTIONS(649),
    [anon_sym_task] = ACTIONS(649),
    [anon_sym_import] = ACTIONS(649),
  },
  [257] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(257),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(257),
    [anon_sym_File] = ACTIONS(651),
    [sym_object_type] = ACTIONS(654),
    [anon_sym_meta] = ACTIONS(657),
    [anon_sym_if] = ACTIONS(660),
    [anon_sym_Map] = ACTIONS(663),
    [anon_sym_Float] = ACTIONS(651),
    [anon_sym_Int] = ACTIONS(651),
    [anon_sym_while] = ACTIONS(666),
    [anon_sym_parameter_meta] = ACTIONS(669),
    [anon_sym_String] = ACTIONS(651),
    [anon_sym_Array] = ACTIONS(672),
    [anon_sym_scatter] = ACTIONS(675),
    [anon_sym_Boolean] = ACTIONS(651),
    [anon_sym_call] = ACTIONS(678),
    [anon_sym_RBRACE] = ACTIONS(681),
  },
  [258] = {
    [anon_sym_File] = ACTIONS(683),
    [sym_object_type] = ACTIONS(683),
    [anon_sym_meta] = ACTIONS(683),
    [anon_sym_if] = ACTIONS(683),
    [anon_sym_Map] = ACTIONS(683),
    [anon_sym_Float] = ACTIONS(683),
    [anon_sym_Int] = ACTIONS(683),
    [anon_sym_while] = ACTIONS(683),
    [anon_sym_parameter_meta] = ACTIONS(683),
    [anon_sym_String] = ACTIONS(683),
    [anon_sym_Array] = ACTIONS(683),
    [anon_sym_EQ] = ACTIONS(685),
    [anon_sym_scatter] = ACTIONS(683),
    [anon_sym_Boolean] = ACTIONS(683),
    [anon_sym_call] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
  },
  [259] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(569),
    [aux_sym_identifier_token1] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_float] = ACTIONS(569),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(579),
    [sym_integer] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [260] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(687),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [261] = {
    [anon_sym_COMMA] = ACTIONS(629),
    [anon_sym_true] = ACTIONS(689),
    [aux_sym_identifier_token1] = ACTIONS(689),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_BANG_EQ] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_if] = ACTIONS(689),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_SQUOTE] = ACTIONS(629),
    [sym_float] = ACTIONS(689),
    [anon_sym_false] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(689),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [sym_integer] = ACTIONS(689),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
  },
  [262] = {
    [aux_sym_expression_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(691),
  },
  [263] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(333),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(569),
    [aux_sym_identifier_token1] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_float] = ACTIONS(569),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(579),
    [sym_integer] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [264] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(693),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [265] = {
    [anon_sym_output] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_BANG_EQ] = ACTIONS(629),
    [anon_sym_meta] = ACTIONS(629),
    [anon_sym_Float] = ACTIONS(629),
    [anon_sym_Int] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(629),
    [anon_sym_Array] = ACTIONS(629),
    [anon_sym_call] = ACTIONS(629),
    [anon_sym_File] = ACTIONS(629),
    [sym_object_type] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_if] = ACTIONS(629),
    [anon_sym_Map] = ACTIONS(629),
    [anon_sym_runtime] = ACTIONS(629),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [anon_sym_while] = ACTIONS(629),
    [anon_sym_command] = ACTIONS(629),
    [anon_sym_parameter_meta] = ACTIONS(629),
    [anon_sym_String] = ACTIONS(629),
    [anon_sym_scatter] = ACTIONS(629),
    [anon_sym_Boolean] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_else] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_then] = ACTIONS(629),
  },
  [266] = {
    [aux_sym_expression_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(695),
  },
  [267] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(697),
  },
  [268] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(337),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [269] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(196),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [270] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(338),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [271] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(339),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [272] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(340),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(15),
  },
  [273] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(699),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [274] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(701),
  },
  [275] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(343),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [276] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(344),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [277] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(183),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [278] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(345),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [279] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(346),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [280] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(703),
  },
  [281] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(90),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [282] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(349),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [283] = {
    [anon_sym_true] = ACTIONS(569),
    [aux_sym_identifier_token1] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_float] = ACTIONS(569),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_DOT] = ACTIONS(711),
    [sym_integer] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(709),
  },
  [284] = {
    [anon_sym_RBRACK] = ACTIONS(713),
  },
  [285] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(715),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [286] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [287] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(356),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [288] = {
    [anon_sym_EQ_EQ] = ACTIONS(717),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(721),
    [anon_sym_DOT] = ACTIONS(723),
    [anon_sym_PERCENT] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(717),
    [anon_sym_SLASH] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(721),
    [anon_sym_DASH] = ACTIONS(725),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(727),
  },
  [290] = {
    [sym_variable_mapping_kv] = STATE(361),
    [sym_identifier] = STATE(363),
    [sym_variable_mappings] = STATE(362),
    [aux_sym_identifier_token1] = ACTIONS(53),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(729),
  },
  [292] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_task_output_kv] = STATE(365),
    [aux_sym_task_output_repeat1] = STATE(365),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(366),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(731),
    [anon_sym_Int] = ACTIONS(259),
  },
  [293] = {
    [sym_command_part_var] = STATE(367),
    [aux_sym_command_repeat1] = STATE(369),
    [sym_command_part] = STATE(369),
    [sym_command_part_string] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(735),
  },
  [294] = {
    [sym_command_part_var] = STATE(367),
    [aux_sym_command_repeat1] = STATE(370),
    [sym_command_part] = STATE(370),
    [sym_command_part_string] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(735),
  },
  [295] = {
    [sym_parameter_meta_kv] = STATE(371),
    [aux_sym_parameter_meta_repeat1] = STATE(372),
    [sym_identifier] = STATE(320),
    [anon_sym_meta] = ACTIONS(637),
    [anon_sym_output] = ACTIONS(637),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_parameter_meta] = ACTIONS(637),
    [anon_sym_runtime] = ACTIONS(637),
    [anon_sym_command] = ACTIONS(637),
    [aux_sym_identifier_token1] = ACTIONS(7),
  },
  [296] = {
    [sym_runtime_kv] = STATE(374),
    [aux_sym_runtime_repeat1] = STATE(374),
    [sym_identifier] = STATE(144),
    [aux_sym_identifier_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(737),
  },
  [297] = {
    [sym_parameter_meta] = STATE(297),
    [sym_task_output] = STATE(297),
    [sym_command] = STATE(297),
    [sym_runtime] = STATE(297),
    [sym_meta] = STATE(297),
    [aux_sym_task_sections_repeat1] = STATE(297),
    [anon_sym_meta] = ACTIONS(739),
    [anon_sym_output] = ACTIONS(742),
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_parameter_meta] = ACTIONS(747),
    [anon_sym_runtime] = ACTIONS(750),
    [anon_sym_command] = ACTIONS(753),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(756),
    [anon_sym_workflow] = ACTIONS(756),
    [anon_sym_task] = ACTIONS(756),
    [anon_sym_import] = ACTIONS(756),
  },
  [299] = {
    [anon_sym_RBRACE] = ACTIONS(758),
  },
  [300] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_declaration] = STATE(300),
    [aux_sym_task_repeat1] = STATE(300),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(235),
    [anon_sym_File] = ACTIONS(760),
    [anon_sym_output] = ACTIONS(763),
    [anon_sym_command] = ACTIONS(763),
    [anon_sym_parameter_meta] = ACTIONS(763),
    [sym_object_type] = ACTIONS(765),
    [anon_sym_Array] = ACTIONS(768),
    [anon_sym_String] = ACTIONS(760),
    [anon_sym_meta] = ACTIONS(763),
    [anon_sym_Boolean] = ACTIONS(760),
    [anon_sym_Map] = ACTIONS(771),
    [anon_sym_Float] = ACTIONS(760),
    [anon_sym_runtime] = ACTIONS(763),
    [anon_sym_Int] = ACTIONS(760),
  },
  [301] = {
    [anon_sym_File] = ACTIONS(683),
    [anon_sym_output] = ACTIONS(683),
    [anon_sym_command] = ACTIONS(683),
    [anon_sym_parameter_meta] = ACTIONS(683),
    [sym_object_type] = ACTIONS(683),
    [anon_sym_Array] = ACTIONS(683),
    [anon_sym_String] = ACTIONS(683),
    [anon_sym_EQ] = ACTIONS(774),
    [anon_sym_meta] = ACTIONS(683),
    [anon_sym_Boolean] = ACTIONS(683),
    [anon_sym_Map] = ACTIONS(683),
    [anon_sym_Float] = ACTIONS(683),
    [anon_sym_runtime] = ACTIONS(683),
    [anon_sym_Int] = ACTIONS(683),
  },
  [302] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(377),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [305] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [306] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_PERCENT] = ACTIONS(778),
    [anon_sym_BANG_EQ] = ACTIONS(778),
    [anon_sym_COLON] = ACTIONS(778),
    [anon_sym_SLASH] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [aux_sym_identifier_token1] = ACTIONS(778),
    [anon_sym_EQ_EQ] = ACTIONS(778),
    [anon_sym_STAR] = ACTIONS(778),
    [anon_sym_LPAREN] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(778),
    [ts_builtin_sym_end] = ACTIONS(778),
    [anon_sym_RPAREN] = ACTIONS(778),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_DASH] = ACTIONS(778),
    [anon_sym_RBRACK] = ACTIONS(778),
  },
  [308] = {
    [aux_sym_expression_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(776),
  },
  [309] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(378),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [310] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(493),
  },
  [311] = {
    [anon_sym_EQ_EQ] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(497),
  },
  [312] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
  },
  [313] = {
    [anon_sym_File] = ACTIONS(783),
    [anon_sym_output] = ACTIONS(783),
    [sym_object_type] = ACTIONS(783),
    [anon_sym_meta] = ACTIONS(783),
    [anon_sym_if] = ACTIONS(783),
    [anon_sym_Map] = ACTIONS(783),
    [anon_sym_Float] = ACTIONS(783),
    [anon_sym_runtime] = ACTIONS(783),
    [anon_sym_Int] = ACTIONS(783),
    [anon_sym_while] = ACTIONS(783),
    [anon_sym_command] = ACTIONS(783),
    [anon_sym_parameter_meta] = ACTIONS(783),
    [anon_sym_String] = ACTIONS(783),
    [anon_sym_Array] = ACTIONS(783),
    [anon_sym_scatter] = ACTIONS(783),
    [anon_sym_Boolean] = ACTIONS(783),
    [anon_sym_call] = ACTIONS(783),
    [anon_sym_RBRACE] = ACTIONS(783),
  },
  [314] = {
    [aux_sym_meta_repeat1] = STATE(380),
    [sym_meta_kv] = STATE(380),
    [sym_identifier] = STATE(315),
    [aux_sym_identifier_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(785),
  },
  [315] = {
    [anon_sym_EQ] = ACTIONS(787),
  },
  [316] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(789),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [317] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(793),
  },
  [319] = {
    [sym_parameter_meta_kv] = STATE(318),
    [aux_sym_parameter_meta_repeat1] = STATE(385),
    [sym_identifier] = STATE(320),
    [anon_sym_File] = ACTIONS(795),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym_object_type] = ACTIONS(795),
    [anon_sym_meta] = ACTIONS(795),
    [anon_sym_if] = ACTIONS(795),
    [anon_sym_Map] = ACTIONS(795),
    [anon_sym_Float] = ACTIONS(795),
    [anon_sym_Int] = ACTIONS(795),
    [anon_sym_while] = ACTIONS(795),
    [anon_sym_parameter_meta] = ACTIONS(795),
    [anon_sym_String] = ACTIONS(795),
    [anon_sym_Array] = ACTIONS(795),
    [anon_sym_scatter] = ACTIONS(795),
    [anon_sym_Boolean] = ACTIONS(795),
    [anon_sym_call] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(797),
  },
  [320] = {
    [anon_sym_EQ] = ACTIONS(799),
  },
  [321] = {
    [sym_scatter_body] = STATE(388),
    [anon_sym_LBRACE] = ACTIONS(801),
  },
  [322] = {
    [sym_scatter_iteration_statment] = STATE(390),
    [aux_sym_scatter_repeat1] = STATE(390),
    [sym_identifier] = STATE(323),
    [aux_sym_identifier_token1] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(803),
  },
  [323] = {
    [anon_sym_in] = ACTIONS(805),
  },
  [324] = {
    [sym_identifier] = STATE(392),
    [aux_sym_identifier_token1] = ACTIONS(529),
  },
  [325] = {
    [sym_inputs] = STATE(394),
    [anon_sym_input] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(807),
  },
  [326] = {
    [anon_sym_File] = ACTIONS(481),
    [sym_object_type] = ACTIONS(481),
    [anon_sym_meta] = ACTIONS(481),
    [anon_sym_if] = ACTIONS(481),
    [anon_sym_Map] = ACTIONS(481),
    [anon_sym_Float] = ACTIONS(481),
    [anon_sym_Int] = ACTIONS(481),
    [anon_sym_while] = ACTIONS(481),
    [anon_sym_parameter_meta] = ACTIONS(481),
    [anon_sym_String] = ACTIONS(481),
    [anon_sym_Array] = ACTIONS(481),
    [anon_sym_scatter] = ACTIONS(481),
    [anon_sym_Boolean] = ACTIONS(481),
    [anon_sym_call] = ACTIONS(481),
    [anon_sym_RBRACE] = ACTIONS(481),
  },
  [327] = {
    [sym_identifier] = STATE(395),
    [aux_sym_identifier_token1] = ACTIONS(529),
  },
  [328] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(396),
    [anon_sym_File] = ACTIONS(483),
    [sym_object_type] = ACTIONS(483),
    [anon_sym_as] = ACTIONS(483),
    [anon_sym_meta] = ACTIONS(483),
    [anon_sym_if] = ACTIONS(483),
    [anon_sym_Map] = ACTIONS(483),
    [anon_sym_Float] = ACTIONS(483),
    [anon_sym_Int] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_while] = ACTIONS(483),
    [anon_sym_parameter_meta] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(647),
    [anon_sym_String] = ACTIONS(483),
    [anon_sym_Array] = ACTIONS(483),
    [anon_sym_scatter] = ACTIONS(483),
    [anon_sym_Boolean] = ACTIONS(483),
    [anon_sym_call] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
  },
  [329] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(399),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [330] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(813),
  },
  [331] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(401),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(63),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_true] = ACTIONS(815),
    [aux_sym_identifier_token1] = ACTIONS(815),
    [anon_sym_PERCENT] = ACTIONS(778),
    [anon_sym_BANG_EQ] = ACTIONS(778),
    [anon_sym_SLASH] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [anon_sym_SQUOTE] = ACTIONS(778),
    [sym_float] = ACTIONS(815),
    [anon_sym_false] = ACTIONS(815),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_STAR] = ACTIONS(778),
    [anon_sym_LPAREN] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(815),
    [anon_sym_EQ_EQ] = ACTIONS(778),
    [sym_integer] = ACTIONS(815),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_DASH] = ACTIONS(778),
    [anon_sym_RBRACK] = ACTIONS(778),
  },
  [333] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(817),
  },
  [334] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(403),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [335] = {
    [anon_sym_output] = ACTIONS(778),
    [anon_sym_PERCENT] = ACTIONS(778),
    [anon_sym_BANG_EQ] = ACTIONS(778),
    [anon_sym_meta] = ACTIONS(778),
    [anon_sym_Float] = ACTIONS(778),
    [anon_sym_Int] = ACTIONS(778),
    [anon_sym_STAR] = ACTIONS(778),
    [anon_sym_LPAREN] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(778),
    [anon_sym_Array] = ACTIONS(778),
    [anon_sym_call] = ACTIONS(778),
    [anon_sym_File] = ACTIONS(778),
    [sym_object_type] = ACTIONS(778),
    [anon_sym_SLASH] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [anon_sym_if] = ACTIONS(778),
    [anon_sym_Map] = ACTIONS(778),
    [anon_sym_runtime] = ACTIONS(778),
    [anon_sym_EQ_EQ] = ACTIONS(778),
    [anon_sym_while] = ACTIONS(778),
    [anon_sym_command] = ACTIONS(778),
    [anon_sym_parameter_meta] = ACTIONS(778),
    [anon_sym_String] = ACTIONS(778),
    [anon_sym_scatter] = ACTIONS(778),
    [anon_sym_Boolean] = ACTIONS(778),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_else] = ACTIONS(778),
    [anon_sym_DASH] = ACTIONS(778),
    [anon_sym_then] = ACTIONS(778),
  },
  [336] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(404),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [337] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_else] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [338] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [339] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [340] = {
    [anon_sym_EQ_EQ] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(149),
  },
  [341] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(405),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(111),
  },
  [342] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(406),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [343] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(821),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_true] = ACTIONS(547),
    [aux_sym_identifier_token1] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_float] = ACTIONS(547),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [sym_integer] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_float] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [sym_integer] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [sym_float] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [sym_integer] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [347] = {
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_PERCENT] = ACTIONS(823),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_COLON] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [aux_sym_identifier_token1] = ACTIONS(823),
    [anon_sym_EQ_EQ] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [ts_builtin_sym_end] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_DASH] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
  },
  [348] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(825),
    [anon_sym_RBRACE] = ACTIONS(828),
  },
  [349] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(830),
  },
  [350] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(409),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [351] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(183),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [352] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(410),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [353] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(411),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [354] = {
    [anon_sym_PLUS] = ACTIONS(832),
    [anon_sym_QMARK] = ACTIONS(832),
    [ts_builtin_sym_end] = ACTIONS(832),
    [aux_sym_identifier_token1] = ACTIONS(832),
    [anon_sym_RBRACK] = ACTIONS(832),
  },
  [355] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(412),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [356] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(834),
  },
  [357] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(414),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [358] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [359] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(415),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [360] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(416),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [361] = {
    [aux_sym_variable_mappings_repeat1] = STATE(418),
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_RBRACE] = ACTIONS(838),
  },
  [362] = {
    [anon_sym_RBRACE] = ACTIONS(840),
  },
  [363] = {
    [anon_sym_EQ] = ACTIONS(842),
  },
  [364] = {
    [anon_sym_meta] = ACTIONS(844),
    [anon_sym_output] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_parameter_meta] = ACTIONS(844),
    [anon_sym_runtime] = ACTIONS(844),
    [anon_sym_command] = ACTIONS(844),
  },
  [365] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_task_output_kv] = STATE(421),
    [aux_sym_task_output_repeat1] = STATE(421),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(366),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_Int] = ACTIONS(259),
  },
  [366] = {
    [sym_identifier] = STATE(422),
    [aux_sym_identifier_token1] = ACTIONS(53),
  },
  [367] = {
    [sym_command_part_string] = ACTIONS(848),
    [anon_sym_RBRACE] = ACTIONS(848),
    [anon_sym_GT_GT_GT] = ACTIONS(848),
    [anon_sym_DOLLAR] = ACTIONS(848),
  },
  [368] = {
    [anon_sym_LBRACE] = ACTIONS(850),
  },
  [369] = {
    [sym_command_part_var] = STATE(367),
    [aux_sym_command_repeat1] = STATE(425),
    [sym_command_part] = STATE(425),
    [anon_sym_GT_GT_GT] = ACTIONS(852),
    [sym_command_part_string] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(735),
  },
  [370] = {
    [sym_command_part_var] = STATE(367),
    [aux_sym_command_repeat1] = STATE(426),
    [sym_command_part] = STATE(426),
    [anon_sym_DOLLAR] = ACTIONS(735),
    [sym_command_part_string] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(852),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(854),
  },
  [372] = {
    [sym_parameter_meta_kv] = STATE(371),
    [aux_sym_parameter_meta_repeat1] = STATE(428),
    [sym_identifier] = STATE(320),
    [anon_sym_meta] = ACTIONS(795),
    [anon_sym_output] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(797),
    [anon_sym_parameter_meta] = ACTIONS(795),
    [anon_sym_runtime] = ACTIONS(795),
    [anon_sym_command] = ACTIONS(795),
    [aux_sym_identifier_token1] = ACTIONS(7),
  },
  [373] = {
    [anon_sym_meta] = ACTIONS(469),
    [anon_sym_output] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_parameter_meta] = ACTIONS(469),
    [anon_sym_runtime] = ACTIONS(469),
    [anon_sym_command] = ACTIONS(469),
  },
  [374] = {
    [sym_runtime_kv] = STATE(219),
    [aux_sym_runtime_repeat1] = STATE(219),
    [sym_identifier] = STATE(144),
    [aux_sym_identifier_token1] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(856),
  },
  [375] = {
    [ts_builtin_sym_end] = ACTIONS(858),
    [anon_sym_workflow] = ACTIONS(858),
    [anon_sym_task] = ACTIONS(858),
    [anon_sym_import] = ACTIONS(858),
  },
  [376] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(432),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [377] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(864),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [378] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(866),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [379] = {
    [anon_sym_File] = ACTIONS(868),
    [anon_sym_output] = ACTIONS(868),
    [sym_object_type] = ACTIONS(868),
    [anon_sym_meta] = ACTIONS(868),
    [anon_sym_if] = ACTIONS(868),
    [anon_sym_Map] = ACTIONS(868),
    [anon_sym_Float] = ACTIONS(868),
    [anon_sym_runtime] = ACTIONS(868),
    [anon_sym_Int] = ACTIONS(868),
    [anon_sym_while] = ACTIONS(868),
    [anon_sym_command] = ACTIONS(868),
    [anon_sym_parameter_meta] = ACTIONS(868),
    [anon_sym_String] = ACTIONS(868),
    [anon_sym_Array] = ACTIONS(868),
    [anon_sym_scatter] = ACTIONS(868),
    [anon_sym_Boolean] = ACTIONS(868),
    [anon_sym_call] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(868),
  },
  [380] = {
    [aux_sym_meta_repeat1] = STATE(380),
    [sym_meta_kv] = STATE(380),
    [sym_identifier] = STATE(315),
    [aux_sym_identifier_token1] = ACTIONS(870),
    [anon_sym_RBRACE] = ACTIONS(873),
  },
  [381] = {
    [sym_string_literal] = STATE(435),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
  [382] = {
    [anon_sym_LBRACE] = ACTIONS(875),
  },
  [383] = {
    [anon_sym_LBRACE] = ACTIONS(877),
  },
  [384] = {
    [anon_sym_File] = ACTIONS(879),
    [aux_sym_identifier_token1] = ACTIONS(879),
    [sym_object_type] = ACTIONS(879),
    [anon_sym_meta] = ACTIONS(879),
    [anon_sym_if] = ACTIONS(879),
    [anon_sym_Map] = ACTIONS(879),
    [anon_sym_Float] = ACTIONS(879),
    [anon_sym_Int] = ACTIONS(879),
    [anon_sym_while] = ACTIONS(879),
    [anon_sym_parameter_meta] = ACTIONS(879),
    [anon_sym_String] = ACTIONS(879),
    [anon_sym_Array] = ACTIONS(879),
    [anon_sym_scatter] = ACTIONS(879),
    [anon_sym_Boolean] = ACTIONS(879),
    [anon_sym_call] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(881),
  },
  [385] = {
    [sym_parameter_meta_kv] = STATE(318),
    [aux_sym_parameter_meta_repeat1] = STATE(385),
    [sym_identifier] = STATE(320),
    [anon_sym_File] = ACTIONS(879),
    [aux_sym_identifier_token1] = ACTIONS(883),
    [sym_object_type] = ACTIONS(879),
    [anon_sym_meta] = ACTIONS(879),
    [anon_sym_if] = ACTIONS(879),
    [anon_sym_Map] = ACTIONS(879),
    [anon_sym_Float] = ACTIONS(879),
    [anon_sym_Int] = ACTIONS(879),
    [anon_sym_while] = ACTIONS(879),
    [anon_sym_parameter_meta] = ACTIONS(879),
    [anon_sym_String] = ACTIONS(879),
    [anon_sym_Array] = ACTIONS(879),
    [anon_sym_scatter] = ACTIONS(879),
    [anon_sym_Boolean] = ACTIONS(879),
    [anon_sym_call] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(881),
  },
  [386] = {
    [sym_string_literal] = STATE(438),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
  [387] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(440),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(440),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(886),
  },
  [388] = {
    [anon_sym_File] = ACTIONS(888),
    [sym_object_type] = ACTIONS(888),
    [anon_sym_meta] = ACTIONS(888),
    [anon_sym_if] = ACTIONS(888),
    [anon_sym_Map] = ACTIONS(888),
    [anon_sym_Float] = ACTIONS(888),
    [anon_sym_Int] = ACTIONS(888),
    [anon_sym_while] = ACTIONS(888),
    [anon_sym_parameter_meta] = ACTIONS(888),
    [anon_sym_String] = ACTIONS(888),
    [anon_sym_Array] = ACTIONS(888),
    [anon_sym_scatter] = ACTIONS(888),
    [anon_sym_Boolean] = ACTIONS(888),
    [anon_sym_call] = ACTIONS(888),
    [anon_sym_RBRACE] = ACTIONS(888),
  },
  [389] = {
    [sym_scatter_body] = STATE(441),
    [anon_sym_LBRACE] = ACTIONS(801),
  },
  [390] = {
    [sym_scatter_iteration_statment] = STATE(390),
    [aux_sym_scatter_repeat1] = STATE(390),
    [sym_identifier] = STATE(323),
    [aux_sym_identifier_token1] = ACTIONS(890),
    [anon_sym_RPAREN] = ACTIONS(893),
  },
  [391] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(444),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [392] = {
    [sym_call_body] = STATE(445),
    [anon_sym_File] = ACTIONS(600),
    [sym_object_type] = ACTIONS(600),
    [anon_sym_meta] = ACTIONS(600),
    [anon_sym_if] = ACTIONS(600),
    [anon_sym_Map] = ACTIONS(600),
    [anon_sym_Float] = ACTIONS(600),
    [anon_sym_Int] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_while] = ACTIONS(600),
    [anon_sym_parameter_meta] = ACTIONS(600),
    [anon_sym_String] = ACTIONS(600),
    [anon_sym_Array] = ACTIONS(600),
    [anon_sym_scatter] = ACTIONS(600),
    [anon_sym_Boolean] = ACTIONS(600),
    [anon_sym_call] = ACTIONS(600),
    [anon_sym_RBRACE] = ACTIONS(600),
  },
  [393] = {
    [anon_sym_File] = ACTIONS(604),
    [sym_object_type] = ACTIONS(604),
    [anon_sym_meta] = ACTIONS(604),
    [anon_sym_if] = ACTIONS(604),
    [anon_sym_Map] = ACTIONS(604),
    [anon_sym_Float] = ACTIONS(604),
    [anon_sym_Int] = ACTIONS(604),
    [anon_sym_while] = ACTIONS(604),
    [anon_sym_parameter_meta] = ACTIONS(604),
    [anon_sym_String] = ACTIONS(604),
    [anon_sym_Array] = ACTIONS(604),
    [anon_sym_scatter] = ACTIONS(604),
    [anon_sym_Boolean] = ACTIONS(604),
    [anon_sym_call] = ACTIONS(604),
    [anon_sym_RBRACE] = ACTIONS(604),
  },
  [394] = {
    [anon_sym_RBRACE] = ACTIONS(899),
  },
  [395] = {
    [anon_sym_File] = ACTIONS(608),
    [sym_object_type] = ACTIONS(608),
    [anon_sym_as] = ACTIONS(608),
    [anon_sym_meta] = ACTIONS(608),
    [anon_sym_if] = ACTIONS(608),
    [anon_sym_Map] = ACTIONS(608),
    [anon_sym_Float] = ACTIONS(608),
    [anon_sym_Int] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_while] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(608),
    [anon_sym_parameter_meta] = ACTIONS(608),
    [anon_sym_String] = ACTIONS(608),
    [anon_sym_Array] = ACTIONS(608),
    [anon_sym_scatter] = ACTIONS(608),
    [anon_sym_Boolean] = ACTIONS(608),
    [anon_sym_RBRACE] = ACTIONS(608),
    [anon_sym_call] = ACTIONS(608),
  },
  [396] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(396),
    [anon_sym_File] = ACTIONS(608),
    [sym_object_type] = ACTIONS(608),
    [anon_sym_as] = ACTIONS(608),
    [anon_sym_meta] = ACTIONS(608),
    [anon_sym_if] = ACTIONS(608),
    [anon_sym_Map] = ACTIONS(608),
    [anon_sym_Float] = ACTIONS(608),
    [anon_sym_Int] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_while] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(901),
    [anon_sym_parameter_meta] = ACTIONS(608),
    [anon_sym_String] = ACTIONS(608),
    [anon_sym_Array] = ACTIONS(608),
    [anon_sym_scatter] = ACTIONS(608),
    [anon_sym_Boolean] = ACTIONS(608),
    [anon_sym_RBRACE] = ACTIONS(608),
    [anon_sym_call] = ACTIONS(608),
  },
  [397] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(109),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [398] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(447),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [399] = {
    [anon_sym_File] = ACTIONS(904),
    [anon_sym_PERCENT] = ACTIONS(906),
    [sym_object_type] = ACTIONS(904),
    [anon_sym_BANG_EQ] = ACTIONS(908),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(910),
    [anon_sym_meta] = ACTIONS(904),
    [anon_sym_if] = ACTIONS(904),
    [anon_sym_Map] = ACTIONS(904),
    [anon_sym_Float] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_Int] = ACTIONS(904),
    [anon_sym_EQ_EQ] = ACTIONS(908),
    [anon_sym_while] = ACTIONS(904),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_parameter_meta] = ACTIONS(904),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(904),
    [anon_sym_Array] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(912),
    [anon_sym_scatter] = ACTIONS(904),
    [anon_sym_Boolean] = ACTIONS(904),
    [anon_sym_call] = ACTIONS(904),
    [anon_sym_RBRACE] = ACTIONS(904),
    [anon_sym_DASH] = ACTIONS(910),
  },
  [400] = {
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_true] = ACTIONS(914),
    [aux_sym_identifier_token1] = ACTIONS(914),
    [anon_sym_PERCENT] = ACTIONS(823),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_if] = ACTIONS(914),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [anon_sym_SQUOTE] = ACTIONS(823),
    [sym_float] = ACTIONS(914),
    [anon_sym_false] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(914),
    [anon_sym_EQ_EQ] = ACTIONS(823),
    [sym_integer] = ACTIONS(914),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_DASH] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
  },
  [401] = {
    [anon_sym_true] = ACTIONS(916),
    [aux_sym_identifier_token1] = ACTIONS(916),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [anon_sym_SQUOTE] = ACTIONS(819),
    [sym_float] = ACTIONS(916),
    [anon_sym_false] = ACTIONS(916),
    [anon_sym_LBRACE] = ACTIONS(819),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [sym_integer] = ACTIONS(916),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(819),
  },
  [402] = {
    [anon_sym_output] = ACTIONS(823),
    [anon_sym_PERCENT] = ACTIONS(823),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_meta] = ACTIONS(823),
    [anon_sym_Float] = ACTIONS(823),
    [anon_sym_Int] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_Array] = ACTIONS(823),
    [anon_sym_call] = ACTIONS(823),
    [anon_sym_File] = ACTIONS(823),
    [sym_object_type] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_if] = ACTIONS(823),
    [anon_sym_Map] = ACTIONS(823),
    [anon_sym_runtime] = ACTIONS(823),
    [anon_sym_EQ_EQ] = ACTIONS(823),
    [anon_sym_while] = ACTIONS(823),
    [anon_sym_command] = ACTIONS(823),
    [anon_sym_parameter_meta] = ACTIONS(823),
    [anon_sym_String] = ACTIONS(823),
    [anon_sym_scatter] = ACTIONS(823),
    [anon_sym_Boolean] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_else] = ACTIONS(823),
    [anon_sym_DASH] = ACTIONS(823),
    [anon_sym_then] = ACTIONS(823),
  },
  [403] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(819),
  },
  [404] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(918),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [405] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(819),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [406] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(920),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [407] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(456),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [408] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(457),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [409] = {
    [anon_sym_true] = ACTIONS(547),
    [aux_sym_identifier_token1] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_float] = ACTIONS(547),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [sym_integer] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(709),
  },
  [410] = {
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_float] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [sym_integer] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(709),
  },
  [411] = {
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [sym_float] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [sym_integer] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [412] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [413] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(458),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [414] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(493),
    [aux_sym_identifier_token1] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(719),
    [anon_sym_SLASH] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(725),
  },
  [415] = {
    [anon_sym_EQ_EQ] = ACTIONS(717),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(719),
    [anon_sym_SLASH] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(725),
  },
  [416] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(495),
    [aux_sym_identifier_token1] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(719),
    [anon_sym_SLASH] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [417] = {
    [sym_variable_mapping_kv] = STATE(459),
    [sym_identifier] = STATE(363),
    [aux_sym_identifier_token1] = ACTIONS(53),
  },
  [418] = {
    [aux_sym_variable_mappings_repeat1] = STATE(460),
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_RBRACE] = ACTIONS(926),
  },
  [419] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(461),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [420] = {
    [anon_sym_meta] = ACTIONS(928),
    [anon_sym_output] = ACTIONS(928),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_parameter_meta] = ACTIONS(928),
    [anon_sym_runtime] = ACTIONS(928),
    [anon_sym_command] = ACTIONS(928),
  },
  [421] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_task_output_kv] = STATE(421),
    [aux_sym_task_output_repeat1] = STATE(421),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(366),
    [anon_sym_File] = ACTIONS(930),
    [sym_object_type] = ACTIONS(933),
    [anon_sym_String] = ACTIONS(930),
    [anon_sym_Array] = ACTIONS(936),
    [anon_sym_Boolean] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(939),
    [anon_sym_Float] = ACTIONS(930),
    [anon_sym_Map] = ACTIONS(941),
    [anon_sym_Int] = ACTIONS(930),
  },
  [422] = {
    [anon_sym_EQ] = ACTIONS(944),
  },
  [423] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_var_option] = STATE(469),
    [sym_var_option_key] = STATE(467),
    [sym_expression] = STATE(468),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [aux_sym_command_part_var_repeat1] = STATE(469),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_true] = ACTIONS(946),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(948),
    [anon_sym_PLUS] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(946),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(25),
    [anon_sym_sep] = ACTIONS(948),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [424] = {
    [anon_sym_meta] = ACTIONS(954),
    [anon_sym_output] = ACTIONS(954),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_parameter_meta] = ACTIONS(954),
    [anon_sym_runtime] = ACTIONS(954),
    [anon_sym_command] = ACTIONS(954),
  },
  [425] = {
    [sym_command_part_var] = STATE(367),
    [aux_sym_command_repeat1] = STATE(425),
    [sym_command_part] = STATE(425),
    [anon_sym_GT_GT_GT] = ACTIONS(956),
    [sym_command_part_string] = ACTIONS(958),
    [anon_sym_DOLLAR] = ACTIONS(961),
  },
  [426] = {
    [sym_command_part_var] = STATE(367),
    [aux_sym_command_repeat1] = STATE(426),
    [sym_command_part] = STATE(426),
    [anon_sym_DOLLAR] = ACTIONS(961),
    [sym_command_part_string] = ACTIONS(958),
    [anon_sym_RBRACE] = ACTIONS(956),
  },
  [427] = {
    [anon_sym_meta] = ACTIONS(879),
    [anon_sym_output] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(881),
    [aux_sym_identifier_token1] = ACTIONS(879),
    [anon_sym_runtime] = ACTIONS(879),
    [anon_sym_parameter_meta] = ACTIONS(879),
    [anon_sym_command] = ACTIONS(879),
  },
  [428] = {
    [sym_parameter_meta_kv] = STATE(371),
    [aux_sym_parameter_meta_repeat1] = STATE(428),
    [sym_identifier] = STATE(320),
    [anon_sym_meta] = ACTIONS(879),
    [anon_sym_output] = ACTIONS(879),
    [anon_sym_RBRACE] = ACTIONS(881),
    [aux_sym_identifier_token1] = ACTIONS(883),
    [anon_sym_runtime] = ACTIONS(879),
    [anon_sym_parameter_meta] = ACTIONS(879),
    [anon_sym_command] = ACTIONS(879),
  },
  [429] = {
    [anon_sym_meta] = ACTIONS(587),
    [anon_sym_output] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [anon_sym_parameter_meta] = ACTIONS(587),
    [anon_sym_runtime] = ACTIONS(587),
    [anon_sym_command] = ACTIONS(587),
  },
  [430] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(109),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [431] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(470),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [432] = {
    [anon_sym_File] = ACTIONS(904),
    [anon_sym_output] = ACTIONS(904),
    [anon_sym_PERCENT] = ACTIONS(964),
    [sym_object_type] = ACTIONS(904),
    [anon_sym_BANG_EQ] = ACTIONS(966),
    [anon_sym_SLASH] = ACTIONS(964),
    [anon_sym_PLUS] = ACTIONS(968),
    [anon_sym_meta] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_Map] = ACTIONS(904),
    [anon_sym_Float] = ACTIONS(904),
    [anon_sym_runtime] = ACTIONS(904),
    [anon_sym_Int] = ACTIONS(904),
    [anon_sym_EQ_EQ] = ACTIONS(966),
    [anon_sym_STAR] = ACTIONS(964),
    [anon_sym_command] = ACTIONS(904),
    [anon_sym_parameter_meta] = ACTIONS(904),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_Array] = ACTIONS(904),
    [anon_sym_String] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(970),
    [anon_sym_Boolean] = ACTIONS(904),
    [anon_sym_DASH] = ACTIONS(968),
  },
  [433] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(475),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [434] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(476),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [435] = {
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_RBRACE] = ACTIONS(972),
  },
  [436] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(478),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(478),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(974),
  },
  [437] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(480),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(480),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(976),
  },
  [438] = {
    [anon_sym_RBRACE] = ACTIONS(978),
  },
  [439] = {
    [anon_sym_File] = ACTIONS(980),
    [sym_object_type] = ACTIONS(980),
    [anon_sym_meta] = ACTIONS(980),
    [anon_sym_if] = ACTIONS(980),
    [anon_sym_Map] = ACTIONS(980),
    [anon_sym_Float] = ACTIONS(980),
    [anon_sym_Int] = ACTIONS(980),
    [anon_sym_while] = ACTIONS(980),
    [anon_sym_parameter_meta] = ACTIONS(980),
    [anon_sym_String] = ACTIONS(980),
    [anon_sym_Array] = ACTIONS(980),
    [anon_sym_scatter] = ACTIONS(980),
    [anon_sym_Boolean] = ACTIONS(980),
    [anon_sym_call] = ACTIONS(980),
    [anon_sym_RBRACE] = ACTIONS(980),
  },
  [440] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(257),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(257),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(982),
  },
  [441] = {
    [anon_sym_File] = ACTIONS(984),
    [sym_object_type] = ACTIONS(984),
    [anon_sym_meta] = ACTIONS(984),
    [anon_sym_if] = ACTIONS(984),
    [anon_sym_Map] = ACTIONS(984),
    [anon_sym_Float] = ACTIONS(984),
    [anon_sym_Int] = ACTIONS(984),
    [anon_sym_while] = ACTIONS(984),
    [anon_sym_parameter_meta] = ACTIONS(984),
    [anon_sym_String] = ACTIONS(984),
    [anon_sym_Array] = ACTIONS(984),
    [anon_sym_scatter] = ACTIONS(984),
    [anon_sym_Boolean] = ACTIONS(984),
    [anon_sym_call] = ACTIONS(984),
    [anon_sym_RBRACE] = ACTIONS(984),
  },
  [442] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [443] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(482),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [444] = {
    [anon_sym_EQ_EQ] = ACTIONS(986),
    [anon_sym_STAR] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(990),
    [anon_sym_RPAREN] = ACTIONS(990),
    [anon_sym_DOT] = ACTIONS(992),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_BANG_EQ] = ACTIONS(986),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(994),
  },
  [445] = {
    [anon_sym_File] = ACTIONS(727),
    [sym_object_type] = ACTIONS(727),
    [anon_sym_meta] = ACTIONS(727),
    [anon_sym_if] = ACTIONS(727),
    [anon_sym_Map] = ACTIONS(727),
    [anon_sym_Float] = ACTIONS(727),
    [anon_sym_Int] = ACTIONS(727),
    [anon_sym_while] = ACTIONS(727),
    [anon_sym_parameter_meta] = ACTIONS(727),
    [anon_sym_String] = ACTIONS(727),
    [anon_sym_Array] = ACTIONS(727),
    [anon_sym_scatter] = ACTIONS(727),
    [anon_sym_Boolean] = ACTIONS(727),
    [anon_sym_call] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(727),
  },
  [446] = {
    [anon_sym_File] = ACTIONS(729),
    [sym_object_type] = ACTIONS(729),
    [anon_sym_meta] = ACTIONS(729),
    [anon_sym_if] = ACTIONS(729),
    [anon_sym_Map] = ACTIONS(729),
    [anon_sym_Float] = ACTIONS(729),
    [anon_sym_Int] = ACTIONS(729),
    [anon_sym_while] = ACTIONS(729),
    [anon_sym_parameter_meta] = ACTIONS(729),
    [anon_sym_String] = ACTIONS(729),
    [anon_sym_Array] = ACTIONS(729),
    [anon_sym_scatter] = ACTIONS(729),
    [anon_sym_Boolean] = ACTIONS(729),
    [anon_sym_call] = ACTIONS(729),
    [anon_sym_RBRACE] = ACTIONS(729),
  },
  [447] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(996),
  },
  [448] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(488),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [449] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(196),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [450] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(489),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [451] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(490),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [452] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(491),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [453] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(492),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [454] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [455] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(493),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(998),
    [anon_sym_EQ_EQ] = ACTIONS(1000),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(1004),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1000),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(998),
    [anon_sym_DASH] = ACTIONS(1006),
  },
  [457] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1008),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [458] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1010),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [459] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RBRACE] = ACTIONS(1012),
  },
  [460] = {
    [aux_sym_variable_mappings_repeat1] = STATE(460),
    [anon_sym_COMMA] = ACTIONS(1014),
    [anon_sym_RBRACE] = ACTIONS(1012),
  },
  [461] = {
    [anon_sym_COMMA] = ACTIONS(1017),
    [anon_sym_EQ_EQ] = ACTIONS(1000),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(1004),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1000),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(1017),
    [anon_sym_DASH] = ACTIONS(1006),
  },
  [462] = {
    [sym_string_literal] = STATE(500),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(95),
  },
  [463] = {
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(1019),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
  },
  [464] = {
    [anon_sym_EQ] = ACTIONS(1021),
  },
  [465] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(31),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(950),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [466] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(501),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [467] = {
    [anon_sym_EQ] = ACTIONS(1023),
  },
  [468] = {
    [anon_sym_EQ_EQ] = ACTIONS(1025),
    [anon_sym_STAR] = ACTIONS(1027),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(1029),
    [anon_sym_PERCENT] = ACTIONS(1027),
    [anon_sym_BANG_EQ] = ACTIONS(1025),
    [anon_sym_SLASH] = ACTIONS(1027),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(1033),
    [anon_sym_DASH] = ACTIONS(1031),
  },
  [469] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_var_option] = STATE(509),
    [sym_var_option_key] = STATE(467),
    [sym_expression] = STATE(508),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [aux_sym_command_part_var_repeat1] = STATE(509),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_true] = ACTIONS(946),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(948),
    [anon_sym_PLUS] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(946),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_integer] = ACTIONS(25),
    [anon_sym_sep] = ACTIONS(948),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [470] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(1035),
  },
  [471] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(511),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [472] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(196),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [473] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(512),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [474] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(513),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(819),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [476] = {
    [anon_sym_EQ_EQ] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(819),
  },
  [477] = {
    [anon_sym_File] = ACTIONS(1037),
    [sym_object_type] = ACTIONS(1037),
    [anon_sym_meta] = ACTIONS(1037),
    [anon_sym_if] = ACTIONS(1037),
    [anon_sym_Map] = ACTIONS(1037),
    [anon_sym_Float] = ACTIONS(1037),
    [anon_sym_Int] = ACTIONS(1037),
    [anon_sym_while] = ACTIONS(1037),
    [anon_sym_parameter_meta] = ACTIONS(1037),
    [anon_sym_String] = ACTIONS(1037),
    [anon_sym_Array] = ACTIONS(1037),
    [anon_sym_scatter] = ACTIONS(1037),
    [anon_sym_Boolean] = ACTIONS(1037),
    [anon_sym_call] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
  },
  [478] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(257),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(257),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(1039),
  },
  [479] = {
    [anon_sym_File] = ACTIONS(1041),
    [sym_object_type] = ACTIONS(1041),
    [anon_sym_meta] = ACTIONS(1041),
    [anon_sym_if] = ACTIONS(1041),
    [anon_sym_Map] = ACTIONS(1041),
    [anon_sym_Float] = ACTIONS(1041),
    [anon_sym_Int] = ACTIONS(1041),
    [anon_sym_while] = ACTIONS(1041),
    [anon_sym_parameter_meta] = ACTIONS(1041),
    [anon_sym_String] = ACTIONS(1041),
    [anon_sym_Array] = ACTIONS(1041),
    [anon_sym_scatter] = ACTIONS(1041),
    [anon_sym_Boolean] = ACTIONS(1041),
    [anon_sym_call] = ACTIONS(1041),
    [anon_sym_RBRACE] = ACTIONS(1041),
  },
  [480] = {
    [sym_array_type] = STATE(5),
    [sym_primitive_type] = STATE(5),
    [sym_scatter] = STATE(170),
    [sym_conditional] = STATE(170),
    [sym_loop] = STATE(170),
    [sym_map_type] = STATE(5),
    [sym_type] = STATE(172),
    [sym_parameter_meta] = STATE(170),
    [sym_declaration] = STATE(170),
    [aux_sym_loop_repeat1] = STATE(257),
    [sym_call] = STATE(170),
    [sym_meta] = STATE(170),
    [sym_workflow_element] = STATE(257),
    [anon_sym_File] = ACTIONS(259),
    [sym_object_type] = ACTIONS(310),
    [anon_sym_meta] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(314),
    [anon_sym_Map] = ACTIONS(316),
    [anon_sym_Float] = ACTIONS(259),
    [anon_sym_Int] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(318),
    [anon_sym_parameter_meta] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(275),
    [anon_sym_String] = ACTIONS(259),
    [anon_sym_scatter] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(259),
    [anon_sym_call] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(1043),
  },
  [481] = {
    [anon_sym_File] = ACTIONS(1045),
    [sym_object_type] = ACTIONS(1045),
    [anon_sym_meta] = ACTIONS(1045),
    [anon_sym_if] = ACTIONS(1045),
    [anon_sym_Map] = ACTIONS(1045),
    [anon_sym_Float] = ACTIONS(1045),
    [anon_sym_Int] = ACTIONS(1045),
    [anon_sym_while] = ACTIONS(1045),
    [anon_sym_parameter_meta] = ACTIONS(1045),
    [anon_sym_String] = ACTIONS(1045),
    [anon_sym_Array] = ACTIONS(1045),
    [anon_sym_scatter] = ACTIONS(1045),
    [anon_sym_Boolean] = ACTIONS(1045),
    [anon_sym_call] = ACTIONS(1045),
    [anon_sym_RBRACE] = ACTIONS(1045),
  },
  [482] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(1047),
  },
  [483] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(517),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [484] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [485] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(518),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [486] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(519),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [487] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(520),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [488] = {
    [anon_sym_File] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(906),
    [sym_object_type] = ACTIONS(493),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(493),
    [anon_sym_Map] = ACTIONS(493),
    [anon_sym_Float] = ACTIONS(493),
    [anon_sym_meta] = ACTIONS(493),
    [anon_sym_Int] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_parameter_meta] = ACTIONS(493),
    [anon_sym_String] = ACTIONS(493),
    [anon_sym_Array] = ACTIONS(493),
    [anon_sym_while] = ACTIONS(493),
    [anon_sym_scatter] = ACTIONS(493),
    [anon_sym_Boolean] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_call] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(910),
  },
  [489] = {
    [anon_sym_File] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(906),
    [sym_object_type] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(908),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(497),
    [anon_sym_Map] = ACTIONS(497),
    [anon_sym_Float] = ACTIONS(497),
    [anon_sym_meta] = ACTIONS(497),
    [anon_sym_Int] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(908),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_parameter_meta] = ACTIONS(497),
    [anon_sym_String] = ACTIONS(497),
    [anon_sym_Array] = ACTIONS(497),
    [anon_sym_while] = ACTIONS(497),
    [anon_sym_scatter] = ACTIONS(497),
    [anon_sym_Boolean] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_call] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(910),
  },
  [490] = {
    [anon_sym_File] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(906),
    [sym_object_type] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_Map] = ACTIONS(495),
    [anon_sym_Float] = ACTIONS(495),
    [anon_sym_meta] = ACTIONS(495),
    [anon_sym_Int] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_parameter_meta] = ACTIONS(495),
    [anon_sym_String] = ACTIONS(495),
    [anon_sym_Array] = ACTIONS(495),
    [anon_sym_while] = ACTIONS(495),
    [anon_sym_scatter] = ACTIONS(495),
    [anon_sym_Boolean] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_call] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [491] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [492] = {
    [anon_sym_COMMA] = ACTIONS(819),
    [anon_sym_true] = ACTIONS(916),
    [aux_sym_identifier_token1] = ACTIONS(916),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [anon_sym_SQUOTE] = ACTIONS(819),
    [sym_float] = ACTIONS(916),
    [anon_sym_false] = ACTIONS(916),
    [anon_sym_LBRACE] = ACTIONS(819),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [sym_integer] = ACTIONS(916),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [493] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(1049),
  },
  [494] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(522),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [495] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [496] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(523),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [497] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(524),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [498] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(525),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [499] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(526),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(594),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(594),
  },
  [500] = {
    [anon_sym_File] = ACTIONS(1051),
    [sym_object_type] = ACTIONS(1051),
    [anon_sym_String] = ACTIONS(1051),
    [anon_sym_Array] = ACTIONS(1051),
    [anon_sym_Boolean] = ACTIONS(1051),
    [anon_sym_RBRACE] = ACTIONS(1051),
    [anon_sym_Float] = ACTIONS(1051),
    [anon_sym_Map] = ACTIONS(1051),
    [anon_sym_Int] = ACTIONS(1051),
  },
  [501] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(1053),
  },
  [502] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(538),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [sym_var_option_value] = STATE(539),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [503] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(540),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(950),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [504] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(153),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(950),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [505] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(541),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(950),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [506] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(542),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(950),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [507] = {
    [sym_command_part_string] = ACTIONS(1075),
    [anon_sym_RBRACE] = ACTIONS(1075),
    [anon_sym_GT_GT_GT] = ACTIONS(1075),
    [anon_sym_DOLLAR] = ACTIONS(1075),
  },
  [508] = {
    [anon_sym_EQ_EQ] = ACTIONS(1025),
    [anon_sym_STAR] = ACTIONS(1027),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(1029),
    [anon_sym_PERCENT] = ACTIONS(1027),
    [anon_sym_BANG_EQ] = ACTIONS(1025),
    [anon_sym_SLASH] = ACTIONS(1027),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_DASH] = ACTIONS(1031),
  },
  [509] = {
    [sym_var_option] = STATE(509),
    [sym_var_option_key] = STATE(467),
    [aux_sym_command_part_var_repeat1] = STATE(509),
    [anon_sym_true] = ACTIONS(1079),
    [aux_sym_identifier_token1] = ACTIONS(1082),
    [anon_sym_default] = ACTIONS(1079),
    [anon_sym_PLUS] = ACTIONS(1084),
    [anon_sym_LBRACK] = ACTIONS(1084),
    [anon_sym_if] = ACTIONS(1082),
    [anon_sym_DQUOTE] = ACTIONS(1084),
    [anon_sym_SQUOTE] = ACTIONS(1084),
    [sym_float] = ACTIONS(1082),
    [anon_sym_false] = ACTIONS(1079),
    [anon_sym_LBRACE] = ACTIONS(1084),
    [anon_sym_quote] = ACTIONS(1079),
    [anon_sym_LPAREN] = ACTIONS(1084),
    [sym_integer] = ACTIONS(1082),
    [anon_sym_sep] = ACTIONS(1079),
    [anon_sym_DASH] = ACTIONS(1084),
  },
  [510] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(544),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [511] = {
    [anon_sym_File] = ACTIONS(493),
    [anon_sym_output] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(964),
    [sym_object_type] = ACTIONS(493),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(964),
    [anon_sym_PLUS] = ACTIONS(968),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_meta] = ACTIONS(493),
    [anon_sym_Map] = ACTIONS(493),
    [anon_sym_Float] = ACTIONS(493),
    [anon_sym_runtime] = ACTIONS(493),
    [anon_sym_Int] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(964),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_parameter_meta] = ACTIONS(493),
    [anon_sym_String] = ACTIONS(493),
    [anon_sym_Array] = ACTIONS(493),
    [anon_sym_command] = ACTIONS(493),
    [anon_sym_Boolean] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(968),
  },
  [512] = {
    [anon_sym_File] = ACTIONS(497),
    [anon_sym_output] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(964),
    [sym_object_type] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(966),
    [anon_sym_SLASH] = ACTIONS(964),
    [anon_sym_PLUS] = ACTIONS(968),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_meta] = ACTIONS(497),
    [anon_sym_Map] = ACTIONS(497),
    [anon_sym_Float] = ACTIONS(497),
    [anon_sym_runtime] = ACTIONS(497),
    [anon_sym_Int] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(966),
    [anon_sym_STAR] = ACTIONS(964),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_parameter_meta] = ACTIONS(497),
    [anon_sym_String] = ACTIONS(497),
    [anon_sym_Array] = ACTIONS(497),
    [anon_sym_command] = ACTIONS(497),
    [anon_sym_Boolean] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(968),
  },
  [513] = {
    [anon_sym_File] = ACTIONS(495),
    [anon_sym_output] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(964),
    [sym_object_type] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(964),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_meta] = ACTIONS(495),
    [anon_sym_Map] = ACTIONS(495),
    [anon_sym_Float] = ACTIONS(495),
    [anon_sym_runtime] = ACTIONS(495),
    [anon_sym_Int] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(964),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_parameter_meta] = ACTIONS(495),
    [anon_sym_String] = ACTIONS(495),
    [anon_sym_Array] = ACTIONS(495),
    [anon_sym_command] = ACTIONS(495),
    [anon_sym_Boolean] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [514] = {
    [anon_sym_File] = ACTIONS(1086),
    [sym_object_type] = ACTIONS(1086),
    [anon_sym_meta] = ACTIONS(1086),
    [anon_sym_if] = ACTIONS(1086),
    [anon_sym_Map] = ACTIONS(1086),
    [anon_sym_Float] = ACTIONS(1086),
    [anon_sym_Int] = ACTIONS(1086),
    [anon_sym_while] = ACTIONS(1086),
    [anon_sym_parameter_meta] = ACTIONS(1086),
    [anon_sym_String] = ACTIONS(1086),
    [anon_sym_Array] = ACTIONS(1086),
    [anon_sym_scatter] = ACTIONS(1086),
    [anon_sym_Boolean] = ACTIONS(1086),
    [anon_sym_call] = ACTIONS(1086),
    [anon_sym_RBRACE] = ACTIONS(1086),
  },
  [515] = {
    [anon_sym_File] = ACTIONS(1088),
    [sym_object_type] = ACTIONS(1088),
    [anon_sym_meta] = ACTIONS(1088),
    [anon_sym_if] = ACTIONS(1088),
    [anon_sym_Map] = ACTIONS(1088),
    [anon_sym_Float] = ACTIONS(1088),
    [anon_sym_Int] = ACTIONS(1088),
    [anon_sym_while] = ACTIONS(1088),
    [anon_sym_parameter_meta] = ACTIONS(1088),
    [anon_sym_String] = ACTIONS(1088),
    [anon_sym_Array] = ACTIONS(1088),
    [anon_sym_scatter] = ACTIONS(1088),
    [anon_sym_Boolean] = ACTIONS(1088),
    [anon_sym_call] = ACTIONS(1088),
    [anon_sym_RBRACE] = ACTIONS(1088),
  },
  [516] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(545),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [517] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(493),
    [aux_sym_identifier_token1] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(994),
  },
  [518] = {
    [anon_sym_EQ_EQ] = ACTIONS(986),
    [anon_sym_STAR] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_BANG_EQ] = ACTIONS(986),
    [anon_sym_DASH] = ACTIONS(994),
  },
  [519] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(495),
    [aux_sym_identifier_token1] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [520] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1090),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [521] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(547),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [522] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(1006),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(1000),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1000),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(1006),
  },
  [524] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [525] = {
    [anon_sym_true] = ACTIONS(916),
    [aux_sym_identifier_token1] = ACTIONS(916),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [anon_sym_SQUOTE] = ACTIONS(819),
    [sym_float] = ACTIONS(916),
    [anon_sym_false] = ACTIONS(916),
    [anon_sym_LBRACE] = ACTIONS(819),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [sym_integer] = ACTIONS(916),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(709),
  },
  [526] = {
    [anon_sym_EQ_EQ] = ACTIONS(717),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(819),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(719),
    [anon_sym_SLASH] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(725),
  },
  [527] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(548),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [528] = {
    [anon_sym_true] = ACTIONS(173),
    [aux_sym_identifier_token1] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_float] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(173),
    [sym_integer] = ACTIONS(173),
    [anon_sym_sep] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(43),
  },
  [529] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(551),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(550),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [530] = {
    [anon_sym_true] = ACTIONS(47),
    [aux_sym_identifier_token1] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_default] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_float] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_quote] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [anon_sym_sep] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(45),
  },
  [531] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(552),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(119),
  },
  [532] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(553),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [533] = {
    [anon_sym_true] = ACTIONS(179),
    [aux_sym_identifier_token1] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_float] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(179),
    [sym_integer] = ACTIONS(179),
    [anon_sym_sep] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(109),
  },
  [534] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(554),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(89),
  },
  [535] = {
    [aux_sym_string_literal_repeat1] = STATE(556),
    [aux_sym_string_literal_token1] = ACTIONS(1094),
    [sym_escape_sequence] = ACTIONS(1094),
    [anon_sym_DQUOTE] = ACTIONS(1096),
  },
  [536] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(558),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [sym_float] = ACTIONS(69),
  },
  [537] = {
    [aux_sym_string_literal_repeat2] = STATE(559),
    [anon_sym_SQUOTE] = ACTIONS(1096),
    [aux_sym_string_literal_token2] = ACTIONS(1100),
    [sym_escape_sequence] = ACTIONS(1102),
  },
  [538] = {
    [anon_sym_true] = ACTIONS(1104),
    [aux_sym_identifier_token1] = ACTIONS(1104),
    [anon_sym_PERCENT] = ACTIONS(1106),
    [anon_sym_default] = ACTIONS(1104),
    [anon_sym_BANG_EQ] = ACTIONS(1108),
    [anon_sym_PLUS] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1112),
    [anon_sym_if] = ACTIONS(1104),
    [anon_sym_DQUOTE] = ACTIONS(1114),
    [anon_sym_SLASH] = ACTIONS(1106),
    [anon_sym_SQUOTE] = ACTIONS(1114),
    [sym_float] = ACTIONS(1104),
    [anon_sym_false] = ACTIONS(1104),
    [anon_sym_LBRACE] = ACTIONS(1114),
    [anon_sym_quote] = ACTIONS(1104),
    [anon_sym_LPAREN] = ACTIONS(1116),
    [anon_sym_EQ_EQ] = ACTIONS(1108),
    [anon_sym_STAR] = ACTIONS(1106),
    [anon_sym_DOT] = ACTIONS(1118),
    [sym_integer] = ACTIONS(1104),
    [anon_sym_sep] = ACTIONS(1104),
    [anon_sym_DASH] = ACTIONS(1110),
  },
  [539] = {
    [anon_sym_true] = ACTIONS(1120),
    [aux_sym_identifier_token1] = ACTIONS(1120),
    [anon_sym_default] = ACTIONS(1120),
    [anon_sym_PLUS] = ACTIONS(1122),
    [anon_sym_LBRACK] = ACTIONS(1122),
    [anon_sym_if] = ACTIONS(1120),
    [anon_sym_DQUOTE] = ACTIONS(1122),
    [anon_sym_SQUOTE] = ACTIONS(1122),
    [sym_float] = ACTIONS(1120),
    [anon_sym_false] = ACTIONS(1120),
    [anon_sym_LBRACE] = ACTIONS(1122),
    [anon_sym_quote] = ACTIONS(1120),
    [anon_sym_LPAREN] = ACTIONS(1122),
    [sym_integer] = ACTIONS(1120),
    [anon_sym_sep] = ACTIONS(1120),
    [anon_sym_DASH] = ACTIONS(1122),
  },
  [540] = {
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(1027),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(1027),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(1027),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(1031),
  },
  [541] = {
    [anon_sym_EQ_EQ] = ACTIONS(1025),
    [anon_sym_STAR] = ACTIONS(1027),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(1027),
    [anon_sym_BANG_EQ] = ACTIONS(1025),
    [anon_sym_SLASH] = ACTIONS(1027),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(1031),
  },
  [542] = {
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(1027),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(1027),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(1027),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [543] = {
    [sym_command_part_string] = ACTIONS(1124),
    [anon_sym_RBRACE] = ACTIONS(1124),
    [anon_sym_GT_GT_GT] = ACTIONS(1124),
    [anon_sym_DOLLAR] = ACTIONS(1124),
  },
  [544] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1126),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [545] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1128),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [546] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(568),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(809),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(809),
  },
  [547] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1130),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [548] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1132),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [549] = {
    [anon_sym_true] = ACTIONS(332),
    [aux_sym_identifier_token1] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_default] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_float] = ACTIONS(332),
    [anon_sym_false] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(332),
    [sym_integer] = ACTIONS(332),
    [anon_sym_sep] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(245),
  },
  [550] = {
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(1134),
    [anon_sym_DASH] = ACTIONS(253),
  },
  [551] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_expression] = STATE(133),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(1136),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
  },
  [552] = {
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(1138),
    [anon_sym_DASH] = ACTIONS(267),
  },
  [553] = {
    [anon_sym_true] = ACTIONS(340),
    [aux_sym_identifier_token1] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_default] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [sym_float] = ACTIONS(340),
    [anon_sym_false] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_quote] = ACTIONS(340),
    [sym_integer] = ACTIONS(340),
    [anon_sym_sep] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(171),
  },
  [554] = {
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_then] = ACTIONS(1140),
  },
  [555] = {
    [anon_sym_true] = ACTIONS(344),
    [aux_sym_identifier_token1] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_if] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_default] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_float] = ACTIONS(344),
    [anon_sym_false] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(344),
    [sym_integer] = ACTIONS(344),
    [anon_sym_sep] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(235),
  },
  [556] = {
    [aux_sym_string_literal_repeat1] = STATE(124),
    [aux_sym_string_literal_token1] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(1142),
  },
  [557] = {
    [anon_sym_true] = ACTIONS(348),
    [aux_sym_identifier_token1] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [sym_float] = ACTIONS(348),
    [anon_sym_false] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(348),
    [sym_integer] = ACTIONS(348),
    [anon_sym_sep] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(177),
  },
  [558] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(43),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [aux_sym_bracket_expression_repeat1] = STATE(104),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(63),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(1144),
    [sym_float] = ACTIONS(69),
  },
  [559] = {
    [aux_sym_string_literal_repeat2] = STATE(125),
    [anon_sym_SQUOTE] = ACTIONS(1142),
    [aux_sym_string_literal_token2] = ACTIONS(241),
    [sym_escape_sequence] = ACTIONS(243),
  },
  [560] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(577),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [561] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(578),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [562] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(580),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [anon_sym_PLUS] = ACTIONS(302),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(302),
  },
  [563] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(581),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [564] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(582),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [565] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(583),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(306),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(306),
  },
  [566] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(584),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(860),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(860),
  },
  [567] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(585),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(895),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(895),
  },
  [568] = {
    [anon_sym_File] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(906),
    [sym_object_type] = ACTIONS(819),
    [anon_sym_BANG_EQ] = ACTIONS(908),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(819),
    [anon_sym_Map] = ACTIONS(819),
    [anon_sym_Float] = ACTIONS(819),
    [anon_sym_meta] = ACTIONS(819),
    [anon_sym_Int] = ACTIONS(819),
    [anon_sym_EQ_EQ] = ACTIONS(908),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_parameter_meta] = ACTIONS(819),
    [anon_sym_String] = ACTIONS(819),
    [anon_sym_Array] = ACTIONS(819),
    [anon_sym_while] = ACTIONS(819),
    [anon_sym_scatter] = ACTIONS(819),
    [anon_sym_Boolean] = ACTIONS(819),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_call] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(910),
  },
  [569] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(586),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(922),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(924),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(922),
  },
  [570] = {
    [sym_string_literal] = STATE(13),
    [sym_math_expression] = STATE(13),
    [sym_expression] = STATE(587),
    [sym_parentheses_expression] = STATE(13),
    [sym_equality_expression] = STATE(13),
    [sym_identifier] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_dictionary_expression] = STATE(13),
    [sym_bracket_expression] = STATE(13),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(950),
    [sym_integer] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(950),
  },
  [571] = {
    [sym_string_literal] = STATE(38),
    [sym_math_expression] = STATE(38),
    [sym_expression] = STATE(588),
    [sym_parentheses_expression] = STATE(38),
    [sym_equality_expression] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_dictionary_expression] = STATE(38),
    [sym_bracket_expression] = STATE(38),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(423),
    [sym_integer] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(423),
  },
  [572] = {
    [anon_sym_true] = ACTIONS(539),
    [aux_sym_identifier_token1] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_BANG_EQ] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_default] = ACTIONS(539),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [sym_float] = ACTIONS(539),
    [anon_sym_false] = ACTIONS(539),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(539),
    [sym_integer] = ACTIONS(539),
    [anon_sym_sep] = ACTIONS(539),
    [anon_sym_DASH] = ACTIONS(427),
  },
  [573] = {
    [anon_sym_true] = ACTIONS(541),
    [aux_sym_identifier_token1] = ACTIONS(541),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_if] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(541),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [sym_float] = ACTIONS(541),
    [anon_sym_false] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_quote] = ACTIONS(541),
    [sym_integer] = ACTIONS(541),
    [anon_sym_sep] = ACTIONS(541),
    [anon_sym_DASH] = ACTIONS(467),
  },
  [574] = {
    [sym_string_literal] = STATE(50),
    [sym_math_expression] = STATE(50),
    [sym_expression] = STATE(589),
    [sym_parentheses_expression] = STATE(50),
    [sym_equality_expression] = STATE(50),
    [sym_identifier] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_dictionary_expression] = STATE(50),
    [sym_bracket_expression] = STATE(50),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(402),
    [sym_integer] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(402),
  },
  [575] = {
    [anon_sym_true] = ACTIONS(543),
    [aux_sym_identifier_token1] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [anon_sym_default] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [sym_float] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_quote] = ACTIONS(543),
    [sym_integer] = ACTIONS(543),
    [anon_sym_sep] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(406),
  },
  [576] = {
    [anon_sym_true] = ACTIONS(545),
    [aux_sym_identifier_token1] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_if] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_default] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [sym_float] = ACTIONS(545),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(545),
    [sym_integer] = ACTIONS(545),
    [anon_sym_sep] = ACTIONS(545),
    [anon_sym_DASH] = ACTIONS(354),
  },
  [577] = {
    [anon_sym_true] = ACTIONS(547),
    [aux_sym_identifier_token1] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(1106),
    [anon_sym_BANG_EQ] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(1106),
    [anon_sym_PLUS] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_default] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_float] = ACTIONS(547),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(1106),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(493),
    [anon_sym_quote] = ACTIONS(547),
    [sym_integer] = ACTIONS(547),
    [anon_sym_sep] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(1110),
  },
  [578] = {
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_default] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [sym_float] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_quote] = ACTIONS(549),
    [sym_integer] = ACTIONS(549),
    [anon_sym_sep] = ACTIONS(549),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [579] = {
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_float] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(551),
    [sym_integer] = ACTIONS(551),
    [anon_sym_sep] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(497),
  },
  [580] = {
    [aux_sym_expression_repeat1] = STATE(591),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(1148),
    [anon_sym_DASH] = ACTIONS(507),
  },
  [581] = {
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(1106),
    [anon_sym_BANG_EQ] = ACTIONS(1108),
    [anon_sym_SLASH] = ACTIONS(1106),
    [anon_sym_PLUS] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1112),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_float] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(1106),
    [anon_sym_LPAREN] = ACTIONS(1116),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(1108),
    [anon_sym_quote] = ACTIONS(551),
    [sym_integer] = ACTIONS(551),
    [anon_sym_sep] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(1110),
  },
  [582] = {
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(1106),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(1106),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_default] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [sym_float] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(1106),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_quote] = ACTIONS(549),
    [sym_integer] = ACTIONS(549),
    [anon_sym_sep] = ACTIONS(549),
    [anon_sym_DASH] = ACTIONS(495),
  },
  [583] = {
    [anon_sym_EQ_EQ] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(1148),
  },
  [584] = {
    [anon_sym_File] = ACTIONS(819),
    [anon_sym_output] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(964),
    [sym_object_type] = ACTIONS(819),
    [anon_sym_BANG_EQ] = ACTIONS(966),
    [anon_sym_SLASH] = ACTIONS(964),
    [anon_sym_PLUS] = ACTIONS(968),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_meta] = ACTIONS(819),
    [anon_sym_Map] = ACTIONS(819),
    [anon_sym_Float] = ACTIONS(819),
    [anon_sym_runtime] = ACTIONS(819),
    [anon_sym_Int] = ACTIONS(819),
    [anon_sym_EQ_EQ] = ACTIONS(966),
    [anon_sym_STAR] = ACTIONS(964),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_parameter_meta] = ACTIONS(819),
    [anon_sym_String] = ACTIONS(819),
    [anon_sym_Array] = ACTIONS(819),
    [anon_sym_command] = ACTIONS(819),
    [anon_sym_Boolean] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(968),
  },
  [585] = {
    [anon_sym_EQ_EQ] = ACTIONS(986),
    [anon_sym_STAR] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_identifier_token1] = ACTIONS(819),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_BANG_EQ] = ACTIONS(986),
    [anon_sym_DASH] = ACTIONS(994),
  },
  [586] = {
    [anon_sym_COMMA] = ACTIONS(819),
    [anon_sym_EQ_EQ] = ACTIONS(1000),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1000),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(1006),
  },
  [587] = {
    [anon_sym_EQ_EQ] = ACTIONS(1025),
    [anon_sym_STAR] = ACTIONS(1027),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_PERCENT] = ACTIONS(1027),
    [anon_sym_BANG_EQ] = ACTIONS(1025),
    [anon_sym_SLASH] = ACTIONS(1027),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_DASH] = ACTIONS(1031),
  },
  [588] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(592),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(569),
    [aux_sym_identifier_token1] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym_float] = ACTIONS(569),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_EQ_EQ] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(579),
    [sym_integer] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(575),
  },
  [589] = {
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(1150),
    [anon_sym_DASH] = ACTIONS(563),
  },
  [590] = {
    [anon_sym_true] = ACTIONS(689),
    [aux_sym_identifier_token1] = ACTIONS(689),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_BANG_EQ] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_if] = ACTIONS(689),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_default] = ACTIONS(689),
    [anon_sym_SQUOTE] = ACTIONS(629),
    [sym_float] = ACTIONS(689),
    [anon_sym_false] = ACTIONS(689),
    [anon_sym_LBRACE] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(689),
    [anon_sym_EQ_EQ] = ACTIONS(629),
    [anon_sym_quote] = ACTIONS(689),
    [sym_integer] = ACTIONS(689),
    [anon_sym_sep] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(629),
  },
  [591] = {
    [aux_sym_expression_repeat1] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(1152),
  },
  [592] = {
    [aux_sym_dictionary_expression_repeat2] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(1154),
  },
  [593] = {
    [sym_string_literal] = STATE(533),
    [sym_math_expression] = STATE(533),
    [sym_expression] = STATE(596),
    [sym_parentheses_expression] = STATE(533),
    [sym_equality_expression] = STATE(533),
    [sym_identifier] = STATE(533),
    [sym_boolean] = STATE(533),
    [sym_dictionary_expression] = STATE(533),
    [sym_bracket_expression] = STATE(533),
    [anon_sym_false] = ACTIONS(1055),
    [anon_sym_LBRACE] = ACTIONS(1057),
    [anon_sym_true] = ACTIONS(1055),
    [aux_sym_identifier_token1] = ACTIONS(1059),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_PLUS] = ACTIONS(1063),
    [sym_integer] = ACTIONS(1065),
    [anon_sym_if] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_SQUOTE] = ACTIONS(1073),
    [sym_float] = ACTIONS(1065),
    [anon_sym_DASH] = ACTIONS(1063),
  },
  [594] = {
    [anon_sym_true] = ACTIONS(815),
    [aux_sym_identifier_token1] = ACTIONS(815),
    [anon_sym_PERCENT] = ACTIONS(778),
    [anon_sym_BANG_EQ] = ACTIONS(778),
    [anon_sym_SLASH] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [anon_sym_default] = ACTIONS(815),
    [anon_sym_SQUOTE] = ACTIONS(778),
    [sym_float] = ACTIONS(815),
    [anon_sym_false] = ACTIONS(815),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_STAR] = ACTIONS(778),
    [anon_sym_LPAREN] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(815),
    [anon_sym_EQ_EQ] = ACTIONS(778),
    [anon_sym_quote] = ACTIONS(815),
    [sym_integer] = ACTIONS(815),
    [anon_sym_sep] = ACTIONS(815),
    [anon_sym_DASH] = ACTIONS(778),
  },
  [595] = {
    [anon_sym_true] = ACTIONS(914),
    [aux_sym_identifier_token1] = ACTIONS(914),
    [anon_sym_PERCENT] = ACTIONS(823),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_if] = ACTIONS(914),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [anon_sym_default] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(823),
    [sym_float] = ACTIONS(914),
    [anon_sym_false] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(914),
    [anon_sym_EQ_EQ] = ACTIONS(823),
    [anon_sym_quote] = ACTIONS(914),
    [sym_integer] = ACTIONS(914),
    [anon_sym_sep] = ACTIONS(914),
    [anon_sym_DASH] = ACTIONS(823),
  },
  [596] = {
    [anon_sym_true] = ACTIONS(916),
    [aux_sym_identifier_token1] = ACTIONS(916),
    [anon_sym_PERCENT] = ACTIONS(1106),
    [anon_sym_BANG_EQ] = ACTIONS(1108),
    [anon_sym_SLASH] = ACTIONS(1106),
    [anon_sym_PLUS] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1112),
    [anon_sym_if] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [anon_sym_default] = ACTIONS(916),
    [anon_sym_SQUOTE] = ACTIONS(819),
    [sym_float] = ACTIONS(916),
    [anon_sym_false] = ACTIONS(916),
    [anon_sym_LBRACE] = ACTIONS(819),
    [anon_sym_STAR] = ACTIONS(1106),
    [anon_sym_LPAREN] = ACTIONS(1116),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_EQ_EQ] = ACTIONS(1108),
    [anon_sym_quote] = ACTIONS(916),
    [sym_integer] = ACTIONS(916),
    [anon_sym_sep] = ACTIONS(916),
    [anon_sym_DASH] = ACTIONS(1110),
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
  [19] = {.count = 1, .reusable = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(4),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = false}, SHIFT(32),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = false}, SHIFT(35),
  [67] = {.count = 1, .reusable = true}, SHIFT(36),
  [69] = {.count = 1, .reusable = false}, SHIFT(38),
  [71] = {.count = 1, .reusable = false}, SHIFT(39),
  [73] = {.count = 1, .reusable = true}, SHIFT(40),
  [75] = {.count = 1, .reusable = true}, SHIFT(41),
  [77] = {.count = 1, .reusable = true}, SHIFT(42),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = false}, SHIFT(45),
  [83] = {.count = 1, .reusable = true}, SHIFT(46),
  [85] = {.count = 1, .reusable = false}, SHIFT(47),
  [87] = {.count = 1, .reusable = true}, SHIFT(48),
  [89] = {.count = 1, .reusable = true}, SHIFT(49),
  [91] = {.count = 1, .reusable = false}, SHIFT(50),
  [93] = {.count = 1, .reusable = false}, SHIFT(51),
  [95] = {.count = 1, .reusable = true}, SHIFT(52),
  [97] = {.count = 1, .reusable = true}, SHIFT(53),
  [99] = {.count = 1, .reusable = true}, SHIFT(54),
  [101] = {.count = 1, .reusable = true}, SHIFT(57),
  [103] = {.count = 1, .reusable = false}, SHIFT(56),
  [105] = {.count = 1, .reusable = false}, SHIFT(58),
  [107] = {.count = 1, .reusable = true}, SHIFT(58),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(60),
  [113] = {.count = 1, .reusable = false}, SHIFT(61),
  [115] = {.count = 1, .reusable = true}, SHIFT(59),
  [117] = {.count = 1, .reusable = true}, SHIFT(64),
  [119] = {.count = 1, .reusable = true}, SHIFT(65),
  [121] = {.count = 1, .reusable = false}, SHIFT(66),
  [123] = {.count = 1, .reusable = true}, SHIFT(68),
  [125] = {.count = 1, .reusable = true}, SHIFT(69),
  [127] = {.count = 1, .reusable = true}, SHIFT(70),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(6),
  [135] = {.count = 1, .reusable = true}, SHIFT(20),
  [137] = {.count = 1, .reusable = true}, SHIFT(7),
  [139] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [141] = {.count = 1, .reusable = true}, SHIFT(75),
  [143] = {.count = 1, .reusable = true}, SHIFT(76),
  [145] = {.count = 1, .reusable = true}, SHIFT(77),
  [147] = {.count = 1, .reusable = true}, SHIFT(78),
  [149] = {.count = 1, .reusable = true}, SHIFT(79),
  [151] = {.count = 1, .reusable = true}, SHIFT(80),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(81),
  [159] = {.count = 1, .reusable = false}, SHIFT(82),
  [161] = {.count = 1, .reusable = false}, SHIFT(83),
  [163] = {.count = 1, .reusable = true}, SHIFT(83),
  [165] = {.count = 1, .reusable = true}, SHIFT(84),
  [167] = {.count = 1, .reusable = true}, SHIFT(85),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_math_expression, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(86),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(93),
  [183] = {.count = 1, .reusable = false}, SHIFT(92),
  [185] = {.count = 1, .reusable = true}, SHIFT(94),
  [187] = {.count = 1, .reusable = false}, SHIFT(96),
  [189] = {.count = 1, .reusable = true}, SHIFT(96),
  [191] = {.count = 1, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(98),
  [195] = {.count = 1, .reusable = true}, SHIFT(97),
  [197] = {.count = 1, .reusable = true}, SHIFT(101),
  [199] = {.count = 1, .reusable = true}, SHIFT(102),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 1),
  [203] = {.count = 1, .reusable = true}, SHIFT(99),
  [205] = {.count = 1, .reusable = false}, SHIFT(100),
  [207] = {.count = 1, .reusable = true}, SHIFT(103),
  [209] = {.count = 1, .reusable = true}, SHIFT(105),
  [211] = {.count = 1, .reusable = true}, SHIFT(112),
  [213] = {.count = 1, .reusable = false}, SHIFT(111),
  [215] = {.count = 1, .reusable = true}, SHIFT(113),
  [217] = {.count = 1, .reusable = false}, SHIFT(115),
  [219] = {.count = 1, .reusable = true}, SHIFT(115),
  [221] = {.count = 1, .reusable = true}, SHIFT(116),
  [223] = {.count = 1, .reusable = true}, SHIFT(117),
  [225] = {.count = 1, .reusable = true}, SHIFT(118),
  [227] = {.count = 1, .reusable = true}, SHIFT(119),
  [229] = {.count = 1, .reusable = true}, SHIFT(120),
  [231] = {.count = 1, .reusable = true}, SHIFT(121),
  [233] = {.count = 1, .reusable = true}, SHIFT(122),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [237] = {.count = 1, .reusable = true}, SHIFT(124),
  [239] = {.count = 1, .reusable = false}, SHIFT(123),
  [241] = {.count = 1, .reusable = false}, SHIFT(125),
  [243] = {.count = 1, .reusable = true}, SHIFT(125),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(127),
  [249] = {.count = 1, .reusable = true}, SHIFT(128),
  [251] = {.count = 1, .reusable = true}, SHIFT(129),
  [253] = {.count = 1, .reusable = true}, SHIFT(130),
  [255] = {.count = 1, .reusable = true}, SHIFT(131),
  [257] = {.count = 1, .reusable = true}, SHIFT(132),
  [259] = {.count = 1, .reusable = true}, SHIFT(2),
  [261] = {.count = 1, .reusable = true}, SHIFT(137),
  [263] = {.count = 1, .reusable = true}, SHIFT(138),
  [265] = {.count = 1, .reusable = true}, SHIFT(139),
  [267] = {.count = 1, .reusable = true}, SHIFT(140),
  [269] = {.count = 1, .reusable = true}, SHIFT(141),
  [271] = {.count = 1, .reusable = true}, SHIFT(142),
  [273] = {.count = 1, .reusable = true}, SHIFT(145),
  [275] = {.count = 1, .reusable = true}, SHIFT(18),
  [277] = {.count = 1, .reusable = true}, SHIFT(146),
  [279] = {.count = 1, .reusable = true}, SHIFT(147),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [285] = {.count = 1, .reusable = true}, SHIFT(149),
  [287] = {.count = 1, .reusable = true}, SHIFT(151),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [300] = {.count = 1, .reusable = true}, SHIFT(154),
  [302] = {.count = 1, .reusable = true}, SHIFT(155),
  [304] = {.count = 1, .reusable = false}, SHIFT(156),
  [306] = {.count = 1, .reusable = true}, SHIFT(160),
  [308] = {.count = 1, .reusable = false}, SHIFT(161),
  [310] = {.count = 1, .reusable = true}, SHIFT(5),
  [312] = {.count = 1, .reusable = true}, SHIFT(163),
  [314] = {.count = 1, .reusable = true}, SHIFT(164),
  [316] = {.count = 1, .reusable = true}, SHIFT(15),
  [318] = {.count = 1, .reusable = true}, SHIFT(165),
  [320] = {.count = 1, .reusable = true}, SHIFT(166),
  [322] = {.count = 1, .reusable = true}, SHIFT(167),
  [324] = {.count = 1, .reusable = true}, SHIFT(168),
  [326] = {.count = 1, .reusable = true}, SHIFT(169),
  [328] = {.count = 1, .reusable = false}, SHIFT(173),
  [330] = {.count = 1, .reusable = true}, SHIFT(174),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [334] = {.count = 1, .reusable = true}, SHIFT(176),
  [336] = {.count = 1, .reusable = true}, SHIFT(177),
  [338] = {.count = 1, .reusable = true}, SHIFT(178),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_math_expression, 2),
  [342] = {.count = 1, .reusable = true}, SHIFT(179),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [346] = {.count = 1, .reusable = false}, SHIFT(180),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(181),
  [352] = {.count = 1, .reusable = true}, SHIFT(184),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(32),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(33),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(37),
  [365] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(35),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(36),
  [371] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(38),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(41),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(40),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(39),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(42),
  [386] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2),
  [388] = {.count = 1, .reusable = true}, SHIFT(189),
  [390] = {.count = 1, .reusable = true}, SHIFT(190),
  [392] = {.count = 1, .reusable = true}, SHIFT(191),
  [394] = {.count = 1, .reusable = true}, SHIFT(192),
  [396] = {.count = 1, .reusable = false}, SHIFT(193),
  [398] = {.count = 1, .reusable = true}, SHIFT(194),
  [400] = {.count = 1, .reusable = true}, SHIFT(197),
  [402] = {.count = 1, .reusable = true}, SHIFT(202),
  [404] = {.count = 1, .reusable = false}, SHIFT(203),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(124),
  [411] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(125),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(125),
  [421] = {.count = 1, .reusable = true}, SHIFT(205),
  [423] = {.count = 1, .reusable = true}, SHIFT(209),
  [425] = {.count = 1, .reusable = false}, SHIFT(210),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 3),
  [429] = {.count = 1, .reusable = true}, SHIFT(212),
  [431] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(3),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(14),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(60),
  [440] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(4),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(16),
  [446] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(13),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(9),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(11),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(61),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(12),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [463] = {.count = 1, .reusable = true}, SHIFT(213),
  [465] = {.count = 1, .reusable = true}, SHIFT(214),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [471] = {.count = 1, .reusable = true}, SHIFT(218),
  [473] = {.count = 1, .reusable = true}, SHIFT(220),
  [475] = {.count = 1, .reusable = true}, SHIFT(221),
  [477] = {.count = 1, .reusable = true}, SHIFT(223),
  [479] = {.count = 1, .reusable = true}, SHIFT(224),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [485] = {.count = 1, .reusable = true}, SHIFT(228),
  [487] = {.count = 1, .reusable = true}, SHIFT(229),
  [489] = {.count = 1, .reusable = true}, SHIFT(230),
  [491] = {.count = 1, .reusable = true}, SHIFT(231),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_equality_expression, 3),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_math_expression, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [499] = {.count = 1, .reusable = true}, SHIFT(237),
  [501] = {.count = 1, .reusable = true}, SHIFT(238),
  [503] = {.count = 1, .reusable = true}, SHIFT(239),
  [505] = {.count = 1, .reusable = true}, SHIFT(240),
  [507] = {.count = 1, .reusable = true}, SHIFT(241),
  [509] = {.count = 1, .reusable = true}, SHIFT(242),
  [511] = {.count = 1, .reusable = true}, SHIFT(245),
  [513] = {.count = 1, .reusable = true}, SHIFT(246),
  [515] = {.count = 1, .reusable = true}, SHIFT(247),
  [517] = {.count = 1, .reusable = true}, SHIFT(248),
  [519] = {.count = 1, .reusable = true}, SHIFT(249),
  [521] = {.count = 1, .reusable = true}, SHIFT(250),
  [523] = {.count = 1, .reusable = true}, SHIFT(251),
  [525] = {.count = 1, .reusable = true}, SHIFT(252),
  [527] = {.count = 1, .reusable = true}, SHIFT(253),
  [529] = {.count = 1, .reusable = true}, SHIFT(47),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [535] = {.count = 1, .reusable = true}, SHIFT(256),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 3),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_equality_expression, 3),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_math_expression, 3),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [553] = {.count = 1, .reusable = true}, SHIFT(261),
  [555] = {.count = 1, .reusable = true}, SHIFT(265),
  [557] = {.count = 1, .reusable = true}, SHIFT(268),
  [559] = {.count = 1, .reusable = true}, SHIFT(269),
  [561] = {.count = 1, .reusable = true}, SHIFT(270),
  [563] = {.count = 1, .reusable = true}, SHIFT(271),
  [565] = {.count = 1, .reusable = true}, SHIFT(272),
  [567] = {.count = 1, .reusable = true}, SHIFT(275),
  [569] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 3),
  [571] = {.count = 1, .reusable = true}, SHIFT(277),
  [573] = {.count = 1, .reusable = true}, SHIFT(276),
  [575] = {.count = 1, .reusable = true}, SHIFT(279),
  [577] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 3),
  [579] = {.count = 1, .reusable = false}, SHIFT(278),
  [581] = {.count = 1, .reusable = true}, SHIFT(281),
  [583] = {.count = 1, .reusable = false}, SHIFT(282),
  [585] = {.count = 1, .reusable = true}, SHIFT(284),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(4),
  [592] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [594] = {.count = 1, .reusable = true}, SHIFT(286),
  [596] = {.count = 1, .reusable = false}, SHIFT(287),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [602] = {.count = 1, .reusable = true}, SHIFT(290),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [606] = {.count = 1, .reusable = true}, SHIFT(291),
  [608] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(149),
  [613] = {.count = 1, .reusable = true}, SHIFT(292),
  [615] = {.count = 1, .reusable = true}, SHIFT(293),
  [617] = {.count = 1, .reusable = true}, SHIFT(294),
  [619] = {.count = 1, .reusable = true}, SHIFT(295),
  [621] = {.count = 1, .reusable = true}, SHIFT(296),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [625] = {.count = 1, .reusable = true}, SHIFT(298),
  [627] = {.count = 1, .reusable = true}, SHIFT(302),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 4),
  [631] = {.count = 1, .reusable = true}, SHIFT(307),
  [633] = {.count = 1, .reusable = true}, SHIFT(309),
  [635] = {.count = 1, .reusable = true}, SHIFT(313),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [641] = {.count = 1, .reusable = true}, SHIFT(321),
  [643] = {.count = 1, .reusable = true}, SHIFT(324),
  [645] = {.count = 1, .reusable = true}, SHIFT(325),
  [647] = {.count = 1, .reusable = true}, SHIFT(327),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(2),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(5),
  [657] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(163),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(164),
  [663] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(15),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(165),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(166),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(18),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(167),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(168),
  [681] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [685] = {.count = 1, .reusable = true}, SHIFT(329),
  [687] = {.count = 1, .reusable = true}, SHIFT(331),
  [689] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 4),
  [691] = {.count = 1, .reusable = true}, SHIFT(332),
  [693] = {.count = 1, .reusable = true}, SHIFT(334),
  [695] = {.count = 1, .reusable = true}, SHIFT(335),
  [697] = {.count = 1, .reusable = true}, SHIFT(336),
  [699] = {.count = 1, .reusable = true}, SHIFT(341),
  [701] = {.count = 1, .reusable = true}, SHIFT(342),
  [703] = {.count = 1, .reusable = true}, SHIFT(347),
  [705] = {.count = 1, .reusable = true}, SHIFT(351),
  [707] = {.count = 1, .reusable = true}, SHIFT(350),
  [709] = {.count = 1, .reusable = true}, SHIFT(353),
  [711] = {.count = 1, .reusable = false}, SHIFT(352),
  [713] = {.count = 1, .reusable = true}, SHIFT(354),
  [715] = {.count = 1, .reusable = true}, SHIFT(355),
  [717] = {.count = 1, .reusable = true}, SHIFT(357),
  [719] = {.count = 1, .reusable = true}, SHIFT(358),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [723] = {.count = 1, .reusable = true}, SHIFT(359),
  [725] = {.count = 1, .reusable = true}, SHIFT(360),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [731] = {.count = 1, .reusable = true}, SHIFT(364),
  [733] = {.count = 1, .reusable = true}, SHIFT(367),
  [735] = {.count = 1, .reusable = true}, SHIFT(368),
  [737] = {.count = 1, .reusable = true}, SHIFT(373),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(163),
  [742] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(228),
  [745] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(230),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(231),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(229),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [758] = {.count = 1, .reusable = true}, SHIFT(375),
  [760] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(2),
  [763] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(5),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(18),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(15),
  [774] = {.count = 1, .reusable = true}, SHIFT(376),
  [776] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 5),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(237),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [785] = {.count = 1, .reusable = true}, SHIFT(379),
  [787] = {.count = 1, .reusable = true}, SHIFT(381),
  [789] = {.count = 1, .reusable = true}, SHIFT(382),
  [791] = {.count = 1, .reusable = true}, SHIFT(383),
  [793] = {.count = 1, .reusable = true}, SHIFT(384),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [799] = {.count = 1, .reusable = true}, SHIFT(386),
  [801] = {.count = 1, .reusable = true}, SHIFT(387),
  [803] = {.count = 1, .reusable = true}, SHIFT(389),
  [805] = {.count = 1, .reusable = true}, SHIFT(391),
  [807] = {.count = 1, .reusable = true}, SHIFT(393),
  [809] = {.count = 1, .reusable = true}, SHIFT(397),
  [811] = {.count = 1, .reusable = false}, SHIFT(398),
  [813] = {.count = 1, .reusable = true}, SHIFT(400),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 5),
  [817] = {.count = 1, .reusable = true}, SHIFT(402),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 6),
  [821] = {.count = 1, .reusable = true}, SHIFT(407),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 6),
  [825] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat2, 2), SHIFT_REPEAT(275),
  [828] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat2, 2),
  [830] = {.count = 1, .reusable = true}, SHIFT(408),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [834] = {.count = 1, .reusable = true}, SHIFT(413),
  [836] = {.count = 1, .reusable = true}, SHIFT(417),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [842] = {.count = 1, .reusable = true}, SHIFT(419),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [846] = {.count = 1, .reusable = true}, SHIFT(420),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_command_part, 1),
  [850] = {.count = 1, .reusable = true}, SHIFT(423),
  [852] = {.count = 1, .reusable = true}, SHIFT(424),
  [854] = {.count = 1, .reusable = true}, SHIFT(427),
  [856] = {.count = 1, .reusable = true}, SHIFT(429),
  [858] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [860] = {.count = 1, .reusable = true}, SHIFT(430),
  [862] = {.count = 1, .reusable = false}, SHIFT(431),
  [864] = {.count = 1, .reusable = true}, SHIFT(433),
  [866] = {.count = 1, .reusable = true}, SHIFT(434),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [870] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(4),
  [873] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [875] = {.count = 1, .reusable = true}, SHIFT(436),
  [877] = {.count = 1, .reusable = true}, SHIFT(437),
  [879] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [881] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [883] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(4),
  [886] = {.count = 1, .reusable = true}, SHIFT(439),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [890] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(47),
  [893] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [895] = {.count = 1, .reusable = true}, SHIFT(442),
  [897] = {.count = 1, .reusable = false}, SHIFT(443),
  [899] = {.count = 1, .reusable = true}, SHIFT(446),
  [901] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(327),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [906] = {.count = 1, .reusable = true}, SHIFT(449),
  [908] = {.count = 1, .reusable = true}, SHIFT(448),
  [910] = {.count = 1, .reusable = true}, SHIFT(451),
  [912] = {.count = 1, .reusable = true}, SHIFT(450),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 6),
  [916] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 6),
  [918] = {.count = 1, .reusable = true}, SHIFT(452),
  [920] = {.count = 1, .reusable = true}, SHIFT(453),
  [922] = {.count = 1, .reusable = true}, SHIFT(454),
  [924] = {.count = 1, .reusable = false}, SHIFT(455),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [928] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [930] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(2),
  [933] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(5),
  [936] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(18),
  [939] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [941] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(15),
  [944] = {.count = 1, .reusable = true}, SHIFT(462),
  [946] = {.count = 1, .reusable = false}, SHIFT(463),
  [948] = {.count = 1, .reusable = false}, SHIFT(464),
  [950] = {.count = 1, .reusable = true}, SHIFT(465),
  [952] = {.count = 1, .reusable = false}, SHIFT(466),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [956] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [958] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(367),
  [961] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(368),
  [964] = {.count = 1, .reusable = true}, SHIFT(472),
  [966] = {.count = 1, .reusable = true}, SHIFT(471),
  [968] = {.count = 1, .reusable = true}, SHIFT(474),
  [970] = {.count = 1, .reusable = true}, SHIFT(473),
  [972] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [974] = {.count = 1, .reusable = true}, SHIFT(477),
  [976] = {.count = 1, .reusable = true}, SHIFT(479),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [980] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [982] = {.count = 1, .reusable = true}, SHIFT(481),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [986] = {.count = 1, .reusable = true}, SHIFT(483),
  [988] = {.count = 1, .reusable = true}, SHIFT(484),
  [990] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [992] = {.count = 1, .reusable = true}, SHIFT(485),
  [994] = {.count = 1, .reusable = true}, SHIFT(486),
  [996] = {.count = 1, .reusable = true}, SHIFT(487),
  [998] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat2, 4),
  [1000] = {.count = 1, .reusable = true}, SHIFT(494),
  [1002] = {.count = 1, .reusable = true}, SHIFT(495),
  [1004] = {.count = 1, .reusable = true}, SHIFT(496),
  [1006] = {.count = 1, .reusable = true}, SHIFT(497),
  [1008] = {.count = 1, .reusable = true}, SHIFT(498),
  [1010] = {.count = 1, .reusable = true}, SHIFT(499),
  [1012] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(417),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [1019] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [1021] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [1023] = {.count = 1, .reusable = true}, SHIFT(502),
  [1025] = {.count = 1, .reusable = true}, SHIFT(503),
  [1027] = {.count = 1, .reusable = true}, SHIFT(504),
  [1029] = {.count = 1, .reusable = true}, SHIFT(505),
  [1031] = {.count = 1, .reusable = true}, SHIFT(506),
  [1033] = {.count = 1, .reusable = true}, SHIFT(507),
  [1035] = {.count = 1, .reusable = true}, SHIFT(510),
  [1037] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [1039] = {.count = 1, .reusable = true}, SHIFT(514),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [1043] = {.count = 1, .reusable = true}, SHIFT(515),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [1047] = {.count = 1, .reusable = true}, SHIFT(516),
  [1049] = {.count = 1, .reusable = true}, SHIFT(521),
  [1051] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [1053] = {.count = 1, .reusable = true}, SHIFT(527),
  [1055] = {.count = 1, .reusable = false}, SHIFT(528),
  [1057] = {.count = 1, .reusable = true}, SHIFT(529),
  [1059] = {.count = 1, .reusable = false}, SHIFT(530),
  [1061] = {.count = 1, .reusable = true}, SHIFT(531),
  [1063] = {.count = 1, .reusable = true}, SHIFT(532),
  [1065] = {.count = 1, .reusable = false}, SHIFT(533),
  [1067] = {.count = 1, .reusable = false}, SHIFT(534),
  [1069] = {.count = 1, .reusable = true}, SHIFT(535),
  [1071] = {.count = 1, .reusable = true}, SHIFT(536),
  [1073] = {.count = 1, .reusable = true}, SHIFT(537),
  [1075] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 4),
  [1077] = {.count = 1, .reusable = true}, SHIFT(543),
  [1079] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(464),
  [1082] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [1084] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [1086] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [1088] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [1090] = {.count = 1, .reusable = true}, SHIFT(546),
  [1092] = {.count = 1, .reusable = true}, SHIFT(549),
  [1094] = {.count = 1, .reusable = true}, SHIFT(556),
  [1096] = {.count = 1, .reusable = false}, SHIFT(555),
  [1098] = {.count = 1, .reusable = true}, SHIFT(557),
  [1100] = {.count = 1, .reusable = false}, SHIFT(559),
  [1102] = {.count = 1, .reusable = true}, SHIFT(559),
  [1104] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [1106] = {.count = 1, .reusable = true}, SHIFT(561),
  [1108] = {.count = 1, .reusable = true}, SHIFT(560),
  [1110] = {.count = 1, .reusable = true}, SHIFT(564),
  [1112] = {.count = 1, .reusable = true}, SHIFT(565),
  [1114] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [1116] = {.count = 1, .reusable = true}, SHIFT(562),
  [1118] = {.count = 1, .reusable = false}, SHIFT(563),
  [1120] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [1122] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [1124] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 5),
  [1126] = {.count = 1, .reusable = true}, SHIFT(566),
  [1128] = {.count = 1, .reusable = true}, SHIFT(567),
  [1130] = {.count = 1, .reusable = true}, SHIFT(569),
  [1132] = {.count = 1, .reusable = true}, SHIFT(570),
  [1134] = {.count = 1, .reusable = true}, SHIFT(571),
  [1136] = {.count = 1, .reusable = true}, SHIFT(572),
  [1138] = {.count = 1, .reusable = true}, SHIFT(573),
  [1140] = {.count = 1, .reusable = true}, SHIFT(574),
  [1142] = {.count = 1, .reusable = false}, SHIFT(575),
  [1144] = {.count = 1, .reusable = true}, SHIFT(576),
  [1146] = {.count = 1, .reusable = true}, SHIFT(579),
  [1148] = {.count = 1, .reusable = true}, SHIFT(590),
  [1150] = {.count = 1, .reusable = true}, SHIFT(593),
  [1152] = {.count = 1, .reusable = true}, SHIFT(594),
  [1154] = {.count = 1, .reusable = true}, SHIFT(595),
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
