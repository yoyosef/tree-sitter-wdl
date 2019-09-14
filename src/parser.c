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

#define LANGUAGE_VERSION 10
#define STATE_COUNT 407
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
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
  anon_sym_if = 20,
  anon_sym_then = 21,
  anon_sym_else = 22,
  anon_sym_LPAREN = 23,
  anon_sym_COMMA = 24,
  anon_sym_RPAREN = 25,
  anon_sym_LBRACE = 26,
  anon_sym_COLON = 27,
  anon_sym_RBRACE = 28,
  anon_sym_AMP_AMP = 29,
  anon_sym_PIPE_PIPE = 30,
  anon_sym_EQ_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_PERCENT = 37,
  anon_sym_GT = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_LT = 41,
  anon_sym_BANG = 42,
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
  sym_member_access_expression = 74,
  sym_indexing_expression = 75,
  sym_if_then_expression = 76,
  sym_function_expression = 77,
  sym_parentheses_expression = 78,
  sym_dictionary_expression = 79,
  sym_bracket_expression = 80,
  sym_binary_expression = 81,
  sym_unary_expression = 82,
  sym_type = 83,
  sym_array_type = 84,
  sym_map_type = 85,
  sym_type_postfix_quantifier = 86,
  sym_runtime = 87,
  sym_runtime_kv = 88,
  sym_task_output = 89,
  sym_task_output_kv = 90,
  sym_parameter_meta = 91,
  sym_parameter_meta_kv = 92,
  sym_meta = 93,
  sym_meta_kv = 94,
  sym_task = 95,
  sym_task_sections = 96,
  sym_declaration = 97,
  sym_command = 98,
  sym_command_part = 99,
  sym_command_part_var = 100,
  sym_var_option = 101,
  sym_var_option_key = 102,
  sym_var_option_value = 103,
  sym_call = 104,
  sym_call_body = 105,
  sym_inputs = 106,
  sym_variable_mappings = 107,
  sym_variable_mapping_kv = 108,
  sym_namespaced_identifier = 109,
  sym_loop = 110,
  sym_conditional = 111,
  sym_document = 112,
  sym_import = 113,
  sym_workflow = 114,
  sym_workflow_element = 115,
  sym_scatter = 116,
  sym_scatter_iteration_statment = 117,
  sym_scatter_body = 118,
  aux_sym_string_literal_repeat1 = 119,
  aux_sym_string_literal_repeat2 = 120,
  aux_sym_function_expression_repeat1 = 121,
  aux_sym_dictionary_expression_repeat1 = 122,
  aux_sym_runtime_repeat1 = 123,
  aux_sym_task_output_repeat1 = 124,
  aux_sym_parameter_meta_repeat1 = 125,
  aux_sym_meta_repeat1 = 126,
  aux_sym_task_repeat1 = 127,
  aux_sym_task_sections_repeat1 = 128,
  aux_sym_command_repeat1 = 129,
  aux_sym_command_part_var_repeat1 = 130,
  aux_sym_variable_mappings_repeat1 = 131,
  aux_sym_namespaced_identifier_repeat1 = 132,
  aux_sym_loop_repeat1 = 133,
  aux_sym_document_repeat1 = 134,
  aux_sym_scatter_repeat1 = 135,
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
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_BANG] = "!",
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
  [sym_member_access_expression] = "member_access_expression",
  [sym_indexing_expression] = "indexing_expression",
  [sym_if_then_expression] = "if_then_expression",
  [sym_function_expression] = "function_expression",
  [sym_parentheses_expression] = "parentheses_expression",
  [sym_dictionary_expression] = "dictionary_expression",
  [sym_bracket_expression] = "bracket_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
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
  [aux_sym_function_expression_repeat1] = "function_expression_repeat1",
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym_member_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_indexing_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_expression] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
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
  [aux_sym_function_expression_repeat1] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scatter_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(178);
      if (lookahead == '!') ADVANCE(329);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '%') ADVANCE(321);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(323);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(178);
      if (lookahead == '!') ADVANCE(329);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '%') ADVANCE(321);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(323);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(178);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(321);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(178);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(321);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(329);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '%') ADVANCE(321);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'q') ADVANCE(156);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(328);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(328);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(313);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(348);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'j') ADVANCE(51);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(344);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 162:
      if (lookahead == 'w') ADVANCE(366);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 164:
      if (lookahead == '|') ADVANCE(314);
      END_STATE();
    case 165:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'j') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_object_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == 'U') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(315);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_command_part_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 43},
  [258] = {.lex_state = 43},
  [259] = {.lex_state = 43},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 43},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 10},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 80},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 80},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_object_type] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_parameter_meta] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_task] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_sep] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_scatter] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
  },
  [1] = {
    [sym_definition] = STATE(402),
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(222),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(335),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_runtime] = STATE(401),
    [sym_task] = STATE(262),
    [sym_declaration] = STATE(164),
    [sym_call] = STATE(401),
    [sym_document] = STATE(401),
    [sym_import] = STATE(262),
    [sym_workflow] = STATE(262),
    [aux_sym_document_repeat1] = STATE(262),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
    [anon_sym_runtime] = ACTIONS(31),
    [anon_sym_task] = ACTIONS(33),
    [anon_sym_call] = ACTIONS(35),
    [anon_sym_import] = ACTIONS(37),
    [anon_sym_workflow] = ACTIONS(39),
  },
  [2] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(233),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [sym_var_option] = STATE(3),
    [sym_var_option_key] = STATE(404),
    [aux_sym_command_part_var_repeat1] = STATE(3),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
    [anon_sym_sep] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(43),
  },
  [3] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(220),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [sym_var_option] = STATE(143),
    [sym_var_option_key] = STATE(404),
    [aux_sym_command_part_var_repeat1] = STATE(143),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
    [anon_sym_sep] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(43),
  },
  [4] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(218),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [5] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(185),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [6] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(191),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [7] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(179),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [8] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(226),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [9] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(192),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [10] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(190),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [11] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(195),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [12] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(228),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [13] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(90),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [sym_var_option_value] = STATE(149),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [14] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(205),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [15] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(162),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [16] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(167),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [17] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(217),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [18] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(219),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [19] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(214),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [20] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(210),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [21] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(231),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [22] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(227),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [23] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(106),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [24] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(107),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [25] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(104),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [26] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(99),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [27] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(236),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [28] = {
    [sym_object_type] = ACTIONS(113),
    [anon_sym_Boolean] = ACTIONS(113),
    [anon_sym_Int] = ACTIONS(113),
    [anon_sym_Float] = ACTIONS(113),
    [anon_sym_File] = ACTIONS(113),
    [anon_sym_String] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_then] = ACTIONS(113),
    [anon_sym_else] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(113),
    [anon_sym_Map] = ACTIONS(113),
    [anon_sym_runtime] = ACTIONS(113),
    [anon_sym_output] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_parameter_meta] = ACTIONS(113),
    [anon_sym_meta] = ACTIONS(113),
    [anon_sym_command] = ACTIONS(113),
    [anon_sym_call] = ACTIONS(113),
    [anon_sym_as] = ACTIONS(113),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_scatter] = ACTIONS(113),
    [anon_sym_in] = ACTIONS(113),
  },
  [29] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(86),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [30] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(92),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [31] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(131),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [32] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(102),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [33] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(194),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [34] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(84),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [35] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(114),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [36] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(112),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [37] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(111),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [38] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(126),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [39] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(201),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [40] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(162),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [41] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(118),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [42] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(221),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [43] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(121),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [44] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(188),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [45] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(223),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [46] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(224),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [47] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(229),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [48] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(235),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [49] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(89),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [50] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(166),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [51] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(169),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [52] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(165),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [53] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(170),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [54] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(171),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [55] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(173),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [56] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(168),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [57] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(122),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [58] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(213),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [59] = {
    [sym_identifier] = STATE(93),
    [sym_boolean] = STATE(93),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(93),
    [sym_expression] = STATE(105),
    [sym_member_access_expression] = STATE(93),
    [sym_indexing_expression] = STATE(93),
    [sym_if_then_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(93),
    [sym_dictionary_expression] = STATE(93),
    [sym_bracket_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_type] = STATE(361),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(93),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [60] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(127),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [61] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(130),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [62] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(196),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [63] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(208),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [64] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(225),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [65] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(203),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [66] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(193),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [67] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(230),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [68] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(180),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [69] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(204),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [70] = {
    [sym_identifier] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(115),
    [sym_expression] = STATE(232),
    [sym_member_access_expression] = STATE(115),
    [sym_indexing_expression] = STATE(115),
    [sym_if_then_expression] = STATE(115),
    [sym_function_expression] = STATE(115),
    [sym_parentheses_expression] = STATE(115),
    [sym_dictionary_expression] = STATE(115),
    [sym_bracket_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(115),
    [aux_sym_identifier_token1] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [71] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(181),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [72] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(172),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [73] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(234),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [74] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(186),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [75] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(200),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [76] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(215),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(359),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [77] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(198),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [78] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(197),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [79] = {
    [sym_identifier] = STATE(164),
    [sym_boolean] = STATE(164),
    [sym_primitive_type] = STATE(290),
    [sym_string_literal] = STATE(164),
    [sym_expression] = STATE(182),
    [sym_member_access_expression] = STATE(164),
    [sym_indexing_expression] = STATE(164),
    [sym_if_then_expression] = STATE(164),
    [sym_function_expression] = STATE(164),
    [sym_parentheses_expression] = STATE(164),
    [sym_dictionary_expression] = STATE(164),
    [sym_bracket_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_unary_expression] = STATE(164),
    [sym_type] = STATE(349),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(164),
    [aux_sym_identifier_token1] = ACTIONS(103),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [80] = {
    [aux_sym_identifier_token1] = ACTIONS(117),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [81] = {
    [aux_sym_identifier_token1] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [sym_float] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym_object_type] = ACTIONS(115),
    [anon_sym_Boolean] = ACTIONS(115),
    [anon_sym_Int] = ACTIONS(115),
    [anon_sym_Float] = ACTIONS(115),
    [anon_sym_File] = ACTIONS(115),
    [anon_sym_String] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [82] = {
    [aux_sym_identifier_token1] = ACTIONS(123),
    [sym_integer] = ACTIONS(123),
    [sym_float] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [sym_object_type] = ACTIONS(123),
    [anon_sym_Boolean] = ACTIONS(123),
    [anon_sym_Int] = ACTIONS(123),
    [anon_sym_Float] = ACTIONS(123),
    [anon_sym_File] = ACTIONS(123),
    [anon_sym_String] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_Array] = ACTIONS(123),
    [anon_sym_Map] = ACTIONS(123),
    [anon_sym_sep] = ACTIONS(123),
    [anon_sym_quote] = ACTIONS(123),
    [anon_sym_default] = ACTIONS(123),
  },
  [83] = {
    [aux_sym_identifier_token1] = ACTIONS(127),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [sym_object_type] = ACTIONS(127),
    [anon_sym_Boolean] = ACTIONS(127),
    [anon_sym_Int] = ACTIONS(127),
    [anon_sym_Float] = ACTIONS(127),
    [anon_sym_File] = ACTIONS(127),
    [anon_sym_String] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_Array] = ACTIONS(127),
    [anon_sym_Map] = ACTIONS(127),
    [anon_sym_sep] = ACTIONS(127),
    [anon_sym_quote] = ACTIONS(127),
    [anon_sym_default] = ACTIONS(127),
  },
  [84] = {
    [aux_sym_identifier_token1] = ACTIONS(131),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [sym_object_type] = ACTIONS(131),
    [anon_sym_Boolean] = ACTIONS(131),
    [anon_sym_Int] = ACTIONS(131),
    [anon_sym_Float] = ACTIONS(131),
    [anon_sym_File] = ACTIONS(131),
    [anon_sym_String] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_Array] = ACTIONS(131),
    [anon_sym_Map] = ACTIONS(131),
    [anon_sym_sep] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
  },
  [85] = {
    [aux_sym_identifier_token1] = ACTIONS(141),
    [sym_integer] = ACTIONS(141),
    [sym_float] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [sym_object_type] = ACTIONS(141),
    [anon_sym_Boolean] = ACTIONS(141),
    [anon_sym_Int] = ACTIONS(141),
    [anon_sym_Float] = ACTIONS(141),
    [anon_sym_File] = ACTIONS(141),
    [anon_sym_String] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_Array] = ACTIONS(141),
    [anon_sym_Map] = ACTIONS(141),
    [anon_sym_sep] = ACTIONS(141),
    [anon_sym_quote] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
  },
  [86] = {
    [aux_sym_identifier_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [sym_object_type] = ACTIONS(145),
    [anon_sym_Boolean] = ACTIONS(145),
    [anon_sym_Int] = ACTIONS(145),
    [anon_sym_Float] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(145),
    [anon_sym_String] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(145),
    [anon_sym_Map] = ACTIONS(145),
    [anon_sym_sep] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
  },
  [87] = {
    [aux_sym_identifier_token1] = ACTIONS(161),
    [sym_integer] = ACTIONS(161),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [sym_object_type] = ACTIONS(161),
    [anon_sym_Boolean] = ACTIONS(161),
    [anon_sym_Int] = ACTIONS(161),
    [anon_sym_Float] = ACTIONS(161),
    [anon_sym_File] = ACTIONS(161),
    [anon_sym_String] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_PERCENT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_Array] = ACTIONS(161),
    [anon_sym_Map] = ACTIONS(161),
    [anon_sym_sep] = ACTIONS(161),
    [anon_sym_quote] = ACTIONS(161),
    [anon_sym_default] = ACTIONS(161),
  },
  [88] = {
    [aux_sym_identifier_token1] = ACTIONS(165),
    [sym_integer] = ACTIONS(165),
    [sym_float] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [sym_object_type] = ACTIONS(165),
    [anon_sym_Boolean] = ACTIONS(165),
    [anon_sym_Int] = ACTIONS(165),
    [anon_sym_Float] = ACTIONS(165),
    [anon_sym_File] = ACTIONS(165),
    [anon_sym_String] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [anon_sym_Array] = ACTIONS(165),
    [anon_sym_Map] = ACTIONS(165),
    [anon_sym_sep] = ACTIONS(165),
    [anon_sym_quote] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
  },
  [89] = {
    [aux_sym_identifier_token1] = ACTIONS(169),
    [sym_integer] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [sym_object_type] = ACTIONS(169),
    [anon_sym_Boolean] = ACTIONS(169),
    [anon_sym_Int] = ACTIONS(169),
    [anon_sym_Float] = ACTIONS(169),
    [anon_sym_File] = ACTIONS(169),
    [anon_sym_String] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(169),
    [anon_sym_Array] = ACTIONS(169),
    [anon_sym_Map] = ACTIONS(169),
    [anon_sym_sep] = ACTIONS(169),
    [anon_sym_quote] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(169),
  },
  [90] = {
    [aux_sym_identifier_token1] = ACTIONS(175),
    [sym_integer] = ACTIONS(175),
    [sym_float] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [sym_object_type] = ACTIONS(175),
    [anon_sym_Boolean] = ACTIONS(175),
    [anon_sym_Int] = ACTIONS(175),
    [anon_sym_Float] = ACTIONS(175),
    [anon_sym_File] = ACTIONS(175),
    [anon_sym_String] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_Array] = ACTIONS(175),
    [anon_sym_Map] = ACTIONS(175),
    [anon_sym_sep] = ACTIONS(175),
    [anon_sym_quote] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
  },
  [91] = {
    [aux_sym_identifier_token1] = ACTIONS(179),
    [sym_integer] = ACTIONS(179),
    [sym_float] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [sym_object_type] = ACTIONS(179),
    [anon_sym_Boolean] = ACTIONS(179),
    [anon_sym_Int] = ACTIONS(179),
    [anon_sym_Float] = ACTIONS(179),
    [anon_sym_File] = ACTIONS(179),
    [anon_sym_String] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_Array] = ACTIONS(179),
    [anon_sym_Map] = ACTIONS(179),
    [anon_sym_sep] = ACTIONS(179),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
  },
  [92] = {
    [aux_sym_identifier_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [sym_object_type] = ACTIONS(145),
    [anon_sym_Boolean] = ACTIONS(145),
    [anon_sym_Int] = ACTIONS(145),
    [anon_sym_Float] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(145),
    [anon_sym_String] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(145),
    [anon_sym_Map] = ACTIONS(145),
    [anon_sym_sep] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
  },
  [93] = {
    [aux_sym_identifier_token1] = ACTIONS(183),
    [sym_integer] = ACTIONS(183),
    [sym_float] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [sym_object_type] = ACTIONS(183),
    [anon_sym_Boolean] = ACTIONS(183),
    [anon_sym_Int] = ACTIONS(183),
    [anon_sym_Float] = ACTIONS(183),
    [anon_sym_File] = ACTIONS(183),
    [anon_sym_String] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_Array] = ACTIONS(183),
    [anon_sym_Map] = ACTIONS(183),
    [anon_sym_sep] = ACTIONS(183),
    [anon_sym_quote] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(183),
  },
  [94] = {
    [aux_sym_identifier_token1] = ACTIONS(187),
    [sym_integer] = ACTIONS(187),
    [sym_float] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [sym_object_type] = ACTIONS(187),
    [anon_sym_Boolean] = ACTIONS(187),
    [anon_sym_Int] = ACTIONS(187),
    [anon_sym_Float] = ACTIONS(187),
    [anon_sym_File] = ACTIONS(187),
    [anon_sym_String] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_Array] = ACTIONS(187),
    [anon_sym_Map] = ACTIONS(187),
    [anon_sym_sep] = ACTIONS(187),
    [anon_sym_quote] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
  },
  [95] = {
    [aux_sym_identifier_token1] = ACTIONS(191),
    [sym_integer] = ACTIONS(191),
    [sym_float] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [sym_object_type] = ACTIONS(191),
    [anon_sym_Boolean] = ACTIONS(191),
    [anon_sym_Int] = ACTIONS(191),
    [anon_sym_Float] = ACTIONS(191),
    [anon_sym_File] = ACTIONS(191),
    [anon_sym_String] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_Array] = ACTIONS(191),
    [anon_sym_Map] = ACTIONS(191),
    [anon_sym_sep] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_default] = ACTIONS(191),
  },
  [96] = {
    [aux_sym_identifier_token1] = ACTIONS(195),
    [sym_integer] = ACTIONS(195),
    [sym_float] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [sym_object_type] = ACTIONS(195),
    [anon_sym_Boolean] = ACTIONS(195),
    [anon_sym_Int] = ACTIONS(195),
    [anon_sym_Float] = ACTIONS(195),
    [anon_sym_File] = ACTIONS(195),
    [anon_sym_String] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PERCENT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_BANG] = ACTIONS(195),
    [anon_sym_Array] = ACTIONS(195),
    [anon_sym_Map] = ACTIONS(195),
    [anon_sym_sep] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(195),
  },
  [97] = {
    [aux_sym_identifier_token1] = ACTIONS(199),
    [sym_integer] = ACTIONS(199),
    [sym_float] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [sym_object_type] = ACTIONS(199),
    [anon_sym_Boolean] = ACTIONS(199),
    [anon_sym_Int] = ACTIONS(199),
    [anon_sym_Float] = ACTIONS(199),
    [anon_sym_File] = ACTIONS(199),
    [anon_sym_String] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_BANG] = ACTIONS(199),
    [anon_sym_Array] = ACTIONS(199),
    [anon_sym_Map] = ACTIONS(199),
    [anon_sym_sep] = ACTIONS(199),
    [anon_sym_quote] = ACTIONS(199),
    [anon_sym_default] = ACTIONS(199),
  },
  [98] = {
    [aux_sym_identifier_token1] = ACTIONS(203),
    [sym_integer] = ACTIONS(203),
    [sym_float] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [sym_object_type] = ACTIONS(203),
    [anon_sym_Boolean] = ACTIONS(203),
    [anon_sym_Int] = ACTIONS(203),
    [anon_sym_Float] = ACTIONS(203),
    [anon_sym_File] = ACTIONS(203),
    [anon_sym_String] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_Array] = ACTIONS(203),
    [anon_sym_Map] = ACTIONS(203),
    [anon_sym_sep] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_default] = ACTIONS(203),
  },
  [99] = {
    [aux_sym_identifier_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [sym_object_type] = ACTIONS(145),
    [anon_sym_Boolean] = ACTIONS(145),
    [anon_sym_Int] = ACTIONS(145),
    [anon_sym_Float] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(145),
    [anon_sym_String] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(145),
    [anon_sym_Map] = ACTIONS(145),
    [anon_sym_sep] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
  },
  [100] = {
    [aux_sym_identifier_token1] = ACTIONS(207),
    [sym_integer] = ACTIONS(207),
    [sym_float] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [sym_object_type] = ACTIONS(207),
    [anon_sym_Boolean] = ACTIONS(207),
    [anon_sym_Int] = ACTIONS(207),
    [anon_sym_Float] = ACTIONS(207),
    [anon_sym_File] = ACTIONS(207),
    [anon_sym_String] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(207),
    [anon_sym_Map] = ACTIONS(207),
    [anon_sym_sep] = ACTIONS(207),
    [anon_sym_quote] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
  },
  [101] = {
    [aux_sym_identifier_token1] = ACTIONS(211),
    [sym_integer] = ACTIONS(211),
    [sym_float] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [sym_object_type] = ACTIONS(211),
    [anon_sym_Boolean] = ACTIONS(211),
    [anon_sym_Int] = ACTIONS(211),
    [anon_sym_Float] = ACTIONS(211),
    [anon_sym_File] = ACTIONS(211),
    [anon_sym_String] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_Array] = ACTIONS(211),
    [anon_sym_Map] = ACTIONS(211),
    [anon_sym_sep] = ACTIONS(211),
    [anon_sym_quote] = ACTIONS(211),
    [anon_sym_default] = ACTIONS(211),
  },
  [102] = {
    [aux_sym_identifier_token1] = ACTIONS(215),
    [sym_integer] = ACTIONS(215),
    [sym_float] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [sym_object_type] = ACTIONS(215),
    [anon_sym_Boolean] = ACTIONS(215),
    [anon_sym_Int] = ACTIONS(215),
    [anon_sym_Float] = ACTIONS(215),
    [anon_sym_File] = ACTIONS(215),
    [anon_sym_String] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_Array] = ACTIONS(215),
    [anon_sym_Map] = ACTIONS(215),
    [anon_sym_sep] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_default] = ACTIONS(215),
  },
  [103] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(119),
    [anon_sym_Map] = ACTIONS(119),
    [anon_sym_runtime] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [104] = {
    [aux_sym_identifier_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [sym_object_type] = ACTIONS(145),
    [anon_sym_Boolean] = ACTIONS(145),
    [anon_sym_Int] = ACTIONS(145),
    [anon_sym_Float] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(145),
    [anon_sym_String] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(145),
    [anon_sym_Map] = ACTIONS(145),
    [anon_sym_sep] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
  },
  [105] = {
    [aux_sym_identifier_token1] = ACTIONS(221),
    [sym_integer] = ACTIONS(221),
    [sym_float] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_false] = ACTIONS(221),
    [sym_object_type] = ACTIONS(221),
    [anon_sym_Boolean] = ACTIONS(221),
    [anon_sym_Int] = ACTIONS(221),
    [anon_sym_Float] = ACTIONS(221),
    [anon_sym_File] = ACTIONS(221),
    [anon_sym_String] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_Array] = ACTIONS(221),
    [anon_sym_Map] = ACTIONS(221),
    [anon_sym_sep] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_default] = ACTIONS(221),
  },
  [106] = {
    [aux_sym_identifier_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [sym_object_type] = ACTIONS(145),
    [anon_sym_Boolean] = ACTIONS(145),
    [anon_sym_Int] = ACTIONS(145),
    [anon_sym_Float] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(145),
    [anon_sym_String] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(145),
    [anon_sym_Map] = ACTIONS(145),
    [anon_sym_sep] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
  },
  [107] = {
    [aux_sym_identifier_token1] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [sym_object_type] = ACTIONS(145),
    [anon_sym_Boolean] = ACTIONS(145),
    [anon_sym_Int] = ACTIONS(145),
    [anon_sym_Float] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(145),
    [anon_sym_String] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(145),
    [anon_sym_Map] = ACTIONS(145),
    [anon_sym_sep] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
  },
  [108] = {
    [aux_sym_identifier_token1] = ACTIONS(225),
    [sym_integer] = ACTIONS(225),
    [sym_float] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(225),
    [sym_object_type] = ACTIONS(225),
    [anon_sym_Boolean] = ACTIONS(225),
    [anon_sym_Int] = ACTIONS(225),
    [anon_sym_Float] = ACTIONS(225),
    [anon_sym_File] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(225),
    [anon_sym_Array] = ACTIONS(225),
    [anon_sym_Map] = ACTIONS(225),
    [anon_sym_sep] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_default] = ACTIONS(225),
  },
  [109] = {
    [sym_object_type] = ACTIONS(197),
    [anon_sym_Boolean] = ACTIONS(197),
    [anon_sym_Int] = ACTIONS(197),
    [anon_sym_Float] = ACTIONS(197),
    [anon_sym_File] = ACTIONS(197),
    [anon_sym_String] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(197),
    [anon_sym_then] = ACTIONS(197),
    [anon_sym_else] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PERCENT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_Array] = ACTIONS(197),
    [anon_sym_Map] = ACTIONS(197),
    [anon_sym_runtime] = ACTIONS(197),
    [anon_sym_output] = ACTIONS(197),
    [anon_sym_parameter_meta] = ACTIONS(197),
    [anon_sym_meta] = ACTIONS(197),
    [anon_sym_command] = ACTIONS(197),
    [anon_sym_call] = ACTIONS(197),
    [anon_sym_while] = ACTIONS(197),
    [anon_sym_scatter] = ACTIONS(197),
  },
  [110] = {
    [sym_object_type] = ACTIONS(125),
    [anon_sym_Boolean] = ACTIONS(125),
    [anon_sym_Int] = ACTIONS(125),
    [anon_sym_Float] = ACTIONS(125),
    [anon_sym_File] = ACTIONS(125),
    [anon_sym_String] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_then] = ACTIONS(125),
    [anon_sym_else] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_Array] = ACTIONS(125),
    [anon_sym_Map] = ACTIONS(125),
    [anon_sym_runtime] = ACTIONS(125),
    [anon_sym_output] = ACTIONS(125),
    [anon_sym_parameter_meta] = ACTIONS(125),
    [anon_sym_meta] = ACTIONS(125),
    [anon_sym_command] = ACTIONS(125),
    [anon_sym_call] = ACTIONS(125),
    [anon_sym_while] = ACTIONS(125),
    [anon_sym_scatter] = ACTIONS(125),
  },
  [111] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_runtime] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_parameter_meta] = ACTIONS(147),
    [anon_sym_meta] = ACTIONS(147),
    [anon_sym_command] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_scatter] = ACTIONS(147),
  },
  [112] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_runtime] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_parameter_meta] = ACTIONS(147),
    [anon_sym_meta] = ACTIONS(147),
    [anon_sym_command] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_scatter] = ACTIONS(147),
  },
  [113] = {
    [sym_object_type] = ACTIONS(213),
    [anon_sym_Boolean] = ACTIONS(213),
    [anon_sym_Int] = ACTIONS(213),
    [anon_sym_Float] = ACTIONS(213),
    [anon_sym_File] = ACTIONS(213),
    [anon_sym_String] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(213),
    [anon_sym_then] = ACTIONS(213),
    [anon_sym_else] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_Array] = ACTIONS(213),
    [anon_sym_Map] = ACTIONS(213),
    [anon_sym_runtime] = ACTIONS(213),
    [anon_sym_output] = ACTIONS(213),
    [anon_sym_parameter_meta] = ACTIONS(213),
    [anon_sym_meta] = ACTIONS(213),
    [anon_sym_command] = ACTIONS(213),
    [anon_sym_call] = ACTIONS(213),
    [anon_sym_while] = ACTIONS(213),
    [anon_sym_scatter] = ACTIONS(213),
  },
  [114] = {
    [sym_object_type] = ACTIONS(217),
    [anon_sym_Boolean] = ACTIONS(217),
    [anon_sym_Int] = ACTIONS(217),
    [anon_sym_Float] = ACTIONS(217),
    [anon_sym_File] = ACTIONS(217),
    [anon_sym_String] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(217),
    [anon_sym_then] = ACTIONS(217),
    [anon_sym_else] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_Array] = ACTIONS(217),
    [anon_sym_Map] = ACTIONS(217),
    [anon_sym_runtime] = ACTIONS(217),
    [anon_sym_output] = ACTIONS(217),
    [anon_sym_parameter_meta] = ACTIONS(217),
    [anon_sym_meta] = ACTIONS(217),
    [anon_sym_command] = ACTIONS(217),
    [anon_sym_call] = ACTIONS(217),
    [anon_sym_while] = ACTIONS(217),
    [anon_sym_scatter] = ACTIONS(217),
  },
  [115] = {
    [sym_object_type] = ACTIONS(185),
    [anon_sym_Boolean] = ACTIONS(185),
    [anon_sym_Int] = ACTIONS(185),
    [anon_sym_Float] = ACTIONS(185),
    [anon_sym_File] = ACTIONS(185),
    [anon_sym_String] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_then] = ACTIONS(185),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_Array] = ACTIONS(185),
    [anon_sym_Map] = ACTIONS(185),
    [anon_sym_runtime] = ACTIONS(185),
    [anon_sym_output] = ACTIONS(185),
    [anon_sym_parameter_meta] = ACTIONS(185),
    [anon_sym_meta] = ACTIONS(185),
    [anon_sym_command] = ACTIONS(185),
    [anon_sym_call] = ACTIONS(185),
    [anon_sym_while] = ACTIONS(185),
    [anon_sym_scatter] = ACTIONS(185),
  },
  [116] = {
    [sym_object_type] = ACTIONS(227),
    [anon_sym_Boolean] = ACTIONS(227),
    [anon_sym_Int] = ACTIONS(227),
    [anon_sym_Float] = ACTIONS(227),
    [anon_sym_File] = ACTIONS(227),
    [anon_sym_String] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_then] = ACTIONS(227),
    [anon_sym_else] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_Array] = ACTIONS(227),
    [anon_sym_Map] = ACTIONS(227),
    [anon_sym_runtime] = ACTIONS(227),
    [anon_sym_output] = ACTIONS(227),
    [anon_sym_parameter_meta] = ACTIONS(227),
    [anon_sym_meta] = ACTIONS(227),
    [anon_sym_command] = ACTIONS(227),
    [anon_sym_call] = ACTIONS(227),
    [anon_sym_while] = ACTIONS(227),
    [anon_sym_scatter] = ACTIONS(227),
  },
  [117] = {
    [sym_object_type] = ACTIONS(129),
    [anon_sym_Boolean] = ACTIONS(129),
    [anon_sym_Int] = ACTIONS(129),
    [anon_sym_Float] = ACTIONS(129),
    [anon_sym_File] = ACTIONS(129),
    [anon_sym_String] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_then] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_Array] = ACTIONS(129),
    [anon_sym_Map] = ACTIONS(129),
    [anon_sym_runtime] = ACTIONS(129),
    [anon_sym_output] = ACTIONS(129),
    [anon_sym_parameter_meta] = ACTIONS(129),
    [anon_sym_meta] = ACTIONS(129),
    [anon_sym_command] = ACTIONS(129),
    [anon_sym_call] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_scatter] = ACTIONS(129),
  },
  [118] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_runtime] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_parameter_meta] = ACTIONS(147),
    [anon_sym_meta] = ACTIONS(147),
    [anon_sym_command] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_scatter] = ACTIONS(147),
  },
  [119] = {
    [sym_object_type] = ACTIONS(209),
    [anon_sym_Boolean] = ACTIONS(209),
    [anon_sym_Int] = ACTIONS(209),
    [anon_sym_Float] = ACTIONS(209),
    [anon_sym_File] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_if] = ACTIONS(209),
    [anon_sym_then] = ACTIONS(209),
    [anon_sym_else] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(209),
    [anon_sym_Map] = ACTIONS(209),
    [anon_sym_runtime] = ACTIONS(209),
    [anon_sym_output] = ACTIONS(209),
    [anon_sym_parameter_meta] = ACTIONS(209),
    [anon_sym_meta] = ACTIONS(209),
    [anon_sym_command] = ACTIONS(209),
    [anon_sym_call] = ACTIONS(209),
    [anon_sym_while] = ACTIONS(209),
    [anon_sym_scatter] = ACTIONS(209),
  },
  [120] = {
    [sym_object_type] = ACTIONS(181),
    [anon_sym_Boolean] = ACTIONS(181),
    [anon_sym_Int] = ACTIONS(181),
    [anon_sym_Float] = ACTIONS(181),
    [anon_sym_File] = ACTIONS(181),
    [anon_sym_String] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_then] = ACTIONS(181),
    [anon_sym_else] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_Array] = ACTIONS(181),
    [anon_sym_Map] = ACTIONS(181),
    [anon_sym_runtime] = ACTIONS(181),
    [anon_sym_output] = ACTIONS(181),
    [anon_sym_parameter_meta] = ACTIONS(181),
    [anon_sym_meta] = ACTIONS(181),
    [anon_sym_command] = ACTIONS(181),
    [anon_sym_call] = ACTIONS(181),
    [anon_sym_while] = ACTIONS(181),
    [anon_sym_scatter] = ACTIONS(181),
  },
  [121] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_runtime] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_parameter_meta] = ACTIONS(147),
    [anon_sym_meta] = ACTIONS(147),
    [anon_sym_command] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_scatter] = ACTIONS(147),
  },
  [122] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_runtime] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_parameter_meta] = ACTIONS(147),
    [anon_sym_meta] = ACTIONS(147),
    [anon_sym_command] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_scatter] = ACTIONS(147),
  },
  [123] = {
    [sym_object_type] = ACTIONS(205),
    [anon_sym_Boolean] = ACTIONS(205),
    [anon_sym_Int] = ACTIONS(205),
    [anon_sym_Float] = ACTIONS(205),
    [anon_sym_File] = ACTIONS(205),
    [anon_sym_String] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_then] = ACTIONS(205),
    [anon_sym_else] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_Array] = ACTIONS(205),
    [anon_sym_Map] = ACTIONS(205),
    [anon_sym_runtime] = ACTIONS(205),
    [anon_sym_output] = ACTIONS(205),
    [anon_sym_parameter_meta] = ACTIONS(205),
    [anon_sym_meta] = ACTIONS(205),
    [anon_sym_command] = ACTIONS(205),
    [anon_sym_call] = ACTIONS(205),
    [anon_sym_while] = ACTIONS(205),
    [anon_sym_scatter] = ACTIONS(205),
  },
  [124] = {
    [sym_object_type] = ACTIONS(189),
    [anon_sym_Boolean] = ACTIONS(189),
    [anon_sym_Int] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(189),
    [anon_sym_File] = ACTIONS(189),
    [anon_sym_String] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_then] = ACTIONS(189),
    [anon_sym_else] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Map] = ACTIONS(189),
    [anon_sym_runtime] = ACTIONS(189),
    [anon_sym_output] = ACTIONS(189),
    [anon_sym_parameter_meta] = ACTIONS(189),
    [anon_sym_meta] = ACTIONS(189),
    [anon_sym_command] = ACTIONS(189),
    [anon_sym_call] = ACTIONS(189),
    [anon_sym_while] = ACTIONS(189),
    [anon_sym_scatter] = ACTIONS(189),
  },
  [125] = {
    [sym_object_type] = ACTIONS(201),
    [anon_sym_Boolean] = ACTIONS(201),
    [anon_sym_Int] = ACTIONS(201),
    [anon_sym_Float] = ACTIONS(201),
    [anon_sym_File] = ACTIONS(201),
    [anon_sym_String] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(201),
    [anon_sym_then] = ACTIONS(201),
    [anon_sym_else] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_Array] = ACTIONS(201),
    [anon_sym_Map] = ACTIONS(201),
    [anon_sym_runtime] = ACTIONS(201),
    [anon_sym_output] = ACTIONS(201),
    [anon_sym_parameter_meta] = ACTIONS(201),
    [anon_sym_meta] = ACTIONS(201),
    [anon_sym_command] = ACTIONS(201),
    [anon_sym_call] = ACTIONS(201),
    [anon_sym_while] = ACTIONS(201),
    [anon_sym_scatter] = ACTIONS(201),
  },
  [126] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_runtime] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_parameter_meta] = ACTIONS(147),
    [anon_sym_meta] = ACTIONS(147),
    [anon_sym_command] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_scatter] = ACTIONS(147),
  },
  [127] = {
    [sym_object_type] = ACTIONS(223),
    [anon_sym_Boolean] = ACTIONS(223),
    [anon_sym_Int] = ACTIONS(223),
    [anon_sym_Float] = ACTIONS(223),
    [anon_sym_File] = ACTIONS(223),
    [anon_sym_String] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_then] = ACTIONS(223),
    [anon_sym_else] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(223),
    [anon_sym_Map] = ACTIONS(223),
    [anon_sym_runtime] = ACTIONS(223),
    [anon_sym_output] = ACTIONS(223),
    [anon_sym_parameter_meta] = ACTIONS(223),
    [anon_sym_meta] = ACTIONS(223),
    [anon_sym_command] = ACTIONS(223),
    [anon_sym_call] = ACTIONS(223),
    [anon_sym_while] = ACTIONS(223),
    [anon_sym_scatter] = ACTIONS(223),
  },
  [128] = {
    [sym_object_type] = ACTIONS(167),
    [anon_sym_Boolean] = ACTIONS(167),
    [anon_sym_Int] = ACTIONS(167),
    [anon_sym_Float] = ACTIONS(167),
    [anon_sym_File] = ACTIONS(167),
    [anon_sym_String] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_then] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_Array] = ACTIONS(167),
    [anon_sym_Map] = ACTIONS(167),
    [anon_sym_runtime] = ACTIONS(167),
    [anon_sym_output] = ACTIONS(167),
    [anon_sym_parameter_meta] = ACTIONS(167),
    [anon_sym_meta] = ACTIONS(167),
    [anon_sym_command] = ACTIONS(167),
    [anon_sym_call] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(167),
    [anon_sym_scatter] = ACTIONS(167),
  },
  [129] = {
    [sym_object_type] = ACTIONS(193),
    [anon_sym_Boolean] = ACTIONS(193),
    [anon_sym_Int] = ACTIONS(193),
    [anon_sym_Float] = ACTIONS(193),
    [anon_sym_File] = ACTIONS(193),
    [anon_sym_String] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_then] = ACTIONS(193),
    [anon_sym_else] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_Array] = ACTIONS(193),
    [anon_sym_Map] = ACTIONS(193),
    [anon_sym_runtime] = ACTIONS(193),
    [anon_sym_output] = ACTIONS(193),
    [anon_sym_parameter_meta] = ACTIONS(193),
    [anon_sym_meta] = ACTIONS(193),
    [anon_sym_command] = ACTIONS(193),
    [anon_sym_call] = ACTIONS(193),
    [anon_sym_while] = ACTIONS(193),
    [anon_sym_scatter] = ACTIONS(193),
  },
  [130] = {
    [sym_object_type] = ACTIONS(171),
    [anon_sym_Boolean] = ACTIONS(171),
    [anon_sym_Int] = ACTIONS(171),
    [anon_sym_Float] = ACTIONS(171),
    [anon_sym_File] = ACTIONS(171),
    [anon_sym_String] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(171),
    [anon_sym_Map] = ACTIONS(171),
    [anon_sym_runtime] = ACTIONS(171),
    [anon_sym_output] = ACTIONS(171),
    [anon_sym_parameter_meta] = ACTIONS(171),
    [anon_sym_meta] = ACTIONS(171),
    [anon_sym_command] = ACTIONS(171),
    [anon_sym_call] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_scatter] = ACTIONS(171),
  },
  [131] = {
    [sym_object_type] = ACTIONS(133),
    [anon_sym_Boolean] = ACTIONS(133),
    [anon_sym_Int] = ACTIONS(133),
    [anon_sym_Float] = ACTIONS(133),
    [anon_sym_File] = ACTIONS(133),
    [anon_sym_String] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_then] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_Array] = ACTIONS(133),
    [anon_sym_Map] = ACTIONS(133),
    [anon_sym_runtime] = ACTIONS(133),
    [anon_sym_output] = ACTIONS(133),
    [anon_sym_parameter_meta] = ACTIONS(133),
    [anon_sym_meta] = ACTIONS(133),
    [anon_sym_command] = ACTIONS(133),
    [anon_sym_call] = ACTIONS(133),
    [anon_sym_while] = ACTIONS(133),
    [anon_sym_scatter] = ACTIONS(133),
  },
  [132] = {
    [sym_object_type] = ACTIONS(143),
    [anon_sym_Boolean] = ACTIONS(143),
    [anon_sym_Int] = ACTIONS(143),
    [anon_sym_Float] = ACTIONS(143),
    [anon_sym_File] = ACTIONS(143),
    [anon_sym_String] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(143),
    [anon_sym_then] = ACTIONS(143),
    [anon_sym_else] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_Array] = ACTIONS(143),
    [anon_sym_Map] = ACTIONS(143),
    [anon_sym_runtime] = ACTIONS(143),
    [anon_sym_output] = ACTIONS(143),
    [anon_sym_parameter_meta] = ACTIONS(143),
    [anon_sym_meta] = ACTIONS(143),
    [anon_sym_command] = ACTIONS(143),
    [anon_sym_call] = ACTIONS(143),
    [anon_sym_while] = ACTIONS(143),
    [anon_sym_scatter] = ACTIONS(143),
  },
  [133] = {
    [sym_object_type] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_then] = ACTIONS(163),
    [anon_sym_else] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_PERCENT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_Array] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(163),
    [anon_sym_runtime] = ACTIONS(163),
    [anon_sym_output] = ACTIONS(163),
    [anon_sym_parameter_meta] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(163),
    [anon_sym_command] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(163),
    [anon_sym_while] = ACTIONS(163),
    [anon_sym_scatter] = ACTIONS(163),
  },
  [134] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(142),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(142),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_task] = ACTIONS(113),
    [anon_sym_as] = ACTIONS(113),
    [anon_sym_import] = ACTIONS(113),
    [anon_sym_workflow] = ACTIONS(113),
  },
  [136] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [137] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(139),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(139),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [138] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(140),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(140),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [139] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [140] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [141] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(281),
    [anon_sym_Boolean] = ACTIONS(284),
    [anon_sym_Int] = ACTIONS(284),
    [anon_sym_Float] = ACTIONS(284),
    [anon_sym_File] = ACTIONS(284),
    [anon_sym_String] = ACTIONS(284),
    [anon_sym_if] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_Array] = ACTIONS(292),
    [anon_sym_Map] = ACTIONS(295),
    [anon_sym_parameter_meta] = ACTIONS(298),
    [anon_sym_meta] = ACTIONS(301),
    [anon_sym_call] = ACTIONS(304),
    [anon_sym_while] = ACTIONS(307),
    [anon_sym_scatter] = ACTIONS(310),
  },
  [142] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [143] = {
    [sym_var_option] = STATE(143),
    [sym_var_option_key] = STATE(404),
    [aux_sym_command_part_var_repeat1] = STATE(143),
    [aux_sym_identifier_token1] = ACTIONS(315),
    [sym_integer] = ACTIONS(315),
    [sym_float] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(317),
    [sym_object_type] = ACTIONS(315),
    [anon_sym_Boolean] = ACTIONS(315),
    [anon_sym_Int] = ACTIONS(315),
    [anon_sym_Float] = ACTIONS(315),
    [anon_sym_File] = ACTIONS(315),
    [anon_sym_String] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_if] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(320),
    [anon_sym_Array] = ACTIONS(315),
    [anon_sym_Map] = ACTIONS(315),
    [anon_sym_sep] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_default] = ACTIONS(317),
  },
  [144] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_declaration] = STATE(251),
    [sym_call] = STATE(251),
    [sym_loop] = STATE(251),
    [sym_conditional] = STATE(251),
    [sym_workflow_element] = STATE(136),
    [sym_scatter] = STATE(251),
    [aux_sym_loop_repeat1] = STATE(136),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_parameter_meta] = ACTIONS(261),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_call] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_scatter] = ACTIONS(269),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_task] = ACTIONS(209),
    [anon_sym_as] = ACTIONS(209),
    [anon_sym_import] = ACTIONS(209),
    [anon_sym_workflow] = ACTIONS(209),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_task] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_workflow] = ACTIONS(167),
  },
  [147] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_runtime] = STATE(255),
    [sym_task_output] = STATE(255),
    [sym_parameter_meta] = STATE(255),
    [sym_meta] = STATE(255),
    [sym_task_sections] = STATE(376),
    [sym_declaration] = STATE(176),
    [sym_command] = STATE(255),
    [aux_sym_task_repeat1] = STATE(176),
    [aux_sym_task_sections_repeat1] = STATE(255),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_runtime] = ACTIONS(324),
    [anon_sym_output] = ACTIONS(326),
    [anon_sym_parameter_meta] = ACTIONS(328),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_command] = ACTIONS(330),
  },
  [148] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_runtime] = STATE(255),
    [sym_task_output] = STATE(255),
    [sym_parameter_meta] = STATE(255),
    [sym_meta] = STATE(255),
    [sym_task_sections] = STATE(384),
    [sym_declaration] = STATE(147),
    [sym_command] = STATE(255),
    [aux_sym_task_repeat1] = STATE(147),
    [aux_sym_task_sections_repeat1] = STATE(255),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
    [anon_sym_runtime] = ACTIONS(324),
    [anon_sym_output] = ACTIONS(326),
    [anon_sym_parameter_meta] = ACTIONS(328),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_command] = ACTIONS(330),
  },
  [149] = {
    [aux_sym_identifier_token1] = ACTIONS(332),
    [sym_integer] = ACTIONS(332),
    [sym_float] = ACTIONS(332),
    [anon_sym_true] = ACTIONS(332),
    [anon_sym_false] = ACTIONS(332),
    [sym_object_type] = ACTIONS(332),
    [anon_sym_Boolean] = ACTIONS(332),
    [anon_sym_Int] = ACTIONS(332),
    [anon_sym_Float] = ACTIONS(332),
    [anon_sym_File] = ACTIONS(332),
    [anon_sym_String] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(334),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [anon_sym_BANG] = ACTIONS(334),
    [anon_sym_Array] = ACTIONS(332),
    [anon_sym_Map] = ACTIONS(332),
    [anon_sym_sep] = ACTIONS(332),
    [anon_sym_quote] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(332),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_identifier_token1] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PERCENT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(195),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_identifier_token1] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_PERCENT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(161),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_identifier_token1] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(191),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym_identifier_token1] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(187),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(336),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_identifier_token1] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_identifier_token1] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(211),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_identifier_token1] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(123),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_identifier_token1] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(199),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_identifier_token1] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(127),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_identifier_token1] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(225),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_identifier_token1] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(203),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_identifier_token1] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(215),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_identifier_token1] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(179),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [aux_sym_identifier_token1] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(183),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
  },
  [174] = {
    [aux_sym_identifier_token1] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(115),
  },
  [175] = {
    [aux_sym_identifier_token1] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(358),
  },
  [176] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(353),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_declaration] = STATE(176),
    [aux_sym_task_repeat1] = STATE(176),
    [sym_object_type] = ACTIONS(360),
    [anon_sym_Boolean] = ACTIONS(363),
    [anon_sym_Int] = ACTIONS(363),
    [anon_sym_Float] = ACTIONS(363),
    [anon_sym_File] = ACTIONS(363),
    [anon_sym_String] = ACTIONS(363),
    [anon_sym_Array] = ACTIONS(366),
    [anon_sym_Map] = ACTIONS(369),
    [anon_sym_runtime] = ACTIONS(372),
    [anon_sym_output] = ACTIONS(372),
    [anon_sym_parameter_meta] = ACTIONS(372),
    [anon_sym_meta] = ACTIONS(372),
    [anon_sym_command] = ACTIONS(372),
  },
  [177] = {
    [sym_identifier] = STATE(373),
    [sym_parameter_meta_kv] = STATE(369),
    [aux_sym_parameter_meta_repeat1] = STATE(177),
    [aux_sym_identifier_token1] = ACTIONS(374),
    [sym_object_type] = ACTIONS(377),
    [anon_sym_Boolean] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(377),
    [anon_sym_Float] = ACTIONS(377),
    [anon_sym_File] = ACTIONS(377),
    [anon_sym_String] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(377),
    [anon_sym_Map] = ACTIONS(377),
    [anon_sym_parameter_meta] = ACTIONS(377),
    [anon_sym_meta] = ACTIONS(377),
    [anon_sym_call] = ACTIONS(377),
    [anon_sym_while] = ACTIONS(377),
    [anon_sym_scatter] = ACTIONS(377),
  },
  [178] = {
    [aux_sym_identifier_token1] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
  },
  [179] = {
    [aux_sym_function_expression_repeat1] = STATE(332),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [180] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(337),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [181] = {
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
  },
  [182] = {
    [aux_sym_identifier_token1] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
  },
  [183] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(183),
    [sym_object_type] = ACTIONS(395),
    [anon_sym_Boolean] = ACTIONS(395),
    [anon_sym_Int] = ACTIONS(395),
    [anon_sym_Float] = ACTIONS(395),
    [anon_sym_File] = ACTIONS(395),
    [anon_sym_String] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(395),
    [anon_sym_Map] = ACTIONS(395),
    [anon_sym_parameter_meta] = ACTIONS(395),
    [anon_sym_meta] = ACTIONS(395),
    [anon_sym_call] = ACTIONS(395),
    [anon_sym_as] = ACTIONS(395),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_scatter] = ACTIONS(395),
  },
  [184] = {
    [sym_identifier] = STATE(373),
    [sym_parameter_meta_kv] = STATE(369),
    [aux_sym_parameter_meta_repeat1] = STATE(202),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_object_type] = ACTIONS(400),
    [anon_sym_Boolean] = ACTIONS(400),
    [anon_sym_Int] = ACTIONS(400),
    [anon_sym_Float] = ACTIONS(400),
    [anon_sym_File] = ACTIONS(400),
    [anon_sym_String] = ACTIONS(400),
    [anon_sym_if] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_Array] = ACTIONS(400),
    [anon_sym_Map] = ACTIONS(400),
    [anon_sym_parameter_meta] = ACTIONS(400),
    [anon_sym_meta] = ACTIONS(400),
    [anon_sym_call] = ACTIONS(400),
    [anon_sym_while] = ACTIONS(400),
    [anon_sym_scatter] = ACTIONS(400),
  },
  [185] = {
    [aux_sym_function_expression_repeat1] = STATE(334),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [186] = {
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
  },
  [187] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(199),
    [sym_object_type] = ACTIONS(406),
    [anon_sym_Boolean] = ACTIONS(406),
    [anon_sym_Int] = ACTIONS(406),
    [anon_sym_Float] = ACTIONS(406),
    [anon_sym_File] = ACTIONS(406),
    [anon_sym_String] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(408),
    [anon_sym_if] = ACTIONS(406),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_Array] = ACTIONS(406),
    [anon_sym_Map] = ACTIONS(406),
    [anon_sym_parameter_meta] = ACTIONS(406),
    [anon_sym_meta] = ACTIONS(406),
    [anon_sym_call] = ACTIONS(406),
    [anon_sym_as] = ACTIONS(406),
    [anon_sym_while] = ACTIONS(406),
    [anon_sym_scatter] = ACTIONS(406),
  },
  [188] = {
    [aux_sym_identifier_token1] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [189] = {
    [aux_sym_identifier_token1] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
  },
  [190] = {
    [aux_sym_function_expression_repeat1] = STATE(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [191] = {
    [aux_sym_function_expression_repeat1] = STATE(344),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(422),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [192] = {
    [aux_sym_function_expression_repeat1] = STATE(336),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [193] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(343),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [194] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(345),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [195] = {
    [aux_sym_function_expression_repeat1] = STATE(323),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [196] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [197] = {
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [198] = {
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [199] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(183),
    [sym_object_type] = ACTIONS(434),
    [anon_sym_Boolean] = ACTIONS(434),
    [anon_sym_Int] = ACTIONS(434),
    [anon_sym_Float] = ACTIONS(434),
    [anon_sym_File] = ACTIONS(434),
    [anon_sym_String] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(408),
    [anon_sym_if] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_Array] = ACTIONS(434),
    [anon_sym_Map] = ACTIONS(434),
    [anon_sym_parameter_meta] = ACTIONS(434),
    [anon_sym_meta] = ACTIONS(434),
    [anon_sym_call] = ACTIONS(434),
    [anon_sym_as] = ACTIONS(434),
    [anon_sym_while] = ACTIONS(434),
    [anon_sym_scatter] = ACTIONS(434),
  },
  [200] = {
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
  },
  [201] = {
    [aux_sym_identifier_token1] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [202] = {
    [sym_identifier] = STATE(373),
    [sym_parameter_meta_kv] = STATE(369),
    [aux_sym_parameter_meta_repeat1] = STATE(177),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [sym_object_type] = ACTIONS(436),
    [anon_sym_Boolean] = ACTIONS(436),
    [anon_sym_Int] = ACTIONS(436),
    [anon_sym_Float] = ACTIONS(436),
    [anon_sym_File] = ACTIONS(436),
    [anon_sym_String] = ACTIONS(436),
    [anon_sym_if] = ACTIONS(436),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_Array] = ACTIONS(436),
    [anon_sym_Map] = ACTIONS(436),
    [anon_sym_parameter_meta] = ACTIONS(436),
    [anon_sym_meta] = ACTIONS(436),
    [anon_sym_call] = ACTIONS(436),
    [anon_sym_while] = ACTIONS(436),
    [anon_sym_scatter] = ACTIONS(436),
  },
  [203] = {
    [aux_sym_identifier_token1] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [204] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [205] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [206] = {
    [sym_call_body] = STATE(253),
    [sym_object_type] = ACTIONS(444),
    [anon_sym_Boolean] = ACTIONS(444),
    [anon_sym_Int] = ACTIONS(444),
    [anon_sym_Float] = ACTIONS(444),
    [anon_sym_File] = ACTIONS(444),
    [anon_sym_String] = ACTIONS(444),
    [anon_sym_if] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_Array] = ACTIONS(444),
    [anon_sym_Map] = ACTIONS(444),
    [anon_sym_parameter_meta] = ACTIONS(444),
    [anon_sym_meta] = ACTIONS(444),
    [anon_sym_call] = ACTIONS(444),
    [anon_sym_as] = ACTIONS(448),
    [anon_sym_while] = ACTIONS(444),
    [anon_sym_scatter] = ACTIONS(444),
  },
  [207] = {
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(450),
  },
  [208] = {
    [aux_sym_identifier_token1] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [209] = {
    [sym_object_type] = ACTIONS(454),
    [anon_sym_Boolean] = ACTIONS(454),
    [anon_sym_Int] = ACTIONS(454),
    [anon_sym_Float] = ACTIONS(454),
    [anon_sym_File] = ACTIONS(454),
    [anon_sym_String] = ACTIONS(454),
    [anon_sym_if] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_Array] = ACTIONS(454),
    [anon_sym_Map] = ACTIONS(454),
    [anon_sym_runtime] = ACTIONS(454),
    [anon_sym_output] = ACTIONS(454),
    [anon_sym_parameter_meta] = ACTIONS(454),
    [anon_sym_meta] = ACTIONS(454),
    [anon_sym_command] = ACTIONS(454),
    [anon_sym_call] = ACTIONS(454),
    [anon_sym_while] = ACTIONS(454),
    [anon_sym_scatter] = ACTIONS(454),
  },
  [210] = {
    [aux_sym_identifier_token1] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_AMP_AMP] = ACTIONS(410),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(416),
  },
  [211] = {
    [sym_object_type] = ACTIONS(458),
    [anon_sym_Boolean] = ACTIONS(458),
    [anon_sym_Int] = ACTIONS(458),
    [anon_sym_Float] = ACTIONS(458),
    [anon_sym_File] = ACTIONS(458),
    [anon_sym_String] = ACTIONS(458),
    [anon_sym_if] = ACTIONS(458),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_Array] = ACTIONS(458),
    [anon_sym_Map] = ACTIONS(458),
    [anon_sym_runtime] = ACTIONS(458),
    [anon_sym_output] = ACTIONS(458),
    [anon_sym_parameter_meta] = ACTIONS(458),
    [anon_sym_meta] = ACTIONS(458),
    [anon_sym_command] = ACTIONS(458),
    [anon_sym_call] = ACTIONS(458),
    [anon_sym_while] = ACTIONS(458),
    [anon_sym_scatter] = ACTIONS(458),
  },
  [212] = {
    [sym_object_type] = ACTIONS(395),
    [anon_sym_Boolean] = ACTIONS(395),
    [anon_sym_Int] = ACTIONS(395),
    [anon_sym_Float] = ACTIONS(395),
    [anon_sym_File] = ACTIONS(395),
    [anon_sym_String] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(395),
    [anon_sym_if] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_Array] = ACTIONS(395),
    [anon_sym_Map] = ACTIONS(395),
    [anon_sym_parameter_meta] = ACTIONS(395),
    [anon_sym_meta] = ACTIONS(395),
    [anon_sym_call] = ACTIONS(395),
    [anon_sym_as] = ACTIONS(395),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_scatter] = ACTIONS(395),
  },
  [213] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_then] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [214] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_then] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [216] = {
    [sym_call_body] = STATE(241),
    [sym_object_type] = ACTIONS(466),
    [anon_sym_Boolean] = ACTIONS(466),
    [anon_sym_Int] = ACTIONS(466),
    [anon_sym_Float] = ACTIONS(466),
    [anon_sym_File] = ACTIONS(466),
    [anon_sym_String] = ACTIONS(466),
    [anon_sym_if] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_Array] = ACTIONS(466),
    [anon_sym_Map] = ACTIONS(466),
    [anon_sym_parameter_meta] = ACTIONS(466),
    [anon_sym_meta] = ACTIONS(466),
    [anon_sym_call] = ACTIONS(466),
    [anon_sym_while] = ACTIONS(466),
    [anon_sym_scatter] = ACTIONS(466),
  },
  [217] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_then] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [218] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [219] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_then] = ACTIONS(472),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [220] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [221] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [223] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [224] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [225] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [226] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [228] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [229] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [230] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [231] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [232] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [233] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [234] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [235] = {
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_BANG_EQ] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(348),
  },
  [236] = {
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(506),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
  },
  [237] = {
    [aux_sym_identifier_token1] = ACTIONS(377),
    [sym_object_type] = ACTIONS(377),
    [anon_sym_Boolean] = ACTIONS(377),
    [anon_sym_Int] = ACTIONS(377),
    [anon_sym_Float] = ACTIONS(377),
    [anon_sym_File] = ACTIONS(377),
    [anon_sym_String] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_Array] = ACTIONS(377),
    [anon_sym_Map] = ACTIONS(377),
    [anon_sym_parameter_meta] = ACTIONS(377),
    [anon_sym_meta] = ACTIONS(377),
    [anon_sym_call] = ACTIONS(377),
    [anon_sym_while] = ACTIONS(377),
    [anon_sym_scatter] = ACTIONS(377),
  },
  [238] = {
    [sym_object_type] = ACTIONS(508),
    [anon_sym_Boolean] = ACTIONS(508),
    [anon_sym_Int] = ACTIONS(508),
    [anon_sym_Float] = ACTIONS(508),
    [anon_sym_File] = ACTIONS(508),
    [anon_sym_String] = ACTIONS(508),
    [anon_sym_if] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_Array] = ACTIONS(508),
    [anon_sym_Map] = ACTIONS(508),
    [anon_sym_parameter_meta] = ACTIONS(508),
    [anon_sym_meta] = ACTIONS(508),
    [anon_sym_call] = ACTIONS(508),
    [anon_sym_while] = ACTIONS(508),
    [anon_sym_scatter] = ACTIONS(508),
  },
  [239] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(348),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_task_output_kv] = STATE(240),
    [aux_sym_task_output_repeat1] = STATE(240),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
  },
  [240] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(348),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_task_output_kv] = STATE(240),
    [aux_sym_task_output_repeat1] = STATE(240),
    [sym_object_type] = ACTIONS(512),
    [anon_sym_Boolean] = ACTIONS(515),
    [anon_sym_Int] = ACTIONS(515),
    [anon_sym_Float] = ACTIONS(515),
    [anon_sym_File] = ACTIONS(515),
    [anon_sym_String] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_Array] = ACTIONS(520),
    [anon_sym_Map] = ACTIONS(523),
  },
  [241] = {
    [sym_object_type] = ACTIONS(526),
    [anon_sym_Boolean] = ACTIONS(526),
    [anon_sym_Int] = ACTIONS(526),
    [anon_sym_Float] = ACTIONS(526),
    [anon_sym_File] = ACTIONS(526),
    [anon_sym_String] = ACTIONS(526),
    [anon_sym_if] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_Array] = ACTIONS(526),
    [anon_sym_Map] = ACTIONS(526),
    [anon_sym_parameter_meta] = ACTIONS(526),
    [anon_sym_meta] = ACTIONS(526),
    [anon_sym_call] = ACTIONS(526),
    [anon_sym_while] = ACTIONS(526),
    [anon_sym_scatter] = ACTIONS(526),
  },
  [242] = {
    [sym_object_type] = ACTIONS(528),
    [anon_sym_Boolean] = ACTIONS(528),
    [anon_sym_Int] = ACTIONS(528),
    [anon_sym_Float] = ACTIONS(528),
    [anon_sym_File] = ACTIONS(528),
    [anon_sym_String] = ACTIONS(528),
    [anon_sym_if] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_Array] = ACTIONS(528),
    [anon_sym_Map] = ACTIONS(528),
    [anon_sym_parameter_meta] = ACTIONS(528),
    [anon_sym_meta] = ACTIONS(528),
    [anon_sym_call] = ACTIONS(528),
    [anon_sym_while] = ACTIONS(528),
    [anon_sym_scatter] = ACTIONS(528),
  },
  [243] = {
    [sym_object_type] = ACTIONS(530),
    [anon_sym_Boolean] = ACTIONS(530),
    [anon_sym_Int] = ACTIONS(530),
    [anon_sym_Float] = ACTIONS(530),
    [anon_sym_File] = ACTIONS(530),
    [anon_sym_String] = ACTIONS(530),
    [anon_sym_if] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(530),
    [anon_sym_Array] = ACTIONS(530),
    [anon_sym_Map] = ACTIONS(530),
    [anon_sym_parameter_meta] = ACTIONS(530),
    [anon_sym_meta] = ACTIONS(530),
    [anon_sym_call] = ACTIONS(530),
    [anon_sym_while] = ACTIONS(530),
    [anon_sym_scatter] = ACTIONS(530),
  },
  [244] = {
    [sym_object_type] = ACTIONS(532),
    [anon_sym_Boolean] = ACTIONS(532),
    [anon_sym_Int] = ACTIONS(532),
    [anon_sym_Float] = ACTIONS(532),
    [anon_sym_File] = ACTIONS(532),
    [anon_sym_String] = ACTIONS(532),
    [anon_sym_if] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_Array] = ACTIONS(532),
    [anon_sym_Map] = ACTIONS(532),
    [anon_sym_parameter_meta] = ACTIONS(532),
    [anon_sym_meta] = ACTIONS(532),
    [anon_sym_call] = ACTIONS(532),
    [anon_sym_while] = ACTIONS(532),
    [anon_sym_scatter] = ACTIONS(532),
  },
  [245] = {
    [sym_primitive_type] = STATE(290),
    [sym_type] = STATE(348),
    [sym_array_type] = STATE(290),
    [sym_map_type] = STATE(290),
    [sym_task_output_kv] = STATE(239),
    [aux_sym_task_output_repeat1] = STATE(239),
    [sym_object_type] = ACTIONS(249),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
  },
  [246] = {
    [sym_object_type] = ACTIONS(536),
    [anon_sym_Boolean] = ACTIONS(536),
    [anon_sym_Int] = ACTIONS(536),
    [anon_sym_Float] = ACTIONS(536),
    [anon_sym_File] = ACTIONS(536),
    [anon_sym_String] = ACTIONS(536),
    [anon_sym_if] = ACTIONS(536),
    [anon_sym_RBRACE] = ACTIONS(536),
    [anon_sym_Array] = ACTIONS(536),
    [anon_sym_Map] = ACTIONS(536),
    [anon_sym_parameter_meta] = ACTIONS(536),
    [anon_sym_meta] = ACTIONS(536),
    [anon_sym_call] = ACTIONS(536),
    [anon_sym_while] = ACTIONS(536),
    [anon_sym_scatter] = ACTIONS(536),
  },
  [247] = {
    [sym_object_type] = ACTIONS(538),
    [anon_sym_Boolean] = ACTIONS(538),
    [anon_sym_Int] = ACTIONS(538),
    [anon_sym_Float] = ACTIONS(538),
    [anon_sym_File] = ACTIONS(538),
    [anon_sym_String] = ACTIONS(538),
    [anon_sym_if] = ACTIONS(538),
    [anon_sym_RBRACE] = ACTIONS(538),
    [anon_sym_Array] = ACTIONS(538),
    [anon_sym_Map] = ACTIONS(538),
    [anon_sym_parameter_meta] = ACTIONS(538),
    [anon_sym_meta] = ACTIONS(538),
    [anon_sym_call] = ACTIONS(538),
    [anon_sym_while] = ACTIONS(538),
    [anon_sym_scatter] = ACTIONS(538),
  },
  [248] = {
    [sym_object_type] = ACTIONS(540),
    [anon_sym_Boolean] = ACTIONS(540),
    [anon_sym_Int] = ACTIONS(540),
    [anon_sym_Float] = ACTIONS(540),
    [anon_sym_File] = ACTIONS(540),
    [anon_sym_String] = ACTIONS(540),
    [anon_sym_if] = ACTIONS(540),
    [anon_sym_RBRACE] = ACTIONS(540),
    [anon_sym_Array] = ACTIONS(540),
    [anon_sym_Map] = ACTIONS(540),
    [anon_sym_parameter_meta] = ACTIONS(540),
    [anon_sym_meta] = ACTIONS(540),
    [anon_sym_call] = ACTIONS(540),
    [anon_sym_while] = ACTIONS(540),
    [anon_sym_scatter] = ACTIONS(540),
  },
  [249] = {
    [sym_object_type] = ACTIONS(542),
    [anon_sym_Boolean] = ACTIONS(542),
    [anon_sym_Int] = ACTIONS(542),
    [anon_sym_Float] = ACTIONS(542),
    [anon_sym_File] = ACTIONS(542),
    [anon_sym_String] = ACTIONS(542),
    [anon_sym_if] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_Array] = ACTIONS(542),
    [anon_sym_Map] = ACTIONS(542),
    [anon_sym_parameter_meta] = ACTIONS(542),
    [anon_sym_meta] = ACTIONS(542),
    [anon_sym_call] = ACTIONS(542),
    [anon_sym_while] = ACTIONS(542),
    [anon_sym_scatter] = ACTIONS(542),
  },
  [250] = {
    [sym_object_type] = ACTIONS(544),
    [anon_sym_Boolean] = ACTIONS(544),
    [anon_sym_Int] = ACTIONS(544),
    [anon_sym_Float] = ACTIONS(544),
    [anon_sym_File] = ACTIONS(544),
    [anon_sym_String] = ACTIONS(544),
    [anon_sym_if] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_Array] = ACTIONS(544),
    [anon_sym_Map] = ACTIONS(544),
    [anon_sym_parameter_meta] = ACTIONS(544),
    [anon_sym_meta] = ACTIONS(544),
    [anon_sym_call] = ACTIONS(544),
    [anon_sym_while] = ACTIONS(544),
    [anon_sym_scatter] = ACTIONS(544),
  },
  [251] = {
    [sym_object_type] = ACTIONS(546),
    [anon_sym_Boolean] = ACTIONS(546),
    [anon_sym_Int] = ACTIONS(546),
    [anon_sym_Float] = ACTIONS(546),
    [anon_sym_File] = ACTIONS(546),
    [anon_sym_String] = ACTIONS(546),
    [anon_sym_if] = ACTIONS(546),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_Array] = ACTIONS(546),
    [anon_sym_Map] = ACTIONS(546),
    [anon_sym_parameter_meta] = ACTIONS(546),
    [anon_sym_meta] = ACTIONS(546),
    [anon_sym_call] = ACTIONS(546),
    [anon_sym_while] = ACTIONS(546),
    [anon_sym_scatter] = ACTIONS(546),
  },
  [252] = {
    [sym_object_type] = ACTIONS(548),
    [anon_sym_Boolean] = ACTIONS(548),
    [anon_sym_Int] = ACTIONS(548),
    [anon_sym_Float] = ACTIONS(548),
    [anon_sym_File] = ACTIONS(548),
    [anon_sym_String] = ACTIONS(548),
    [anon_sym_if] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_Array] = ACTIONS(548),
    [anon_sym_Map] = ACTIONS(548),
    [anon_sym_parameter_meta] = ACTIONS(548),
    [anon_sym_meta] = ACTIONS(548),
    [anon_sym_call] = ACTIONS(548),
    [anon_sym_while] = ACTIONS(548),
    [anon_sym_scatter] = ACTIONS(548),
  },
  [253] = {
    [sym_object_type] = ACTIONS(550),
    [anon_sym_Boolean] = ACTIONS(550),
    [anon_sym_Int] = ACTIONS(550),
    [anon_sym_Float] = ACTIONS(550),
    [anon_sym_File] = ACTIONS(550),
    [anon_sym_String] = ACTIONS(550),
    [anon_sym_if] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(550),
    [anon_sym_Array] = ACTIONS(550),
    [anon_sym_Map] = ACTIONS(550),
    [anon_sym_parameter_meta] = ACTIONS(550),
    [anon_sym_meta] = ACTIONS(550),
    [anon_sym_call] = ACTIONS(550),
    [anon_sym_while] = ACTIONS(550),
    [anon_sym_scatter] = ACTIONS(550),
  },
  [254] = {
    [sym_runtime] = STATE(254),
    [sym_task_output] = STATE(254),
    [sym_parameter_meta] = STATE(254),
    [sym_meta] = STATE(254),
    [sym_command] = STATE(254),
    [aux_sym_task_sections_repeat1] = STATE(254),
    [anon_sym_RBRACE] = ACTIONS(552),
    [anon_sym_runtime] = ACTIONS(554),
    [anon_sym_output] = ACTIONS(557),
    [anon_sym_parameter_meta] = ACTIONS(560),
    [anon_sym_meta] = ACTIONS(563),
    [anon_sym_command] = ACTIONS(566),
  },
  [255] = {
    [sym_runtime] = STATE(254),
    [sym_task_output] = STATE(254),
    [sym_parameter_meta] = STATE(254),
    [sym_meta] = STATE(254),
    [sym_command] = STATE(254),
    [aux_sym_task_sections_repeat1] = STATE(254),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_runtime] = ACTIONS(324),
    [anon_sym_output] = ACTIONS(326),
    [anon_sym_parameter_meta] = ACTIONS(328),
    [anon_sym_meta] = ACTIONS(263),
    [anon_sym_command] = ACTIONS(330),
  },
  [256] = {
    [sym_primitive_type] = STATE(377),
    [sym_array_type] = STATE(377),
    [sym_map_type] = STATE(377),
    [sym_object_type] = ACTIONS(571),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_Array] = ACTIONS(257),
    [anon_sym_Map] = ACTIONS(259),
  },
  [257] = {
    [sym_identifier] = STATE(373),
    [sym_parameter_meta_kv] = STATE(372),
    [aux_sym_parameter_meta_repeat1] = STATE(259),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_runtime] = ACTIONS(400),
    [anon_sym_output] = ACTIONS(400),
    [anon_sym_parameter_meta] = ACTIONS(400),
    [anon_sym_meta] = ACTIONS(400),
    [anon_sym_command] = ACTIONS(400),
  },
  [258] = {
    [sym_identifier] = STATE(373),
    [sym_parameter_meta_kv] = STATE(372),
    [aux_sym_parameter_meta_repeat1] = STATE(258),
    [aux_sym_identifier_token1] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_runtime] = ACTIONS(377),
    [anon_sym_output] = ACTIONS(377),
    [anon_sym_parameter_meta] = ACTIONS(377),
    [anon_sym_meta] = ACTIONS(377),
    [anon_sym_command] = ACTIONS(377),
  },
  [259] = {
    [sym_identifier] = STATE(373),
    [sym_parameter_meta_kv] = STATE(372),
    [aux_sym_parameter_meta_repeat1] = STATE(258),
    [aux_sym_identifier_token1] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_runtime] = ACTIONS(436),
    [anon_sym_output] = ACTIONS(436),
    [anon_sym_parameter_meta] = ACTIONS(436),
    [anon_sym_meta] = ACTIONS(436),
    [anon_sym_command] = ACTIONS(436),
  },
  [260] = {
    [sym_object_type] = ACTIONS(573),
    [anon_sym_Boolean] = ACTIONS(573),
    [anon_sym_Int] = ACTIONS(573),
    [anon_sym_Float] = ACTIONS(573),
    [anon_sym_File] = ACTIONS(573),
    [anon_sym_String] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_Array] = ACTIONS(573),
    [anon_sym_Map] = ACTIONS(573),
  },
  [261] = {
    [sym_primitive_type] = STATE(395),
    [sym_array_type] = STATE(395),
    [sym_object_type] = ACTIONS(575),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
    [anon_sym_Array] = ACTIONS(257),
  },
  [262] = {
    [sym_task] = STATE(263),
    [sym_import] = STATE(263),
    [sym_workflow] = STATE(263),
    [aux_sym_document_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_task] = ACTIONS(579),
    [anon_sym_import] = ACTIONS(581),
    [anon_sym_workflow] = ACTIONS(583),
  },
  [263] = {
    [sym_task] = STATE(263),
    [sym_import] = STATE(263),
    [sym_workflow] = STATE(263),
    [aux_sym_document_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_task] = ACTIONS(587),
    [anon_sym_import] = ACTIONS(590),
    [anon_sym_workflow] = ACTIONS(593),
  },
  [264] = {
    [sym_command_part] = STATE(264),
    [sym_command_part_var] = STATE(303),
    [aux_sym_command_repeat1] = STATE(264),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_GT_GT_GT] = ACTIONS(596),
    [sym_command_part_string] = ACTIONS(598),
    [anon_sym_DOLLAR] = ACTIONS(601),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_runtime] = ACTIONS(604),
    [anon_sym_output] = ACTIONS(604),
    [anon_sym_parameter_meta] = ACTIONS(604),
    [anon_sym_meta] = ACTIONS(604),
    [anon_sym_command] = ACTIONS(604),
  },
  [266] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [anon_sym_RBRACE] = ACTIONS(606),
    [anon_sym_runtime] = ACTIONS(606),
    [anon_sym_output] = ACTIONS(606),
    [anon_sym_parameter_meta] = ACTIONS(606),
    [anon_sym_meta] = ACTIONS(606),
    [anon_sym_command] = ACTIONS(606),
  },
  [267] = {
    [aux_sym_identifier_token1] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_runtime] = ACTIONS(377),
    [anon_sym_output] = ACTIONS(377),
    [anon_sym_parameter_meta] = ACTIONS(377),
    [anon_sym_meta] = ACTIONS(377),
    [anon_sym_command] = ACTIONS(377),
  },
  [268] = {
    [sym_command_part] = STATE(264),
    [sym_command_part_var] = STATE(303),
    [aux_sym_command_repeat1] = STATE(264),
    [anon_sym_RBRACE] = ACTIONS(608),
    [sym_command_part_string] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(612),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_runtime] = ACTIONS(614),
    [anon_sym_output] = ACTIONS(614),
    [anon_sym_parameter_meta] = ACTIONS(614),
    [anon_sym_meta] = ACTIONS(614),
    [anon_sym_command] = ACTIONS(614),
  },
  [270] = {
    [sym_command_part] = STATE(264),
    [sym_command_part_var] = STATE(303),
    [aux_sym_command_repeat1] = STATE(264),
    [anon_sym_GT_GT_GT] = ACTIONS(608),
    [sym_command_part_string] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(612),
  },
  [271] = {
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_runtime] = ACTIONS(616),
    [anon_sym_output] = ACTIONS(616),
    [anon_sym_parameter_meta] = ACTIONS(616),
    [anon_sym_meta] = ACTIONS(616),
    [anon_sym_command] = ACTIONS(616),
  },
  [272] = {
    [sym_primitive_type] = STATE(394),
    [anon_sym_Boolean] = ACTIONS(251),
    [anon_sym_Int] = ACTIONS(251),
    [anon_sym_Float] = ACTIONS(251),
    [anon_sym_File] = ACTIONS(251),
    [anon_sym_String] = ACTIONS(251),
  },
  [273] = {
    [ts_builtin_sym_end] = ACTIONS(618),
    [aux_sym_identifier_token1] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_QMARK] = ACTIONS(618),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(620),
    [anon_sym_runtime] = ACTIONS(620),
    [anon_sym_output] = ACTIONS(620),
    [anon_sym_parameter_meta] = ACTIONS(620),
    [anon_sym_meta] = ACTIONS(620),
    [anon_sym_command] = ACTIONS(620),
  },
  [275] = {
    [sym_identifier] = STATE(393),
    [sym_runtime_kv] = STATE(277),
    [aux_sym_runtime_repeat1] = STATE(277),
    [aux_sym_identifier_token1] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(624),
  },
  [276] = {
    [sym_identifier] = STATE(392),
    [sym_scatter_iteration_statment] = STATE(279),
    [aux_sym_scatter_repeat1] = STATE(279),
    [aux_sym_identifier_token1] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(628),
  },
  [277] = {
    [sym_identifier] = STATE(393),
    [sym_runtime_kv] = STATE(277),
    [aux_sym_runtime_repeat1] = STATE(277),
    [aux_sym_identifier_token1] = ACTIONS(630),
    [anon_sym_RBRACE] = ACTIONS(633),
  },
  [278] = {
    [sym_identifier] = STATE(371),
    [sym_meta_kv] = STATE(278),
    [aux_sym_meta_repeat1] = STATE(278),
    [aux_sym_identifier_token1] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(638),
  },
  [279] = {
    [sym_identifier] = STATE(392),
    [sym_scatter_iteration_statment] = STATE(279),
    [aux_sym_scatter_repeat1] = STATE(279),
    [aux_sym_identifier_token1] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(643),
  },
  [280] = {
    [sym_identifier] = STATE(371),
    [sym_meta_kv] = STATE(289),
    [aux_sym_meta_repeat1] = STATE(289),
    [aux_sym_identifier_token1] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(645),
  },
  [281] = {
    [sym_identifier] = STATE(393),
    [sym_runtime_kv] = STATE(275),
    [aux_sym_runtime_repeat1] = STATE(275),
    [aux_sym_identifier_token1] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(647),
  },
  [282] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_as] = ACTIONS(395),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(652),
    [aux_sym_identifier_token1] = ACTIONS(652),
    [anon_sym_RBRACK] = ACTIONS(652),
    [anon_sym_PLUS] = ACTIONS(652),
    [anon_sym_QMARK] = ACTIONS(652),
  },
  [284] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(288),
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_as] = ACTIONS(406),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [anon_sym_task] = ACTIONS(656),
    [anon_sym_as] = ACTIONS(658),
    [anon_sym_import] = ACTIONS(656),
    [anon_sym_workflow] = ACTIONS(656),
  },
  [286] = {
    [sym_identifier] = STATE(392),
    [sym_scatter_iteration_statment] = STATE(276),
    [aux_sym_scatter_repeat1] = STATE(276),
    [aux_sym_identifier_token1] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(660),
  },
  [287] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [aux_sym_identifier_token1] = ACTIONS(662),
    [anon_sym_RBRACK] = ACTIONS(662),
    [anon_sym_PLUS] = ACTIONS(662),
    [anon_sym_QMARK] = ACTIONS(662),
  },
  [288] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_as] = ACTIONS(434),
  },
  [289] = {
    [sym_identifier] = STATE(371),
    [sym_meta_kv] = STATE(278),
    [aux_sym_meta_repeat1] = STATE(278),
    [aux_sym_identifier_token1] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(664),
  },
  [290] = {
    [sym_type_postfix_quantifier] = STATE(357),
    [ts_builtin_sym_end] = ACTIONS(666),
    [aux_sym_identifier_token1] = ACTIONS(666),
    [anon_sym_PLUS] = ACTIONS(668),
    [anon_sym_QMARK] = ACTIONS(668),
  },
  [291] = {
    [sym_command_part] = STATE(268),
    [sym_command_part_var] = STATE(303),
    [aux_sym_command_repeat1] = STATE(268),
    [sym_command_part_string] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(612),
  },
  [292] = {
    [sym_command_part] = STATE(270),
    [sym_command_part_var] = STATE(303),
    [aux_sym_command_repeat1] = STATE(270),
    [sym_command_part_string] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(612),
  },
  [293] = {
    [aux_sym_string_literal_repeat2] = STATE(305),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [aux_sym_string_literal_token2] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(674),
  },
  [294] = {
    [aux_sym_string_literal_repeat2] = STATE(305),
    [anon_sym_SQUOTE] = ACTIONS(676),
    [aux_sym_string_literal_token2] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(674),
  },
  [295] = {
    [aux_sym_string_literal_repeat1] = STATE(322),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [aux_sym_string_literal_token1] = ACTIONS(680),
    [sym_escape_sequence] = ACTIONS(680),
  },
  [296] = {
    [aux_sym_string_literal_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [aux_sym_string_literal_token1] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(682),
  },
  [297] = {
    [aux_sym_string_literal_repeat2] = STATE(321),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [aux_sym_string_literal_token2] = ACTIONS(684),
    [sym_escape_sequence] = ACTIONS(686),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [anon_sym_task] = ACTIONS(688),
    [anon_sym_import] = ACTIONS(688),
    [anon_sym_workflow] = ACTIONS(688),
  },
  [299] = {
    [aux_sym_string_literal_repeat2] = STATE(305),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [aux_sym_string_literal_token2] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(674),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [anon_sym_task] = ACTIONS(692),
    [anon_sym_import] = ACTIONS(692),
    [anon_sym_workflow] = ACTIONS(692),
  },
  [301] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(432),
  },
  [302] = {
    [aux_sym_string_literal_repeat2] = STATE(294),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [aux_sym_string_literal_token2] = ACTIONS(699),
    [sym_escape_sequence] = ACTIONS(701),
  },
  [303] = {
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_GT_GT_GT] = ACTIONS(703),
    [sym_command_part_string] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(703),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [anon_sym_task] = ACTIONS(705),
    [anon_sym_import] = ACTIONS(705),
    [anon_sym_workflow] = ACTIONS(705),
  },
  [305] = {
    [aux_sym_string_literal_repeat2] = STATE(305),
    [anon_sym_SQUOTE] = ACTIONS(707),
    [aux_sym_string_literal_token2] = ACTIONS(709),
    [sym_escape_sequence] = ACTIONS(712),
  },
  [306] = {
    [aux_sym_string_literal_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(715),
    [aux_sym_string_literal_token1] = ACTIONS(717),
    [sym_escape_sequence] = ACTIONS(717),
  },
  [307] = {
    [sym_identifier] = STATE(368),
    [sym_variable_mappings] = STATE(387),
    [sym_variable_mapping_kv] = STATE(333),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [308] = {
    [aux_sym_string_literal_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(690),
    [aux_sym_string_literal_token1] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(682),
  },
  [309] = {
    [aux_sym_string_literal_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(676),
    [aux_sym_string_literal_token1] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(682),
  },
  [310] = {
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_GT_GT_GT] = ACTIONS(720),
    [sym_command_part_string] = ACTIONS(720),
    [anon_sym_DOLLAR] = ACTIONS(720),
  },
  [311] = {
    [aux_sym_string_literal_repeat2] = STATE(293),
    [anon_sym_SQUOTE] = ACTIONS(722),
    [aux_sym_string_literal_token2] = ACTIONS(724),
    [sym_escape_sequence] = ACTIONS(726),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(728),
    [anon_sym_task] = ACTIONS(728),
    [anon_sym_import] = ACTIONS(728),
    [anon_sym_workflow] = ACTIONS(728),
  },
  [313] = {
    [aux_sym_string_literal_repeat1] = STATE(296),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [aux_sym_string_literal_token1] = ACTIONS(730),
    [sym_escape_sequence] = ACTIONS(730),
  },
  [314] = {
    [sym_call_body] = STATE(390),
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_as] = ACTIONS(734),
  },
  [315] = {
    [aux_sym_string_literal_repeat1] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [aux_sym_string_literal_token1] = ACTIONS(736),
    [sym_escape_sequence] = ACTIONS(736),
  },
  [316] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_as] = ACTIONS(395),
  },
  [317] = {
    [aux_sym_string_literal_repeat1] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [aux_sym_string_literal_token1] = ACTIONS(740),
    [sym_escape_sequence] = ACTIONS(740),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_GT_GT_GT] = ACTIONS(742),
    [sym_command_part_string] = ACTIONS(742),
    [anon_sym_DOLLAR] = ACTIONS(742),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(744),
    [anon_sym_task] = ACTIONS(744),
    [anon_sym_import] = ACTIONS(744),
    [anon_sym_workflow] = ACTIONS(744),
  },
  [320] = {
    [aux_sym_string_literal_repeat2] = STATE(299),
    [anon_sym_SQUOTE] = ACTIONS(738),
    [aux_sym_string_literal_token2] = ACTIONS(746),
    [sym_escape_sequence] = ACTIONS(748),
  },
  [321] = {
    [aux_sym_string_literal_repeat2] = STATE(305),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [aux_sym_string_literal_token2] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(674),
  },
  [322] = {
    [aux_sym_string_literal_repeat1] = STATE(306),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [aux_sym_string_literal_token1] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(682),
  },
  [323] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(752),
  },
  [324] = {
    [sym_inputs] = STATE(389),
    [anon_sym_RBRACE] = ACTIONS(754),
    [anon_sym_input] = ACTIONS(756),
  },
  [325] = {
    [aux_sym_variable_mappings_repeat1] = STATE(327),
    [anon_sym_COMMA] = ACTIONS(758),
    [anon_sym_RBRACE] = ACTIONS(760),
  },
  [326] = {
    [sym_identifier] = STATE(368),
    [sym_variable_mapping_kv] = STATE(354),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [327] = {
    [aux_sym_variable_mappings_repeat1] = STATE(327),
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_RBRACE] = ACTIONS(765),
  },
  [328] = {
    [sym_string_literal] = STATE(347),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
  },
  [329] = {
    [sym_string_literal] = STATE(260),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
  },
  [330] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(767),
    [anon_sym_RBRACE] = ACTIONS(770),
  },
  [331] = {
    [sym_string_literal] = STATE(400),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [332] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_RBRACK] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(383),
  },
  [333] = {
    [aux_sym_variable_mappings_repeat1] = STATE(325),
    [anon_sym_COMMA] = ACTIONS(758),
    [anon_sym_RBRACE] = ACTIONS(774),
  },
  [334] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(776),
  },
  [335] = {
    [sym_identifier] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [336] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(778),
  },
  [337] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(780),
  },
  [338] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_RBRACK] = ACTIONS(782),
    [anon_sym_COMMA] = ACTIONS(383),
  },
  [339] = {
    [sym_string_literal] = STATE(285),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [340] = {
    [sym_identifier] = STATE(284),
    [sym_namespaced_identifier] = STATE(314),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [341] = {
    [sym_identifier] = STATE(187),
    [sym_namespaced_identifier] = STATE(206),
    [aux_sym_identifier_token1] = ACTIONS(626),
  },
  [342] = {
    [sym_inputs] = STATE(381),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_input] = ACTIONS(756),
  },
  [343] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(786),
  },
  [344] = {
    [aux_sym_function_expression_repeat1] = STATE(301),
    [anon_sym_RBRACK] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(383),
  },
  [345] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(790),
  },
  [346] = {
    [sym_call_body] = STATE(385),
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(732),
  },
  [347] = {
    [aux_sym_identifier_token1] = ACTIONS(792),
    [anon_sym_RBRACE] = ACTIONS(792),
  },
  [348] = {
    [sym_identifier] = STATE(366),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [349] = {
    [sym_identifier] = STATE(175),
    [aux_sym_identifier_token1] = ACTIONS(794),
  },
  [350] = {
    [sym_identifier] = STATE(397),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [351] = {
    [sym_identifier] = STATE(216),
    [aux_sym_identifier_token1] = ACTIONS(626),
  },
  [352] = {
    [sym_identifier] = STATE(212),
    [aux_sym_identifier_token1] = ACTIONS(626),
  },
  [353] = {
    [sym_identifier] = STATE(103),
    [aux_sym_identifier_token1] = ACTIONS(626),
  },
  [354] = {
    [anon_sym_COMMA] = ACTIONS(765),
    [anon_sym_RBRACE] = ACTIONS(765),
  },
  [355] = {
    [sym_identifier] = STATE(396),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(796),
    [aux_sym_identifier_token1] = ACTIONS(796),
  },
  [357] = {
    [ts_builtin_sym_end] = ACTIONS(798),
    [aux_sym_identifier_token1] = ACTIONS(798),
  },
  [358] = {
    [sym_scatter_body] = STATE(249),
    [anon_sym_LBRACE] = ACTIONS(800),
  },
  [359] = {
    [sym_identifier] = STATE(154),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [360] = {
    [sym_identifier] = STATE(316),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [361] = {
    [sym_identifier] = STATE(80),
    [aux_sym_identifier_token1] = ACTIONS(802),
  },
  [362] = {
    [sym_identifier] = STATE(346),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [363] = {
    [sym_scatter_body] = STATE(248),
    [anon_sym_LBRACE] = ACTIONS(800),
  },
  [364] = {
    [sym_identifier] = STATE(319),
    [aux_sym_identifier_token1] = ACTIONS(622),
  },
  [365] = {
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_LT_LT_LT] = ACTIONS(806),
  },
  [366] = {
    [anon_sym_EQ] = ACTIONS(808),
  },
  [367] = {
    [anon_sym_LBRACE] = ACTIONS(810),
  },
  [368] = {
    [anon_sym_EQ] = ACTIONS(812),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(814),
  },
  [370] = {
    [anon_sym_LBRACE] = ACTIONS(816),
  },
  [371] = {
    [anon_sym_EQ] = ACTIONS(818),
  },
  [372] = {
    [anon_sym_RBRACE] = ACTIONS(820),
  },
  [373] = {
    [anon_sym_EQ] = ACTIONS(822),
  },
  [374] = {
    [anon_sym_LBRACK] = ACTIONS(824),
  },
  [375] = {
    [ts_builtin_sym_end] = ACTIONS(528),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(826),
  },
  [377] = {
    [anon_sym_RBRACK] = ACTIONS(828),
  },
  [378] = {
    [anon_sym_LPAREN] = ACTIONS(830),
  },
  [379] = {
    [anon_sym_LPAREN] = ACTIONS(832),
  },
  [380] = {
    [anon_sym_LPAREN] = ACTIONS(834),
  },
  [381] = {
    [anon_sym_RBRACE] = ACTIONS(836),
  },
  [382] = {
    [anon_sym_COLON] = ACTIONS(838),
  },
  [383] = {
    [ts_builtin_sym_end] = ACTIONS(530),
  },
  [384] = {
    [anon_sym_RBRACE] = ACTIONS(840),
  },
  [385] = {
    [ts_builtin_sym_end] = ACTIONS(526),
  },
  [386] = {
    [anon_sym_LBRACE] = ACTIONS(842),
  },
  [387] = {
    [anon_sym_RBRACE] = ACTIONS(844),
  },
  [388] = {
    [anon_sym_LBRACE] = ACTIONS(846),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(848),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(550),
  },
  [391] = {
    [anon_sym_LBRACE] = ACTIONS(850),
  },
  [392] = {
    [anon_sym_in] = ACTIONS(852),
  },
  [393] = {
    [anon_sym_COLON] = ACTIONS(854),
  },
  [394] = {
    [anon_sym_COMMA] = ACTIONS(856),
  },
  [395] = {
    [anon_sym_RBRACK] = ACTIONS(858),
  },
  [396] = {
    [anon_sym_LBRACE] = ACTIONS(860),
  },
  [397] = {
    [anon_sym_LBRACE] = ACTIONS(862),
  },
  [398] = {
    [anon_sym_LBRACE] = ACTIONS(864),
  },
  [399] = {
    [anon_sym_LBRACE] = ACTIONS(866),
  },
  [400] = {
    [anon_sym_RBRACE] = ACTIONS(868),
  },
  [401] = {
    [ts_builtin_sym_end] = ACTIONS(478),
  },
  [402] = {
    [ts_builtin_sym_end] = ACTIONS(870),
  },
  [403] = {
    [anon_sym_EQ] = ACTIONS(872),
  },
  [404] = {
    [anon_sym_EQ] = ACTIONS(874),
  },
  [405] = {
    [anon_sym_LBRACE] = ACTIONS(876),
  },
  [406] = {
    [anon_sym_LBRACK] = ACTIONS(878),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(135),
  [5] = {.count = 1, .reusable = false}, SHIFT(164),
  [7] = {.count = 1, .reusable = false}, SHIFT(163),
  [9] = {.count = 1, .reusable = false}, SHIFT(290),
  [11] = {.count = 1, .reusable = false}, SHIFT(273),
  [13] = {.count = 1, .reusable = true}, SHIFT(295),
  [15] = {.count = 1, .reusable = true}, SHIFT(297),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = false}, SHIFT(58),
  [21] = {.count = 1, .reusable = true}, SHIFT(47),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(374),
  [29] = {.count = 1, .reusable = false}, SHIFT(406),
  [31] = {.count = 1, .reusable = false}, SHIFT(405),
  [33] = {.count = 1, .reusable = false}, SHIFT(350),
  [35] = {.count = 1, .reusable = false}, SHIFT(340),
  [37] = {.count = 1, .reusable = false}, SHIFT(339),
  [39] = {.count = 1, .reusable = false}, SHIFT(355),
  [41] = {.count = 1, .reusable = false}, SHIFT(207),
  [43] = {.count = 1, .reusable = false}, SHIFT(403),
  [45] = {.count = 1, .reusable = true}, SHIFT(85),
  [47] = {.count = 1, .reusable = true}, SHIFT(113),
  [49] = {.count = 1, .reusable = true}, SHIFT(87),
  [51] = {.count = 1, .reusable = true}, SHIFT(133),
  [53] = {.count = 1, .reusable = true}, SHIFT(132),
  [55] = {.count = 1, .reusable = true}, SHIFT(101),
  [57] = {.count = 1, .reusable = true}, SHIFT(151),
  [59] = {.count = 1, .reusable = true}, SHIFT(156),
  [61] = {.count = 1, .reusable = true}, SHIFT(155),
  [63] = {.count = 1, .reusable = false}, SHIFT(81),
  [65] = {.count = 1, .reusable = false}, SHIFT(93),
  [67] = {.count = 1, .reusable = false}, SHIFT(91),
  [69] = {.count = 1, .reusable = true}, SHIFT(313),
  [71] = {.count = 1, .reusable = true}, SHIFT(311),
  [73] = {.count = 1, .reusable = true}, SHIFT(6),
  [75] = {.count = 1, .reusable = false}, SHIFT(17),
  [77] = {.count = 1, .reusable = true}, SHIFT(67),
  [79] = {.count = 1, .reusable = true}, SHIFT(4),
  [81] = {.count = 1, .reusable = true}, SHIFT(34),
  [83] = {.count = 1, .reusable = false}, SHIFT(28),
  [85] = {.count = 1, .reusable = false}, SHIFT(115),
  [87] = {.count = 1, .reusable = false}, SHIFT(120),
  [89] = {.count = 1, .reusable = true}, SHIFT(317),
  [91] = {.count = 1, .reusable = true}, SHIFT(320),
  [93] = {.count = 1, .reusable = true}, SHIFT(7),
  [95] = {.count = 1, .reusable = false}, SHIFT(19),
  [97] = {.count = 1, .reusable = true}, SHIFT(76),
  [99] = {.count = 1, .reusable = true}, SHIFT(8),
  [101] = {.count = 1, .reusable = true}, SHIFT(31),
  [103] = {.count = 1, .reusable = false}, SHIFT(174),
  [105] = {.count = 1, .reusable = true}, SHIFT(315),
  [107] = {.count = 1, .reusable = true}, SHIFT(302),
  [109] = {.count = 1, .reusable = false}, SHIFT(18),
  [111] = {.count = 1, .reusable = true}, SHIFT(79),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [121] = {.count = 1, .reusable = false}, SHIFT(59),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [135] = {.count = 1, .reusable = false}, SHIFT(32),
  [137] = {.count = 1, .reusable = true}, SHIFT(46),
  [139] = {.count = 1, .reusable = true}, SHIFT(9),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(30),
  [151] = {.count = 1, .reusable = true}, SHIFT(26),
  [153] = {.count = 1, .reusable = true}, SHIFT(25),
  [155] = {.count = 1, .reusable = true}, SHIFT(24),
  [157] = {.count = 1, .reusable = false}, SHIFT(23),
  [159] = {.count = 1, .reusable = true}, SHIFT(23),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_if_then_expression, 6),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_expression, 6),
  [173] = {.count = 1, .reusable = true}, SHIFT(29),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 6),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 6),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 5),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 5),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_indexing_expression, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_indexing_expression, 4),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 4),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 4),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_member_access_expression, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_member_access_expression, 3),
  [219] = {.count = 1, .reusable = false}, SHIFT(60),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [229] = {.count = 1, .reusable = true}, SHIFT(35),
  [231] = {.count = 1, .reusable = true}, SHIFT(73),
  [233] = {.count = 1, .reusable = true}, SHIFT(5),
  [235] = {.count = 1, .reusable = true}, SHIFT(36),
  [237] = {.count = 1, .reusable = true}, SHIFT(38),
  [239] = {.count = 1, .reusable = true}, SHIFT(41),
  [241] = {.count = 1, .reusable = true}, SHIFT(43),
  [243] = {.count = 1, .reusable = false}, SHIFT(57),
  [245] = {.count = 1, .reusable = true}, SHIFT(57),
  [247] = {.count = 1, .reusable = true}, SHIFT(37),
  [249] = {.count = 1, .reusable = true}, SHIFT(290),
  [251] = {.count = 1, .reusable = true}, SHIFT(273),
  [253] = {.count = 1, .reusable = true}, SHIFT(380),
  [255] = {.count = 1, .reusable = true}, SHIFT(252),
  [257] = {.count = 1, .reusable = true}, SHIFT(374),
  [259] = {.count = 1, .reusable = true}, SHIFT(406),
  [261] = {.count = 1, .reusable = true}, SHIFT(391),
  [263] = {.count = 1, .reusable = true}, SHIFT(386),
  [265] = {.count = 1, .reusable = true}, SHIFT(341),
  [267] = {.count = 1, .reusable = true}, SHIFT(379),
  [269] = {.count = 1, .reusable = true}, SHIFT(378),
  [271] = {.count = 1, .reusable = true}, SHIFT(312),
  [273] = {.count = 1, .reusable = true}, SHIFT(244),
  [275] = {.count = 1, .reusable = true}, SHIFT(238),
  [277] = {.count = 1, .reusable = true}, SHIFT(250),
  [279] = {.count = 1, .reusable = true}, SHIFT(246),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(290),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(273),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(380),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(374),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(406),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(391),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(386),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(341),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(379),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(378),
  [313] = {.count = 1, .reusable = true}, SHIFT(247),
  [315] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [317] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(403),
  [320] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [322] = {.count = 1, .reusable = true}, SHIFT(300),
  [324] = {.count = 1, .reusable = true}, SHIFT(405),
  [326] = {.count = 1, .reusable = true}, SHIFT(388),
  [328] = {.count = 1, .reusable = true}, SHIFT(367),
  [330] = {.count = 1, .reusable = true}, SHIFT(365),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [336] = {.count = 1, .reusable = false}, SHIFT(72),
  [338] = {.count = 1, .reusable = true}, SHIFT(15),
  [340] = {.count = 1, .reusable = true}, SHIFT(48),
  [342] = {.count = 1, .reusable = true}, SHIFT(11),
  [344] = {.count = 1, .reusable = true}, SHIFT(53),
  [346] = {.count = 1, .reusable = true}, SHIFT(54),
  [348] = {.count = 1, .reusable = false}, SHIFT(55),
  [350] = {.count = 1, .reusable = true}, SHIFT(55),
  [352] = {.count = 1, .reusable = true}, SHIFT(52),
  [354] = {.count = 1, .reusable = true}, SHIFT(50),
  [356] = {.count = 1, .reusable = true}, SHIFT(51),
  [358] = {.count = 1, .reusable = false}, SHIFT(44),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(290),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(273),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(374),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(406),
  [372] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [374] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(135),
  [377] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [379] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [381] = {.count = 1, .reusable = true}, SHIFT(117),
  [383] = {.count = 1, .reusable = true}, SHIFT(62),
  [385] = {.count = 1, .reusable = true}, SHIFT(45),
  [387] = {.count = 1, .reusable = true}, SHIFT(109),
  [389] = {.count = 1, .reusable = true}, SHIFT(40),
  [391] = {.count = 1, .reusable = true}, SHIFT(75),
  [393] = {.count = 1, .reusable = true}, SHIFT(74),
  [395] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(352),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [404] = {.count = 1, .reusable = true}, SHIFT(110),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [408] = {.count = 1, .reusable = true}, SHIFT(352),
  [410] = {.count = 1, .reusable = true}, SHIFT(65),
  [412] = {.count = 1, .reusable = true}, SHIFT(78),
  [414] = {.count = 1, .reusable = true}, SHIFT(77),
  [416] = {.count = 1, .reusable = false}, SHIFT(71),
  [418] = {.count = 1, .reusable = true}, SHIFT(71),
  [420] = {.count = 1, .reusable = true}, SHIFT(159),
  [422] = {.count = 1, .reusable = true}, SHIFT(83),
  [424] = {.count = 1, .reusable = true}, SHIFT(82),
  [426] = {.count = 1, .reusable = true}, SHIFT(150),
  [428] = {.count = 1, .reusable = true}, SHIFT(96),
  [430] = {.count = 1, .reusable = true}, SHIFT(157),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 4),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [446] = {.count = 1, .reusable = true}, SHIFT(324),
  [448] = {.count = 1, .reusable = true}, SHIFT(351),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [460] = {.count = 1, .reusable = true}, SHIFT(64),
  [462] = {.count = 1, .reusable = true}, SHIFT(70),
  [464] = {.count = 1, .reusable = true}, SHIFT(116),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [468] = {.count = 1, .reusable = true}, SHIFT(27),
  [470] = {.count = 1, .reusable = true}, SHIFT(33),
  [472] = {.count = 1, .reusable = true}, SHIFT(42),
  [474] = {.count = 1, .reusable = true}, SHIFT(310),
  [476] = {.count = 1, .reusable = true}, SHIFT(39),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [480] = {.count = 1, .reusable = true}, SHIFT(14),
  [482] = {.count = 1, .reusable = true}, SHIFT(97),
  [484] = {.count = 1, .reusable = true}, SHIFT(56),
  [486] = {.count = 1, .reusable = true}, SHIFT(68),
  [488] = {.count = 1, .reusable = true}, SHIFT(398),
  [490] = {.count = 1, .reusable = true}, SHIFT(66),
  [492] = {.count = 1, .reusable = true}, SHIFT(160),
  [494] = {.count = 1, .reusable = true}, SHIFT(108),
  [496] = {.count = 1, .reusable = true}, SHIFT(399),
  [498] = {.count = 1, .reusable = true}, SHIFT(61),
  [500] = {.count = 1, .reusable = true}, SHIFT(318),
  [502] = {.count = 1, .reusable = true}, SHIFT(125),
  [504] = {.count = 1, .reusable = true}, SHIFT(158),
  [506] = {.count = 1, .reusable = true}, SHIFT(49),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [510] = {.count = 1, .reusable = true}, SHIFT(274),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(290),
  [515] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(273),
  [518] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(374),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(406),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [534] = {.count = 1, .reusable = true}, SHIFT(269),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [552] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(405),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(388),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(367),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(386),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(365),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(377),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [575] = {.count = 1, .reusable = true}, SHIFT(395),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [579] = {.count = 1, .reusable = true}, SHIFT(350),
  [581] = {.count = 1, .reusable = true}, SHIFT(339),
  [583] = {.count = 1, .reusable = true}, SHIFT(355),
  [585] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(350),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(339),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(355),
  [596] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(303),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(370),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [608] = {.count = 1, .reusable = true}, SHIFT(271),
  [610] = {.count = 1, .reusable = true}, SHIFT(303),
  [612] = {.count = 1, .reusable = true}, SHIFT(370),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [622] = {.count = 1, .reusable = true}, SHIFT(135),
  [624] = {.count = 1, .reusable = true}, SHIFT(265),
  [626] = {.count = 1, .reusable = true}, SHIFT(28),
  [628] = {.count = 1, .reusable = true}, SHIFT(358),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(135),
  [633] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(135),
  [638] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(28),
  [643] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [645] = {.count = 1, .reusable = true}, SHIFT(209),
  [647] = {.count = 1, .reusable = true}, SHIFT(266),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(360),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [654] = {.count = 1, .reusable = true}, SHIFT(360),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [658] = {.count = 1, .reusable = true}, SHIFT(364),
  [660] = {.count = 1, .reusable = true}, SHIFT(363),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [664] = {.count = 1, .reusable = true}, SHIFT(211),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [668] = {.count = 1, .reusable = true}, SHIFT(356),
  [670] = {.count = 1, .reusable = false}, SHIFT(100),
  [672] = {.count = 1, .reusable = false}, SHIFT(305),
  [674] = {.count = 1, .reusable = true}, SHIFT(305),
  [676] = {.count = 1, .reusable = false}, SHIFT(178),
  [678] = {.count = 1, .reusable = false}, SHIFT(146),
  [680] = {.count = 1, .reusable = true}, SHIFT(322),
  [682] = {.count = 1, .reusable = true}, SHIFT(306),
  [684] = {.count = 1, .reusable = false}, SHIFT(321),
  [686] = {.count = 1, .reusable = true}, SHIFT(321),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [690] = {.count = 1, .reusable = false}, SHIFT(119),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(62),
  [697] = {.count = 1, .reusable = false}, SHIFT(189),
  [699] = {.count = 1, .reusable = false}, SHIFT(294),
  [701] = {.count = 1, .reusable = true}, SHIFT(294),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_command_part, 1),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [707] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [709] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(305),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(305),
  [715] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(306),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 5),
  [722] = {.count = 1, .reusable = false}, SHIFT(88),
  [724] = {.count = 1, .reusable = false}, SHIFT(293),
  [726] = {.count = 1, .reusable = true}, SHIFT(293),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [730] = {.count = 1, .reusable = true}, SHIFT(296),
  [732] = {.count = 1, .reusable = true}, SHIFT(342),
  [734] = {.count = 1, .reusable = true}, SHIFT(362),
  [736] = {.count = 1, .reusable = true}, SHIFT(309),
  [738] = {.count = 1, .reusable = false}, SHIFT(128),
  [740] = {.count = 1, .reusable = true}, SHIFT(308),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 4),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [746] = {.count = 1, .reusable = false}, SHIFT(299),
  [748] = {.count = 1, .reusable = true}, SHIFT(299),
  [750] = {.count = 1, .reusable = false}, SHIFT(145),
  [752] = {.count = 1, .reusable = true}, SHIFT(152),
  [754] = {.count = 1, .reusable = true}, SHIFT(243),
  [756] = {.count = 1, .reusable = true}, SHIFT(382),
  [758] = {.count = 1, .reusable = true}, SHIFT(326),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(326),
  [765] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(45),
  [770] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [772] = {.count = 1, .reusable = true}, SHIFT(123),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [776] = {.count = 1, .reusable = true}, SHIFT(129),
  [778] = {.count = 1, .reusable = true}, SHIFT(95),
  [780] = {.count = 1, .reusable = true}, SHIFT(124),
  [782] = {.count = 1, .reusable = true}, SHIFT(161),
  [784] = {.count = 1, .reusable = true}, SHIFT(383),
  [786] = {.count = 1, .reusable = true}, SHIFT(153),
  [788] = {.count = 1, .reusable = true}, SHIFT(98),
  [790] = {.count = 1, .reusable = true}, SHIFT(94),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [794] = {.count = 1, .reusable = true}, SHIFT(174),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [800] = {.count = 1, .reusable = true}, SHIFT(137),
  [802] = {.count = 1, .reusable = true}, SHIFT(81),
  [804] = {.count = 1, .reusable = true}, SHIFT(291),
  [806] = {.count = 1, .reusable = true}, SHIFT(292),
  [808] = {.count = 1, .reusable = true}, SHIFT(329),
  [810] = {.count = 1, .reusable = true}, SHIFT(257),
  [812] = {.count = 1, .reusable = true}, SHIFT(69),
  [814] = {.count = 1, .reusable = true}, SHIFT(237),
  [816] = {.count = 1, .reusable = true}, SHIFT(2),
  [818] = {.count = 1, .reusable = true}, SHIFT(328),
  [820] = {.count = 1, .reusable = true}, SHIFT(267),
  [822] = {.count = 1, .reusable = true}, SHIFT(331),
  [824] = {.count = 1, .reusable = true}, SHIFT(261),
  [826] = {.count = 1, .reusable = true}, SHIFT(304),
  [828] = {.count = 1, .reusable = true}, SHIFT(287),
  [830] = {.count = 1, .reusable = true}, SHIFT(286),
  [832] = {.count = 1, .reusable = true}, SHIFT(21),
  [834] = {.count = 1, .reusable = true}, SHIFT(22),
  [836] = {.count = 1, .reusable = true}, SHIFT(375),
  [838] = {.count = 1, .reusable = true}, SHIFT(307),
  [840] = {.count = 1, .reusable = true}, SHIFT(298),
  [842] = {.count = 1, .reusable = true}, SHIFT(280),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [846] = {.count = 1, .reusable = true}, SHIFT(245),
  [848] = {.count = 1, .reusable = true}, SHIFT(242),
  [850] = {.count = 1, .reusable = true}, SHIFT(184),
  [852] = {.count = 1, .reusable = true}, SHIFT(20),
  [854] = {.count = 1, .reusable = true}, SHIFT(63),
  [856] = {.count = 1, .reusable = true}, SHIFT(256),
  [858] = {.count = 1, .reusable = true}, SHIFT(283),
  [860] = {.count = 1, .reusable = true}, SHIFT(144),
  [862] = {.count = 1, .reusable = true}, SHIFT(148),
  [864] = {.count = 1, .reusable = true}, SHIFT(134),
  [866] = {.count = 1, .reusable = true}, SHIFT(138),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [870] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [874] = {.count = 1, .reusable = true}, SHIFT(13),
  [876] = {.count = 1, .reusable = true}, SHIFT(281),
  [878] = {.count = 1, .reusable = true}, SHIFT(272),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wdl(void) {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
