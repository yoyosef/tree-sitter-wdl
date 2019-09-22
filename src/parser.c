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
#define STATE_COUNT 412
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
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
  sym_comment = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_literal_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_string_literal_token2 = 16,
  sym_escape_sequence = 17,
  anon_sym_DOT = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_if = 21,
  anon_sym_then = 22,
  anon_sym_else = 23,
  anon_sym_LPAREN = 24,
  anon_sym_COMMA = 25,
  anon_sym_RPAREN = 26,
  anon_sym_LBRACE = 27,
  anon_sym_COLON = 28,
  anon_sym_RBRACE = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym_PERCENT = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_BANG = 43,
  anon_sym_Array = 44,
  anon_sym_Map = 45,
  anon_sym_QMARK = 46,
  anon_sym_runtime = 47,
  anon_sym_output = 48,
  anon_sym_EQ = 49,
  anon_sym_parameter_meta = 50,
  anon_sym_meta = 51,
  anon_sym_task = 52,
  anon_sym_command = 53,
  anon_sym_LT_LT_LT = 54,
  anon_sym_GT_GT_GT = 55,
  sym_command_part_string = 56,
  anon_sym_DOLLAR = 57,
  anon_sym_sep = 58,
  anon_sym_quote = 59,
  anon_sym_default = 60,
  anon_sym_call = 61,
  anon_sym_as = 62,
  anon_sym_input = 63,
  anon_sym_while = 64,
  anon_sym_import = 65,
  anon_sym_workflow = 66,
  anon_sym_scatter = 67,
  anon_sym_in = 68,
  sym_definition = 69,
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
  [sym_identifier] = "identifier",
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
  [sym_comment] = "comment",
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(333);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(152);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') SKIP(1)
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'q') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(337);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '<') ADVANCE(337);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(152);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '>') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == '}') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(305);
      if (lookahead == 'U') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == '<') ADVANCE(337);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(165);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(338);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(338);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 26:
      if (lookahead == '&') ADVANCE(323);
      END_STATE();
    case 27:
      if (lookahead == '<') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '<') ADVANCE(358);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(359);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'm') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'j') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'k') ADVANCE(354);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 171:
      if (lookahead == 'w') ADVANCE(383);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 173:
      if (lookahead == '|') ADVANCE(324);
      END_STATE();
    case 174:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_object_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '>') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == '}') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '>') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 24},
  [203] = {.lex_state = 24},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 24},
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
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 25},
  [261] = {.lex_state = 25},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 15},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 15},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 15},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 18},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 15},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 15},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 18},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 15},
  [319] = {.lex_state = 15},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 12},
  [327] = {.lex_state = 12},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 12},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 21},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 4},
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
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 4},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_definition] = STATE(393),
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(225),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(351),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_runtime] = STATE(390),
    [sym_task] = STATE(264),
    [sym_declaration] = STATE(165),
    [sym_call] = STATE(390),
    [sym_document] = STATE(390),
    [sym_import] = STATE(264),
    [sym_workflow] = STATE(264),
    [aux_sym_document_repeat1] = STATE(264),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(226),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_var_option] = STATE(135),
    [sym_var_option_key] = STATE(396),
    [aux_sym_command_part_var_repeat1] = STATE(135),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(215),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_var_option] = STATE(2),
    [sym_var_option_key] = STATE(396),
    [aux_sym_command_part_var_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(235),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_var_option] = STATE(5),
    [sym_var_option_key] = STATE(396),
    [aux_sym_command_part_var_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [5] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(229),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_var_option] = STATE(135),
    [sym_var_option_key] = STATE(396),
    [aux_sym_command_part_var_repeat1] = STATE(135),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [6] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(218),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [7] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(189),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(47),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(219),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [9] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(177),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [10] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(233),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [11] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(190),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [12] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(182),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [13] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(181),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [14] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(85),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_var_option_value] = STATE(149),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [15] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(185),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [16] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(193),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [17] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(167),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [18] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(234),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [19] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(232),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [20] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(230),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [21] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(228),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(168),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(188),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [24] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(222),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [25] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(224),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [26] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(238),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [27] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(194),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [28] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(214),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [29] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(113),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [30] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(236),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [31] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(201),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [32] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(220),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [33] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(206),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(127),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [35] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(124),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [36] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(112),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [37] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(192),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [38] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(119),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [39] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(120),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [40] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(121),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [41] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(129),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [42] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(132),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [43] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(217),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [44] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(216),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [45] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(97),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [46] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(155),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(237),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(210),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [49] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(213),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [50] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(169),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(174),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(166),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(172),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(171),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(91),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [56] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(84),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [57] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(109),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [58] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(108),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [59] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(196),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [60] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(221),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [61] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(197),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [62] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(199),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [63] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(231),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [64] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(173),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [65] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(195),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [66] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(178),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [67] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(180),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [68] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(184),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [69] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(187),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [70] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(227),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [71] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(107),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [72] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(155),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [73] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(106),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [74] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(191),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [75] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(207),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(401),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [76] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(150),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [77] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(104),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [78] = {
    [sym_boolean] = STATE(118),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(118),
    [sym_expression] = STATE(123),
    [sym_member_access_expression] = STATE(118),
    [sym_indexing_expression] = STATE(118),
    [sym_if_then_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_parentheses_expression] = STATE(118),
    [sym_dictionary_expression] = STATE(118),
    [sym_bracket_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(118),
    [sym_identifier] = ACTIONS(89),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [79] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(100),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [80] = {
    [sym_boolean] = STATE(87),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(87),
    [sym_expression] = STATE(96),
    [sym_member_access_expression] = STATE(87),
    [sym_indexing_expression] = STATE(87),
    [sym_if_then_expression] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_parentheses_expression] = STATE(87),
    [sym_dictionary_expression] = STATE(87),
    [sym_bracket_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_type] = STATE(374),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(87),
    [sym_identifier] = ACTIONS(61),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [sym_object_type] = ACTIONS(9),
    [anon_sym_Boolean] = ACTIONS(11),
    [anon_sym_Int] = ACTIONS(11),
    [anon_sym_Float] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_Array] = ACTIONS(27),
    [anon_sym_Map] = ACTIONS(29),
  },
  [81] = {
    [sym_boolean] = STATE(165),
    [sym_primitive_type] = STATE(281),
    [sym_string_literal] = STATE(165),
    [sym_expression] = STATE(170),
    [sym_member_access_expression] = STATE(165),
    [sym_indexing_expression] = STATE(165),
    [sym_if_then_expression] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(165),
    [sym_dictionary_expression] = STATE(165),
    [sym_bracket_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_unary_expression] = STATE(165),
    [sym_type] = STATE(373),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(165),
    [sym_identifier] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(3),
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
  [82] = {
    [sym_identifier] = ACTIONS(107),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_object_type] = ACTIONS(107),
    [anon_sym_Boolean] = ACTIONS(107),
    [anon_sym_Int] = ACTIONS(107),
    [anon_sym_Float] = ACTIONS(107),
    [anon_sym_File] = ACTIONS(107),
    [anon_sym_String] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_Array] = ACTIONS(107),
    [anon_sym_Map] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_sep] = ACTIONS(107),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_default] = ACTIONS(107),
  },
  [83] = {
    [sym_identifier] = ACTIONS(113),
    [sym_integer] = ACTIONS(113),
    [sym_float] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_object_type] = ACTIONS(113),
    [anon_sym_Boolean] = ACTIONS(113),
    [anon_sym_Int] = ACTIONS(113),
    [anon_sym_Float] = ACTIONS(113),
    [anon_sym_File] = ACTIONS(113),
    [anon_sym_String] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_Array] = ACTIONS(113),
    [anon_sym_Map] = ACTIONS(113),
    [anon_sym_sep] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_default] = ACTIONS(113),
  },
  [84] = {
    [sym_identifier] = ACTIONS(117),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [85] = {
    [sym_identifier] = ACTIONS(137),
    [sym_integer] = ACTIONS(137),
    [sym_float] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [sym_object_type] = ACTIONS(137),
    [anon_sym_Boolean] = ACTIONS(137),
    [anon_sym_Int] = ACTIONS(137),
    [anon_sym_Float] = ACTIONS(137),
    [anon_sym_File] = ACTIONS(137),
    [anon_sym_String] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_Map] = ACTIONS(137),
    [anon_sym_sep] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
  },
  [86] = {
    [sym_object_type] = ACTIONS(109),
    [anon_sym_Boolean] = ACTIONS(109),
    [anon_sym_Int] = ACTIONS(109),
    [anon_sym_Float] = ACTIONS(109),
    [anon_sym_File] = ACTIONS(109),
    [anon_sym_String] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_then] = ACTIONS(109),
    [anon_sym_else] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_Array] = ACTIONS(109),
    [anon_sym_Map] = ACTIONS(109),
    [anon_sym_runtime] = ACTIONS(109),
    [anon_sym_output] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_parameter_meta] = ACTIONS(109),
    [anon_sym_meta] = ACTIONS(109),
    [anon_sym_command] = ACTIONS(109),
    [anon_sym_call] = ACTIONS(109),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_scatter] = ACTIONS(109),
  },
  [87] = {
    [sym_identifier] = ACTIONS(147),
    [sym_integer] = ACTIONS(147),
    [sym_float] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Map] = ACTIONS(147),
    [anon_sym_sep] = ACTIONS(147),
    [anon_sym_quote] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
  },
  [88] = {
    [sym_identifier] = ACTIONS(151),
    [sym_integer] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [sym_object_type] = ACTIONS(151),
    [anon_sym_Boolean] = ACTIONS(151),
    [anon_sym_Int] = ACTIONS(151),
    [anon_sym_Float] = ACTIONS(151),
    [anon_sym_File] = ACTIONS(151),
    [anon_sym_String] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_Array] = ACTIONS(151),
    [anon_sym_Map] = ACTIONS(151),
    [anon_sym_sep] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
  },
  [89] = {
    [sym_identifier] = ACTIONS(155),
    [sym_integer] = ACTIONS(155),
    [sym_float] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [sym_object_type] = ACTIONS(155),
    [anon_sym_Boolean] = ACTIONS(155),
    [anon_sym_Int] = ACTIONS(155),
    [anon_sym_Float] = ACTIONS(155),
    [anon_sym_File] = ACTIONS(155),
    [anon_sym_String] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_Array] = ACTIONS(155),
    [anon_sym_Map] = ACTIONS(155),
    [anon_sym_sep] = ACTIONS(155),
    [anon_sym_quote] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
  },
  [90] = {
    [sym_identifier] = ACTIONS(159),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [sym_object_type] = ACTIONS(159),
    [anon_sym_Boolean] = ACTIONS(159),
    [anon_sym_Int] = ACTIONS(159),
    [anon_sym_Float] = ACTIONS(159),
    [anon_sym_File] = ACTIONS(159),
    [anon_sym_String] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(159),
    [anon_sym_Array] = ACTIONS(159),
    [anon_sym_Map] = ACTIONS(159),
    [anon_sym_sep] = ACTIONS(159),
    [anon_sym_quote] = ACTIONS(159),
    [anon_sym_default] = ACTIONS(159),
  },
  [91] = {
    [sym_identifier] = ACTIONS(163),
    [sym_integer] = ACTIONS(163),
    [sym_float] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [sym_object_type] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_String] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_Array] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(163),
    [anon_sym_sep] = ACTIONS(163),
    [anon_sym_quote] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
  },
  [92] = {
    [sym_identifier] = ACTIONS(167),
    [sym_integer] = ACTIONS(167),
    [sym_float] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [sym_object_type] = ACTIONS(167),
    [anon_sym_Boolean] = ACTIONS(167),
    [anon_sym_Int] = ACTIONS(167),
    [anon_sym_Float] = ACTIONS(167),
    [anon_sym_File] = ACTIONS(167),
    [anon_sym_String] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_Array] = ACTIONS(167),
    [anon_sym_Map] = ACTIONS(167),
    [anon_sym_sep] = ACTIONS(167),
    [anon_sym_quote] = ACTIONS(167),
    [anon_sym_default] = ACTIONS(167),
  },
  [93] = {
    [sym_identifier] = ACTIONS(171),
    [sym_integer] = ACTIONS(171),
    [sym_float] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [sym_object_type] = ACTIONS(171),
    [anon_sym_Boolean] = ACTIONS(171),
    [anon_sym_Int] = ACTIONS(171),
    [anon_sym_Float] = ACTIONS(171),
    [anon_sym_File] = ACTIONS(171),
    [anon_sym_String] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [anon_sym_Array] = ACTIONS(171),
    [anon_sym_Map] = ACTIONS(171),
    [anon_sym_sep] = ACTIONS(171),
    [anon_sym_quote] = ACTIONS(171),
    [anon_sym_default] = ACTIONS(171),
  },
  [94] = {
    [sym_identifier] = ACTIONS(175),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_Array] = ACTIONS(175),
    [anon_sym_Map] = ACTIONS(175),
    [anon_sym_sep] = ACTIONS(175),
    [anon_sym_quote] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
  },
  [95] = {
    [sym_identifier] = ACTIONS(179),
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
    [sym_comment] = ACTIONS(3),
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
  [96] = {
    [sym_identifier] = ACTIONS(183),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_Array] = ACTIONS(183),
    [anon_sym_Map] = ACTIONS(183),
    [anon_sym_sep] = ACTIONS(183),
    [anon_sym_quote] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(183),
  },
  [97] = {
    [sym_identifier] = ACTIONS(187),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(125),
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
  [98] = {
    [sym_identifier] = ACTIONS(191),
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
    [sym_comment] = ACTIONS(3),
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
  [99] = {
    [sym_identifier] = ACTIONS(195),
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
    [sym_comment] = ACTIONS(3),
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
  [100] = {
    [sym_identifier] = ACTIONS(199),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(199),
    [anon_sym_Array] = ACTIONS(199),
    [anon_sym_Map] = ACTIONS(199),
    [anon_sym_sep] = ACTIONS(199),
    [anon_sym_quote] = ACTIONS(199),
    [anon_sym_default] = ACTIONS(199),
  },
  [101] = {
    [sym_identifier] = ACTIONS(203),
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
    [sym_comment] = ACTIONS(3),
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
  [102] = {
    [sym_identifier] = ACTIONS(207),
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
    [sym_comment] = ACTIONS(3),
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
  [103] = {
    [sym_identifier] = ACTIONS(211),
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
    [sym_comment] = ACTIONS(3),
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
  [104] = {
    [sym_identifier] = ACTIONS(117),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [105] = {
    [sym_identifier] = ACTIONS(215),
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
    [sym_comment] = ACTIONS(3),
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
  [106] = {
    [sym_identifier] = ACTIONS(117),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(125),
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
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [107] = {
    [sym_identifier] = ACTIONS(117),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [108] = {
    [sym_identifier] = ACTIONS(117),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [109] = {
    [sym_identifier] = ACTIONS(117),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_sep] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
  },
  [110] = {
    [sym_object_type] = ACTIONS(169),
    [anon_sym_Boolean] = ACTIONS(169),
    [anon_sym_Int] = ACTIONS(169),
    [anon_sym_Float] = ACTIONS(169),
    [anon_sym_File] = ACTIONS(169),
    [anon_sym_String] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_then] = ACTIONS(169),
    [anon_sym_else] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_Array] = ACTIONS(169),
    [anon_sym_Map] = ACTIONS(169),
    [anon_sym_runtime] = ACTIONS(169),
    [anon_sym_output] = ACTIONS(169),
    [anon_sym_parameter_meta] = ACTIONS(169),
    [anon_sym_meta] = ACTIONS(169),
    [anon_sym_command] = ACTIONS(169),
    [anon_sym_call] = ACTIONS(169),
    [anon_sym_while] = ACTIONS(169),
    [anon_sym_scatter] = ACTIONS(169),
  },
  [111] = {
    [sym_object_type] = ACTIONS(205),
    [anon_sym_Boolean] = ACTIONS(205),
    [anon_sym_Int] = ACTIONS(205),
    [anon_sym_Float] = ACTIONS(205),
    [anon_sym_File] = ACTIONS(205),
    [anon_sym_String] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
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
  [112] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(119),
    [anon_sym_Map] = ACTIONS(119),
    [anon_sym_runtime] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [113] = {
    [sym_object_type] = ACTIONS(189),
    [anon_sym_Boolean] = ACTIONS(189),
    [anon_sym_Int] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(189),
    [anon_sym_File] = ACTIONS(189),
    [anon_sym_String] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_then] = ACTIONS(189),
    [anon_sym_else] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(223),
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
  [114] = {
    [sym_object_type] = ACTIONS(213),
    [anon_sym_Boolean] = ACTIONS(213),
    [anon_sym_Int] = ACTIONS(213),
    [anon_sym_Float] = ACTIONS(213),
    [anon_sym_File] = ACTIONS(213),
    [anon_sym_String] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
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
  [115] = {
    [sym_object_type] = ACTIONS(217),
    [anon_sym_Boolean] = ACTIONS(217),
    [anon_sym_Int] = ACTIONS(217),
    [anon_sym_Float] = ACTIONS(217),
    [anon_sym_File] = ACTIONS(217),
    [anon_sym_String] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
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
  [116] = {
    [sym_object_type] = ACTIONS(157),
    [anon_sym_Boolean] = ACTIONS(157),
    [anon_sym_Int] = ACTIONS(157),
    [anon_sym_Float] = ACTIONS(157),
    [anon_sym_File] = ACTIONS(157),
    [anon_sym_String] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_then] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_Array] = ACTIONS(157),
    [anon_sym_Map] = ACTIONS(157),
    [anon_sym_runtime] = ACTIONS(157),
    [anon_sym_output] = ACTIONS(157),
    [anon_sym_parameter_meta] = ACTIONS(157),
    [anon_sym_meta] = ACTIONS(157),
    [anon_sym_command] = ACTIONS(157),
    [anon_sym_call] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_scatter] = ACTIONS(157),
  },
  [117] = {
    [sym_object_type] = ACTIONS(153),
    [anon_sym_Boolean] = ACTIONS(153),
    [anon_sym_Int] = ACTIONS(153),
    [anon_sym_Float] = ACTIONS(153),
    [anon_sym_File] = ACTIONS(153),
    [anon_sym_String] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(153),
    [anon_sym_else] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_Array] = ACTIONS(153),
    [anon_sym_Map] = ACTIONS(153),
    [anon_sym_runtime] = ACTIONS(153),
    [anon_sym_output] = ACTIONS(153),
    [anon_sym_parameter_meta] = ACTIONS(153),
    [anon_sym_meta] = ACTIONS(153),
    [anon_sym_command] = ACTIONS(153),
    [anon_sym_call] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(153),
    [anon_sym_scatter] = ACTIONS(153),
  },
  [118] = {
    [sym_object_type] = ACTIONS(149),
    [anon_sym_Boolean] = ACTIONS(149),
    [anon_sym_Int] = ACTIONS(149),
    [anon_sym_Float] = ACTIONS(149),
    [anon_sym_File] = ACTIONS(149),
    [anon_sym_String] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_then] = ACTIONS(149),
    [anon_sym_else] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_Array] = ACTIONS(149),
    [anon_sym_Map] = ACTIONS(149),
    [anon_sym_runtime] = ACTIONS(149),
    [anon_sym_output] = ACTIONS(149),
    [anon_sym_parameter_meta] = ACTIONS(149),
    [anon_sym_meta] = ACTIONS(149),
    [anon_sym_command] = ACTIONS(149),
    [anon_sym_call] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(149),
    [anon_sym_scatter] = ACTIONS(149),
  },
  [119] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_Array] = ACTIONS(119),
    [anon_sym_Map] = ACTIONS(119),
    [anon_sym_runtime] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [120] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_Array] = ACTIONS(119),
    [anon_sym_Map] = ACTIONS(119),
    [anon_sym_runtime] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [121] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_Array] = ACTIONS(119),
    [anon_sym_Map] = ACTIONS(119),
    [anon_sym_runtime] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [122] = {
    [sym_object_type] = ACTIONS(161),
    [anon_sym_Boolean] = ACTIONS(161),
    [anon_sym_Int] = ACTIONS(161),
    [anon_sym_Float] = ACTIONS(161),
    [anon_sym_File] = ACTIONS(161),
    [anon_sym_String] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_then] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_Array] = ACTIONS(161),
    [anon_sym_Map] = ACTIONS(161),
    [anon_sym_runtime] = ACTIONS(161),
    [anon_sym_output] = ACTIONS(161),
    [anon_sym_parameter_meta] = ACTIONS(161),
    [anon_sym_meta] = ACTIONS(161),
    [anon_sym_command] = ACTIONS(161),
    [anon_sym_call] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(161),
    [anon_sym_scatter] = ACTIONS(161),
  },
  [123] = {
    [sym_object_type] = ACTIONS(165),
    [anon_sym_Boolean] = ACTIONS(165),
    [anon_sym_Int] = ACTIONS(165),
    [anon_sym_Float] = ACTIONS(165),
    [anon_sym_File] = ACTIONS(165),
    [anon_sym_String] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_then] = ACTIONS(165),
    [anon_sym_else] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_Array] = ACTIONS(165),
    [anon_sym_Map] = ACTIONS(165),
    [anon_sym_runtime] = ACTIONS(165),
    [anon_sym_output] = ACTIONS(165),
    [anon_sym_parameter_meta] = ACTIONS(165),
    [anon_sym_meta] = ACTIONS(165),
    [anon_sym_command] = ACTIONS(165),
    [anon_sym_call] = ACTIONS(165),
    [anon_sym_while] = ACTIONS(165),
    [anon_sym_scatter] = ACTIONS(165),
  },
  [124] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(223),
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
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [125] = {
    [sym_object_type] = ACTIONS(173),
    [anon_sym_Boolean] = ACTIONS(173),
    [anon_sym_Int] = ACTIONS(173),
    [anon_sym_Float] = ACTIONS(173),
    [anon_sym_File] = ACTIONS(173),
    [anon_sym_String] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_then] = ACTIONS(173),
    [anon_sym_else] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_Array] = ACTIONS(173),
    [anon_sym_Map] = ACTIONS(173),
    [anon_sym_runtime] = ACTIONS(173),
    [anon_sym_output] = ACTIONS(173),
    [anon_sym_parameter_meta] = ACTIONS(173),
    [anon_sym_meta] = ACTIONS(173),
    [anon_sym_command] = ACTIONS(173),
    [anon_sym_call] = ACTIONS(173),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_scatter] = ACTIONS(173),
  },
  [126] = {
    [sym_object_type] = ACTIONS(177),
    [anon_sym_Boolean] = ACTIONS(177),
    [anon_sym_Int] = ACTIONS(177),
    [anon_sym_Float] = ACTIONS(177),
    [anon_sym_File] = ACTIONS(177),
    [anon_sym_String] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_then] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_Array] = ACTIONS(177),
    [anon_sym_Map] = ACTIONS(177),
    [anon_sym_runtime] = ACTIONS(177),
    [anon_sym_output] = ACTIONS(177),
    [anon_sym_parameter_meta] = ACTIONS(177),
    [anon_sym_meta] = ACTIONS(177),
    [anon_sym_command] = ACTIONS(177),
    [anon_sym_call] = ACTIONS(177),
    [anon_sym_while] = ACTIONS(177),
    [anon_sym_scatter] = ACTIONS(177),
  },
  [127] = {
    [sym_object_type] = ACTIONS(119),
    [anon_sym_Boolean] = ACTIONS(119),
    [anon_sym_Int] = ACTIONS(119),
    [anon_sym_Float] = ACTIONS(119),
    [anon_sym_File] = ACTIONS(119),
    [anon_sym_String] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_then] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(119),
    [anon_sym_Map] = ACTIONS(119),
    [anon_sym_runtime] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_parameter_meta] = ACTIONS(119),
    [anon_sym_meta] = ACTIONS(119),
    [anon_sym_command] = ACTIONS(119),
    [anon_sym_call] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_scatter] = ACTIONS(119),
  },
  [128] = {
    [sym_object_type] = ACTIONS(197),
    [anon_sym_Boolean] = ACTIONS(197),
    [anon_sym_Int] = ACTIONS(197),
    [anon_sym_Float] = ACTIONS(197),
    [anon_sym_File] = ACTIONS(197),
    [anon_sym_String] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
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
  [129] = {
    [sym_object_type] = ACTIONS(201),
    [anon_sym_Boolean] = ACTIONS(201),
    [anon_sym_Int] = ACTIONS(201),
    [anon_sym_Float] = ACTIONS(201),
    [anon_sym_File] = ACTIONS(201),
    [anon_sym_String] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(201),
    [anon_sym_then] = ACTIONS(201),
    [anon_sym_else] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
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
  [130] = {
    [sym_object_type] = ACTIONS(209),
    [anon_sym_Boolean] = ACTIONS(209),
    [anon_sym_Int] = ACTIONS(209),
    [anon_sym_Float] = ACTIONS(209),
    [anon_sym_File] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
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
  [131] = {
    [sym_object_type] = ACTIONS(181),
    [anon_sym_Boolean] = ACTIONS(181),
    [anon_sym_Int] = ACTIONS(181),
    [anon_sym_Float] = ACTIONS(181),
    [anon_sym_File] = ACTIONS(181),
    [anon_sym_String] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
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
  [132] = {
    [sym_object_type] = ACTIONS(185),
    [anon_sym_Boolean] = ACTIONS(185),
    [anon_sym_Int] = ACTIONS(185),
    [anon_sym_Float] = ACTIONS(185),
    [anon_sym_File] = ACTIONS(185),
    [anon_sym_String] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_then] = ACTIONS(185),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
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
  [133] = {
    [sym_object_type] = ACTIONS(193),
    [anon_sym_Boolean] = ACTIONS(193),
    [anon_sym_Int] = ACTIONS(193),
    [anon_sym_Float] = ACTIONS(193),
    [anon_sym_File] = ACTIONS(193),
    [anon_sym_String] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
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
  [134] = {
    [sym_object_type] = ACTIONS(115),
    [anon_sym_Boolean] = ACTIONS(115),
    [anon_sym_Int] = ACTIONS(115),
    [anon_sym_Float] = ACTIONS(115),
    [anon_sym_File] = ACTIONS(115),
    [anon_sym_String] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_then] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_runtime] = ACTIONS(115),
    [anon_sym_output] = ACTIONS(115),
    [anon_sym_parameter_meta] = ACTIONS(115),
    [anon_sym_meta] = ACTIONS(115),
    [anon_sym_command] = ACTIONS(115),
    [anon_sym_call] = ACTIONS(115),
    [anon_sym_while] = ACTIONS(115),
    [anon_sym_scatter] = ACTIONS(115),
  },
  [135] = {
    [sym_var_option] = STATE(135),
    [sym_var_option_key] = STATE(396),
    [aux_sym_command_part_var_repeat1] = STATE(135),
    [sym_identifier] = ACTIONS(239),
    [sym_integer] = ACTIONS(239),
    [sym_float] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(241),
    [sym_object_type] = ACTIONS(239),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_Array] = ACTIONS(239),
    [anon_sym_Map] = ACTIONS(239),
    [anon_sym_sep] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
  },
  [136] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [137] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(142),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(142),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [138] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(139),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(139),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [139] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(144),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(144),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [140] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(144),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(144),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [141] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(144),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(144),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [142] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(144),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(144),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [143] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(140),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(140),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_parameter_meta] = ACTIONS(258),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_call] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_scatter] = ACTIONS(266),
  },
  [144] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_parameter_meta] = STATE(245),
    [sym_meta] = STATE(245),
    [sym_declaration] = STATE(245),
    [sym_call] = STATE(245),
    [sym_loop] = STATE(245),
    [sym_conditional] = STATE(245),
    [sym_workflow_element] = STATE(144),
    [sym_scatter] = STATE(245),
    [aux_sym_loop_repeat1] = STATE(144),
    [sym_object_type] = ACTIONS(282),
    [anon_sym_Boolean] = ACTIONS(285),
    [anon_sym_Int] = ACTIONS(285),
    [anon_sym_Float] = ACTIONS(285),
    [anon_sym_File] = ACTIONS(285),
    [anon_sym_String] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_Array] = ACTIONS(293),
    [anon_sym_Map] = ACTIONS(296),
    [anon_sym_parameter_meta] = ACTIONS(299),
    [anon_sym_meta] = ACTIONS(302),
    [anon_sym_call] = ACTIONS(305),
    [anon_sym_while] = ACTIONS(308),
    [anon_sym_scatter] = ACTIONS(311),
  },
  [145] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_runtime] = STATE(257),
    [sym_task_output] = STATE(257),
    [sym_parameter_meta] = STATE(257),
    [sym_meta] = STATE(257),
    [sym_task_sections] = STATE(388),
    [sym_declaration] = STATE(179),
    [sym_command] = STATE(257),
    [aux_sym_task_repeat1] = STATE(179),
    [aux_sym_task_sections_repeat1] = STATE(257),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_runtime] = ACTIONS(314),
    [anon_sym_output] = ACTIONS(316),
    [anon_sym_parameter_meta] = ACTIONS(318),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_command] = ACTIONS(320),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_task] = ACTIONS(177),
    [anon_sym_as] = ACTIONS(177),
    [anon_sym_import] = ACTIONS(177),
    [anon_sym_workflow] = ACTIONS(177),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_task] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(157),
    [anon_sym_workflow] = ACTIONS(157),
  },
  [148] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_runtime] = STATE(257),
    [sym_task_output] = STATE(257),
    [sym_parameter_meta] = STATE(257),
    [sym_meta] = STATE(257),
    [sym_task_sections] = STATE(362),
    [sym_declaration] = STATE(145),
    [sym_command] = STATE(257),
    [aux_sym_task_repeat1] = STATE(145),
    [aux_sym_task_sections_repeat1] = STATE(257),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
    [anon_sym_runtime] = ACTIONS(314),
    [anon_sym_output] = ACTIONS(316),
    [anon_sym_parameter_meta] = ACTIONS(318),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_command] = ACTIONS(320),
  },
  [149] = {
    [sym_identifier] = ACTIONS(322),
    [sym_integer] = ACTIONS(322),
    [sym_float] = ACTIONS(322),
    [anon_sym_true] = ACTIONS(322),
    [anon_sym_false] = ACTIONS(322),
    [sym_object_type] = ACTIONS(322),
    [anon_sym_Boolean] = ACTIONS(322),
    [anon_sym_Int] = ACTIONS(322),
    [anon_sym_Float] = ACTIONS(322),
    [anon_sym_File] = ACTIONS(322),
    [anon_sym_String] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_if] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_BANG] = ACTIONS(324),
    [anon_sym_Array] = ACTIONS(322),
    [anon_sym_Map] = ACTIONS(322),
    [anon_sym_sep] = ACTIONS(322),
    [anon_sym_quote] = ACTIONS(322),
    [anon_sym_default] = ACTIONS(322),
  },
  [150] = {
    [sym_object_type] = ACTIONS(326),
    [anon_sym_Boolean] = ACTIONS(326),
    [anon_sym_Int] = ACTIONS(326),
    [anon_sym_Float] = ACTIONS(326),
    [anon_sym_File] = ACTIONS(326),
    [anon_sym_String] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_Array] = ACTIONS(326),
    [anon_sym_Map] = ACTIONS(326),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_identifier] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
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
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(113),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
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
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(163),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
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
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(328),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(171),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
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
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(167),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_identifier] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
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
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(159),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(147),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(334),
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
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(334),
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
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(334),
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
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [175] = {
    [sym_identifier] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(350),
  },
  [176] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(200),
    [sym_object_type] = ACTIONS(352),
    [anon_sym_Boolean] = ACTIONS(352),
    [anon_sym_Int] = ACTIONS(352),
    [anon_sym_Float] = ACTIONS(352),
    [anon_sym_File] = ACTIONS(352),
    [anon_sym_String] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_if] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_Array] = ACTIONS(352),
    [anon_sym_Map] = ACTIONS(352),
    [anon_sym_parameter_meta] = ACTIONS(352),
    [anon_sym_meta] = ACTIONS(352),
    [anon_sym_call] = ACTIONS(352),
    [anon_sym_as] = ACTIONS(352),
    [anon_sym_while] = ACTIONS(352),
    [anon_sym_scatter] = ACTIONS(352),
  },
  [177] = {
    [aux_sym_function_expression_repeat1] = STATE(330),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [178] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
  },
  [179] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(179),
    [aux_sym_task_repeat1] = STATE(179),
    [sym_object_type] = ACTIONS(364),
    [anon_sym_Boolean] = ACTIONS(367),
    [anon_sym_Int] = ACTIONS(367),
    [anon_sym_Float] = ACTIONS(367),
    [anon_sym_File] = ACTIONS(367),
    [anon_sym_String] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Array] = ACTIONS(370),
    [anon_sym_Map] = ACTIONS(373),
    [anon_sym_runtime] = ACTIONS(376),
    [anon_sym_output] = ACTIONS(376),
    [anon_sym_parameter_meta] = ACTIONS(376),
    [anon_sym_meta] = ACTIONS(376),
    [anon_sym_command] = ACTIONS(376),
  },
  [180] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [181] = {
    [aux_sym_function_expression_repeat1] = STATE(339),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [182] = {
    [aux_sym_function_expression_repeat1] = STATE(338),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [183] = {
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(155),
  },
  [184] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [185] = {
    [aux_sym_function_expression_repeat1] = STATE(345),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [186] = {
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(175),
  },
  [187] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [188] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(322),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [189] = {
    [aux_sym_function_expression_repeat1] = STATE(329),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [190] = {
    [aux_sym_function_expression_repeat1] = STATE(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [191] = {
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(189),
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
  [192] = {
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(402),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [193] = {
    [sym_identifier] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(402),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [194] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(344),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [195] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(337),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [196] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(117),
  },
  [197] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [198] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(176),
    [sym_object_type] = ACTIONS(410),
    [anon_sym_Boolean] = ACTIONS(410),
    [anon_sym_Int] = ACTIONS(410),
    [anon_sym_Float] = ACTIONS(410),
    [anon_sym_File] = ACTIONS(410),
    [anon_sym_String] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_if] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_Array] = ACTIONS(410),
    [anon_sym_Map] = ACTIONS(410),
    [anon_sym_parameter_meta] = ACTIONS(410),
    [anon_sym_meta] = ACTIONS(410),
    [anon_sym_call] = ACTIONS(410),
    [anon_sym_as] = ACTIONS(410),
    [anon_sym_while] = ACTIONS(410),
    [anon_sym_scatter] = ACTIONS(410),
  },
  [199] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
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
  },
  [200] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(200),
    [sym_object_type] = ACTIONS(412),
    [anon_sym_Boolean] = ACTIONS(412),
    [anon_sym_Int] = ACTIONS(412),
    [anon_sym_Float] = ACTIONS(412),
    [anon_sym_File] = ACTIONS(412),
    [anon_sym_String] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_Array] = ACTIONS(412),
    [anon_sym_Map] = ACTIONS(412),
    [anon_sym_parameter_meta] = ACTIONS(412),
    [anon_sym_meta] = ACTIONS(412),
    [anon_sym_call] = ACTIONS(412),
    [anon_sym_as] = ACTIONS(412),
    [anon_sym_while] = ACTIONS(412),
    [anon_sym_scatter] = ACTIONS(412),
  },
  [201] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [202] = {
    [sym_parameter_meta_kv] = STATE(364),
    [aux_sym_parameter_meta_repeat1] = STATE(209),
    [sym_identifier] = ACTIONS(419),
    [sym_object_type] = ACTIONS(421),
    [anon_sym_Boolean] = ACTIONS(421),
    [anon_sym_Int] = ACTIONS(421),
    [anon_sym_Float] = ACTIONS(421),
    [anon_sym_File] = ACTIONS(421),
    [anon_sym_String] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_Array] = ACTIONS(421),
    [anon_sym_Map] = ACTIONS(421),
    [anon_sym_parameter_meta] = ACTIONS(421),
    [anon_sym_meta] = ACTIONS(421),
    [anon_sym_call] = ACTIONS(421),
    [anon_sym_while] = ACTIONS(421),
    [anon_sym_scatter] = ACTIONS(421),
  },
  [203] = {
    [sym_parameter_meta_kv] = STATE(364),
    [aux_sym_parameter_meta_repeat1] = STATE(203),
    [sym_identifier] = ACTIONS(425),
    [sym_object_type] = ACTIONS(428),
    [anon_sym_Boolean] = ACTIONS(428),
    [anon_sym_Int] = ACTIONS(428),
    [anon_sym_Float] = ACTIONS(428),
    [anon_sym_File] = ACTIONS(428),
    [anon_sym_String] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_Array] = ACTIONS(428),
    [anon_sym_Map] = ACTIONS(428),
    [anon_sym_parameter_meta] = ACTIONS(428),
    [anon_sym_meta] = ACTIONS(428),
    [anon_sym_call] = ACTIONS(428),
    [anon_sym_while] = ACTIONS(428),
    [anon_sym_scatter] = ACTIONS(428),
  },
  [204] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(432),
  },
  [205] = {
    [sym_object_type] = ACTIONS(434),
    [anon_sym_Boolean] = ACTIONS(434),
    [anon_sym_Int] = ACTIONS(434),
    [anon_sym_Float] = ACTIONS(434),
    [anon_sym_File] = ACTIONS(434),
    [anon_sym_String] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_Array] = ACTIONS(434),
    [anon_sym_Map] = ACTIONS(434),
    [anon_sym_runtime] = ACTIONS(434),
    [anon_sym_output] = ACTIONS(434),
    [anon_sym_parameter_meta] = ACTIONS(434),
    [anon_sym_meta] = ACTIONS(434),
    [anon_sym_command] = ACTIONS(434),
    [anon_sym_call] = ACTIONS(434),
    [anon_sym_while] = ACTIONS(434),
    [anon_sym_scatter] = ACTIONS(434),
  },
  [206] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [207] = {
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(402),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [208] = {
    [sym_call_body] = STATE(250),
    [sym_object_type] = ACTIONS(440),
    [anon_sym_Boolean] = ACTIONS(440),
    [anon_sym_Int] = ACTIONS(440),
    [anon_sym_Float] = ACTIONS(440),
    [anon_sym_File] = ACTIONS(440),
    [anon_sym_String] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_Array] = ACTIONS(440),
    [anon_sym_Map] = ACTIONS(440),
    [anon_sym_parameter_meta] = ACTIONS(440),
    [anon_sym_meta] = ACTIONS(440),
    [anon_sym_call] = ACTIONS(440),
    [anon_sym_as] = ACTIONS(444),
    [anon_sym_while] = ACTIONS(440),
    [anon_sym_scatter] = ACTIONS(440),
  },
  [209] = {
    [sym_parameter_meta_kv] = STATE(364),
    [aux_sym_parameter_meta_repeat1] = STATE(203),
    [sym_identifier] = ACTIONS(419),
    [sym_object_type] = ACTIONS(446),
    [anon_sym_Boolean] = ACTIONS(446),
    [anon_sym_Int] = ACTIONS(446),
    [anon_sym_Float] = ACTIONS(446),
    [anon_sym_File] = ACTIONS(446),
    [anon_sym_String] = ACTIONS(446),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(446),
    [anon_sym_Map] = ACTIONS(446),
    [anon_sym_parameter_meta] = ACTIONS(446),
    [anon_sym_meta] = ACTIONS(446),
    [anon_sym_call] = ACTIONS(446),
    [anon_sym_while] = ACTIONS(446),
    [anon_sym_scatter] = ACTIONS(446),
  },
  [210] = {
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(450),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(402),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
  },
  [211] = {
    [sym_object_type] = ACTIONS(452),
    [anon_sym_Boolean] = ACTIONS(452),
    [anon_sym_Int] = ACTIONS(452),
    [anon_sym_Float] = ACTIONS(452),
    [anon_sym_File] = ACTIONS(452),
    [anon_sym_String] = ACTIONS(452),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_Array] = ACTIONS(452),
    [anon_sym_Map] = ACTIONS(452),
    [anon_sym_runtime] = ACTIONS(452),
    [anon_sym_output] = ACTIONS(452),
    [anon_sym_parameter_meta] = ACTIONS(452),
    [anon_sym_meta] = ACTIONS(452),
    [anon_sym_command] = ACTIONS(452),
    [anon_sym_call] = ACTIONS(452),
    [anon_sym_while] = ACTIONS(452),
    [anon_sym_scatter] = ACTIONS(452),
  },
  [212] = {
    [sym_object_type] = ACTIONS(412),
    [anon_sym_Boolean] = ACTIONS(412),
    [anon_sym_Int] = ACTIONS(412),
    [anon_sym_Float] = ACTIONS(412),
    [anon_sym_File] = ACTIONS(412),
    [anon_sym_String] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_if] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_Array] = ACTIONS(412),
    [anon_sym_Map] = ACTIONS(412),
    [anon_sym_parameter_meta] = ACTIONS(412),
    [anon_sym_meta] = ACTIONS(412),
    [anon_sym_call] = ACTIONS(412),
    [anon_sym_as] = ACTIONS(412),
    [anon_sym_while] = ACTIONS(412),
    [anon_sym_scatter] = ACTIONS(412),
  },
  [213] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_then] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [214] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_else] = ACTIONS(456),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [215] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [216] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [217] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [218] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [219] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(466),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [220] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [221] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [222] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_else] = ACTIONS(472),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [223] = {
    [sym_call_body] = STATE(241),
    [sym_object_type] = ACTIONS(474),
    [anon_sym_Boolean] = ACTIONS(474),
    [anon_sym_Int] = ACTIONS(474),
    [anon_sym_Float] = ACTIONS(474),
    [anon_sym_File] = ACTIONS(474),
    [anon_sym_String] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_Array] = ACTIONS(474),
    [anon_sym_Map] = ACTIONS(474),
    [anon_sym_parameter_meta] = ACTIONS(474),
    [anon_sym_meta] = ACTIONS(474),
    [anon_sym_call] = ACTIONS(474),
    [anon_sym_while] = ACTIONS(474),
    [anon_sym_scatter] = ACTIONS(474),
  },
  [224] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [226] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [227] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_then] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [228] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [229] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [230] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_then] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [231] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_else] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [232] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_else] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [233] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [234] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_then] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(229),
  },
  [235] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [236] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [237] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [238] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(342),
  },
  [239] = {
    [sym_identifier] = ACTIONS(428),
    [sym_object_type] = ACTIONS(428),
    [anon_sym_Boolean] = ACTIONS(428),
    [anon_sym_Int] = ACTIONS(428),
    [anon_sym_Float] = ACTIONS(428),
    [anon_sym_File] = ACTIONS(428),
    [anon_sym_String] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_Array] = ACTIONS(428),
    [anon_sym_Map] = ACTIONS(428),
    [anon_sym_parameter_meta] = ACTIONS(428),
    [anon_sym_meta] = ACTIONS(428),
    [anon_sym_call] = ACTIONS(428),
    [anon_sym_while] = ACTIONS(428),
    [anon_sym_scatter] = ACTIONS(428),
  },
  [240] = {
    [sym_object_type] = ACTIONS(506),
    [anon_sym_Boolean] = ACTIONS(506),
    [anon_sym_Int] = ACTIONS(506),
    [anon_sym_Float] = ACTIONS(506),
    [anon_sym_File] = ACTIONS(506),
    [anon_sym_String] = ACTIONS(506),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_Array] = ACTIONS(506),
    [anon_sym_Map] = ACTIONS(506),
    [anon_sym_parameter_meta] = ACTIONS(506),
    [anon_sym_meta] = ACTIONS(506),
    [anon_sym_call] = ACTIONS(506),
    [anon_sym_while] = ACTIONS(506),
    [anon_sym_scatter] = ACTIONS(506),
  },
  [241] = {
    [sym_object_type] = ACTIONS(508),
    [anon_sym_Boolean] = ACTIONS(508),
    [anon_sym_Int] = ACTIONS(508),
    [anon_sym_Float] = ACTIONS(508),
    [anon_sym_File] = ACTIONS(508),
    [anon_sym_String] = ACTIONS(508),
    [sym_comment] = ACTIONS(3),
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
  [242] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(392),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_task_output_kv] = STATE(247),
    [aux_sym_task_output_repeat1] = STATE(247),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
  },
  [243] = {
    [sym_object_type] = ACTIONS(512),
    [anon_sym_Boolean] = ACTIONS(512),
    [anon_sym_Int] = ACTIONS(512),
    [anon_sym_Float] = ACTIONS(512),
    [anon_sym_File] = ACTIONS(512),
    [anon_sym_String] = ACTIONS(512),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(512),
    [anon_sym_Array] = ACTIONS(512),
    [anon_sym_Map] = ACTIONS(512),
    [anon_sym_parameter_meta] = ACTIONS(512),
    [anon_sym_meta] = ACTIONS(512),
    [anon_sym_call] = ACTIONS(512),
    [anon_sym_while] = ACTIONS(512),
    [anon_sym_scatter] = ACTIONS(512),
  },
  [244] = {
    [sym_object_type] = ACTIONS(514),
    [anon_sym_Boolean] = ACTIONS(514),
    [anon_sym_Int] = ACTIONS(514),
    [anon_sym_Float] = ACTIONS(514),
    [anon_sym_File] = ACTIONS(514),
    [anon_sym_String] = ACTIONS(514),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_Array] = ACTIONS(514),
    [anon_sym_Map] = ACTIONS(514),
    [anon_sym_parameter_meta] = ACTIONS(514),
    [anon_sym_meta] = ACTIONS(514),
    [anon_sym_call] = ACTIONS(514),
    [anon_sym_while] = ACTIONS(514),
    [anon_sym_scatter] = ACTIONS(514),
  },
  [245] = {
    [sym_object_type] = ACTIONS(516),
    [anon_sym_Boolean] = ACTIONS(516),
    [anon_sym_Int] = ACTIONS(516),
    [anon_sym_Float] = ACTIONS(516),
    [anon_sym_File] = ACTIONS(516),
    [anon_sym_String] = ACTIONS(516),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_Array] = ACTIONS(516),
    [anon_sym_Map] = ACTIONS(516),
    [anon_sym_parameter_meta] = ACTIONS(516),
    [anon_sym_meta] = ACTIONS(516),
    [anon_sym_call] = ACTIONS(516),
    [anon_sym_while] = ACTIONS(516),
    [anon_sym_scatter] = ACTIONS(516),
  },
  [246] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(392),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_task_output_kv] = STATE(246),
    [aux_sym_task_output_repeat1] = STATE(246),
    [sym_object_type] = ACTIONS(518),
    [anon_sym_Boolean] = ACTIONS(521),
    [anon_sym_Int] = ACTIONS(521),
    [anon_sym_Float] = ACTIONS(521),
    [anon_sym_File] = ACTIONS(521),
    [anon_sym_String] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_Array] = ACTIONS(526),
    [anon_sym_Map] = ACTIONS(529),
  },
  [247] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(392),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_task_output_kv] = STATE(246),
    [aux_sym_task_output_repeat1] = STATE(246),
    [sym_object_type] = ACTIONS(246),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
  },
  [248] = {
    [sym_object_type] = ACTIONS(534),
    [anon_sym_Boolean] = ACTIONS(534),
    [anon_sym_Int] = ACTIONS(534),
    [anon_sym_Float] = ACTIONS(534),
    [anon_sym_File] = ACTIONS(534),
    [anon_sym_String] = ACTIONS(534),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_Array] = ACTIONS(534),
    [anon_sym_Map] = ACTIONS(534),
    [anon_sym_parameter_meta] = ACTIONS(534),
    [anon_sym_meta] = ACTIONS(534),
    [anon_sym_call] = ACTIONS(534),
    [anon_sym_while] = ACTIONS(534),
    [anon_sym_scatter] = ACTIONS(534),
  },
  [249] = {
    [sym_object_type] = ACTIONS(536),
    [anon_sym_Boolean] = ACTIONS(536),
    [anon_sym_Int] = ACTIONS(536),
    [anon_sym_Float] = ACTIONS(536),
    [anon_sym_File] = ACTIONS(536),
    [anon_sym_String] = ACTIONS(536),
    [sym_comment] = ACTIONS(3),
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
  [250] = {
    [sym_object_type] = ACTIONS(538),
    [anon_sym_Boolean] = ACTIONS(538),
    [anon_sym_Int] = ACTIONS(538),
    [anon_sym_Float] = ACTIONS(538),
    [anon_sym_File] = ACTIONS(538),
    [anon_sym_String] = ACTIONS(538),
    [sym_comment] = ACTIONS(3),
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
  [251] = {
    [sym_object_type] = ACTIONS(540),
    [anon_sym_Boolean] = ACTIONS(540),
    [anon_sym_Int] = ACTIONS(540),
    [anon_sym_Float] = ACTIONS(540),
    [anon_sym_File] = ACTIONS(540),
    [anon_sym_String] = ACTIONS(540),
    [sym_comment] = ACTIONS(3),
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
  [252] = {
    [sym_object_type] = ACTIONS(542),
    [anon_sym_Boolean] = ACTIONS(542),
    [anon_sym_Int] = ACTIONS(542),
    [anon_sym_Float] = ACTIONS(542),
    [anon_sym_File] = ACTIONS(542),
    [anon_sym_String] = ACTIONS(542),
    [sym_comment] = ACTIONS(3),
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
  [253] = {
    [sym_object_type] = ACTIONS(544),
    [anon_sym_Boolean] = ACTIONS(544),
    [anon_sym_Int] = ACTIONS(544),
    [anon_sym_Float] = ACTIONS(544),
    [anon_sym_File] = ACTIONS(544),
    [anon_sym_String] = ACTIONS(544),
    [sym_comment] = ACTIONS(3),
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
  [254] = {
    [sym_object_type] = ACTIONS(546),
    [anon_sym_Boolean] = ACTIONS(546),
    [anon_sym_Int] = ACTIONS(546),
    [anon_sym_Float] = ACTIONS(546),
    [anon_sym_File] = ACTIONS(546),
    [anon_sym_String] = ACTIONS(546),
    [sym_comment] = ACTIONS(3),
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
  [255] = {
    [sym_object_type] = ACTIONS(548),
    [anon_sym_Boolean] = ACTIONS(548),
    [anon_sym_Int] = ACTIONS(548),
    [anon_sym_Float] = ACTIONS(548),
    [anon_sym_File] = ACTIONS(548),
    [anon_sym_String] = ACTIONS(548),
    [sym_comment] = ACTIONS(3),
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
  [256] = {
    [sym_runtime] = STATE(256),
    [sym_task_output] = STATE(256),
    [sym_parameter_meta] = STATE(256),
    [sym_meta] = STATE(256),
    [sym_command] = STATE(256),
    [aux_sym_task_sections_repeat1] = STATE(256),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(550),
    [anon_sym_runtime] = ACTIONS(552),
    [anon_sym_output] = ACTIONS(555),
    [anon_sym_parameter_meta] = ACTIONS(558),
    [anon_sym_meta] = ACTIONS(561),
    [anon_sym_command] = ACTIONS(564),
  },
  [257] = {
    [sym_runtime] = STATE(256),
    [sym_task_output] = STATE(256),
    [sym_parameter_meta] = STATE(256),
    [sym_meta] = STATE(256),
    [sym_command] = STATE(256),
    [aux_sym_task_sections_repeat1] = STATE(256),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(567),
    [anon_sym_runtime] = ACTIONS(314),
    [anon_sym_output] = ACTIONS(316),
    [anon_sym_parameter_meta] = ACTIONS(318),
    [anon_sym_meta] = ACTIONS(260),
    [anon_sym_command] = ACTIONS(320),
  },
  [258] = {
    [sym_primitive_type] = STATE(387),
    [sym_array_type] = STATE(387),
    [sym_map_type] = STATE(387),
    [sym_object_type] = ACTIONS(569),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Array] = ACTIONS(254),
    [anon_sym_Map] = ACTIONS(256),
  },
  [259] = {
    [sym_parameter_meta_kv] = STATE(382),
    [aux_sym_parameter_meta_repeat1] = STATE(261),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_runtime] = ACTIONS(446),
    [anon_sym_output] = ACTIONS(446),
    [anon_sym_parameter_meta] = ACTIONS(446),
    [anon_sym_meta] = ACTIONS(446),
    [anon_sym_command] = ACTIONS(446),
  },
  [260] = {
    [sym_parameter_meta_kv] = STATE(382),
    [aux_sym_parameter_meta_repeat1] = STATE(259),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_runtime] = ACTIONS(421),
    [anon_sym_output] = ACTIONS(421),
    [anon_sym_parameter_meta] = ACTIONS(421),
    [anon_sym_meta] = ACTIONS(421),
    [anon_sym_command] = ACTIONS(421),
  },
  [261] = {
    [sym_parameter_meta_kv] = STATE(382),
    [aux_sym_parameter_meta_repeat1] = STATE(261),
    [sym_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_runtime] = ACTIONS(428),
    [anon_sym_output] = ACTIONS(428),
    [anon_sym_parameter_meta] = ACTIONS(428),
    [anon_sym_meta] = ACTIONS(428),
    [anon_sym_command] = ACTIONS(428),
  },
  [262] = {
    [sym_primitive_type] = STATE(377),
    [sym_array_type] = STATE(377),
    [sym_object_type] = ACTIONS(571),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Array] = ACTIONS(254),
  },
  [263] = {
    [sym_task] = STATE(263),
    [sym_import] = STATE(263),
    [sym_workflow] = STATE(263),
    [aux_sym_document_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(573),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(575),
    [anon_sym_import] = ACTIONS(578),
    [anon_sym_workflow] = ACTIONS(581),
  },
  [264] = {
    [sym_task] = STATE(263),
    [sym_import] = STATE(263),
    [sym_workflow] = STATE(263),
    [aux_sym_document_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(584),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(586),
    [anon_sym_import] = ACTIONS(588),
    [anon_sym_workflow] = ACTIONS(590),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_runtime] = ACTIONS(592),
    [anon_sym_output] = ACTIONS(592),
    [anon_sym_parameter_meta] = ACTIONS(592),
    [anon_sym_meta] = ACTIONS(592),
    [anon_sym_command] = ACTIONS(592),
  },
  [266] = {
    [sym_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_runtime] = ACTIONS(428),
    [anon_sym_output] = ACTIONS(428),
    [anon_sym_parameter_meta] = ACTIONS(428),
    [anon_sym_meta] = ACTIONS(428),
    [anon_sym_command] = ACTIONS(428),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(594),
    [anon_sym_runtime] = ACTIONS(594),
    [anon_sym_output] = ACTIONS(594),
    [anon_sym_parameter_meta] = ACTIONS(594),
    [anon_sym_meta] = ACTIONS(594),
    [anon_sym_command] = ACTIONS(594),
  },
  [268] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_runtime] = ACTIONS(596),
    [anon_sym_output] = ACTIONS(596),
    [anon_sym_parameter_meta] = ACTIONS(596),
    [anon_sym_meta] = ACTIONS(596),
    [anon_sym_command] = ACTIONS(596),
  },
  [269] = {
    [sym_primitive_type] = STATE(376),
    [anon_sym_Boolean] = ACTIONS(248),
    [anon_sym_Int] = ACTIONS(248),
    [anon_sym_Float] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_String] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [270] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(598),
    [anon_sym_runtime] = ACTIONS(598),
    [anon_sym_output] = ACTIONS(598),
    [anon_sym_parameter_meta] = ACTIONS(598),
    [anon_sym_meta] = ACTIONS(598),
    [anon_sym_command] = ACTIONS(598),
  },
  [271] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_runtime] = ACTIONS(600),
    [anon_sym_output] = ACTIONS(600),
    [anon_sym_parameter_meta] = ACTIONS(600),
    [anon_sym_meta] = ACTIONS(600),
    [anon_sym_command] = ACTIONS(600),
  },
  [272] = {
    [sym_command_part] = STATE(275),
    [sym_command_part_var] = STATE(335),
    [aux_sym_command_repeat1] = STATE(275),
    [sym_comment] = ACTIONS(602),
    [anon_sym_GT_GT_GT] = ACTIONS(604),
    [sym_command_part_string] = ACTIONS(606),
    [anon_sym_DOLLAR] = ACTIONS(608),
  },
  [273] = {
    [sym_command_part] = STATE(276),
    [sym_command_part_var] = STATE(326),
    [aux_sym_command_repeat1] = STATE(276),
    [sym_comment] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_command_part_string] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(612),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [sym_identifier] = ACTIONS(614),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_QMARK] = ACTIONS(614),
  },
  [275] = {
    [sym_command_part] = STATE(275),
    [sym_command_part_var] = STATE(335),
    [aux_sym_command_repeat1] = STATE(275),
    [sym_comment] = ACTIONS(602),
    [anon_sym_GT_GT_GT] = ACTIONS(616),
    [sym_command_part_string] = ACTIONS(618),
    [anon_sym_DOLLAR] = ACTIONS(621),
  },
  [276] = {
    [sym_command_part] = STATE(276),
    [sym_command_part_var] = STATE(326),
    [aux_sym_command_repeat1] = STATE(276),
    [sym_comment] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(616),
    [sym_command_part_string] = ACTIONS(624),
    [anon_sym_DOLLAR] = ACTIONS(627),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [sym_identifier] = ACTIONS(630),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(630),
    [anon_sym_PLUS] = ACTIONS(630),
    [anon_sym_QMARK] = ACTIONS(630),
  },
  [278] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(410),
    [anon_sym_as] = ACTIONS(410),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [sym_identifier] = ACTIONS(634),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(634),
    [anon_sym_PLUS] = ACTIONS(634),
    [anon_sym_QMARK] = ACTIONS(634),
  },
  [280] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_as] = ACTIONS(352),
  },
  [281] = {
    [sym_type_postfix_quantifier] = STATE(354),
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(638),
    [anon_sym_QMARK] = ACTIONS(638),
  },
  [282] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_as] = ACTIONS(412),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(643),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(643),
    [anon_sym_as] = ACTIONS(645),
    [anon_sym_import] = ACTIONS(643),
    [anon_sym_workflow] = ACTIONS(643),
  },
  [284] = {
    [sym_command_part] = STATE(272),
    [sym_command_part_var] = STATE(335),
    [aux_sym_command_repeat1] = STATE(272),
    [sym_comment] = ACTIONS(602),
    [sym_command_part_string] = ACTIONS(606),
    [anon_sym_DOLLAR] = ACTIONS(608),
  },
  [285] = {
    [sym_command_part] = STATE(273),
    [sym_command_part_var] = STATE(326),
    [aux_sym_command_repeat1] = STATE(273),
    [sym_comment] = ACTIONS(602),
    [sym_command_part_string] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(612),
  },
  [286] = {
    [aux_sym_string_literal_repeat1] = STATE(318),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [aux_sym_string_literal_token1] = ACTIONS(649),
    [sym_escape_sequence] = ACTIONS(649),
  },
  [287] = {
    [sym_meta_kv] = STATE(287),
    [aux_sym_meta_repeat1] = STATE(287),
    [sym_identifier] = ACTIONS(651),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(654),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(656),
    [anon_sym_import] = ACTIONS(656),
    [anon_sym_workflow] = ACTIONS(656),
  },
  [289] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(658),
    [aux_sym_string_literal_token2] = ACTIONS(660),
    [sym_escape_sequence] = ACTIONS(662),
  },
  [290] = {
    [sym_meta_kv] = STATE(292),
    [aux_sym_meta_repeat1] = STATE(292),
    [sym_identifier] = ACTIONS(664),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(666),
  },
  [291] = {
    [aux_sym_string_literal_repeat1] = STATE(319),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(668),
    [aux_sym_string_literal_token1] = ACTIONS(670),
    [sym_escape_sequence] = ACTIONS(670),
  },
  [292] = {
    [sym_meta_kv] = STATE(287),
    [aux_sym_meta_repeat1] = STATE(287),
    [sym_identifier] = ACTIONS(664),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(672),
  },
  [293] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [aux_sym_string_literal_token2] = ACTIONS(660),
    [sym_escape_sequence] = ACTIONS(662),
  },
  [294] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [aux_sym_string_literal_token1] = ACTIONS(676),
    [sym_escape_sequence] = ACTIONS(676),
  },
  [295] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [aux_sym_string_literal_token1] = ACTIONS(676),
    [sym_escape_sequence] = ACTIONS(676),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(680),
    [anon_sym_import] = ACTIONS(680),
    [anon_sym_workflow] = ACTIONS(680),
  },
  [297] = {
    [aux_sym_string_literal_repeat2] = STATE(289),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(668),
    [aux_sym_string_literal_token2] = ACTIONS(682),
    [sym_escape_sequence] = ACTIONS(684),
  },
  [298] = {
    [sym_scatter_iteration_statment] = STATE(305),
    [aux_sym_scatter_repeat1] = STATE(305),
    [sym_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(688),
  },
  [299] = {
    [aux_sym_string_literal_repeat2] = STATE(308),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [aux_sym_string_literal_token2] = ACTIONS(692),
    [sym_escape_sequence] = ACTIONS(694),
  },
  [300] = {
    [aux_sym_string_literal_repeat1] = STATE(295),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(690),
    [aux_sym_string_literal_token1] = ACTIONS(696),
    [sym_escape_sequence] = ACTIONS(696),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(698),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(698),
    [anon_sym_import] = ACTIONS(698),
    [anon_sym_workflow] = ACTIONS(698),
  },
  [302] = {
    [aux_sym_string_literal_repeat2] = STATE(293),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [aux_sym_string_literal_token2] = ACTIONS(702),
    [sym_escape_sequence] = ACTIONS(704),
  },
  [303] = {
    [ts_builtin_sym_end] = ACTIONS(706),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(706),
    [anon_sym_import] = ACTIONS(706),
    [anon_sym_workflow] = ACTIONS(706),
  },
  [304] = {
    [aux_sym_string_literal_repeat1] = STATE(294),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [aux_sym_string_literal_token1] = ACTIONS(708),
    [sym_escape_sequence] = ACTIONS(708),
  },
  [305] = {
    [sym_scatter_iteration_statment] = STATE(314),
    [aux_sym_scatter_repeat1] = STATE(314),
    [sym_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(710),
  },
  [306] = {
    [sym_runtime_kv] = STATE(315),
    [aux_sym_runtime_repeat1] = STATE(315),
    [sym_identifier] = ACTIONS(712),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(714),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(716),
    [sym_comment] = ACTIONS(3),
    [anon_sym_task] = ACTIONS(716),
    [anon_sym_import] = ACTIONS(716),
    [anon_sym_workflow] = ACTIONS(716),
  },
  [308] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [aux_sym_string_literal_token2] = ACTIONS(660),
    [sym_escape_sequence] = ACTIONS(662),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_as] = ACTIONS(412),
  },
  [310] = {
    [sym_call_body] = STATE(367),
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(718),
    [anon_sym_as] = ACTIONS(720),
  },
  [311] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [aux_sym_string_literal_token1] = ACTIONS(724),
    [sym_escape_sequence] = ACTIONS(724),
  },
  [312] = {
    [sym_runtime_kv] = STATE(312),
    [aux_sym_runtime_repeat1] = STATE(312),
    [sym_identifier] = ACTIONS(727),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(730),
  },
  [313] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [aux_sym_string_literal_token2] = ACTIONS(734),
    [sym_escape_sequence] = ACTIONS(737),
  },
  [314] = {
    [sym_scatter_iteration_statment] = STATE(314),
    [aux_sym_scatter_repeat1] = STATE(314),
    [sym_identifier] = ACTIONS(740),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(743),
  },
  [315] = {
    [sym_runtime_kv] = STATE(312),
    [aux_sym_runtime_repeat1] = STATE(312),
    [sym_identifier] = ACTIONS(712),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(745),
  },
  [316] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(747),
    [aux_sym_string_literal_token2] = ACTIONS(660),
    [sym_escape_sequence] = ACTIONS(662),
  },
  [317] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(408),
  },
  [318] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(747),
    [aux_sym_string_literal_token1] = ACTIONS(676),
    [sym_escape_sequence] = ACTIONS(676),
  },
  [319] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [sym_comment] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [aux_sym_string_literal_token1] = ACTIONS(676),
    [sym_escape_sequence] = ACTIONS(676),
  },
  [320] = {
    [aux_sym_string_literal_repeat2] = STATE(316),
    [sym_comment] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [aux_sym_string_literal_token2] = ACTIONS(752),
    [sym_escape_sequence] = ACTIONS(754),
  },
  [321] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(756),
    [anon_sym_RBRACE] = ACTIONS(759),
  },
  [322] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(761),
  },
  [323] = {
    [aux_sym_variable_mappings_repeat1] = STATE(323),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(763),
    [anon_sym_RBRACE] = ACTIONS(766),
  },
  [324] = {
    [sym_inputs] = STATE(383),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_input] = ACTIONS(770),
  },
  [325] = {
    [sym_string_literal] = STATE(283),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [326] = {
    [sym_comment] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(772),
    [sym_command_part_string] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(772),
  },
  [327] = {
    [sym_comment] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(774),
    [sym_command_part_string] = ACTIONS(774),
    [anon_sym_DOLLAR] = ACTIONS(774),
  },
  [328] = {
    [sym_comment] = ACTIONS(602),
    [anon_sym_GT_GT_GT] = ACTIONS(776),
    [sym_command_part_string] = ACTIONS(776),
    [anon_sym_DOLLAR] = ACTIONS(776),
  },
  [329] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(778),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [330] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [331] = {
    [sym_inputs] = STATE(379),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(782),
    [anon_sym_input] = ACTIONS(770),
  },
  [332] = {
    [sym_comment] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(776),
    [sym_command_part_string] = ACTIONS(776),
    [anon_sym_DOLLAR] = ACTIONS(776),
  },
  [333] = {
    [sym_variable_mappings] = STATE(409),
    [sym_variable_mapping_kv] = STATE(346),
    [sym_identifier] = ACTIONS(784),
    [sym_comment] = ACTIONS(3),
  },
  [334] = {
    [sym_comment] = ACTIONS(602),
    [anon_sym_GT_GT_GT] = ACTIONS(774),
    [sym_command_part_string] = ACTIONS(774),
    [anon_sym_DOLLAR] = ACTIONS(774),
  },
  [335] = {
    [sym_comment] = ACTIONS(602),
    [anon_sym_GT_GT_GT] = ACTIONS(772),
    [sym_command_part_string] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(772),
  },
  [336] = {
    [aux_sym_variable_mappings_repeat1] = STATE(323),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(788),
  },
  [337] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(790),
  },
  [338] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(792),
  },
  [339] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(794),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [340] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(796),
  },
  [341] = {
    [sym_call_body] = STATE(391),
    [ts_builtin_sym_end] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(718),
  },
  [342] = {
    [sym_string_literal] = STATE(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
  },
  [343] = {
    [sym_string_literal] = STATE(402),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [344] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(798),
  },
  [345] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(800),
  },
  [346] = {
    [aux_sym_variable_mappings_repeat1] = STATE(336),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(802),
  },
  [347] = {
    [sym_scatter_body] = STATE(244),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(804),
  },
  [348] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(806),
    [anon_sym_LT_LT_LT] = ACTIONS(808),
  },
  [349] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_RBRACE] = ACTIONS(766),
  },
  [350] = {
    [sym_variable_mapping_kv] = STATE(349),
    [sym_identifier] = ACTIONS(784),
    [sym_comment] = ACTIONS(3),
  },
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_identifier] = ACTIONS(810),
    [sym_comment] = ACTIONS(3),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(812),
    [sym_identifier] = ACTIONS(812),
    [sym_comment] = ACTIONS(3),
  },
  [353] = {
    [sym_scatter_body] = STATE(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(804),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(3),
  },
  [355] = {
    [sym_namespaced_identifier] = STATE(310),
    [sym_identifier] = ACTIONS(816),
    [sym_comment] = ACTIONS(3),
  },
  [356] = {
    [sym_namespaced_identifier] = STATE(208),
    [sym_identifier] = ACTIONS(818),
    [sym_comment] = ACTIONS(3),
  },
  [357] = {
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(820),
  },
  [358] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(822),
  },
  [359] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(824),
  },
  [360] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(826),
  },
  [361] = {
    [sym_identifier] = ACTIONS(828),
    [sym_comment] = ACTIONS(3),
  },
  [362] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(830),
  },
  [363] = {
    [sym_identifier] = ACTIONS(832),
    [sym_comment] = ACTIONS(3),
  },
  [364] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(834),
  },
  [365] = {
    [sym_identifier] = ACTIONS(836),
    [sym_comment] = ACTIONS(3),
  },
  [366] = {
    [sym_identifier] = ACTIONS(838),
    [sym_comment] = ACTIONS(3),
  },
  [367] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [sym_comment] = ACTIONS(3),
  },
  [368] = {
    [sym_identifier] = ACTIONS(840),
    [sym_comment] = ACTIONS(3),
  },
  [369] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(842),
  },
  [370] = {
    [sym_identifier] = ACTIONS(844),
    [sym_comment] = ACTIONS(3),
  },
  [371] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(846),
  },
  [372] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(848),
  },
  [373] = {
    [sym_identifier] = ACTIONS(810),
    [sym_comment] = ACTIONS(3),
  },
  [374] = {
    [sym_identifier] = ACTIONS(850),
    [sym_comment] = ACTIONS(3),
  },
  [375] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(852),
  },
  [376] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(854),
  },
  [377] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(856),
  },
  [378] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(858),
  },
  [379] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(860),
  },
  [380] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(862),
  },
  [381] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [sym_comment] = ACTIONS(3),
  },
  [382] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(864),
  },
  [383] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(866),
  },
  [384] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(868),
  },
  [385] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(870),
  },
  [386] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(872),
  },
  [387] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(874),
  },
  [388] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(876),
  },
  [389] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [sym_comment] = ACTIONS(3),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
  },
  [391] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [sym_comment] = ACTIONS(3),
  },
  [392] = {
    [sym_identifier] = ACTIONS(878),
    [sym_comment] = ACTIONS(3),
  },
  [393] = {
    [ts_builtin_sym_end] = ACTIONS(880),
    [sym_comment] = ACTIONS(3),
  },
  [394] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(882),
  },
  [395] = {
    [sym_identifier] = ACTIONS(884),
    [sym_comment] = ACTIONS(3),
  },
  [396] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(886),
  },
  [397] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(888),
  },
  [398] = {
    [sym_identifier] = ACTIONS(890),
    [sym_comment] = ACTIONS(3),
  },
  [399] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(892),
  },
  [400] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(894),
  },
  [401] = {
    [sym_identifier] = ACTIONS(896),
    [sym_comment] = ACTIONS(3),
  },
  [402] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(898),
  },
  [403] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(900),
  },
  [404] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(902),
  },
  [405] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(904),
  },
  [406] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(906),
  },
  [407] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(908),
  },
  [408] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(910),
  },
  [409] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(912),
  },
  [410] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(914),
  },
  [411] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(916),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(165),
  [7] = {.count = 1, .reusable = false}, SHIFT(163),
  [9] = {.count = 1, .reusable = false}, SHIFT(281),
  [11] = {.count = 1, .reusable = false}, SHIFT(274),
  [13] = {.count = 1, .reusable = true}, SHIFT(291),
  [15] = {.count = 1, .reusable = true}, SHIFT(297),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(20),
  [21] = {.count = 1, .reusable = true}, SHIFT(21),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(22),
  [27] = {.count = 1, .reusable = false}, SHIFT(404),
  [29] = {.count = 1, .reusable = false}, SHIFT(400),
  [31] = {.count = 1, .reusable = false}, SHIFT(399),
  [33] = {.count = 1, .reusable = false}, SHIFT(398),
  [35] = {.count = 1, .reusable = false}, SHIFT(355),
  [37] = {.count = 1, .reusable = false}, SHIFT(325),
  [39] = {.count = 1, .reusable = false}, SHIFT(395),
  [41] = {.count = 1, .reusable = false}, SHIFT(204),
  [43] = {.count = 1, .reusable = false}, SHIFT(397),
  [45] = {.count = 1, .reusable = true}, SHIFT(103),
  [47] = {.count = 1, .reusable = true}, SHIFT(160),
  [49] = {.count = 1, .reusable = true}, SHIFT(151),
  [51] = {.count = 1, .reusable = true}, SHIFT(115),
  [53] = {.count = 1, .reusable = true}, SHIFT(114),
  [55] = {.count = 1, .reusable = true}, SHIFT(122),
  [57] = {.count = 1, .reusable = true}, SHIFT(164),
  [59] = {.count = 1, .reusable = true}, SHIFT(105),
  [61] = {.count = 1, .reusable = false}, SHIFT(87),
  [63] = {.count = 1, .reusable = false}, SHIFT(88),
  [65] = {.count = 1, .reusable = true}, SHIFT(300),
  [67] = {.count = 1, .reusable = true}, SHIFT(299),
  [69] = {.count = 1, .reusable = true}, SHIFT(13),
  [71] = {.count = 1, .reusable = false}, SHIFT(49),
  [73] = {.count = 1, .reusable = true}, SHIFT(26),
  [75] = {.count = 1, .reusable = true}, SHIFT(6),
  [77] = {.count = 1, .reusable = true}, SHIFT(45),
  [79] = {.count = 1, .reusable = true}, SHIFT(90),
  [81] = {.count = 1, .reusable = true}, SHIFT(304),
  [83] = {.count = 1, .reusable = true}, SHIFT(302),
  [85] = {.count = 1, .reusable = false}, SHIFT(70),
  [87] = {.count = 1, .reusable = true}, SHIFT(74),
  [89] = {.count = 1, .reusable = false}, SHIFT(118),
  [91] = {.count = 1, .reusable = false}, SHIFT(117),
  [93] = {.count = 1, .reusable = true}, SHIFT(286),
  [95] = {.count = 1, .reusable = true}, SHIFT(320),
  [97] = {.count = 1, .reusable = true}, SHIFT(9),
  [99] = {.count = 1, .reusable = false}, SHIFT(18),
  [101] = {.count = 1, .reusable = true}, SHIFT(32),
  [103] = {.count = 1, .reusable = true}, SHIFT(10),
  [105] = {.count = 1, .reusable = true}, SHIFT(29),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [111] = {.count = 1, .reusable = false}, SHIFT(79),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(55),
  [123] = {.count = 1, .reusable = true}, SHIFT(25),
  [125] = {.count = 1, .reusable = true}, SHIFT(15),
  [127] = {.count = 1, .reusable = true}, SHIFT(58),
  [129] = {.count = 1, .reusable = true}, SHIFT(71),
  [131] = {.count = 1, .reusable = true}, SHIFT(73),
  [133] = {.count = 1, .reusable = false}, SHIFT(77),
  [135] = {.count = 1, .reusable = true}, SHIFT(77),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(56),
  [143] = {.count = 1, .reusable = true}, SHIFT(57),
  [145] = {.count = 1, .reusable = false}, SHIFT(41),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_member_access_expression, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_member_access_expression, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 6),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 6),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_if_then_expression, 6),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_expression, 6),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 5),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 5),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_indexing_expression, 4),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_indexing_expression, 4),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 4),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 4),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(78),
  [221] = {.count = 1, .reusable = true}, SHIFT(30),
  [223] = {.count = 1, .reusable = true}, SHIFT(11),
  [225] = {.count = 1, .reusable = true}, SHIFT(35),
  [227] = {.count = 1, .reusable = true}, SHIFT(36),
  [229] = {.count = 1, .reusable = false}, SHIFT(34),
  [231] = {.count = 1, .reusable = true}, SHIFT(34),
  [233] = {.count = 1, .reusable = true}, SHIFT(40),
  [235] = {.count = 1, .reusable = true}, SHIFT(38),
  [237] = {.count = 1, .reusable = true}, SHIFT(39),
  [239] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(397),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [246] = {.count = 1, .reusable = true}, SHIFT(281),
  [248] = {.count = 1, .reusable = true}, SHIFT(274),
  [250] = {.count = 1, .reusable = true}, SHIFT(384),
  [252] = {.count = 1, .reusable = true}, SHIFT(252),
  [254] = {.count = 1, .reusable = true}, SHIFT(404),
  [256] = {.count = 1, .reusable = true}, SHIFT(400),
  [258] = {.count = 1, .reusable = true}, SHIFT(378),
  [260] = {.count = 1, .reusable = true}, SHIFT(371),
  [262] = {.count = 1, .reusable = true}, SHIFT(356),
  [264] = {.count = 1, .reusable = true}, SHIFT(385),
  [266] = {.count = 1, .reusable = true}, SHIFT(386),
  [268] = {.count = 1, .reusable = true}, SHIFT(248),
  [270] = {.count = 1, .reusable = true}, SHIFT(301),
  [272] = {.count = 1, .reusable = true}, SHIFT(307),
  [274] = {.count = 1, .reusable = true}, SHIFT(251),
  [276] = {.count = 1, .reusable = true}, SHIFT(255),
  [278] = {.count = 1, .reusable = true}, SHIFT(254),
  [280] = {.count = 1, .reusable = true}, SHIFT(253),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(281),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(274),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(384),
  [291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(404),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(400),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(378),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(371),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(356),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(385),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(386),
  [314] = {.count = 1, .reusable = true}, SHIFT(399),
  [316] = {.count = 1, .reusable = true}, SHIFT(360),
  [318] = {.count = 1, .reusable = true}, SHIFT(359),
  [320] = {.count = 1, .reusable = true}, SHIFT(348),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [328] = {.count = 1, .reusable = false}, SHIFT(81),
  [330] = {.count = 1, .reusable = true}, SHIFT(46),
  [332] = {.count = 1, .reusable = true}, SHIFT(47),
  [334] = {.count = 1, .reusable = true}, SHIFT(12),
  [336] = {.count = 1, .reusable = true}, SHIFT(53),
  [338] = {.count = 1, .reusable = true}, SHIFT(51),
  [340] = {.count = 1, .reusable = true}, SHIFT(52),
  [342] = {.count = 1, .reusable = false}, SHIFT(54),
  [344] = {.count = 1, .reusable = true}, SHIFT(54),
  [346] = {.count = 1, .reusable = true}, SHIFT(17),
  [348] = {.count = 1, .reusable = true}, SHIFT(50),
  [350] = {.count = 1, .reusable = false}, SHIFT(16),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [354] = {.count = 1, .reusable = true}, SHIFT(361),
  [356] = {.count = 1, .reusable = true}, SHIFT(125),
  [358] = {.count = 1, .reusable = true}, SHIFT(61),
  [360] = {.count = 1, .reusable = true}, SHIFT(72),
  [362] = {.count = 1, .reusable = true}, SHIFT(62),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(281),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(274),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(404),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(400),
  [376] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [378] = {.count = 1, .reusable = true}, SHIFT(66),
  [380] = {.count = 1, .reusable = false}, SHIFT(59),
  [382] = {.count = 1, .reusable = true}, SHIFT(59),
  [384] = {.count = 1, .reusable = true}, SHIFT(93),
  [386] = {.count = 1, .reusable = true}, SHIFT(153),
  [388] = {.count = 1, .reusable = true}, SHIFT(69),
  [390] = {.count = 1, .reusable = true}, SHIFT(67),
  [392] = {.count = 1, .reusable = true}, SHIFT(83),
  [394] = {.count = 1, .reusable = true}, SHIFT(60),
  [396] = {.count = 1, .reusable = true}, SHIFT(99),
  [398] = {.count = 1, .reusable = true}, SHIFT(158),
  [400] = {.count = 1, .reusable = true}, SHIFT(134),
  [402] = {.count = 1, .reusable = true}, SHIFT(68),
  [404] = {.count = 1, .reusable = true}, SHIFT(128),
  [406] = {.count = 1, .reusable = true}, SHIFT(162),
  [408] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [412] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(361),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [419] = {.count = 1, .reusable = false}, SHIFT(394),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [425] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(394),
  [428] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [430] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [436] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 4),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [442] = {.count = 1, .reusable = true}, SHIFT(331),
  [444] = {.count = 1, .reusable = true}, SHIFT(363),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [454] = {.count = 1, .reusable = true}, SHIFT(24),
  [456] = {.count = 1, .reusable = true}, SHIFT(42),
  [458] = {.count = 1, .reusable = true}, SHIFT(334),
  [460] = {.count = 1, .reusable = true}, SHIFT(406),
  [462] = {.count = 1, .reusable = true}, SHIFT(403),
  [464] = {.count = 1, .reusable = true}, SHIFT(23),
  [466] = {.count = 1, .reusable = true}, SHIFT(65),
  [468] = {.count = 1, .reusable = true}, SHIFT(110),
  [470] = {.count = 1, .reusable = true}, SHIFT(33),
  [472] = {.count = 1, .reusable = true}, SHIFT(80),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [476] = {.count = 1, .reusable = true}, SHIFT(101),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [480] = {.count = 1, .reusable = true}, SHIFT(328),
  [482] = {.count = 1, .reusable = true}, SHIFT(19),
  [484] = {.count = 1, .reusable = true}, SHIFT(161),
  [486] = {.count = 1, .reusable = true}, SHIFT(332),
  [488] = {.count = 1, .reusable = true}, SHIFT(63),
  [490] = {.count = 1, .reusable = true}, SHIFT(64),
  [492] = {.count = 1, .reusable = true}, SHIFT(37),
  [494] = {.count = 1, .reusable = true}, SHIFT(27),
  [496] = {.count = 1, .reusable = true}, SHIFT(28),
  [498] = {.count = 1, .reusable = true}, SHIFT(327),
  [500] = {.count = 1, .reusable = true}, SHIFT(111),
  [502] = {.count = 1, .reusable = true}, SHIFT(159),
  [504] = {.count = 1, .reusable = true}, SHIFT(92),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [510] = {.count = 1, .reusable = true}, SHIFT(271),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(281),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(274),
  [524] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(404),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(400),
  [532] = {.count = 1, .reusable = true}, SHIFT(268),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(399),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(360),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(359),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(371),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(348),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [569] = {.count = 1, .reusable = true}, SHIFT(387),
  [571] = {.count = 1, .reusable = true}, SHIFT(377),
  [573] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(398),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(325),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(395),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [586] = {.count = 1, .reusable = true}, SHIFT(398),
  [588] = {.count = 1, .reusable = true}, SHIFT(325),
  [590] = {.count = 1, .reusable = true}, SHIFT(395),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [602] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [604] = {.count = 1, .reusable = false}, SHIFT(270),
  [606] = {.count = 1, .reusable = false}, SHIFT(335),
  [608] = {.count = 1, .reusable = false}, SHIFT(405),
  [610] = {.count = 1, .reusable = false}, SHIFT(326),
  [612] = {.count = 1, .reusable = false}, SHIFT(411),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [616] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(335),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(405),
  [624] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(326),
  [627] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(411),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [632] = {.count = 1, .reusable = true}, SHIFT(368),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [638] = {.count = 1, .reusable = true}, SHIFT(352),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(368),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [645] = {.count = 1, .reusable = true}, SHIFT(366),
  [647] = {.count = 1, .reusable = false}, SHIFT(116),
  [649] = {.count = 1, .reusable = true}, SHIFT(318),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(380),
  [654] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [658] = {.count = 1, .reusable = false}, SHIFT(146),
  [660] = {.count = 1, .reusable = false}, SHIFT(313),
  [662] = {.count = 1, .reusable = true}, SHIFT(313),
  [664] = {.count = 1, .reusable = true}, SHIFT(380),
  [666] = {.count = 1, .reusable = true}, SHIFT(205),
  [668] = {.count = 1, .reusable = false}, SHIFT(147),
  [670] = {.count = 1, .reusable = true}, SHIFT(319),
  [672] = {.count = 1, .reusable = true}, SHIFT(211),
  [674] = {.count = 1, .reusable = false}, SHIFT(186),
  [676] = {.count = 1, .reusable = true}, SHIFT(311),
  [678] = {.count = 1, .reusable = false}, SHIFT(94),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [682] = {.count = 1, .reusable = false}, SHIFT(289),
  [684] = {.count = 1, .reusable = true}, SHIFT(289),
  [686] = {.count = 1, .reusable = true}, SHIFT(408),
  [688] = {.count = 1, .reusable = true}, SHIFT(347),
  [690] = {.count = 1, .reusable = false}, SHIFT(89),
  [692] = {.count = 1, .reusable = false}, SHIFT(308),
  [694] = {.count = 1, .reusable = true}, SHIFT(308),
  [696] = {.count = 1, .reusable = true}, SHIFT(295),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [700] = {.count = 1, .reusable = false}, SHIFT(183),
  [702] = {.count = 1, .reusable = false}, SHIFT(293),
  [704] = {.count = 1, .reusable = true}, SHIFT(293),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [708] = {.count = 1, .reusable = true}, SHIFT(294),
  [710] = {.count = 1, .reusable = true}, SHIFT(353),
  [712] = {.count = 1, .reusable = true}, SHIFT(372),
  [714] = {.count = 1, .reusable = true}, SHIFT(267),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [718] = {.count = 1, .reusable = true}, SHIFT(324),
  [720] = {.count = 1, .reusable = true}, SHIFT(370),
  [722] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(311),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(372),
  [730] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [732] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [734] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(313),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(313),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(408),
  [743] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [745] = {.count = 1, .reusable = true}, SHIFT(265),
  [747] = {.count = 1, .reusable = false}, SHIFT(126),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(61),
  [752] = {.count = 1, .reusable = false}, SHIFT(316),
  [754] = {.count = 1, .reusable = true}, SHIFT(316),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(60),
  [759] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [761] = {.count = 1, .reusable = true}, SHIFT(95),
  [763] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(350),
  [766] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [768] = {.count = 1, .reusable = true}, SHIFT(381),
  [770] = {.count = 1, .reusable = true}, SHIFT(358),
  [772] = {.count = 1, .reusable = false}, REDUCE(sym_command_part, 1),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym_command_part_var, 4),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_command_part_var, 5),
  [778] = {.count = 1, .reusable = true}, SHIFT(156),
  [780] = {.count = 1, .reusable = true}, SHIFT(130),
  [782] = {.count = 1, .reusable = true}, SHIFT(240),
  [784] = {.count = 1, .reusable = true}, SHIFT(410),
  [786] = {.count = 1, .reusable = true}, SHIFT(350),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [790] = {.count = 1, .reusable = true}, SHIFT(154),
  [792] = {.count = 1, .reusable = true}, SHIFT(152),
  [794] = {.count = 1, .reusable = true}, SHIFT(102),
  [796] = {.count = 1, .reusable = true}, SHIFT(133),
  [798] = {.count = 1, .reusable = true}, SHIFT(131),
  [800] = {.count = 1, .reusable = true}, SHIFT(98),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [804] = {.count = 1, .reusable = true}, SHIFT(137),
  [806] = {.count = 1, .reusable = true}, SHIFT(285),
  [808] = {.count = 1, .reusable = true}, SHIFT(284),
  [810] = {.count = 1, .reusable = true}, SHIFT(157),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [816] = {.count = 1, .reusable = true}, SHIFT(278),
  [818] = {.count = 1, .reusable = true}, SHIFT(198),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [822] = {.count = 1, .reusable = true}, SHIFT(333),
  [824] = {.count = 1, .reusable = true}, SHIFT(260),
  [826] = {.count = 1, .reusable = true}, SHIFT(242),
  [828] = {.count = 1, .reusable = true}, SHIFT(212),
  [830] = {.count = 1, .reusable = true}, SHIFT(288),
  [832] = {.count = 1, .reusable = true}, SHIFT(223),
  [834] = {.count = 1, .reusable = true}, SHIFT(239),
  [836] = {.count = 1, .reusable = true}, SHIFT(86),
  [838] = {.count = 1, .reusable = true}, SHIFT(303),
  [840] = {.count = 1, .reusable = true}, SHIFT(309),
  [842] = {.count = 1, .reusable = true}, SHIFT(138),
  [844] = {.count = 1, .reusable = true}, SHIFT(341),
  [846] = {.count = 1, .reusable = true}, SHIFT(290),
  [848] = {.count = 1, .reusable = true}, SHIFT(48),
  [850] = {.count = 1, .reusable = true}, SHIFT(82),
  [852] = {.count = 1, .reusable = true}, SHIFT(148),
  [854] = {.count = 1, .reusable = true}, SHIFT(258),
  [856] = {.count = 1, .reusable = true}, SHIFT(277),
  [858] = {.count = 1, .reusable = true}, SHIFT(202),
  [860] = {.count = 1, .reusable = true}, SHIFT(243),
  [862] = {.count = 1, .reusable = true}, SHIFT(342),
  [864] = {.count = 1, .reusable = true}, SHIFT(266),
  [866] = {.count = 1, .reusable = true}, SHIFT(389),
  [868] = {.count = 1, .reusable = true}, SHIFT(44),
  [870] = {.count = 1, .reusable = true}, SHIFT(43),
  [872] = {.count = 1, .reusable = true}, SHIFT(298),
  [874] = {.count = 1, .reusable = true}, SHIFT(279),
  [876] = {.count = 1, .reusable = true}, SHIFT(296),
  [878] = {.count = 1, .reusable = true}, SHIFT(407),
  [880] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [882] = {.count = 1, .reusable = true}, SHIFT(343),
  [884] = {.count = 1, .reusable = true}, SHIFT(369),
  [886] = {.count = 1, .reusable = true}, SHIFT(14),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [890] = {.count = 1, .reusable = true}, SHIFT(375),
  [892] = {.count = 1, .reusable = true}, SHIFT(306),
  [894] = {.count = 1, .reusable = true}, SHIFT(269),
  [896] = {.count = 1, .reusable = true}, SHIFT(175),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [900] = {.count = 1, .reusable = true}, SHIFT(143),
  [902] = {.count = 1, .reusable = true}, SHIFT(262),
  [904] = {.count = 1, .reusable = true}, SHIFT(3),
  [906] = {.count = 1, .reusable = true}, SHIFT(136),
  [908] = {.count = 1, .reusable = true}, SHIFT(76),
  [910] = {.count = 1, .reusable = true}, SHIFT(75),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [914] = {.count = 1, .reusable = true}, SHIFT(31),
  [916] = {.count = 1, .reusable = true}, SHIFT(4),
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
