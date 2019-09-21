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
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
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
  sym_boolean = 69,
  sym_primitive_type = 70,
  sym_string_literal = 71,
  sym_expression = 72,
  sym_member_access_expression = 73,
  sym_indexing_expression = 74,
  sym_if_then_expression = 75,
  sym_function_expression = 76,
  sym_parentheses_expression = 77,
  sym_dictionary_expression = 78,
  sym_bracket_expression = 79,
  sym_binary_expression = 80,
  sym_unary_expression = 81,
  sym_type = 82,
  sym_array_type = 83,
  sym_map_type = 84,
  sym_type_postfix_quantifier = 85,
  sym_runtime = 86,
  sym_runtime_kv = 87,
  sym_task_output = 88,
  sym_task_output_kv = 89,
  sym_parameter_meta = 90,
  sym_parameter_meta_kv = 91,
  sym_meta = 92,
  sym_meta_kv = 93,
  sym_task = 94,
  sym_task_sections = 95,
  sym_declaration = 96,
  sym_command = 97,
  sym_command_part = 98,
  sym_command_part_var = 99,
  sym_var_option = 100,
  sym_var_option_key = 101,
  sym_var_option_value = 102,
  sym_call = 103,
  sym_call_body = 104,
  sym_inputs = 105,
  sym_variable_mappings = 106,
  sym_variable_mapping_kv = 107,
  sym_namespaced_identifier = 108,
  sym_loop = 109,
  sym_conditional = 110,
  sym_document = 111,
  sym_import = 112,
  sym_workflow = 113,
  sym_workflow_element = 114,
  sym_scatter = 115,
  sym_scatter_iteration_statment = 116,
  sym_scatter_body = 117,
  aux_sym_string_literal_repeat1 = 118,
  aux_sym_string_literal_repeat2 = 119,
  aux_sym_function_expression_repeat1 = 120,
  aux_sym_dictionary_expression_repeat1 = 121,
  aux_sym_runtime_repeat1 = 122,
  aux_sym_task_output_repeat1 = 123,
  aux_sym_parameter_meta_repeat1 = 124,
  aux_sym_meta_repeat1 = 125,
  aux_sym_task_repeat1 = 126,
  aux_sym_task_sections_repeat1 = 127,
  aux_sym_command_repeat1 = 128,
  aux_sym_command_part_var_repeat1 = 129,
  aux_sym_variable_mappings_repeat1 = 130,
  aux_sym_namespaced_identifier_repeat1 = 131,
  aux_sym_loop_repeat1 = 132,
  aux_sym_document_repeat1 = 133,
  aux_sym_scatter_repeat1 = 134,
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
      if (lookahead == 0) ADVANCE(178);
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(76);
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
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '$') ADVANCE(358);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(76);
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
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '>') ADVANCE(323);
      if (lookahead == '?') ADVANCE(335);
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
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '>') ADVANCE(323);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '>') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '>') ADVANCE(323);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'q') ADVANCE(156);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(329);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(329);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '0') ADVANCE(267);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(314);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(349);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(317);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'j') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(345);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(144);
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
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(360);
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
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(21);
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
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(55);
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
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(369);
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
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(64);
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
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(54);
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
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 162:
      if (lookahead == 'w') ADVANCE(374);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 164:
      if (lookahead == '|') ADVANCE(315);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
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
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(317);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '>') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(357);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
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
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 9},
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
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
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
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 19},
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
  [259] = {.lex_state = 44},
  [260] = {.lex_state = 44},
  [261] = {.lex_state = 44},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 44},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 7},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 4},
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
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 2},
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 2},
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
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 2},
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
    [anon_sym_runtime] = ACTIONS(29),
    [anon_sym_task] = ACTIONS(31),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_import] = ACTIONS(35),
    [anon_sym_workflow] = ACTIONS(37),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
    [anon_sym_sep] = ACTIONS(41),
    [anon_sym_quote] = ACTIONS(41),
    [anon_sym_default] = ACTIONS(41),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
    [anon_sym_sep] = ACTIONS(41),
    [anon_sym_quote] = ACTIONS(41),
    [anon_sym_default] = ACTIONS(41),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
    [anon_sym_sep] = ACTIONS(41),
    [anon_sym_quote] = ACTIONS(41),
    [anon_sym_default] = ACTIONS(41),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
    [anon_sym_sep] = ACTIONS(41),
    [anon_sym_quote] = ACTIONS(41),
    [anon_sym_default] = ACTIONS(41),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
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
    [sym_identifier] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [82] = {
    [sym_identifier] = ACTIONS(105),
    [sym_integer] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_object_type] = ACTIONS(105),
    [anon_sym_Boolean] = ACTIONS(105),
    [anon_sym_Int] = ACTIONS(105),
    [anon_sym_Float] = ACTIONS(105),
    [anon_sym_File] = ACTIONS(105),
    [anon_sym_String] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(105),
    [anon_sym_Map] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_sep] = ACTIONS(105),
    [anon_sym_quote] = ACTIONS(105),
    [anon_sym_default] = ACTIONS(105),
  },
  [83] = {
    [sym_identifier] = ACTIONS(111),
    [sym_integer] = ACTIONS(111),
    [sym_float] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [sym_object_type] = ACTIONS(111),
    [anon_sym_Boolean] = ACTIONS(111),
    [anon_sym_Int] = ACTIONS(111),
    [anon_sym_Float] = ACTIONS(111),
    [anon_sym_File] = ACTIONS(111),
    [anon_sym_String] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(111),
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
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(111),
    [anon_sym_Map] = ACTIONS(111),
    [anon_sym_sep] = ACTIONS(111),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_default] = ACTIONS(111),
  },
  [84] = {
    [sym_identifier] = ACTIONS(115),
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
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [85] = {
    [sym_identifier] = ACTIONS(135),
    [sym_integer] = ACTIONS(135),
    [sym_float] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [sym_object_type] = ACTIONS(135),
    [anon_sym_Boolean] = ACTIONS(135),
    [anon_sym_Int] = ACTIONS(135),
    [anon_sym_Float] = ACTIONS(135),
    [anon_sym_File] = ACTIONS(135),
    [anon_sym_String] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_Array] = ACTIONS(135),
    [anon_sym_Map] = ACTIONS(135),
    [anon_sym_sep] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_default] = ACTIONS(135),
  },
  [86] = {
    [sym_object_type] = ACTIONS(107),
    [anon_sym_Boolean] = ACTIONS(107),
    [anon_sym_Int] = ACTIONS(107),
    [anon_sym_Float] = ACTIONS(107),
    [anon_sym_File] = ACTIONS(107),
    [anon_sym_String] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_then] = ACTIONS(107),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_Array] = ACTIONS(107),
    [anon_sym_Map] = ACTIONS(107),
    [anon_sym_runtime] = ACTIONS(107),
    [anon_sym_output] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_parameter_meta] = ACTIONS(107),
    [anon_sym_meta] = ACTIONS(107),
    [anon_sym_command] = ACTIONS(107),
    [anon_sym_call] = ACTIONS(107),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_scatter] = ACTIONS(107),
  },
  [87] = {
    [sym_identifier] = ACTIONS(145),
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
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
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
  [88] = {
    [sym_identifier] = ACTIONS(149),
    [sym_integer] = ACTIONS(149),
    [sym_float] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [sym_object_type] = ACTIONS(149),
    [anon_sym_Boolean] = ACTIONS(149),
    [anon_sym_Int] = ACTIONS(149),
    [anon_sym_Float] = ACTIONS(149),
    [anon_sym_File] = ACTIONS(149),
    [anon_sym_String] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_Array] = ACTIONS(149),
    [anon_sym_Map] = ACTIONS(149),
    [anon_sym_sep] = ACTIONS(149),
    [anon_sym_quote] = ACTIONS(149),
    [anon_sym_default] = ACTIONS(149),
  },
  [89] = {
    [sym_identifier] = ACTIONS(153),
    [sym_integer] = ACTIONS(153),
    [sym_float] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [sym_object_type] = ACTIONS(153),
    [anon_sym_Boolean] = ACTIONS(153),
    [anon_sym_Int] = ACTIONS(153),
    [anon_sym_Float] = ACTIONS(153),
    [anon_sym_File] = ACTIONS(153),
    [anon_sym_String] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_Array] = ACTIONS(153),
    [anon_sym_Map] = ACTIONS(153),
    [anon_sym_sep] = ACTIONS(153),
    [anon_sym_quote] = ACTIONS(153),
    [anon_sym_default] = ACTIONS(153),
  },
  [90] = {
    [sym_identifier] = ACTIONS(157),
    [sym_integer] = ACTIONS(157),
    [sym_float] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [sym_object_type] = ACTIONS(157),
    [anon_sym_Boolean] = ACTIONS(157),
    [anon_sym_Int] = ACTIONS(157),
    [anon_sym_Float] = ACTIONS(157),
    [anon_sym_File] = ACTIONS(157),
    [anon_sym_String] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(157),
    [anon_sym_Array] = ACTIONS(157),
    [anon_sym_Map] = ACTIONS(157),
    [anon_sym_sep] = ACTIONS(157),
    [anon_sym_quote] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
  },
  [91] = {
    [sym_identifier] = ACTIONS(161),
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
  [92] = {
    [sym_identifier] = ACTIONS(165),
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
  [93] = {
    [sym_identifier] = ACTIONS(169),
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
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(169),
    [anon_sym_Array] = ACTIONS(169),
    [anon_sym_Map] = ACTIONS(169),
    [anon_sym_sep] = ACTIONS(169),
    [anon_sym_quote] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(169),
  },
  [94] = {
    [sym_identifier] = ACTIONS(173),
    [sym_integer] = ACTIONS(173),
    [sym_float] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [sym_object_type] = ACTIONS(173),
    [anon_sym_Boolean] = ACTIONS(173),
    [anon_sym_Int] = ACTIONS(173),
    [anon_sym_Float] = ACTIONS(173),
    [anon_sym_File] = ACTIONS(173),
    [anon_sym_String] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_Array] = ACTIONS(173),
    [anon_sym_Map] = ACTIONS(173),
    [anon_sym_sep] = ACTIONS(173),
    [anon_sym_quote] = ACTIONS(173),
    [anon_sym_default] = ACTIONS(173),
  },
  [95] = {
    [sym_identifier] = ACTIONS(177),
    [sym_integer] = ACTIONS(177),
    [sym_float] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [sym_object_type] = ACTIONS(177),
    [anon_sym_Boolean] = ACTIONS(177),
    [anon_sym_Int] = ACTIONS(177),
    [anon_sym_Float] = ACTIONS(177),
    [anon_sym_File] = ACTIONS(177),
    [anon_sym_String] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_Array] = ACTIONS(177),
    [anon_sym_Map] = ACTIONS(177),
    [anon_sym_sep] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
  },
  [96] = {
    [sym_identifier] = ACTIONS(181),
    [sym_integer] = ACTIONS(181),
    [sym_float] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [sym_object_type] = ACTIONS(181),
    [anon_sym_Boolean] = ACTIONS(181),
    [anon_sym_Int] = ACTIONS(181),
    [anon_sym_Float] = ACTIONS(181),
    [anon_sym_File] = ACTIONS(181),
    [anon_sym_String] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(181),
    [anon_sym_Array] = ACTIONS(181),
    [anon_sym_Map] = ACTIONS(181),
    [anon_sym_sep] = ACTIONS(181),
    [anon_sym_quote] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
  },
  [97] = {
    [sym_identifier] = ACTIONS(185),
    [sym_integer] = ACTIONS(185),
    [sym_float] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [sym_object_type] = ACTIONS(185),
    [anon_sym_Boolean] = ACTIONS(185),
    [anon_sym_Int] = ACTIONS(185),
    [anon_sym_Float] = ACTIONS(185),
    [anon_sym_File] = ACTIONS(185),
    [anon_sym_String] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_Array] = ACTIONS(185),
    [anon_sym_Map] = ACTIONS(185),
    [anon_sym_sep] = ACTIONS(185),
    [anon_sym_quote] = ACTIONS(185),
    [anon_sym_default] = ACTIONS(185),
  },
  [98] = {
    [sym_identifier] = ACTIONS(189),
    [sym_integer] = ACTIONS(189),
    [sym_float] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [sym_object_type] = ACTIONS(189),
    [anon_sym_Boolean] = ACTIONS(189),
    [anon_sym_Int] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(189),
    [anon_sym_File] = ACTIONS(189),
    [anon_sym_String] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(189),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Map] = ACTIONS(189),
    [anon_sym_sep] = ACTIONS(189),
    [anon_sym_quote] = ACTIONS(189),
    [anon_sym_default] = ACTIONS(189),
  },
  [99] = {
    [sym_identifier] = ACTIONS(193),
    [sym_integer] = ACTIONS(193),
    [sym_float] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [sym_object_type] = ACTIONS(193),
    [anon_sym_Boolean] = ACTIONS(193),
    [anon_sym_Int] = ACTIONS(193),
    [anon_sym_Float] = ACTIONS(193),
    [anon_sym_File] = ACTIONS(193),
    [anon_sym_String] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_Array] = ACTIONS(193),
    [anon_sym_Map] = ACTIONS(193),
    [anon_sym_sep] = ACTIONS(193),
    [anon_sym_quote] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(193),
  },
  [100] = {
    [sym_identifier] = ACTIONS(197),
    [sym_integer] = ACTIONS(197),
    [sym_float] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [sym_object_type] = ACTIONS(197),
    [anon_sym_Boolean] = ACTIONS(197),
    [anon_sym_Int] = ACTIONS(197),
    [anon_sym_Float] = ACTIONS(197),
    [anon_sym_File] = ACTIONS(197),
    [anon_sym_String] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(197),
    [anon_sym_Array] = ACTIONS(197),
    [anon_sym_Map] = ACTIONS(197),
    [anon_sym_sep] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_default] = ACTIONS(197),
  },
  [101] = {
    [sym_identifier] = ACTIONS(201),
    [sym_integer] = ACTIONS(201),
    [sym_float] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [sym_object_type] = ACTIONS(201),
    [anon_sym_Boolean] = ACTIONS(201),
    [anon_sym_Int] = ACTIONS(201),
    [anon_sym_Float] = ACTIONS(201),
    [anon_sym_File] = ACTIONS(201),
    [anon_sym_String] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_Array] = ACTIONS(201),
    [anon_sym_Map] = ACTIONS(201),
    [anon_sym_sep] = ACTIONS(201),
    [anon_sym_quote] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
  },
  [102] = {
    [sym_identifier] = ACTIONS(205),
    [sym_integer] = ACTIONS(205),
    [sym_float] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [sym_object_type] = ACTIONS(205),
    [anon_sym_Boolean] = ACTIONS(205),
    [anon_sym_Int] = ACTIONS(205),
    [anon_sym_Float] = ACTIONS(205),
    [anon_sym_File] = ACTIONS(205),
    [anon_sym_String] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(205),
    [anon_sym_Array] = ACTIONS(205),
    [anon_sym_Map] = ACTIONS(205),
    [anon_sym_sep] = ACTIONS(205),
    [anon_sym_quote] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
  },
  [103] = {
    [sym_identifier] = ACTIONS(209),
    [sym_integer] = ACTIONS(209),
    [sym_float] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [sym_object_type] = ACTIONS(209),
    [anon_sym_Boolean] = ACTIONS(209),
    [anon_sym_Int] = ACTIONS(209),
    [anon_sym_Float] = ACTIONS(209),
    [anon_sym_File] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(209),
    [anon_sym_Array] = ACTIONS(209),
    [anon_sym_Map] = ACTIONS(209),
    [anon_sym_sep] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_default] = ACTIONS(209),
  },
  [104] = {
    [sym_identifier] = ACTIONS(115),
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
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [105] = {
    [sym_identifier] = ACTIONS(213),
    [sym_integer] = ACTIONS(213),
    [sym_float] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(213),
    [sym_object_type] = ACTIONS(213),
    [anon_sym_Boolean] = ACTIONS(213),
    [anon_sym_Int] = ACTIONS(213),
    [anon_sym_Float] = ACTIONS(213),
    [anon_sym_File] = ACTIONS(213),
    [anon_sym_String] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_if] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_Array] = ACTIONS(213),
    [anon_sym_Map] = ACTIONS(213),
    [anon_sym_sep] = ACTIONS(213),
    [anon_sym_quote] = ACTIONS(213),
    [anon_sym_default] = ACTIONS(213),
  },
  [106] = {
    [sym_identifier] = ACTIONS(115),
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
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [107] = {
    [sym_identifier] = ACTIONS(115),
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
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [108] = {
    [sym_identifier] = ACTIONS(115),
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
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [109] = {
    [sym_identifier] = ACTIONS(115),
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
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [110] = {
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
  [111] = {
    [sym_object_type] = ACTIONS(203),
    [anon_sym_Boolean] = ACTIONS(203),
    [anon_sym_Int] = ACTIONS(203),
    [anon_sym_Float] = ACTIONS(203),
    [anon_sym_File] = ACTIONS(203),
    [anon_sym_String] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_then] = ACTIONS(203),
    [anon_sym_else] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_Array] = ACTIONS(203),
    [anon_sym_Map] = ACTIONS(203),
    [anon_sym_runtime] = ACTIONS(203),
    [anon_sym_output] = ACTIONS(203),
    [anon_sym_parameter_meta] = ACTIONS(203),
    [anon_sym_meta] = ACTIONS(203),
    [anon_sym_command] = ACTIONS(203),
    [anon_sym_call] = ACTIONS(203),
    [anon_sym_while] = ACTIONS(203),
    [anon_sym_scatter] = ACTIONS(203),
  },
  [112] = {
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_then] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_runtime] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_parameter_meta] = ACTIONS(117),
    [anon_sym_meta] = ACTIONS(117),
    [anon_sym_command] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_scatter] = ACTIONS(117),
  },
  [113] = {
    [sym_object_type] = ACTIONS(187),
    [anon_sym_Boolean] = ACTIONS(187),
    [anon_sym_Int] = ACTIONS(187),
    [anon_sym_Float] = ACTIONS(187),
    [anon_sym_File] = ACTIONS(187),
    [anon_sym_String] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_then] = ACTIONS(187),
    [anon_sym_else] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_Array] = ACTIONS(187),
    [anon_sym_Map] = ACTIONS(187),
    [anon_sym_runtime] = ACTIONS(187),
    [anon_sym_output] = ACTIONS(187),
    [anon_sym_parameter_meta] = ACTIONS(187),
    [anon_sym_meta] = ACTIONS(187),
    [anon_sym_command] = ACTIONS(187),
    [anon_sym_call] = ACTIONS(187),
    [anon_sym_while] = ACTIONS(187),
    [anon_sym_scatter] = ACTIONS(187),
  },
  [114] = {
    [sym_object_type] = ACTIONS(211),
    [anon_sym_Boolean] = ACTIONS(211),
    [anon_sym_Int] = ACTIONS(211),
    [anon_sym_Float] = ACTIONS(211),
    [anon_sym_File] = ACTIONS(211),
    [anon_sym_String] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_then] = ACTIONS(211),
    [anon_sym_else] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_Array] = ACTIONS(211),
    [anon_sym_Map] = ACTIONS(211),
    [anon_sym_runtime] = ACTIONS(211),
    [anon_sym_output] = ACTIONS(211),
    [anon_sym_parameter_meta] = ACTIONS(211),
    [anon_sym_meta] = ACTIONS(211),
    [anon_sym_command] = ACTIONS(211),
    [anon_sym_call] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(211),
    [anon_sym_scatter] = ACTIONS(211),
  },
  [115] = {
    [sym_object_type] = ACTIONS(215),
    [anon_sym_Boolean] = ACTIONS(215),
    [anon_sym_Int] = ACTIONS(215),
    [anon_sym_Float] = ACTIONS(215),
    [anon_sym_File] = ACTIONS(215),
    [anon_sym_String] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_then] = ACTIONS(215),
    [anon_sym_else] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_Array] = ACTIONS(215),
    [anon_sym_Map] = ACTIONS(215),
    [anon_sym_runtime] = ACTIONS(215),
    [anon_sym_output] = ACTIONS(215),
    [anon_sym_parameter_meta] = ACTIONS(215),
    [anon_sym_meta] = ACTIONS(215),
    [anon_sym_command] = ACTIONS(215),
    [anon_sym_call] = ACTIONS(215),
    [anon_sym_while] = ACTIONS(215),
    [anon_sym_scatter] = ACTIONS(215),
  },
  [116] = {
    [sym_object_type] = ACTIONS(155),
    [anon_sym_Boolean] = ACTIONS(155),
    [anon_sym_Int] = ACTIONS(155),
    [anon_sym_Float] = ACTIONS(155),
    [anon_sym_File] = ACTIONS(155),
    [anon_sym_String] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_then] = ACTIONS(155),
    [anon_sym_else] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_Array] = ACTIONS(155),
    [anon_sym_Map] = ACTIONS(155),
    [anon_sym_runtime] = ACTIONS(155),
    [anon_sym_output] = ACTIONS(155),
    [anon_sym_parameter_meta] = ACTIONS(155),
    [anon_sym_meta] = ACTIONS(155),
    [anon_sym_command] = ACTIONS(155),
    [anon_sym_call] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_scatter] = ACTIONS(155),
  },
  [117] = {
    [sym_object_type] = ACTIONS(151),
    [anon_sym_Boolean] = ACTIONS(151),
    [anon_sym_Int] = ACTIONS(151),
    [anon_sym_Float] = ACTIONS(151),
    [anon_sym_File] = ACTIONS(151),
    [anon_sym_String] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_then] = ACTIONS(151),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_Array] = ACTIONS(151),
    [anon_sym_Map] = ACTIONS(151),
    [anon_sym_runtime] = ACTIONS(151),
    [anon_sym_output] = ACTIONS(151),
    [anon_sym_parameter_meta] = ACTIONS(151),
    [anon_sym_meta] = ACTIONS(151),
    [anon_sym_command] = ACTIONS(151),
    [anon_sym_call] = ACTIONS(151),
    [anon_sym_while] = ACTIONS(151),
    [anon_sym_scatter] = ACTIONS(151),
  },
  [118] = {
    [sym_object_type] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Int] = ACTIONS(147),
    [anon_sym_Float] = ACTIONS(147),
    [anon_sym_File] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
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
  [119] = {
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_then] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_runtime] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_parameter_meta] = ACTIONS(117),
    [anon_sym_meta] = ACTIONS(117),
    [anon_sym_command] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_scatter] = ACTIONS(117),
  },
  [120] = {
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_then] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_runtime] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_parameter_meta] = ACTIONS(117),
    [anon_sym_meta] = ACTIONS(117),
    [anon_sym_command] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_scatter] = ACTIONS(117),
  },
  [121] = {
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_then] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_runtime] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_parameter_meta] = ACTIONS(117),
    [anon_sym_meta] = ACTIONS(117),
    [anon_sym_command] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_scatter] = ACTIONS(117),
  },
  [122] = {
    [sym_object_type] = ACTIONS(159),
    [anon_sym_Boolean] = ACTIONS(159),
    [anon_sym_Int] = ACTIONS(159),
    [anon_sym_Float] = ACTIONS(159),
    [anon_sym_File] = ACTIONS(159),
    [anon_sym_String] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_then] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_Array] = ACTIONS(159),
    [anon_sym_Map] = ACTIONS(159),
    [anon_sym_runtime] = ACTIONS(159),
    [anon_sym_output] = ACTIONS(159),
    [anon_sym_parameter_meta] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(159),
    [anon_sym_command] = ACTIONS(159),
    [anon_sym_call] = ACTIONS(159),
    [anon_sym_while] = ACTIONS(159),
    [anon_sym_scatter] = ACTIONS(159),
  },
  [123] = {
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
  [124] = {
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_then] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_runtime] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_parameter_meta] = ACTIONS(117),
    [anon_sym_meta] = ACTIONS(117),
    [anon_sym_command] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_scatter] = ACTIONS(117),
  },
  [125] = {
    [sym_object_type] = ACTIONS(171),
    [anon_sym_Boolean] = ACTIONS(171),
    [anon_sym_Int] = ACTIONS(171),
    [anon_sym_Float] = ACTIONS(171),
    [anon_sym_File] = ACTIONS(171),
    [anon_sym_String] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(169),
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
  [126] = {
    [sym_object_type] = ACTIONS(175),
    [anon_sym_Boolean] = ACTIONS(175),
    [anon_sym_Int] = ACTIONS(175),
    [anon_sym_Float] = ACTIONS(175),
    [anon_sym_File] = ACTIONS(175),
    [anon_sym_String] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_then] = ACTIONS(175),
    [anon_sym_else] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_Array] = ACTIONS(175),
    [anon_sym_Map] = ACTIONS(175),
    [anon_sym_runtime] = ACTIONS(175),
    [anon_sym_output] = ACTIONS(175),
    [anon_sym_parameter_meta] = ACTIONS(175),
    [anon_sym_meta] = ACTIONS(175),
    [anon_sym_command] = ACTIONS(175),
    [anon_sym_call] = ACTIONS(175),
    [anon_sym_while] = ACTIONS(175),
    [anon_sym_scatter] = ACTIONS(175),
  },
  [127] = {
    [sym_object_type] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Int] = ACTIONS(117),
    [anon_sym_Float] = ACTIONS(117),
    [anon_sym_File] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_then] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Map] = ACTIONS(117),
    [anon_sym_runtime] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_parameter_meta] = ACTIONS(117),
    [anon_sym_meta] = ACTIONS(117),
    [anon_sym_command] = ACTIONS(117),
    [anon_sym_call] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(117),
    [anon_sym_scatter] = ACTIONS(117),
  },
  [128] = {
    [sym_object_type] = ACTIONS(195),
    [anon_sym_Boolean] = ACTIONS(195),
    [anon_sym_Int] = ACTIONS(195),
    [anon_sym_Float] = ACTIONS(195),
    [anon_sym_File] = ACTIONS(195),
    [anon_sym_String] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_then] = ACTIONS(195),
    [anon_sym_else] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_Array] = ACTIONS(195),
    [anon_sym_Map] = ACTIONS(195),
    [anon_sym_runtime] = ACTIONS(195),
    [anon_sym_output] = ACTIONS(195),
    [anon_sym_parameter_meta] = ACTIONS(195),
    [anon_sym_meta] = ACTIONS(195),
    [anon_sym_command] = ACTIONS(195),
    [anon_sym_call] = ACTIONS(195),
    [anon_sym_while] = ACTIONS(195),
    [anon_sym_scatter] = ACTIONS(195),
  },
  [129] = {
    [sym_object_type] = ACTIONS(199),
    [anon_sym_Boolean] = ACTIONS(199),
    [anon_sym_Int] = ACTIONS(199),
    [anon_sym_Float] = ACTIONS(199),
    [anon_sym_File] = ACTIONS(199),
    [anon_sym_String] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_then] = ACTIONS(199),
    [anon_sym_else] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(199),
    [anon_sym_Map] = ACTIONS(199),
    [anon_sym_runtime] = ACTIONS(199),
    [anon_sym_output] = ACTIONS(199),
    [anon_sym_parameter_meta] = ACTIONS(199),
    [anon_sym_meta] = ACTIONS(199),
    [anon_sym_command] = ACTIONS(199),
    [anon_sym_call] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_scatter] = ACTIONS(199),
  },
  [130] = {
    [sym_object_type] = ACTIONS(207),
    [anon_sym_Boolean] = ACTIONS(207),
    [anon_sym_Int] = ACTIONS(207),
    [anon_sym_Float] = ACTIONS(207),
    [anon_sym_File] = ACTIONS(207),
    [anon_sym_String] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_then] = ACTIONS(207),
    [anon_sym_else] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_Array] = ACTIONS(207),
    [anon_sym_Map] = ACTIONS(207),
    [anon_sym_runtime] = ACTIONS(207),
    [anon_sym_output] = ACTIONS(207),
    [anon_sym_parameter_meta] = ACTIONS(207),
    [anon_sym_meta] = ACTIONS(207),
    [anon_sym_command] = ACTIONS(207),
    [anon_sym_call] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(207),
    [anon_sym_scatter] = ACTIONS(207),
  },
  [131] = {
    [sym_object_type] = ACTIONS(179),
    [anon_sym_Boolean] = ACTIONS(179),
    [anon_sym_Int] = ACTIONS(179),
    [anon_sym_Float] = ACTIONS(179),
    [anon_sym_File] = ACTIONS(179),
    [anon_sym_String] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_then] = ACTIONS(179),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_Array] = ACTIONS(179),
    [anon_sym_Map] = ACTIONS(179),
    [anon_sym_runtime] = ACTIONS(179),
    [anon_sym_output] = ACTIONS(179),
    [anon_sym_parameter_meta] = ACTIONS(179),
    [anon_sym_meta] = ACTIONS(179),
    [anon_sym_command] = ACTIONS(179),
    [anon_sym_call] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_scatter] = ACTIONS(179),
  },
  [132] = {
    [sym_object_type] = ACTIONS(183),
    [anon_sym_Boolean] = ACTIONS(183),
    [anon_sym_Int] = ACTIONS(183),
    [anon_sym_Float] = ACTIONS(183),
    [anon_sym_File] = ACTIONS(183),
    [anon_sym_String] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(183),
    [anon_sym_Map] = ACTIONS(183),
    [anon_sym_runtime] = ACTIONS(183),
    [anon_sym_output] = ACTIONS(183),
    [anon_sym_parameter_meta] = ACTIONS(183),
    [anon_sym_meta] = ACTIONS(183),
    [anon_sym_command] = ACTIONS(183),
    [anon_sym_call] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_scatter] = ACTIONS(183),
  },
  [133] = {
    [sym_object_type] = ACTIONS(191),
    [anon_sym_Boolean] = ACTIONS(191),
    [anon_sym_Int] = ACTIONS(191),
    [anon_sym_Float] = ACTIONS(191),
    [anon_sym_File] = ACTIONS(191),
    [anon_sym_String] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_then] = ACTIONS(191),
    [anon_sym_else] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_Array] = ACTIONS(191),
    [anon_sym_Map] = ACTIONS(191),
    [anon_sym_runtime] = ACTIONS(191),
    [anon_sym_output] = ACTIONS(191),
    [anon_sym_parameter_meta] = ACTIONS(191),
    [anon_sym_meta] = ACTIONS(191),
    [anon_sym_command] = ACTIONS(191),
    [anon_sym_call] = ACTIONS(191),
    [anon_sym_while] = ACTIONS(191),
    [anon_sym_scatter] = ACTIONS(191),
  },
  [134] = {
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
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_Array] = ACTIONS(113),
    [anon_sym_Map] = ACTIONS(113),
    [anon_sym_runtime] = ACTIONS(113),
    [anon_sym_output] = ACTIONS(113),
    [anon_sym_parameter_meta] = ACTIONS(113),
    [anon_sym_meta] = ACTIONS(113),
    [anon_sym_command] = ACTIONS(113),
    [anon_sym_call] = ACTIONS(113),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_scatter] = ACTIONS(113),
  },
  [135] = {
    [sym_var_option] = STATE(135),
    [sym_var_option_key] = STATE(396),
    [aux_sym_command_part_var_repeat1] = STATE(135),
    [sym_identifier] = ACTIONS(237),
    [sym_integer] = ACTIONS(237),
    [sym_float] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(237),
    [anon_sym_Int] = ACTIONS(237),
    [anon_sym_Float] = ACTIONS(237),
    [anon_sym_File] = ACTIONS(237),
    [anon_sym_String] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_BANG] = ACTIONS(242),
    [anon_sym_Array] = ACTIONS(237),
    [anon_sym_Map] = ACTIONS(237),
    [anon_sym_sep] = ACTIONS(239),
    [anon_sym_quote] = ACTIONS(239),
    [anon_sym_default] = ACTIONS(239),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_parameter_meta] = ACTIONS(256),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_scatter] = ACTIONS(264),
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
    [sym_object_type] = ACTIONS(280),
    [anon_sym_Boolean] = ACTIONS(283),
    [anon_sym_Int] = ACTIONS(283),
    [anon_sym_Float] = ACTIONS(283),
    [anon_sym_File] = ACTIONS(283),
    [anon_sym_String] = ACTIONS(283),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_Array] = ACTIONS(291),
    [anon_sym_Map] = ACTIONS(294),
    [anon_sym_parameter_meta] = ACTIONS(297),
    [anon_sym_meta] = ACTIONS(300),
    [anon_sym_call] = ACTIONS(303),
    [anon_sym_while] = ACTIONS(306),
    [anon_sym_scatter] = ACTIONS(309),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_runtime] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(314),
    [anon_sym_parameter_meta] = ACTIONS(316),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_command] = ACTIONS(318),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_task] = ACTIONS(175),
    [anon_sym_as] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(175),
    [anon_sym_workflow] = ACTIONS(175),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_task] = ACTIONS(155),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_import] = ACTIONS(155),
    [anon_sym_workflow] = ACTIONS(155),
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
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
    [anon_sym_runtime] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(314),
    [anon_sym_parameter_meta] = ACTIONS(316),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_command] = ACTIONS(318),
  },
  [149] = {
    [sym_identifier] = ACTIONS(320),
    [sym_integer] = ACTIONS(320),
    [sym_float] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(320),
    [anon_sym_false] = ACTIONS(320),
    [sym_object_type] = ACTIONS(320),
    [anon_sym_Boolean] = ACTIONS(320),
    [anon_sym_Int] = ACTIONS(320),
    [anon_sym_Float] = ACTIONS(320),
    [anon_sym_File] = ACTIONS(320),
    [anon_sym_String] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_BANG] = ACTIONS(322),
    [anon_sym_Array] = ACTIONS(320),
    [anon_sym_Map] = ACTIONS(320),
    [anon_sym_sep] = ACTIONS(320),
    [anon_sym_quote] = ACTIONS(320),
    [anon_sym_default] = ACTIONS(320),
  },
  [150] = {
    [sym_object_type] = ACTIONS(324),
    [anon_sym_Boolean] = ACTIONS(324),
    [anon_sym_Int] = ACTIONS(324),
    [anon_sym_Float] = ACTIONS(324),
    [anon_sym_File] = ACTIONS(324),
    [anon_sym_String] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(324),
    [anon_sym_Map] = ACTIONS(324),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(209),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(189),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
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
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(111),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(177),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_identifier] = ACTIONS(163),
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
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(205),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(326),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_identifier] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(169),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(201),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(213),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_identifier] = ACTIONS(167),
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
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(193),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(149),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(157),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
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
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(185),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [175] = {
    [sym_identifier] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(348),
  },
  [176] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(200),
    [sym_object_type] = ACTIONS(350),
    [anon_sym_Boolean] = ACTIONS(350),
    [anon_sym_Int] = ACTIONS(350),
    [anon_sym_Float] = ACTIONS(350),
    [anon_sym_File] = ACTIONS(350),
    [anon_sym_String] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_if] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_Array] = ACTIONS(350),
    [anon_sym_Map] = ACTIONS(350),
    [anon_sym_parameter_meta] = ACTIONS(350),
    [anon_sym_meta] = ACTIONS(350),
    [anon_sym_call] = ACTIONS(350),
    [anon_sym_as] = ACTIONS(350),
    [anon_sym_while] = ACTIONS(350),
    [anon_sym_scatter] = ACTIONS(350),
  },
  [177] = {
    [aux_sym_function_expression_repeat1] = STATE(330),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [178] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [179] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_declaration] = STATE(179),
    [aux_sym_task_repeat1] = STATE(179),
    [sym_object_type] = ACTIONS(362),
    [anon_sym_Boolean] = ACTIONS(365),
    [anon_sym_Int] = ACTIONS(365),
    [anon_sym_Float] = ACTIONS(365),
    [anon_sym_File] = ACTIONS(365),
    [anon_sym_String] = ACTIONS(365),
    [anon_sym_Array] = ACTIONS(368),
    [anon_sym_Map] = ACTIONS(371),
    [anon_sym_runtime] = ACTIONS(374),
    [anon_sym_output] = ACTIONS(374),
    [anon_sym_parameter_meta] = ACTIONS(374),
    [anon_sym_meta] = ACTIONS(374),
    [anon_sym_command] = ACTIONS(374),
  },
  [180] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [181] = {
    [aux_sym_function_expression_repeat1] = STATE(339),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [182] = {
    [aux_sym_function_expression_repeat1] = STATE(338),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [183] = {
    [sym_identifier] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(153),
  },
  [184] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [185] = {
    [aux_sym_function_expression_repeat1] = STATE(345),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [186] = {
    [sym_identifier] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(173),
  },
  [187] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [188] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(322),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(394),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [189] = {
    [aux_sym_function_expression_repeat1] = STATE(329),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [190] = {
    [aux_sym_function_expression_repeat1] = STATE(340),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [191] = {
    [sym_identifier] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(185),
  },
  [192] = {
    [sym_identifier] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [193] = {
    [sym_identifier] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [194] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(344),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [195] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(337),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [196] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [197] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [198] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(176),
    [sym_object_type] = ACTIONS(408),
    [anon_sym_Boolean] = ACTIONS(408),
    [anon_sym_Int] = ACTIONS(408),
    [anon_sym_Float] = ACTIONS(408),
    [anon_sym_File] = ACTIONS(408),
    [anon_sym_String] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_if] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_Array] = ACTIONS(408),
    [anon_sym_Map] = ACTIONS(408),
    [anon_sym_parameter_meta] = ACTIONS(408),
    [anon_sym_meta] = ACTIONS(408),
    [anon_sym_call] = ACTIONS(408),
    [anon_sym_as] = ACTIONS(408),
    [anon_sym_while] = ACTIONS(408),
    [anon_sym_scatter] = ACTIONS(408),
  },
  [199] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [200] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(200),
    [sym_object_type] = ACTIONS(410),
    [anon_sym_Boolean] = ACTIONS(410),
    [anon_sym_Int] = ACTIONS(410),
    [anon_sym_Float] = ACTIONS(410),
    [anon_sym_File] = ACTIONS(410),
    [anon_sym_String] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(412),
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
  [201] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [202] = {
    [sym_parameter_meta_kv] = STATE(364),
    [aux_sym_parameter_meta_repeat1] = STATE(209),
    [sym_identifier] = ACTIONS(417),
    [sym_object_type] = ACTIONS(419),
    [anon_sym_Boolean] = ACTIONS(419),
    [anon_sym_Int] = ACTIONS(419),
    [anon_sym_Float] = ACTIONS(419),
    [anon_sym_File] = ACTIONS(419),
    [anon_sym_String] = ACTIONS(419),
    [anon_sym_if] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_Array] = ACTIONS(419),
    [anon_sym_Map] = ACTIONS(419),
    [anon_sym_parameter_meta] = ACTIONS(419),
    [anon_sym_meta] = ACTIONS(419),
    [anon_sym_call] = ACTIONS(419),
    [anon_sym_while] = ACTIONS(419),
    [anon_sym_scatter] = ACTIONS(419),
  },
  [203] = {
    [sym_parameter_meta_kv] = STATE(364),
    [aux_sym_parameter_meta_repeat1] = STATE(203),
    [sym_identifier] = ACTIONS(423),
    [sym_object_type] = ACTIONS(426),
    [anon_sym_Boolean] = ACTIONS(426),
    [anon_sym_Int] = ACTIONS(426),
    [anon_sym_Float] = ACTIONS(426),
    [anon_sym_File] = ACTIONS(426),
    [anon_sym_String] = ACTIONS(426),
    [anon_sym_if] = ACTIONS(426),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_Array] = ACTIONS(426),
    [anon_sym_Map] = ACTIONS(426),
    [anon_sym_parameter_meta] = ACTIONS(426),
    [anon_sym_meta] = ACTIONS(426),
    [anon_sym_call] = ACTIONS(426),
    [anon_sym_while] = ACTIONS(426),
    [anon_sym_scatter] = ACTIONS(426),
  },
  [204] = {
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(430),
  },
  [205] = {
    [sym_object_type] = ACTIONS(432),
    [anon_sym_Boolean] = ACTIONS(432),
    [anon_sym_Int] = ACTIONS(432),
    [anon_sym_Float] = ACTIONS(432),
    [anon_sym_File] = ACTIONS(432),
    [anon_sym_String] = ACTIONS(432),
    [anon_sym_if] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_Array] = ACTIONS(432),
    [anon_sym_Map] = ACTIONS(432),
    [anon_sym_runtime] = ACTIONS(432),
    [anon_sym_output] = ACTIONS(432),
    [anon_sym_parameter_meta] = ACTIONS(432),
    [anon_sym_meta] = ACTIONS(432),
    [anon_sym_command] = ACTIONS(432),
    [anon_sym_call] = ACTIONS(432),
    [anon_sym_while] = ACTIONS(432),
    [anon_sym_scatter] = ACTIONS(432),
  },
  [206] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [207] = {
    [sym_identifier] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [208] = {
    [sym_call_body] = STATE(250),
    [sym_object_type] = ACTIONS(438),
    [anon_sym_Boolean] = ACTIONS(438),
    [anon_sym_Int] = ACTIONS(438),
    [anon_sym_Float] = ACTIONS(438),
    [anon_sym_File] = ACTIONS(438),
    [anon_sym_String] = ACTIONS(438),
    [anon_sym_if] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_Array] = ACTIONS(438),
    [anon_sym_Map] = ACTIONS(438),
    [anon_sym_parameter_meta] = ACTIONS(438),
    [anon_sym_meta] = ACTIONS(438),
    [anon_sym_call] = ACTIONS(438),
    [anon_sym_as] = ACTIONS(442),
    [anon_sym_while] = ACTIONS(438),
    [anon_sym_scatter] = ACTIONS(438),
  },
  [209] = {
    [sym_parameter_meta_kv] = STATE(364),
    [aux_sym_parameter_meta_repeat1] = STATE(203),
    [sym_identifier] = ACTIONS(417),
    [sym_object_type] = ACTIONS(444),
    [anon_sym_Boolean] = ACTIONS(444),
    [anon_sym_Int] = ACTIONS(444),
    [anon_sym_Float] = ACTIONS(444),
    [anon_sym_File] = ACTIONS(444),
    [anon_sym_String] = ACTIONS(444),
    [anon_sym_if] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_Array] = ACTIONS(444),
    [anon_sym_Map] = ACTIONS(444),
    [anon_sym_parameter_meta] = ACTIONS(444),
    [anon_sym_meta] = ACTIONS(444),
    [anon_sym_call] = ACTIONS(444),
    [anon_sym_while] = ACTIONS(444),
    [anon_sym_scatter] = ACTIONS(444),
  },
  [210] = {
    [sym_identifier] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(378),
  },
  [211] = {
    [sym_object_type] = ACTIONS(450),
    [anon_sym_Boolean] = ACTIONS(450),
    [anon_sym_Int] = ACTIONS(450),
    [anon_sym_Float] = ACTIONS(450),
    [anon_sym_File] = ACTIONS(450),
    [anon_sym_String] = ACTIONS(450),
    [anon_sym_if] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(450),
    [anon_sym_Array] = ACTIONS(450),
    [anon_sym_Map] = ACTIONS(450),
    [anon_sym_runtime] = ACTIONS(450),
    [anon_sym_output] = ACTIONS(450),
    [anon_sym_parameter_meta] = ACTIONS(450),
    [anon_sym_meta] = ACTIONS(450),
    [anon_sym_command] = ACTIONS(450),
    [anon_sym_call] = ACTIONS(450),
    [anon_sym_while] = ACTIONS(450),
    [anon_sym_scatter] = ACTIONS(450),
  },
  [212] = {
    [sym_object_type] = ACTIONS(410),
    [anon_sym_Boolean] = ACTIONS(410),
    [anon_sym_Int] = ACTIONS(410),
    [anon_sym_Float] = ACTIONS(410),
    [anon_sym_File] = ACTIONS(410),
    [anon_sym_String] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(410),
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
  [213] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(452),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [214] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [217] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [218] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [219] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [220] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [221] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(468),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [222] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [223] = {
    [sym_call_body] = STATE(241),
    [sym_object_type] = ACTIONS(472),
    [anon_sym_Boolean] = ACTIONS(472),
    [anon_sym_Int] = ACTIONS(472),
    [anon_sym_Float] = ACTIONS(472),
    [anon_sym_File] = ACTIONS(472),
    [anon_sym_String] = ACTIONS(472),
    [anon_sym_if] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_Array] = ACTIONS(472),
    [anon_sym_Map] = ACTIONS(472),
    [anon_sym_parameter_meta] = ACTIONS(472),
    [anon_sym_meta] = ACTIONS(472),
    [anon_sym_call] = ACTIONS(472),
    [anon_sym_while] = ACTIONS(472),
    [anon_sym_scatter] = ACTIONS(472),
  },
  [224] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [226] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [228] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [229] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [230] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [231] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [232] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [233] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [234] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [235] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [236] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [237] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [238] = {
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [239] = {
    [sym_identifier] = ACTIONS(426),
    [sym_object_type] = ACTIONS(426),
    [anon_sym_Boolean] = ACTIONS(426),
    [anon_sym_Int] = ACTIONS(426),
    [anon_sym_Float] = ACTIONS(426),
    [anon_sym_File] = ACTIONS(426),
    [anon_sym_String] = ACTIONS(426),
    [anon_sym_if] = ACTIONS(426),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_Array] = ACTIONS(426),
    [anon_sym_Map] = ACTIONS(426),
    [anon_sym_parameter_meta] = ACTIONS(426),
    [anon_sym_meta] = ACTIONS(426),
    [anon_sym_call] = ACTIONS(426),
    [anon_sym_while] = ACTIONS(426),
    [anon_sym_scatter] = ACTIONS(426),
  },
  [240] = {
    [sym_object_type] = ACTIONS(504),
    [anon_sym_Boolean] = ACTIONS(504),
    [anon_sym_Int] = ACTIONS(504),
    [anon_sym_Float] = ACTIONS(504),
    [anon_sym_File] = ACTIONS(504),
    [anon_sym_String] = ACTIONS(504),
    [anon_sym_if] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(504),
    [anon_sym_Array] = ACTIONS(504),
    [anon_sym_Map] = ACTIONS(504),
    [anon_sym_parameter_meta] = ACTIONS(504),
    [anon_sym_meta] = ACTIONS(504),
    [anon_sym_call] = ACTIONS(504),
    [anon_sym_while] = ACTIONS(504),
    [anon_sym_scatter] = ACTIONS(504),
  },
  [241] = {
    [sym_object_type] = ACTIONS(506),
    [anon_sym_Boolean] = ACTIONS(506),
    [anon_sym_Int] = ACTIONS(506),
    [anon_sym_Float] = ACTIONS(506),
    [anon_sym_File] = ACTIONS(506),
    [anon_sym_String] = ACTIONS(506),
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
  [242] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(392),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_task_output_kv] = STATE(247),
    [aux_sym_task_output_repeat1] = STATE(247),
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
  },
  [243] = {
    [sym_object_type] = ACTIONS(510),
    [anon_sym_Boolean] = ACTIONS(510),
    [anon_sym_Int] = ACTIONS(510),
    [anon_sym_Float] = ACTIONS(510),
    [anon_sym_File] = ACTIONS(510),
    [anon_sym_String] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_Array] = ACTIONS(510),
    [anon_sym_Map] = ACTIONS(510),
    [anon_sym_parameter_meta] = ACTIONS(510),
    [anon_sym_meta] = ACTIONS(510),
    [anon_sym_call] = ACTIONS(510),
    [anon_sym_while] = ACTIONS(510),
    [anon_sym_scatter] = ACTIONS(510),
  },
  [244] = {
    [sym_object_type] = ACTIONS(512),
    [anon_sym_Boolean] = ACTIONS(512),
    [anon_sym_Int] = ACTIONS(512),
    [anon_sym_Float] = ACTIONS(512),
    [anon_sym_File] = ACTIONS(512),
    [anon_sym_String] = ACTIONS(512),
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
  [245] = {
    [sym_object_type] = ACTIONS(514),
    [anon_sym_Boolean] = ACTIONS(514),
    [anon_sym_Int] = ACTIONS(514),
    [anon_sym_Float] = ACTIONS(514),
    [anon_sym_File] = ACTIONS(514),
    [anon_sym_String] = ACTIONS(514),
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
  [246] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(392),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_task_output_kv] = STATE(246),
    [aux_sym_task_output_repeat1] = STATE(246),
    [sym_object_type] = ACTIONS(516),
    [anon_sym_Boolean] = ACTIONS(519),
    [anon_sym_Int] = ACTIONS(519),
    [anon_sym_Float] = ACTIONS(519),
    [anon_sym_File] = ACTIONS(519),
    [anon_sym_String] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(522),
    [anon_sym_Array] = ACTIONS(524),
    [anon_sym_Map] = ACTIONS(527),
  },
  [247] = {
    [sym_primitive_type] = STATE(281),
    [sym_type] = STATE(392),
    [sym_array_type] = STATE(281),
    [sym_map_type] = STATE(281),
    [sym_task_output_kv] = STATE(246),
    [aux_sym_task_output_repeat1] = STATE(246),
    [sym_object_type] = ACTIONS(244),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(530),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
  },
  [248] = {
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
  [249] = {
    [sym_object_type] = ACTIONS(534),
    [anon_sym_Boolean] = ACTIONS(534),
    [anon_sym_Int] = ACTIONS(534),
    [anon_sym_Float] = ACTIONS(534),
    [anon_sym_File] = ACTIONS(534),
    [anon_sym_String] = ACTIONS(534),
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
  [250] = {
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
  [251] = {
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
  [252] = {
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
  [253] = {
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
  [254] = {
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
  [255] = {
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
  [256] = {
    [sym_runtime] = STATE(256),
    [sym_task_output] = STATE(256),
    [sym_parameter_meta] = STATE(256),
    [sym_meta] = STATE(256),
    [sym_command] = STATE(256),
    [aux_sym_task_sections_repeat1] = STATE(256),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_runtime] = ACTIONS(550),
    [anon_sym_output] = ACTIONS(553),
    [anon_sym_parameter_meta] = ACTIONS(556),
    [anon_sym_meta] = ACTIONS(559),
    [anon_sym_command] = ACTIONS(562),
  },
  [257] = {
    [sym_runtime] = STATE(256),
    [sym_task_output] = STATE(256),
    [sym_parameter_meta] = STATE(256),
    [sym_meta] = STATE(256),
    [sym_command] = STATE(256),
    [aux_sym_task_sections_repeat1] = STATE(256),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_runtime] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(314),
    [anon_sym_parameter_meta] = ACTIONS(316),
    [anon_sym_meta] = ACTIONS(258),
    [anon_sym_command] = ACTIONS(318),
  },
  [258] = {
    [sym_primitive_type] = STATE(387),
    [sym_array_type] = STATE(387),
    [sym_map_type] = STATE(387),
    [sym_object_type] = ACTIONS(567),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_Array] = ACTIONS(252),
    [anon_sym_Map] = ACTIONS(254),
  },
  [259] = {
    [sym_parameter_meta_kv] = STATE(382),
    [aux_sym_parameter_meta_repeat1] = STATE(261),
    [sym_identifier] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_runtime] = ACTIONS(444),
    [anon_sym_output] = ACTIONS(444),
    [anon_sym_parameter_meta] = ACTIONS(444),
    [anon_sym_meta] = ACTIONS(444),
    [anon_sym_command] = ACTIONS(444),
  },
  [260] = {
    [sym_parameter_meta_kv] = STATE(382),
    [aux_sym_parameter_meta_repeat1] = STATE(259),
    [sym_identifier] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_runtime] = ACTIONS(419),
    [anon_sym_output] = ACTIONS(419),
    [anon_sym_parameter_meta] = ACTIONS(419),
    [anon_sym_meta] = ACTIONS(419),
    [anon_sym_command] = ACTIONS(419),
  },
  [261] = {
    [sym_parameter_meta_kv] = STATE(382),
    [aux_sym_parameter_meta_repeat1] = STATE(261),
    [sym_identifier] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_runtime] = ACTIONS(426),
    [anon_sym_output] = ACTIONS(426),
    [anon_sym_parameter_meta] = ACTIONS(426),
    [anon_sym_meta] = ACTIONS(426),
    [anon_sym_command] = ACTIONS(426),
  },
  [262] = {
    [sym_primitive_type] = STATE(377),
    [sym_array_type] = STATE(377),
    [sym_object_type] = ACTIONS(569),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
    [anon_sym_Array] = ACTIONS(252),
  },
  [263] = {
    [sym_task] = STATE(263),
    [sym_import] = STATE(263),
    [sym_workflow] = STATE(263),
    [aux_sym_document_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_task] = ACTIONS(573),
    [anon_sym_import] = ACTIONS(576),
    [anon_sym_workflow] = ACTIONS(579),
  },
  [264] = {
    [sym_task] = STATE(263),
    [sym_import] = STATE(263),
    [sym_workflow] = STATE(263),
    [aux_sym_document_repeat1] = STATE(263),
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_task] = ACTIONS(584),
    [anon_sym_import] = ACTIONS(586),
    [anon_sym_workflow] = ACTIONS(588),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_runtime] = ACTIONS(590),
    [anon_sym_output] = ACTIONS(590),
    [anon_sym_parameter_meta] = ACTIONS(590),
    [anon_sym_meta] = ACTIONS(590),
    [anon_sym_command] = ACTIONS(590),
  },
  [266] = {
    [sym_identifier] = ACTIONS(426),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_runtime] = ACTIONS(426),
    [anon_sym_output] = ACTIONS(426),
    [anon_sym_parameter_meta] = ACTIONS(426),
    [anon_sym_meta] = ACTIONS(426),
    [anon_sym_command] = ACTIONS(426),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_runtime] = ACTIONS(592),
    [anon_sym_output] = ACTIONS(592),
    [anon_sym_parameter_meta] = ACTIONS(592),
    [anon_sym_meta] = ACTIONS(592),
    [anon_sym_command] = ACTIONS(592),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(594),
    [anon_sym_runtime] = ACTIONS(594),
    [anon_sym_output] = ACTIONS(594),
    [anon_sym_parameter_meta] = ACTIONS(594),
    [anon_sym_meta] = ACTIONS(594),
    [anon_sym_command] = ACTIONS(594),
  },
  [269] = {
    [sym_primitive_type] = STATE(376),
    [anon_sym_Boolean] = ACTIONS(246),
    [anon_sym_Int] = ACTIONS(246),
    [anon_sym_Float] = ACTIONS(246),
    [anon_sym_File] = ACTIONS(246),
    [anon_sym_String] = ACTIONS(246),
  },
  [270] = {
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_runtime] = ACTIONS(596),
    [anon_sym_output] = ACTIONS(596),
    [anon_sym_parameter_meta] = ACTIONS(596),
    [anon_sym_meta] = ACTIONS(596),
    [anon_sym_command] = ACTIONS(596),
  },
  [271] = {
    [anon_sym_RBRACE] = ACTIONS(598),
    [anon_sym_runtime] = ACTIONS(598),
    [anon_sym_output] = ACTIONS(598),
    [anon_sym_parameter_meta] = ACTIONS(598),
    [anon_sym_meta] = ACTIONS(598),
    [anon_sym_command] = ACTIONS(598),
  },
  [272] = {
    [sym_command_part] = STATE(275),
    [sym_command_part_var] = STATE(335),
    [aux_sym_command_repeat1] = STATE(275),
    [anon_sym_GT_GT_GT] = ACTIONS(600),
    [sym_command_part_string] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(604),
  },
  [273] = {
    [sym_command_part] = STATE(276),
    [sym_command_part_var] = STATE(326),
    [aux_sym_command_repeat1] = STATE(276),
    [anon_sym_RBRACE] = ACTIONS(600),
    [sym_command_part_string] = ACTIONS(606),
    [anon_sym_DOLLAR] = ACTIONS(608),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [sym_identifier] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_QMARK] = ACTIONS(610),
  },
  [275] = {
    [sym_command_part] = STATE(275),
    [sym_command_part_var] = STATE(335),
    [aux_sym_command_repeat1] = STATE(275),
    [anon_sym_GT_GT_GT] = ACTIONS(612),
    [sym_command_part_string] = ACTIONS(614),
    [anon_sym_DOLLAR] = ACTIONS(617),
  },
  [276] = {
    [sym_command_part] = STATE(276),
    [sym_command_part_var] = STATE(326),
    [aux_sym_command_repeat1] = STATE(276),
    [anon_sym_RBRACE] = ACTIONS(612),
    [sym_command_part_string] = ACTIONS(620),
    [anon_sym_DOLLAR] = ACTIONS(623),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(626),
    [sym_identifier] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(626),
    [anon_sym_QMARK] = ACTIONS(626),
  },
  [278] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_as] = ACTIONS(408),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [sym_identifier] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(630),
    [anon_sym_PLUS] = ACTIONS(630),
    [anon_sym_QMARK] = ACTIONS(630),
  },
  [280] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_as] = ACTIONS(350),
  },
  [281] = {
    [sym_type_postfix_quantifier] = STATE(354),
    [ts_builtin_sym_end] = ACTIONS(632),
    [sym_identifier] = ACTIONS(632),
    [anon_sym_PLUS] = ACTIONS(634),
    [anon_sym_QMARK] = ACTIONS(634),
  },
  [282] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(282),
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(410),
    [anon_sym_as] = ACTIONS(410),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [anon_sym_task] = ACTIONS(639),
    [anon_sym_as] = ACTIONS(641),
    [anon_sym_import] = ACTIONS(639),
    [anon_sym_workflow] = ACTIONS(639),
  },
  [284] = {
    [sym_command_part] = STATE(272),
    [sym_command_part_var] = STATE(335),
    [aux_sym_command_repeat1] = STATE(272),
    [sym_command_part_string] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(604),
  },
  [285] = {
    [sym_command_part] = STATE(273),
    [sym_command_part_var] = STATE(326),
    [aux_sym_command_repeat1] = STATE(273),
    [sym_command_part_string] = ACTIONS(606),
    [anon_sym_DOLLAR] = ACTIONS(608),
  },
  [286] = {
    [aux_sym_string_literal_repeat1] = STATE(318),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [aux_sym_string_literal_token1] = ACTIONS(645),
    [sym_escape_sequence] = ACTIONS(645),
  },
  [287] = {
    [sym_meta_kv] = STATE(287),
    [aux_sym_meta_repeat1] = STATE(287),
    [sym_identifier] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(650),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_task] = ACTIONS(652),
    [anon_sym_import] = ACTIONS(652),
    [anon_sym_workflow] = ACTIONS(652),
  },
  [289] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [aux_sym_string_literal_token2] = ACTIONS(656),
    [sym_escape_sequence] = ACTIONS(658),
  },
  [290] = {
    [sym_meta_kv] = STATE(292),
    [aux_sym_meta_repeat1] = STATE(292),
    [sym_identifier] = ACTIONS(660),
    [anon_sym_RBRACE] = ACTIONS(662),
  },
  [291] = {
    [aux_sym_string_literal_repeat1] = STATE(319),
    [anon_sym_DQUOTE] = ACTIONS(664),
    [aux_sym_string_literal_token1] = ACTIONS(666),
    [sym_escape_sequence] = ACTIONS(666),
  },
  [292] = {
    [sym_meta_kv] = STATE(287),
    [aux_sym_meta_repeat1] = STATE(287),
    [sym_identifier] = ACTIONS(660),
    [anon_sym_RBRACE] = ACTIONS(668),
  },
  [293] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [aux_sym_string_literal_token2] = ACTIONS(656),
    [sym_escape_sequence] = ACTIONS(658),
  },
  [294] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [aux_sym_string_literal_token1] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(672),
  },
  [295] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [aux_sym_string_literal_token1] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(672),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [anon_sym_task] = ACTIONS(676),
    [anon_sym_import] = ACTIONS(676),
    [anon_sym_workflow] = ACTIONS(676),
  },
  [297] = {
    [aux_sym_string_literal_repeat2] = STATE(289),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [aux_sym_string_literal_token2] = ACTIONS(678),
    [sym_escape_sequence] = ACTIONS(680),
  },
  [298] = {
    [sym_scatter_iteration_statment] = STATE(305),
    [aux_sym_scatter_repeat1] = STATE(305),
    [sym_identifier] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(684),
  },
  [299] = {
    [aux_sym_string_literal_repeat2] = STATE(308),
    [anon_sym_SQUOTE] = ACTIONS(686),
    [aux_sym_string_literal_token2] = ACTIONS(688),
    [sym_escape_sequence] = ACTIONS(690),
  },
  [300] = {
    [aux_sym_string_literal_repeat1] = STATE(295),
    [anon_sym_DQUOTE] = ACTIONS(686),
    [aux_sym_string_literal_token1] = ACTIONS(692),
    [sym_escape_sequence] = ACTIONS(692),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(694),
    [anon_sym_task] = ACTIONS(694),
    [anon_sym_import] = ACTIONS(694),
    [anon_sym_workflow] = ACTIONS(694),
  },
  [302] = {
    [aux_sym_string_literal_repeat2] = STATE(293),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [aux_sym_string_literal_token2] = ACTIONS(698),
    [sym_escape_sequence] = ACTIONS(700),
  },
  [303] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [anon_sym_task] = ACTIONS(702),
    [anon_sym_import] = ACTIONS(702),
    [anon_sym_workflow] = ACTIONS(702),
  },
  [304] = {
    [aux_sym_string_literal_repeat1] = STATE(294),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [aux_sym_string_literal_token1] = ACTIONS(704),
    [sym_escape_sequence] = ACTIONS(704),
  },
  [305] = {
    [sym_scatter_iteration_statment] = STATE(314),
    [aux_sym_scatter_repeat1] = STATE(314),
    [sym_identifier] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(706),
  },
  [306] = {
    [sym_runtime_kv] = STATE(315),
    [aux_sym_runtime_repeat1] = STATE(315),
    [sym_identifier] = ACTIONS(708),
    [anon_sym_RBRACE] = ACTIONS(710),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_task] = ACTIONS(712),
    [anon_sym_import] = ACTIONS(712),
    [anon_sym_workflow] = ACTIONS(712),
  },
  [308] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [aux_sym_string_literal_token2] = ACTIONS(656),
    [sym_escape_sequence] = ACTIONS(658),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(410),
    [anon_sym_as] = ACTIONS(410),
  },
  [310] = {
    [sym_call_body] = STATE(367),
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(714),
    [anon_sym_as] = ACTIONS(716),
  },
  [311] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(718),
    [aux_sym_string_literal_token1] = ACTIONS(720),
    [sym_escape_sequence] = ACTIONS(720),
  },
  [312] = {
    [sym_runtime_kv] = STATE(312),
    [aux_sym_runtime_repeat1] = STATE(312),
    [sym_identifier] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(726),
  },
  [313] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [anon_sym_SQUOTE] = ACTIONS(728),
    [aux_sym_string_literal_token2] = ACTIONS(730),
    [sym_escape_sequence] = ACTIONS(733),
  },
  [314] = {
    [sym_scatter_iteration_statment] = STATE(314),
    [aux_sym_scatter_repeat1] = STATE(314),
    [sym_identifier] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(739),
  },
  [315] = {
    [sym_runtime_kv] = STATE(312),
    [aux_sym_runtime_repeat1] = STATE(312),
    [sym_identifier] = ACTIONS(708),
    [anon_sym_RBRACE] = ACTIONS(741),
  },
  [316] = {
    [aux_sym_string_literal_repeat2] = STATE(313),
    [anon_sym_SQUOTE] = ACTIONS(743),
    [aux_sym_string_literal_token2] = ACTIONS(656),
    [sym_escape_sequence] = ACTIONS(658),
  },
  [317] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_RBRACK] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(406),
  },
  [318] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(743),
    [aux_sym_string_literal_token1] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(672),
  },
  [319] = {
    [aux_sym_string_literal_repeat1] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [aux_sym_string_literal_token1] = ACTIONS(672),
    [sym_escape_sequence] = ACTIONS(672),
  },
  [320] = {
    [aux_sym_string_literal_repeat2] = STATE(316),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [aux_sym_string_literal_token2] = ACTIONS(748),
    [sym_escape_sequence] = ACTIONS(750),
  },
  [321] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RBRACE] = ACTIONS(755),
  },
  [322] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(757),
  },
  [323] = {
    [aux_sym_variable_mappings_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RBRACE] = ACTIONS(762),
  },
  [324] = {
    [sym_inputs] = STATE(383),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_input] = ACTIONS(766),
  },
  [325] = {
    [sym_string_literal] = STATE(283),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(768),
    [sym_command_part_string] = ACTIONS(768),
    [anon_sym_DOLLAR] = ACTIONS(768),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(770),
    [sym_command_part_string] = ACTIONS(770),
    [anon_sym_DOLLAR] = ACTIONS(770),
  },
  [328] = {
    [anon_sym_GT_GT_GT] = ACTIONS(772),
    [sym_command_part_string] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(772),
  },
  [329] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_RBRACK] = ACTIONS(774),
    [anon_sym_COMMA] = ACTIONS(356),
  },
  [330] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_RBRACK] = ACTIONS(776),
    [anon_sym_COMMA] = ACTIONS(356),
  },
  [331] = {
    [sym_inputs] = STATE(379),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_input] = ACTIONS(766),
  },
  [332] = {
    [anon_sym_RBRACE] = ACTIONS(772),
    [sym_command_part_string] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(772),
  },
  [333] = {
    [sym_variable_mappings] = STATE(409),
    [sym_variable_mapping_kv] = STATE(346),
    [sym_identifier] = ACTIONS(780),
  },
  [334] = {
    [anon_sym_GT_GT_GT] = ACTIONS(770),
    [sym_command_part_string] = ACTIONS(770),
    [anon_sym_DOLLAR] = ACTIONS(770),
  },
  [335] = {
    [anon_sym_GT_GT_GT] = ACTIONS(768),
    [sym_command_part_string] = ACTIONS(768),
    [anon_sym_DOLLAR] = ACTIONS(768),
  },
  [336] = {
    [aux_sym_variable_mappings_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(784),
  },
  [337] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(786),
  },
  [338] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(788),
  },
  [339] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_RBRACK] = ACTIONS(790),
    [anon_sym_COMMA] = ACTIONS(356),
  },
  [340] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(792),
  },
  [341] = {
    [sym_call_body] = STATE(391),
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(714),
  },
  [342] = {
    [sym_string_literal] = STATE(357),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(81),
  },
  [343] = {
    [sym_string_literal] = STATE(402),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [344] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(794),
  },
  [345] = {
    [aux_sym_function_expression_repeat1] = STATE(317),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(796),
  },
  [346] = {
    [aux_sym_variable_mappings_repeat1] = STATE(336),
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(798),
  },
  [347] = {
    [sym_scatter_body] = STATE(244),
    [anon_sym_LBRACE] = ACTIONS(800),
  },
  [348] = {
    [anon_sym_LBRACE] = ACTIONS(802),
    [anon_sym_LT_LT_LT] = ACTIONS(804),
  },
  [349] = {
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_RBRACE] = ACTIONS(762),
  },
  [350] = {
    [sym_variable_mapping_kv] = STATE(349),
    [sym_identifier] = ACTIONS(780),
  },
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_identifier] = ACTIONS(806),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(808),
    [sym_identifier] = ACTIONS(808),
  },
  [353] = {
    [sym_scatter_body] = STATE(249),
    [anon_sym_LBRACE] = ACTIONS(800),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(810),
    [sym_identifier] = ACTIONS(810),
  },
  [355] = {
    [sym_namespaced_identifier] = STATE(310),
    [sym_identifier] = ACTIONS(812),
  },
  [356] = {
    [sym_namespaced_identifier] = STATE(208),
    [sym_identifier] = ACTIONS(814),
  },
  [357] = {
    [sym_identifier] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
  },
  [358] = {
    [anon_sym_COLON] = ACTIONS(818),
  },
  [359] = {
    [anon_sym_LBRACE] = ACTIONS(820),
  },
  [360] = {
    [anon_sym_LBRACE] = ACTIONS(822),
  },
  [361] = {
    [sym_identifier] = ACTIONS(824),
  },
  [362] = {
    [anon_sym_RBRACE] = ACTIONS(826),
  },
  [363] = {
    [sym_identifier] = ACTIONS(828),
  },
  [364] = {
    [anon_sym_RBRACE] = ACTIONS(830),
  },
  [365] = {
    [sym_identifier] = ACTIONS(832),
  },
  [366] = {
    [sym_identifier] = ACTIONS(834),
  },
  [367] = {
    [ts_builtin_sym_end] = ACTIONS(536),
  },
  [368] = {
    [sym_identifier] = ACTIONS(836),
  },
  [369] = {
    [anon_sym_LBRACE] = ACTIONS(838),
  },
  [370] = {
    [sym_identifier] = ACTIONS(840),
  },
  [371] = {
    [anon_sym_LBRACE] = ACTIONS(842),
  },
  [372] = {
    [anon_sym_COLON] = ACTIONS(844),
  },
  [373] = {
    [sym_identifier] = ACTIONS(806),
  },
  [374] = {
    [sym_identifier] = ACTIONS(846),
  },
  [375] = {
    [anon_sym_LBRACE] = ACTIONS(848),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(850),
  },
  [377] = {
    [anon_sym_RBRACK] = ACTIONS(852),
  },
  [378] = {
    [anon_sym_LBRACE] = ACTIONS(854),
  },
  [379] = {
    [anon_sym_RBRACE] = ACTIONS(856),
  },
  [380] = {
    [anon_sym_EQ] = ACTIONS(858),
  },
  [381] = {
    [ts_builtin_sym_end] = ACTIONS(504),
  },
  [382] = {
    [anon_sym_RBRACE] = ACTIONS(860),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(862),
  },
  [384] = {
    [anon_sym_LPAREN] = ACTIONS(864),
  },
  [385] = {
    [anon_sym_LPAREN] = ACTIONS(866),
  },
  [386] = {
    [anon_sym_LPAREN] = ACTIONS(868),
  },
  [387] = {
    [anon_sym_RBRACK] = ACTIONS(870),
  },
  [388] = {
    [anon_sym_RBRACE] = ACTIONS(872),
  },
  [389] = {
    [ts_builtin_sym_end] = ACTIONS(510),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(476),
  },
  [391] = {
    [ts_builtin_sym_end] = ACTIONS(506),
  },
  [392] = {
    [sym_identifier] = ACTIONS(874),
  },
  [393] = {
    [ts_builtin_sym_end] = ACTIONS(876),
  },
  [394] = {
    [anon_sym_EQ] = ACTIONS(878),
  },
  [395] = {
    [sym_identifier] = ACTIONS(880),
  },
  [396] = {
    [anon_sym_EQ] = ACTIONS(882),
  },
  [397] = {
    [anon_sym_EQ] = ACTIONS(884),
  },
  [398] = {
    [sym_identifier] = ACTIONS(886),
  },
  [399] = {
    [anon_sym_LBRACE] = ACTIONS(888),
  },
  [400] = {
    [anon_sym_LBRACK] = ACTIONS(890),
  },
  [401] = {
    [sym_identifier] = ACTIONS(892),
  },
  [402] = {
    [anon_sym_RBRACE] = ACTIONS(894),
  },
  [403] = {
    [anon_sym_LBRACE] = ACTIONS(896),
  },
  [404] = {
    [anon_sym_LBRACK] = ACTIONS(898),
  },
  [405] = {
    [anon_sym_LBRACE] = ACTIONS(900),
  },
  [406] = {
    [anon_sym_LBRACE] = ACTIONS(902),
  },
  [407] = {
    [anon_sym_EQ] = ACTIONS(904),
  },
  [408] = {
    [anon_sym_in] = ACTIONS(906),
  },
  [409] = {
    [anon_sym_RBRACE] = ACTIONS(908),
  },
  [410] = {
    [anon_sym_EQ] = ACTIONS(910),
  },
  [411] = {
    [anon_sym_LBRACE] = ACTIONS(912),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(165),
  [5] = {.count = 1, .reusable = false}, SHIFT(163),
  [7] = {.count = 1, .reusable = false}, SHIFT(281),
  [9] = {.count = 1, .reusable = false}, SHIFT(274),
  [11] = {.count = 1, .reusable = true}, SHIFT(291),
  [13] = {.count = 1, .reusable = true}, SHIFT(297),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(20),
  [19] = {.count = 1, .reusable = true}, SHIFT(21),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(22),
  [25] = {.count = 1, .reusable = false}, SHIFT(404),
  [27] = {.count = 1, .reusable = false}, SHIFT(400),
  [29] = {.count = 1, .reusable = false}, SHIFT(399),
  [31] = {.count = 1, .reusable = false}, SHIFT(398),
  [33] = {.count = 1, .reusable = false}, SHIFT(355),
  [35] = {.count = 1, .reusable = false}, SHIFT(325),
  [37] = {.count = 1, .reusable = false}, SHIFT(395),
  [39] = {.count = 1, .reusable = false}, SHIFT(204),
  [41] = {.count = 1, .reusable = false}, SHIFT(397),
  [43] = {.count = 1, .reusable = true}, SHIFT(103),
  [45] = {.count = 1, .reusable = true}, SHIFT(160),
  [47] = {.count = 1, .reusable = true}, SHIFT(151),
  [49] = {.count = 1, .reusable = true}, SHIFT(115),
  [51] = {.count = 1, .reusable = true}, SHIFT(114),
  [53] = {.count = 1, .reusable = true}, SHIFT(122),
  [55] = {.count = 1, .reusable = true}, SHIFT(164),
  [57] = {.count = 1, .reusable = true}, SHIFT(105),
  [59] = {.count = 1, .reusable = false}, SHIFT(87),
  [61] = {.count = 1, .reusable = false}, SHIFT(88),
  [63] = {.count = 1, .reusable = true}, SHIFT(300),
  [65] = {.count = 1, .reusable = true}, SHIFT(299),
  [67] = {.count = 1, .reusable = true}, SHIFT(13),
  [69] = {.count = 1, .reusable = false}, SHIFT(49),
  [71] = {.count = 1, .reusable = true}, SHIFT(26),
  [73] = {.count = 1, .reusable = true}, SHIFT(6),
  [75] = {.count = 1, .reusable = true}, SHIFT(45),
  [77] = {.count = 1, .reusable = true}, SHIFT(90),
  [79] = {.count = 1, .reusable = true}, SHIFT(304),
  [81] = {.count = 1, .reusable = true}, SHIFT(302),
  [83] = {.count = 1, .reusable = false}, SHIFT(70),
  [85] = {.count = 1, .reusable = true}, SHIFT(74),
  [87] = {.count = 1, .reusable = false}, SHIFT(118),
  [89] = {.count = 1, .reusable = false}, SHIFT(117),
  [91] = {.count = 1, .reusable = true}, SHIFT(286),
  [93] = {.count = 1, .reusable = true}, SHIFT(320),
  [95] = {.count = 1, .reusable = true}, SHIFT(9),
  [97] = {.count = 1, .reusable = false}, SHIFT(18),
  [99] = {.count = 1, .reusable = true}, SHIFT(32),
  [101] = {.count = 1, .reusable = true}, SHIFT(10),
  [103] = {.count = 1, .reusable = true}, SHIFT(29),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [109] = {.count = 1, .reusable = false}, SHIFT(79),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(55),
  [121] = {.count = 1, .reusable = true}, SHIFT(25),
  [123] = {.count = 1, .reusable = true}, SHIFT(15),
  [125] = {.count = 1, .reusable = true}, SHIFT(58),
  [127] = {.count = 1, .reusable = true}, SHIFT(71),
  [129] = {.count = 1, .reusable = true}, SHIFT(73),
  [131] = {.count = 1, .reusable = false}, SHIFT(77),
  [133] = {.count = 1, .reusable = true}, SHIFT(77),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [139] = {.count = 1, .reusable = true}, SHIFT(56),
  [141] = {.count = 1, .reusable = true}, SHIFT(57),
  [143] = {.count = 1, .reusable = false}, SHIFT(41),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_member_access_expression, 3),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_member_access_expression, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 6),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 6),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_if_then_expression, 6),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_expression, 6),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 5),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 5),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_indexing_expression, 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_indexing_expression, 4),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 4),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 4),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(78),
  [219] = {.count = 1, .reusable = true}, SHIFT(30),
  [221] = {.count = 1, .reusable = true}, SHIFT(11),
  [223] = {.count = 1, .reusable = true}, SHIFT(35),
  [225] = {.count = 1, .reusable = true}, SHIFT(36),
  [227] = {.count = 1, .reusable = false}, SHIFT(34),
  [229] = {.count = 1, .reusable = true}, SHIFT(34),
  [231] = {.count = 1, .reusable = true}, SHIFT(40),
  [233] = {.count = 1, .reusable = true}, SHIFT(38),
  [235] = {.count = 1, .reusable = true}, SHIFT(39),
  [237] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(397),
  [242] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(281),
  [246] = {.count = 1, .reusable = true}, SHIFT(274),
  [248] = {.count = 1, .reusable = true}, SHIFT(384),
  [250] = {.count = 1, .reusable = true}, SHIFT(252),
  [252] = {.count = 1, .reusable = true}, SHIFT(404),
  [254] = {.count = 1, .reusable = true}, SHIFT(400),
  [256] = {.count = 1, .reusable = true}, SHIFT(378),
  [258] = {.count = 1, .reusable = true}, SHIFT(371),
  [260] = {.count = 1, .reusable = true}, SHIFT(356),
  [262] = {.count = 1, .reusable = true}, SHIFT(385),
  [264] = {.count = 1, .reusable = true}, SHIFT(386),
  [266] = {.count = 1, .reusable = true}, SHIFT(248),
  [268] = {.count = 1, .reusable = true}, SHIFT(301),
  [270] = {.count = 1, .reusable = true}, SHIFT(307),
  [272] = {.count = 1, .reusable = true}, SHIFT(251),
  [274] = {.count = 1, .reusable = true}, SHIFT(255),
  [276] = {.count = 1, .reusable = true}, SHIFT(254),
  [278] = {.count = 1, .reusable = true}, SHIFT(253),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(281),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(274),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(384),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(404),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(400),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(378),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(371),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(356),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(385),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(386),
  [312] = {.count = 1, .reusable = true}, SHIFT(399),
  [314] = {.count = 1, .reusable = true}, SHIFT(360),
  [316] = {.count = 1, .reusable = true}, SHIFT(359),
  [318] = {.count = 1, .reusable = true}, SHIFT(348),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [326] = {.count = 1, .reusable = false}, SHIFT(81),
  [328] = {.count = 1, .reusable = true}, SHIFT(46),
  [330] = {.count = 1, .reusable = true}, SHIFT(47),
  [332] = {.count = 1, .reusable = true}, SHIFT(12),
  [334] = {.count = 1, .reusable = true}, SHIFT(53),
  [336] = {.count = 1, .reusable = true}, SHIFT(51),
  [338] = {.count = 1, .reusable = true}, SHIFT(52),
  [340] = {.count = 1, .reusable = false}, SHIFT(54),
  [342] = {.count = 1, .reusable = true}, SHIFT(54),
  [344] = {.count = 1, .reusable = true}, SHIFT(17),
  [346] = {.count = 1, .reusable = true}, SHIFT(50),
  [348] = {.count = 1, .reusable = false}, SHIFT(16),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [352] = {.count = 1, .reusable = true}, SHIFT(361),
  [354] = {.count = 1, .reusable = true}, SHIFT(125),
  [356] = {.count = 1, .reusable = true}, SHIFT(61),
  [358] = {.count = 1, .reusable = true}, SHIFT(72),
  [360] = {.count = 1, .reusable = true}, SHIFT(62),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(281),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(274),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(404),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(400),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [376] = {.count = 1, .reusable = true}, SHIFT(66),
  [378] = {.count = 1, .reusable = false}, SHIFT(59),
  [380] = {.count = 1, .reusable = true}, SHIFT(59),
  [382] = {.count = 1, .reusable = true}, SHIFT(93),
  [384] = {.count = 1, .reusable = true}, SHIFT(153),
  [386] = {.count = 1, .reusable = true}, SHIFT(69),
  [388] = {.count = 1, .reusable = true}, SHIFT(67),
  [390] = {.count = 1, .reusable = true}, SHIFT(83),
  [392] = {.count = 1, .reusable = true}, SHIFT(60),
  [394] = {.count = 1, .reusable = true}, SHIFT(99),
  [396] = {.count = 1, .reusable = true}, SHIFT(158),
  [398] = {.count = 1, .reusable = true}, SHIFT(134),
  [400] = {.count = 1, .reusable = true}, SHIFT(68),
  [402] = {.count = 1, .reusable = true}, SHIFT(128),
  [404] = {.count = 1, .reusable = true}, SHIFT(162),
  [406] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [410] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(361),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [417] = {.count = 1, .reusable = false}, SHIFT(394),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [423] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(394),
  [426] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [434] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 4),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [440] = {.count = 1, .reusable = true}, SHIFT(331),
  [442] = {.count = 1, .reusable = true}, SHIFT(363),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [452] = {.count = 1, .reusable = true}, SHIFT(24),
  [454] = {.count = 1, .reusable = true}, SHIFT(42),
  [456] = {.count = 1, .reusable = true}, SHIFT(334),
  [458] = {.count = 1, .reusable = true}, SHIFT(406),
  [460] = {.count = 1, .reusable = true}, SHIFT(403),
  [462] = {.count = 1, .reusable = true}, SHIFT(23),
  [464] = {.count = 1, .reusable = true}, SHIFT(65),
  [466] = {.count = 1, .reusable = true}, SHIFT(110),
  [468] = {.count = 1, .reusable = true}, SHIFT(33),
  [470] = {.count = 1, .reusable = true}, SHIFT(80),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [474] = {.count = 1, .reusable = true}, SHIFT(101),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [478] = {.count = 1, .reusable = true}, SHIFT(328),
  [480] = {.count = 1, .reusable = true}, SHIFT(19),
  [482] = {.count = 1, .reusable = true}, SHIFT(161),
  [484] = {.count = 1, .reusable = true}, SHIFT(332),
  [486] = {.count = 1, .reusable = true}, SHIFT(63),
  [488] = {.count = 1, .reusable = true}, SHIFT(64),
  [490] = {.count = 1, .reusable = true}, SHIFT(37),
  [492] = {.count = 1, .reusable = true}, SHIFT(27),
  [494] = {.count = 1, .reusable = true}, SHIFT(28),
  [496] = {.count = 1, .reusable = true}, SHIFT(327),
  [498] = {.count = 1, .reusable = true}, SHIFT(111),
  [500] = {.count = 1, .reusable = true}, SHIFT(159),
  [502] = {.count = 1, .reusable = true}, SHIFT(92),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [508] = {.count = 1, .reusable = true}, SHIFT(271),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(281),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(274),
  [522] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [524] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(404),
  [527] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(400),
  [530] = {.count = 1, .reusable = true}, SHIFT(268),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [548] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(399),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(360),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(359),
  [559] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(371),
  [562] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(348),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(387),
  [569] = {.count = 1, .reusable = true}, SHIFT(377),
  [571] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(398),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(325),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(395),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [584] = {.count = 1, .reusable = true}, SHIFT(398),
  [586] = {.count = 1, .reusable = true}, SHIFT(325),
  [588] = {.count = 1, .reusable = true}, SHIFT(395),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [600] = {.count = 1, .reusable = false}, SHIFT(270),
  [602] = {.count = 1, .reusable = false}, SHIFT(335),
  [604] = {.count = 1, .reusable = false}, SHIFT(405),
  [606] = {.count = 1, .reusable = false}, SHIFT(326),
  [608] = {.count = 1, .reusable = false}, SHIFT(411),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [612] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [614] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(335),
  [617] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(405),
  [620] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(326),
  [623] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(411),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [628] = {.count = 1, .reusable = true}, SHIFT(368),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [634] = {.count = 1, .reusable = true}, SHIFT(352),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(368),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [641] = {.count = 1, .reusable = true}, SHIFT(366),
  [643] = {.count = 1, .reusable = false}, SHIFT(116),
  [645] = {.count = 1, .reusable = true}, SHIFT(318),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(380),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [654] = {.count = 1, .reusable = false}, SHIFT(146),
  [656] = {.count = 1, .reusable = false}, SHIFT(313),
  [658] = {.count = 1, .reusable = true}, SHIFT(313),
  [660] = {.count = 1, .reusable = true}, SHIFT(380),
  [662] = {.count = 1, .reusable = true}, SHIFT(205),
  [664] = {.count = 1, .reusable = false}, SHIFT(147),
  [666] = {.count = 1, .reusable = true}, SHIFT(319),
  [668] = {.count = 1, .reusable = true}, SHIFT(211),
  [670] = {.count = 1, .reusable = false}, SHIFT(186),
  [672] = {.count = 1, .reusable = true}, SHIFT(311),
  [674] = {.count = 1, .reusable = false}, SHIFT(94),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [678] = {.count = 1, .reusable = false}, SHIFT(289),
  [680] = {.count = 1, .reusable = true}, SHIFT(289),
  [682] = {.count = 1, .reusable = true}, SHIFT(408),
  [684] = {.count = 1, .reusable = true}, SHIFT(347),
  [686] = {.count = 1, .reusable = false}, SHIFT(89),
  [688] = {.count = 1, .reusable = false}, SHIFT(308),
  [690] = {.count = 1, .reusable = true}, SHIFT(308),
  [692] = {.count = 1, .reusable = true}, SHIFT(295),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [696] = {.count = 1, .reusable = false}, SHIFT(183),
  [698] = {.count = 1, .reusable = false}, SHIFT(293),
  [700] = {.count = 1, .reusable = true}, SHIFT(293),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [704] = {.count = 1, .reusable = true}, SHIFT(294),
  [706] = {.count = 1, .reusable = true}, SHIFT(353),
  [708] = {.count = 1, .reusable = true}, SHIFT(372),
  [710] = {.count = 1, .reusable = true}, SHIFT(267),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [714] = {.count = 1, .reusable = true}, SHIFT(324),
  [716] = {.count = 1, .reusable = true}, SHIFT(370),
  [718] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(311),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(372),
  [726] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [728] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [730] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(313),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(313),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(408),
  [739] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [741] = {.count = 1, .reusable = true}, SHIFT(265),
  [743] = {.count = 1, .reusable = false}, SHIFT(126),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(61),
  [748] = {.count = 1, .reusable = false}, SHIFT(316),
  [750] = {.count = 1, .reusable = true}, SHIFT(316),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(60),
  [755] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [757] = {.count = 1, .reusable = true}, SHIFT(95),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(350),
  [762] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [764] = {.count = 1, .reusable = true}, SHIFT(381),
  [766] = {.count = 1, .reusable = true}, SHIFT(358),
  [768] = {.count = 1, .reusable = false}, REDUCE(sym_command_part, 1),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_command_part_var, 4),
  [772] = {.count = 1, .reusable = false}, REDUCE(sym_command_part_var, 5),
  [774] = {.count = 1, .reusable = true}, SHIFT(156),
  [776] = {.count = 1, .reusable = true}, SHIFT(130),
  [778] = {.count = 1, .reusable = true}, SHIFT(240),
  [780] = {.count = 1, .reusable = true}, SHIFT(410),
  [782] = {.count = 1, .reusable = true}, SHIFT(350),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [786] = {.count = 1, .reusable = true}, SHIFT(154),
  [788] = {.count = 1, .reusable = true}, SHIFT(152),
  [790] = {.count = 1, .reusable = true}, SHIFT(102),
  [792] = {.count = 1, .reusable = true}, SHIFT(133),
  [794] = {.count = 1, .reusable = true}, SHIFT(131),
  [796] = {.count = 1, .reusable = true}, SHIFT(98),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [800] = {.count = 1, .reusable = true}, SHIFT(137),
  [802] = {.count = 1, .reusable = true}, SHIFT(285),
  [804] = {.count = 1, .reusable = true}, SHIFT(284),
  [806] = {.count = 1, .reusable = true}, SHIFT(157),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [812] = {.count = 1, .reusable = true}, SHIFT(278),
  [814] = {.count = 1, .reusable = true}, SHIFT(198),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [818] = {.count = 1, .reusable = true}, SHIFT(333),
  [820] = {.count = 1, .reusable = true}, SHIFT(260),
  [822] = {.count = 1, .reusable = true}, SHIFT(242),
  [824] = {.count = 1, .reusable = true}, SHIFT(212),
  [826] = {.count = 1, .reusable = true}, SHIFT(288),
  [828] = {.count = 1, .reusable = true}, SHIFT(223),
  [830] = {.count = 1, .reusable = true}, SHIFT(239),
  [832] = {.count = 1, .reusable = true}, SHIFT(86),
  [834] = {.count = 1, .reusable = true}, SHIFT(303),
  [836] = {.count = 1, .reusable = true}, SHIFT(309),
  [838] = {.count = 1, .reusable = true}, SHIFT(138),
  [840] = {.count = 1, .reusable = true}, SHIFT(341),
  [842] = {.count = 1, .reusable = true}, SHIFT(290),
  [844] = {.count = 1, .reusable = true}, SHIFT(48),
  [846] = {.count = 1, .reusable = true}, SHIFT(82),
  [848] = {.count = 1, .reusable = true}, SHIFT(148),
  [850] = {.count = 1, .reusable = true}, SHIFT(258),
  [852] = {.count = 1, .reusable = true}, SHIFT(277),
  [854] = {.count = 1, .reusable = true}, SHIFT(202),
  [856] = {.count = 1, .reusable = true}, SHIFT(243),
  [858] = {.count = 1, .reusable = true}, SHIFT(342),
  [860] = {.count = 1, .reusable = true}, SHIFT(266),
  [862] = {.count = 1, .reusable = true}, SHIFT(389),
  [864] = {.count = 1, .reusable = true}, SHIFT(44),
  [866] = {.count = 1, .reusable = true}, SHIFT(43),
  [868] = {.count = 1, .reusable = true}, SHIFT(298),
  [870] = {.count = 1, .reusable = true}, SHIFT(279),
  [872] = {.count = 1, .reusable = true}, SHIFT(296),
  [874] = {.count = 1, .reusable = true}, SHIFT(407),
  [876] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [878] = {.count = 1, .reusable = true}, SHIFT(343),
  [880] = {.count = 1, .reusable = true}, SHIFT(369),
  [882] = {.count = 1, .reusable = true}, SHIFT(14),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [886] = {.count = 1, .reusable = true}, SHIFT(375),
  [888] = {.count = 1, .reusable = true}, SHIFT(306),
  [890] = {.count = 1, .reusable = true}, SHIFT(269),
  [892] = {.count = 1, .reusable = true}, SHIFT(175),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [896] = {.count = 1, .reusable = true}, SHIFT(143),
  [898] = {.count = 1, .reusable = true}, SHIFT(262),
  [900] = {.count = 1, .reusable = true}, SHIFT(3),
  [902] = {.count = 1, .reusable = true}, SHIFT(136),
  [904] = {.count = 1, .reusable = true}, SHIFT(76),
  [906] = {.count = 1, .reusable = true}, SHIFT(75),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [910] = {.count = 1, .reusable = true}, SHIFT(31),
  [912] = {.count = 1, .reusable = true}, SHIFT(4),
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
