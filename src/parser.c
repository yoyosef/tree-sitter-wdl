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
#define STATE_COUNT 403
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
      if (lookahead == 0) ADVANCE(177);
      if (lookahead == '!') ADVANCE(328);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(320);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '0') ADVANCE(266);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(177);
      if (lookahead == '!') ADVANCE(328);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(320);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '0') ADVANCE(266);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(177);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(320);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(321);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(177);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(320);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(328);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '%') ADVANCE(320);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '0') ADVANCE(266);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '>') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'q') ADVANCE(155);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(327);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '0') ADVANCE(266);
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(327);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '0') ADVANCE(266);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == '[') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(110);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(312);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(347);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(315);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(348);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'j') ADVANCE(51);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(343);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(133);
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
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(365);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 163:
      if (lookahead == '|') ADVANCE(313);
      END_STATE();
    case 164:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_object_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(315);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_command_part_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 369:
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
  [28] = {.lex_state = 7},
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
  [79] = {.lex_state = 6},
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
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
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
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
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
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
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
  [253] = {.lex_state = 43},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 43},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 43},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 43},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 10},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 2},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 2},
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
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 2},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
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
    [sym_definition] = STATE(397),
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(214),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(342),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_runtime] = STATE(395),
    [sym_task] = STATE(259),
    [sym_declaration] = STATE(161),
    [sym_call] = STATE(395),
    [sym_document] = STATE(395),
    [sym_import] = STATE(259),
    [sym_workflow] = STATE(259),
    [aux_sym_document_repeat1] = STATE(259),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(219),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
    [sym_var_option] = STATE(137),
    [sym_var_option_key] = STATE(392),
    [aux_sym_command_part_var_repeat1] = STATE(137),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(220),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
    [sym_var_option] = STATE(2),
    [sym_var_option_key] = STATE(392),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(191),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [5] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(175),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [6] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(229),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [7] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(179),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [8] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(83),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_var_option_value] = STATE(146),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [9] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(186),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_RBRACK] = ACTIONS(69),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(182),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [11] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(210),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [12] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(216),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [13] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(177),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [14] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(164),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [15] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(118),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [16] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(218),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [17] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(167),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(224),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [19] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(230),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [20] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(192),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [21] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(227),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [22] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(190),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [23] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(157),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [24] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(232),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [25] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(185),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [26] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(113),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [27] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(174),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(222),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [29] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(180),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [30] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(206),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [31] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(215),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(187),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [33] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(170),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(209),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [35] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(104),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [36] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(195),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [37] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(121),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [38] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(200),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [39] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(125),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [40] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(91),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [41] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(101),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [42] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(221),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [43] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(199),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [44] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(84),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [45] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(86),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [46] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(81),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [47] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(157),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(231),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [49] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(165),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [50] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(162),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(163),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(114),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [53] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(168),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(169),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(207),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [56] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(166),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [57] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(196),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [58] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(115),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [59] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(116),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [60] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(193),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [61] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(173),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(217),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [63] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(226),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [64] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(122),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [65] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(178),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(183),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [67] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(223),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [68] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(194),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(393),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [69] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(88),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [70] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(128),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [71] = {
    [sym_boolean] = STATE(112),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(112),
    [sym_expression] = STATE(123),
    [sym_member_access_expression] = STATE(112),
    [sym_indexing_expression] = STATE(112),
    [sym_if_then_expression] = STATE(112),
    [sym_function_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(112),
    [sym_dictionary_expression] = STATE(112),
    [sym_bracket_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(112),
    [sym_identifier] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [72] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(212),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [73] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(89),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [74] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(225),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [75] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(92),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [76] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(211),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [77] = {
    [sym_boolean] = STATE(98),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(98),
    [sym_expression] = STATE(90),
    [sym_member_access_expression] = STATE(98),
    [sym_indexing_expression] = STATE(98),
    [sym_if_then_expression] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_parentheses_expression] = STATE(98),
    [sym_dictionary_expression] = STATE(98),
    [sym_bracket_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_type] = STATE(368),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(98),
    [sym_identifier] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_object_type] = ACTIONS(7),
    [anon_sym_Boolean] = ACTIONS(9),
    [anon_sym_Int] = ACTIONS(9),
    [anon_sym_Float] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_String] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(25),
    [anon_sym_Map] = ACTIONS(27),
  },
  [78] = {
    [sym_boolean] = STATE(161),
    [sym_primitive_type] = STATE(279),
    [sym_string_literal] = STATE(161),
    [sym_expression] = STATE(228),
    [sym_member_access_expression] = STATE(161),
    [sym_indexing_expression] = STATE(161),
    [sym_if_then_expression] = STATE(161),
    [sym_function_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(161),
    [sym_dictionary_expression] = STATE(161),
    [sym_bracket_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_type] = STATE(391),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(161),
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
  [79] = {
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
  [80] = {
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
  [81] = {
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
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
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
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [82] = {
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
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_Array] = ACTIONS(137),
    [anon_sym_Map] = ACTIONS(137),
    [anon_sym_sep] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
  },
  [83] = {
    [sym_identifier] = ACTIONS(141),
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
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
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
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_Array] = ACTIONS(141),
    [anon_sym_Map] = ACTIONS(141),
    [anon_sym_sep] = ACTIONS(141),
    [anon_sym_quote] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
  },
  [84] = {
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
  [85] = {
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
  [86] = {
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
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [87] = {
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
  [88] = {
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
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_Array] = ACTIONS(115),
    [anon_sym_Map] = ACTIONS(115),
    [anon_sym_sep] = ACTIONS(115),
    [anon_sym_quote] = ACTIONS(115),
    [anon_sym_default] = ACTIONS(115),
  },
  [89] = {
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
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
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
  [90] = {
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
  [91] = {
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
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(123),
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
  [92] = {
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
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
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
  [93] = {
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
  [94] = {
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
  [95] = {
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
  [96] = {
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
  [97] = {
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
  [98] = {
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
  [99] = {
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
  [100] = {
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
  [101] = {
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
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
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
    [anon_sym_BANG] = ACTIONS(195),
    [anon_sym_Array] = ACTIONS(195),
    [anon_sym_Map] = ACTIONS(195),
    [anon_sym_sep] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(195),
  },
  [102] = {
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
  [103] = {
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
  [104] = {
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
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
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
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(207),
    [anon_sym_Map] = ACTIONS(207),
    [anon_sym_sep] = ACTIONS(207),
    [anon_sym_quote] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
  },
  [105] = {
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
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_parameter_meta] = ACTIONS(107),
    [anon_sym_meta] = ACTIONS(107),
    [anon_sym_command] = ACTIONS(107),
    [anon_sym_call] = ACTIONS(107),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_scatter] = ACTIONS(107),
  },
  [106] = {
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
  [107] = {
    [sym_object_type] = ACTIONS(139),
    [anon_sym_Boolean] = ACTIONS(139),
    [anon_sym_Int] = ACTIONS(139),
    [anon_sym_Float] = ACTIONS(139),
    [anon_sym_File] = ACTIONS(139),
    [anon_sym_String] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_then] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_Array] = ACTIONS(139),
    [anon_sym_Map] = ACTIONS(139),
    [anon_sym_runtime] = ACTIONS(139),
    [anon_sym_output] = ACTIONS(139),
    [anon_sym_parameter_meta] = ACTIONS(139),
    [anon_sym_meta] = ACTIONS(139),
    [anon_sym_command] = ACTIONS(139),
    [anon_sym_call] = ACTIONS(139),
    [anon_sym_while] = ACTIONS(139),
    [anon_sym_scatter] = ACTIONS(139),
  },
  [108] = {
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
  [109] = {
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
  [110] = {
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
  [111] = {
    [sym_object_type] = ACTIONS(177),
    [anon_sym_Boolean] = ACTIONS(177),
    [anon_sym_Int] = ACTIONS(177),
    [anon_sym_Float] = ACTIONS(177),
    [anon_sym_File] = ACTIONS(177),
    [anon_sym_String] = ACTIONS(177),
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
  [112] = {
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
  [113] = {
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
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
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
  [114] = {
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
  [115] = {
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
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
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
  [116] = {
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
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
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
  [117] = {
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
  [118] = {
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
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
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
  [119] = {
    [sym_object_type] = ACTIONS(173),
    [anon_sym_Boolean] = ACTIONS(173),
    [anon_sym_Int] = ACTIONS(173),
    [anon_sym_Float] = ACTIONS(173),
    [anon_sym_File] = ACTIONS(173),
    [anon_sym_String] = ACTIONS(173),
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
  [120] = {
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
  [121] = {
    [sym_object_type] = ACTIONS(197),
    [anon_sym_Boolean] = ACTIONS(197),
    [anon_sym_Int] = ACTIONS(197),
    [anon_sym_Float] = ACTIONS(197),
    [anon_sym_File] = ACTIONS(197),
    [anon_sym_String] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(197),
    [anon_sym_then] = ACTIONS(197),
    [anon_sym_else] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
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
  [122] = {
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
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
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
  [123] = {
    [sym_object_type] = ACTIONS(161),
    [anon_sym_Boolean] = ACTIONS(161),
    [anon_sym_Int] = ACTIONS(161),
    [anon_sym_Float] = ACTIONS(161),
    [anon_sym_File] = ACTIONS(161),
    [anon_sym_String] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_then] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(221),
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
  [124] = {
    [sym_object_type] = ACTIONS(169),
    [anon_sym_Boolean] = ACTIONS(169),
    [anon_sym_Int] = ACTIONS(169),
    [anon_sym_Float] = ACTIONS(169),
    [anon_sym_File] = ACTIONS(169),
    [anon_sym_String] = ACTIONS(169),
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
  [125] = {
    [sym_object_type] = ACTIONS(209),
    [anon_sym_Boolean] = ACTIONS(209),
    [anon_sym_Int] = ACTIONS(209),
    [anon_sym_Float] = ACTIONS(209),
    [anon_sym_File] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(209),
    [anon_sym_then] = ACTIONS(209),
    [anon_sym_else] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
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
  [126] = {
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
  [127] = {
    [sym_object_type] = ACTIONS(153),
    [anon_sym_Boolean] = ACTIONS(153),
    [anon_sym_Int] = ACTIONS(153),
    [anon_sym_Float] = ACTIONS(153),
    [anon_sym_File] = ACTIONS(153),
    [anon_sym_String] = ACTIONS(153),
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
  [128] = {
    [sym_object_type] = ACTIONS(149),
    [anon_sym_Boolean] = ACTIONS(149),
    [anon_sym_Int] = ACTIONS(149),
    [anon_sym_Float] = ACTIONS(149),
    [anon_sym_File] = ACTIONS(149),
    [anon_sym_String] = ACTIONS(149),
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
  [129] = {
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
  [130] = {
    [sym_object_type] = ACTIONS(165),
    [anon_sym_Boolean] = ACTIONS(165),
    [anon_sym_Int] = ACTIONS(165),
    [anon_sym_Float] = ACTIONS(165),
    [anon_sym_File] = ACTIONS(165),
    [anon_sym_String] = ACTIONS(165),
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
  [131] = {
    [sym_object_type] = ACTIONS(157),
    [anon_sym_Boolean] = ACTIONS(157),
    [anon_sym_Int] = ACTIONS(157),
    [anon_sym_Float] = ACTIONS(157),
    [anon_sym_File] = ACTIONS(157),
    [anon_sym_String] = ACTIONS(157),
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
  [132] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(140),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(140),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [133] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(136),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(136),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [134] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(138),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(138),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [135] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(139),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(139),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [136] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [137] = {
    [sym_var_option] = STATE(137),
    [sym_var_option_key] = STATE(392),
    [aux_sym_command_part_var_repeat1] = STATE(137),
    [sym_identifier] = ACTIONS(267),
    [sym_integer] = ACTIONS(267),
    [sym_float] = ACTIONS(267),
    [anon_sym_true] = ACTIONS(269),
    [anon_sym_false] = ACTIONS(269),
    [sym_object_type] = ACTIONS(267),
    [anon_sym_Boolean] = ACTIONS(267),
    [anon_sym_Int] = ACTIONS(267),
    [anon_sym_Float] = ACTIONS(267),
    [anon_sym_File] = ACTIONS(267),
    [anon_sym_String] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_if] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_BANG] = ACTIONS(272),
    [anon_sym_Array] = ACTIONS(267),
    [anon_sym_Map] = ACTIONS(267),
    [anon_sym_sep] = ACTIONS(269),
    [anon_sym_quote] = ACTIONS(269),
    [anon_sym_default] = ACTIONS(269),
  },
  [138] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [139] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [140] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(141),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(249),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_call] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_scatter] = ACTIONS(257),
  },
  [141] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_parameter_meta] = STATE(241),
    [sym_meta] = STATE(241),
    [sym_declaration] = STATE(241),
    [sym_call] = STATE(241),
    [sym_loop] = STATE(241),
    [sym_conditional] = STATE(241),
    [sym_workflow_element] = STATE(141),
    [sym_scatter] = STATE(241),
    [aux_sym_loop_repeat1] = STATE(141),
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
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(173),
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
    [anon_sym_task] = ACTIONS(173),
    [anon_sym_as] = ACTIONS(173),
    [anon_sym_import] = ACTIONS(173),
    [anon_sym_workflow] = ACTIONS(173),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(157),
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
  [144] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_runtime] = STATE(251),
    [sym_task_output] = STATE(251),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_task_sections] = STATE(369),
    [sym_declaration] = STATE(181),
    [sym_command] = STATE(251),
    [aux_sym_task_repeat1] = STATE(181),
    [aux_sym_task_sections_repeat1] = STATE(251),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_runtime] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(314),
    [anon_sym_parameter_meta] = ACTIONS(316),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_command] = ACTIONS(318),
  },
  [145] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_runtime] = STATE(251),
    [sym_task_output] = STATE(251),
    [sym_parameter_meta] = STATE(251),
    [sym_meta] = STATE(251),
    [sym_task_sections] = STATE(351),
    [sym_declaration] = STATE(144),
    [sym_command] = STATE(251),
    [aux_sym_task_repeat1] = STATE(144),
    [aux_sym_task_sections_repeat1] = STATE(251),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_runtime] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(314),
    [anon_sym_parameter_meta] = ACTIONS(316),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_command] = ACTIONS(318),
  },
  [146] = {
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
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
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
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
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
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(181),
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
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
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
  [151] = {
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
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_identifier] = ACTIONS(177),
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
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
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
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(189),
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
  [155] = {
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
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(137),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
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
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_identifier] = ACTIONS(193),
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
  [159] = {
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
    [anon_sym_EQ] = ACTIONS(324),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_identifier] = ACTIONS(185),
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(330),
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
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(330),
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
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(330),
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
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [171] = {
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
    [anon_sym_EQ] = ACTIONS(346),
  },
  [172] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(176),
    [sym_object_type] = ACTIONS(348),
    [anon_sym_Boolean] = ACTIONS(348),
    [anon_sym_Int] = ACTIONS(348),
    [anon_sym_Float] = ACTIONS(348),
    [anon_sym_File] = ACTIONS(348),
    [anon_sym_String] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_if] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_Array] = ACTIONS(348),
    [anon_sym_Map] = ACTIONS(348),
    [anon_sym_parameter_meta] = ACTIONS(348),
    [anon_sym_meta] = ACTIONS(348),
    [anon_sym_call] = ACTIONS(348),
    [anon_sym_as] = ACTIONS(348),
    [anon_sym_while] = ACTIONS(348),
    [anon_sym_scatter] = ACTIONS(348),
  },
  [173] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [174] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(328),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [175] = {
    [aux_sym_function_expression_repeat1] = STATE(320),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [176] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(176),
    [sym_object_type] = ACTIONS(362),
    [anon_sym_Boolean] = ACTIONS(362),
    [anon_sym_Int] = ACTIONS(362),
    [anon_sym_Float] = ACTIONS(362),
    [anon_sym_File] = ACTIONS(362),
    [anon_sym_String] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_if] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_Array] = ACTIONS(362),
    [anon_sym_Map] = ACTIONS(362),
    [anon_sym_parameter_meta] = ACTIONS(362),
    [anon_sym_meta] = ACTIONS(362),
    [anon_sym_call] = ACTIONS(362),
    [anon_sym_as] = ACTIONS(362),
    [anon_sym_while] = ACTIONS(362),
    [anon_sym_scatter] = ACTIONS(362),
  },
  [177] = {
    [aux_sym_function_expression_repeat1] = STATE(332),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [178] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(333),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [179] = {
    [aux_sym_function_expression_repeat1] = STATE(319),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [180] = {
    [sym_identifier] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [181] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(399),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_declaration] = STATE(181),
    [aux_sym_task_repeat1] = STATE(181),
    [sym_object_type] = ACTIONS(389),
    [anon_sym_Boolean] = ACTIONS(392),
    [anon_sym_Int] = ACTIONS(392),
    [anon_sym_Float] = ACTIONS(392),
    [anon_sym_File] = ACTIONS(392),
    [anon_sym_String] = ACTIONS(392),
    [anon_sym_Array] = ACTIONS(395),
    [anon_sym_Map] = ACTIONS(398),
    [anon_sym_runtime] = ACTIONS(401),
    [anon_sym_output] = ACTIONS(401),
    [anon_sym_parameter_meta] = ACTIONS(401),
    [anon_sym_meta] = ACTIONS(401),
    [anon_sym_command] = ACTIONS(401),
  },
  [182] = {
    [aux_sym_function_expression_repeat1] = STATE(334),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [183] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(338),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [184] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(172),
    [sym_object_type] = ACTIONS(407),
    [anon_sym_Boolean] = ACTIONS(407),
    [anon_sym_Int] = ACTIONS(407),
    [anon_sym_Float] = ACTIONS(407),
    [anon_sym_File] = ACTIONS(407),
    [anon_sym_String] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_Array] = ACTIONS(407),
    [anon_sym_Map] = ACTIONS(407),
    [anon_sym_parameter_meta] = ACTIONS(407),
    [anon_sym_meta] = ACTIONS(407),
    [anon_sym_call] = ACTIONS(407),
    [anon_sym_as] = ACTIONS(407),
    [anon_sym_while] = ACTIONS(407),
    [anon_sym_scatter] = ACTIONS(407),
  },
  [185] = {
    [sym_identifier] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(161),
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
  [186] = {
    [aux_sym_function_expression_repeat1] = STATE(325),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [187] = {
    [sym_identifier] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [188] = {
    [sym_identifier] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
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
  [189] = {
    [sym_identifier] = ACTIONS(157),
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
  [190] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [191] = {
    [aux_sym_function_expression_repeat1] = STATE(336),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [192] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [193] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [194] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [195] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
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
  [196] = {
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(115),
  },
  [197] = {
    [sym_object_type] = ACTIONS(362),
    [anon_sym_Boolean] = ACTIONS(362),
    [anon_sym_Int] = ACTIONS(362),
    [anon_sym_Float] = ACTIONS(362),
    [anon_sym_File] = ACTIONS(362),
    [anon_sym_String] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_if] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_Array] = ACTIONS(362),
    [anon_sym_Map] = ACTIONS(362),
    [anon_sym_parameter_meta] = ACTIONS(362),
    [anon_sym_meta] = ACTIONS(362),
    [anon_sym_call] = ACTIONS(362),
    [anon_sym_as] = ACTIONS(362),
    [anon_sym_while] = ACTIONS(362),
    [anon_sym_scatter] = ACTIONS(362),
  },
  [198] = {
    [sym_call_body] = STATE(247),
    [sym_object_type] = ACTIONS(413),
    [anon_sym_Boolean] = ACTIONS(413),
    [anon_sym_Int] = ACTIONS(413),
    [anon_sym_Float] = ACTIONS(413),
    [anon_sym_File] = ACTIONS(413),
    [anon_sym_String] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_Array] = ACTIONS(413),
    [anon_sym_Map] = ACTIONS(413),
    [anon_sym_parameter_meta] = ACTIONS(413),
    [anon_sym_meta] = ACTIONS(413),
    [anon_sym_call] = ACTIONS(413),
    [anon_sym_as] = ACTIONS(417),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_scatter] = ACTIONS(413),
  },
  [199] = {
    [sym_identifier] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [200] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [201] = {
    [sym_parameter_meta_kv] = STATE(360),
    [aux_sym_parameter_meta_repeat1] = STATE(205),
    [sym_identifier] = ACTIONS(423),
    [sym_object_type] = ACTIONS(425),
    [anon_sym_Boolean] = ACTIONS(425),
    [anon_sym_Int] = ACTIONS(425),
    [anon_sym_Float] = ACTIONS(425),
    [anon_sym_File] = ACTIONS(425),
    [anon_sym_String] = ACTIONS(425),
    [anon_sym_if] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_Array] = ACTIONS(425),
    [anon_sym_Map] = ACTIONS(425),
    [anon_sym_parameter_meta] = ACTIONS(425),
    [anon_sym_meta] = ACTIONS(425),
    [anon_sym_call] = ACTIONS(425),
    [anon_sym_while] = ACTIONS(425),
    [anon_sym_scatter] = ACTIONS(425),
  },
  [202] = {
    [sym_object_type] = ACTIONS(429),
    [anon_sym_Boolean] = ACTIONS(429),
    [anon_sym_Int] = ACTIONS(429),
    [anon_sym_Float] = ACTIONS(429),
    [anon_sym_File] = ACTIONS(429),
    [anon_sym_String] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_Array] = ACTIONS(429),
    [anon_sym_Map] = ACTIONS(429),
    [anon_sym_runtime] = ACTIONS(429),
    [anon_sym_output] = ACTIONS(429),
    [anon_sym_parameter_meta] = ACTIONS(429),
    [anon_sym_meta] = ACTIONS(429),
    [anon_sym_command] = ACTIONS(429),
    [anon_sym_call] = ACTIONS(429),
    [anon_sym_while] = ACTIONS(429),
    [anon_sym_scatter] = ACTIONS(429),
  },
  [203] = {
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
    [anon_sym_EQ] = ACTIONS(431),
  },
  [204] = {
    [sym_parameter_meta_kv] = STATE(360),
    [aux_sym_parameter_meta_repeat1] = STATE(201),
    [sym_identifier] = ACTIONS(423),
    [sym_object_type] = ACTIONS(433),
    [anon_sym_Boolean] = ACTIONS(433),
    [anon_sym_Int] = ACTIONS(433),
    [anon_sym_Float] = ACTIONS(433),
    [anon_sym_File] = ACTIONS(433),
    [anon_sym_String] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(433),
    [anon_sym_Map] = ACTIONS(433),
    [anon_sym_parameter_meta] = ACTIONS(433),
    [anon_sym_meta] = ACTIONS(433),
    [anon_sym_call] = ACTIONS(433),
    [anon_sym_while] = ACTIONS(433),
    [anon_sym_scatter] = ACTIONS(433),
  },
  [205] = {
    [sym_parameter_meta_kv] = STATE(360),
    [aux_sym_parameter_meta_repeat1] = STATE(205),
    [sym_identifier] = ACTIONS(437),
    [sym_object_type] = ACTIONS(440),
    [anon_sym_Boolean] = ACTIONS(440),
    [anon_sym_Int] = ACTIONS(440),
    [anon_sym_Float] = ACTIONS(440),
    [anon_sym_File] = ACTIONS(440),
    [anon_sym_String] = ACTIONS(440),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_Array] = ACTIONS(440),
    [anon_sym_Map] = ACTIONS(440),
    [anon_sym_parameter_meta] = ACTIONS(440),
    [anon_sym_meta] = ACTIONS(440),
    [anon_sym_call] = ACTIONS(440),
    [anon_sym_while] = ACTIONS(440),
    [anon_sym_scatter] = ACTIONS(440),
  },
  [206] = {
    [sym_identifier] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_BANG_EQ] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(385),
  },
  [207] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [208] = {
    [sym_object_type] = ACTIONS(448),
    [anon_sym_Boolean] = ACTIONS(448),
    [anon_sym_Int] = ACTIONS(448),
    [anon_sym_Float] = ACTIONS(448),
    [anon_sym_File] = ACTIONS(448),
    [anon_sym_String] = ACTIONS(448),
    [anon_sym_if] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_Array] = ACTIONS(448),
    [anon_sym_Map] = ACTIONS(448),
    [anon_sym_runtime] = ACTIONS(448),
    [anon_sym_output] = ACTIONS(448),
    [anon_sym_parameter_meta] = ACTIONS(448),
    [anon_sym_meta] = ACTIONS(448),
    [anon_sym_command] = ACTIONS(448),
    [anon_sym_call] = ACTIONS(448),
    [anon_sym_while] = ACTIONS(448),
    [anon_sym_scatter] = ACTIONS(448),
  },
  [209] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [210] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [211] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [212] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(456),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [213] = {
    [sym_call_body] = STATE(236),
    [sym_object_type] = ACTIONS(458),
    [anon_sym_Boolean] = ACTIONS(458),
    [anon_sym_Int] = ACTIONS(458),
    [anon_sym_Float] = ACTIONS(458),
    [anon_sym_File] = ACTIONS(458),
    [anon_sym_String] = ACTIONS(458),
    [anon_sym_if] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_Array] = ACTIONS(458),
    [anon_sym_Map] = ACTIONS(458),
    [anon_sym_parameter_meta] = ACTIONS(458),
    [anon_sym_meta] = ACTIONS(458),
    [anon_sym_call] = ACTIONS(458),
    [anon_sym_while] = ACTIONS(458),
    [anon_sym_scatter] = ACTIONS(458),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [217] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(466),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [218] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [219] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [220] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [221] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [222] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [223] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(478),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [224] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [225] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [226] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [228] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [229] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [230] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [231] = {
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [anon_sym_BANG_EQ] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
  },
  [232] = {
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
  },
  [233] = {
    [sym_identifier] = ACTIONS(440),
    [sym_object_type] = ACTIONS(440),
    [anon_sym_Boolean] = ACTIONS(440),
    [anon_sym_Int] = ACTIONS(440),
    [anon_sym_Float] = ACTIONS(440),
    [anon_sym_File] = ACTIONS(440),
    [anon_sym_String] = ACTIONS(440),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_Array] = ACTIONS(440),
    [anon_sym_Map] = ACTIONS(440),
    [anon_sym_parameter_meta] = ACTIONS(440),
    [anon_sym_meta] = ACTIONS(440),
    [anon_sym_call] = ACTIONS(440),
    [anon_sym_while] = ACTIONS(440),
    [anon_sym_scatter] = ACTIONS(440),
  },
  [234] = {
    [sym_object_type] = ACTIONS(498),
    [anon_sym_Boolean] = ACTIONS(498),
    [anon_sym_Int] = ACTIONS(498),
    [anon_sym_Float] = ACTIONS(498),
    [anon_sym_File] = ACTIONS(498),
    [anon_sym_String] = ACTIONS(498),
    [anon_sym_if] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_Array] = ACTIONS(498),
    [anon_sym_Map] = ACTIONS(498),
    [anon_sym_parameter_meta] = ACTIONS(498),
    [anon_sym_meta] = ACTIONS(498),
    [anon_sym_call] = ACTIONS(498),
    [anon_sym_while] = ACTIONS(498),
    [anon_sym_scatter] = ACTIONS(498),
  },
  [235] = {
    [sym_object_type] = ACTIONS(500),
    [anon_sym_Boolean] = ACTIONS(500),
    [anon_sym_Int] = ACTIONS(500),
    [anon_sym_Float] = ACTIONS(500),
    [anon_sym_File] = ACTIONS(500),
    [anon_sym_String] = ACTIONS(500),
    [anon_sym_if] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_Array] = ACTIONS(500),
    [anon_sym_Map] = ACTIONS(500),
    [anon_sym_parameter_meta] = ACTIONS(500),
    [anon_sym_meta] = ACTIONS(500),
    [anon_sym_call] = ACTIONS(500),
    [anon_sym_while] = ACTIONS(500),
    [anon_sym_scatter] = ACTIONS(500),
  },
  [236] = {
    [sym_object_type] = ACTIONS(502),
    [anon_sym_Boolean] = ACTIONS(502),
    [anon_sym_Int] = ACTIONS(502),
    [anon_sym_Float] = ACTIONS(502),
    [anon_sym_File] = ACTIONS(502),
    [anon_sym_String] = ACTIONS(502),
    [anon_sym_if] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_Array] = ACTIONS(502),
    [anon_sym_Map] = ACTIONS(502),
    [anon_sym_parameter_meta] = ACTIONS(502),
    [anon_sym_meta] = ACTIONS(502),
    [anon_sym_call] = ACTIONS(502),
    [anon_sym_while] = ACTIONS(502),
    [anon_sym_scatter] = ACTIONS(502),
  },
  [237] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_task_output_kv] = STATE(237),
    [aux_sym_task_output_repeat1] = STATE(237),
    [sym_object_type] = ACTIONS(504),
    [anon_sym_Boolean] = ACTIONS(507),
    [anon_sym_Int] = ACTIONS(507),
    [anon_sym_Float] = ACTIONS(507),
    [anon_sym_File] = ACTIONS(507),
    [anon_sym_String] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_Array] = ACTIONS(512),
    [anon_sym_Map] = ACTIONS(515),
  },
  [238] = {
    [sym_object_type] = ACTIONS(518),
    [anon_sym_Boolean] = ACTIONS(518),
    [anon_sym_Int] = ACTIONS(518),
    [anon_sym_Float] = ACTIONS(518),
    [anon_sym_File] = ACTIONS(518),
    [anon_sym_String] = ACTIONS(518),
    [anon_sym_if] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_Array] = ACTIONS(518),
    [anon_sym_Map] = ACTIONS(518),
    [anon_sym_parameter_meta] = ACTIONS(518),
    [anon_sym_meta] = ACTIONS(518),
    [anon_sym_call] = ACTIONS(518),
    [anon_sym_while] = ACTIONS(518),
    [anon_sym_scatter] = ACTIONS(518),
  },
  [239] = {
    [sym_object_type] = ACTIONS(520),
    [anon_sym_Boolean] = ACTIONS(520),
    [anon_sym_Int] = ACTIONS(520),
    [anon_sym_Float] = ACTIONS(520),
    [anon_sym_File] = ACTIONS(520),
    [anon_sym_String] = ACTIONS(520),
    [anon_sym_if] = ACTIONS(520),
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_Array] = ACTIONS(520),
    [anon_sym_Map] = ACTIONS(520),
    [anon_sym_parameter_meta] = ACTIONS(520),
    [anon_sym_meta] = ACTIONS(520),
    [anon_sym_call] = ACTIONS(520),
    [anon_sym_while] = ACTIONS(520),
    [anon_sym_scatter] = ACTIONS(520),
  },
  [240] = {
    [sym_object_type] = ACTIONS(522),
    [anon_sym_Boolean] = ACTIONS(522),
    [anon_sym_Int] = ACTIONS(522),
    [anon_sym_Float] = ACTIONS(522),
    [anon_sym_File] = ACTIONS(522),
    [anon_sym_String] = ACTIONS(522),
    [anon_sym_if] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(522),
    [anon_sym_Array] = ACTIONS(522),
    [anon_sym_Map] = ACTIONS(522),
    [anon_sym_parameter_meta] = ACTIONS(522),
    [anon_sym_meta] = ACTIONS(522),
    [anon_sym_call] = ACTIONS(522),
    [anon_sym_while] = ACTIONS(522),
    [anon_sym_scatter] = ACTIONS(522),
  },
  [241] = {
    [sym_object_type] = ACTIONS(524),
    [anon_sym_Boolean] = ACTIONS(524),
    [anon_sym_Int] = ACTIONS(524),
    [anon_sym_Float] = ACTIONS(524),
    [anon_sym_File] = ACTIONS(524),
    [anon_sym_String] = ACTIONS(524),
    [anon_sym_if] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_Array] = ACTIONS(524),
    [anon_sym_Map] = ACTIONS(524),
    [anon_sym_parameter_meta] = ACTIONS(524),
    [anon_sym_meta] = ACTIONS(524),
    [anon_sym_call] = ACTIONS(524),
    [anon_sym_while] = ACTIONS(524),
    [anon_sym_scatter] = ACTIONS(524),
  },
  [242] = {
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
  [243] = {
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
  [244] = {
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
  [245] = {
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
  [246] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_task_output_kv] = STATE(237),
    [aux_sym_task_output_repeat1] = STATE(237),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
  },
  [247] = {
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
  [248] = {
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
  [249] = {
    [sym_primitive_type] = STATE(279),
    [sym_type] = STATE(365),
    [sym_array_type] = STATE(279),
    [sym_map_type] = STATE(279),
    [sym_task_output_kv] = STATE(246),
    [aux_sym_task_output_repeat1] = STATE(246),
    [sym_object_type] = ACTIONS(237),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(540),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
  },
  [250] = {
    [sym_runtime] = STATE(250),
    [sym_task_output] = STATE(250),
    [sym_parameter_meta] = STATE(250),
    [sym_meta] = STATE(250),
    [sym_command] = STATE(250),
    [aux_sym_task_sections_repeat1] = STATE(250),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_runtime] = ACTIONS(544),
    [anon_sym_output] = ACTIONS(547),
    [anon_sym_parameter_meta] = ACTIONS(550),
    [anon_sym_meta] = ACTIONS(553),
    [anon_sym_command] = ACTIONS(556),
  },
  [251] = {
    [sym_runtime] = STATE(250),
    [sym_task_output] = STATE(250),
    [sym_parameter_meta] = STATE(250),
    [sym_meta] = STATE(250),
    [sym_command] = STATE(250),
    [aux_sym_task_sections_repeat1] = STATE(250),
    [anon_sym_RBRACE] = ACTIONS(559),
    [anon_sym_runtime] = ACTIONS(312),
    [anon_sym_output] = ACTIONS(314),
    [anon_sym_parameter_meta] = ACTIONS(316),
    [anon_sym_meta] = ACTIONS(251),
    [anon_sym_command] = ACTIONS(318),
  },
  [252] = {
    [sym_primitive_type] = STATE(350),
    [sym_array_type] = STATE(350),
    [sym_map_type] = STATE(350),
    [sym_object_type] = ACTIONS(561),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_Array] = ACTIONS(245),
    [anon_sym_Map] = ACTIONS(247),
  },
  [253] = {
    [sym_parameter_meta_kv] = STATE(363),
    [aux_sym_parameter_meta_repeat1] = STATE(253),
    [sym_identifier] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_runtime] = ACTIONS(440),
    [anon_sym_output] = ACTIONS(440),
    [anon_sym_parameter_meta] = ACTIONS(440),
    [anon_sym_meta] = ACTIONS(440),
    [anon_sym_command] = ACTIONS(440),
  },
  [254] = {
    [sym_primitive_type] = STATE(388),
    [sym_array_type] = STATE(388),
    [sym_object_type] = ACTIONS(563),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_Array] = ACTIONS(245),
  },
  [255] = {
    [sym_parameter_meta_kv] = STATE(363),
    [aux_sym_parameter_meta_repeat1] = STATE(253),
    [sym_identifier] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_runtime] = ACTIONS(425),
    [anon_sym_output] = ACTIONS(425),
    [anon_sym_parameter_meta] = ACTIONS(425),
    [anon_sym_meta] = ACTIONS(425),
    [anon_sym_command] = ACTIONS(425),
  },
  [256] = {
    [sym_object_type] = ACTIONS(565),
    [anon_sym_Boolean] = ACTIONS(565),
    [anon_sym_Int] = ACTIONS(565),
    [anon_sym_Float] = ACTIONS(565),
    [anon_sym_File] = ACTIONS(565),
    [anon_sym_String] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_Array] = ACTIONS(565),
    [anon_sym_Map] = ACTIONS(565),
  },
  [257] = {
    [sym_parameter_meta_kv] = STATE(363),
    [aux_sym_parameter_meta_repeat1] = STATE(255),
    [sym_identifier] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_runtime] = ACTIONS(433),
    [anon_sym_output] = ACTIONS(433),
    [anon_sym_parameter_meta] = ACTIONS(433),
    [anon_sym_meta] = ACTIONS(433),
    [anon_sym_command] = ACTIONS(433),
  },
  [258] = {
    [sym_task] = STATE(258),
    [sym_import] = STATE(258),
    [sym_workflow] = STATE(258),
    [aux_sym_document_repeat1] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(567),
    [anon_sym_task] = ACTIONS(569),
    [anon_sym_import] = ACTIONS(572),
    [anon_sym_workflow] = ACTIONS(575),
  },
  [259] = {
    [sym_task] = STATE(258),
    [sym_import] = STATE(258),
    [sym_workflow] = STATE(258),
    [aux_sym_document_repeat1] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(578),
    [anon_sym_task] = ACTIONS(580),
    [anon_sym_import] = ACTIONS(582),
    [anon_sym_workflow] = ACTIONS(584),
  },
  [260] = {
    [sym_command_part] = STATE(260),
    [sym_command_part_var] = STATE(317),
    [aux_sym_command_repeat1] = STATE(260),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_GT_GT_GT] = ACTIONS(586),
    [sym_command_part_string] = ACTIONS(588),
    [anon_sym_DOLLAR] = ACTIONS(591),
  },
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [anon_sym_RBRACE] = ACTIONS(594),
    [anon_sym_runtime] = ACTIONS(594),
    [anon_sym_output] = ACTIONS(594),
    [anon_sym_parameter_meta] = ACTIONS(594),
    [anon_sym_meta] = ACTIONS(594),
    [anon_sym_command] = ACTIONS(594),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_runtime] = ACTIONS(596),
    [anon_sym_output] = ACTIONS(596),
    [anon_sym_parameter_meta] = ACTIONS(596),
    [anon_sym_meta] = ACTIONS(596),
    [anon_sym_command] = ACTIONS(596),
  },
  [263] = {
    [sym_identifier] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_runtime] = ACTIONS(440),
    [anon_sym_output] = ACTIONS(440),
    [anon_sym_parameter_meta] = ACTIONS(440),
    [anon_sym_meta] = ACTIONS(440),
    [anon_sym_command] = ACTIONS(440),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [sym_identifier] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_PLUS] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(598),
  },
  [265] = {
    [sym_command_part] = STATE(260),
    [sym_command_part_var] = STATE(317),
    [aux_sym_command_repeat1] = STATE(260),
    [anon_sym_GT_GT_GT] = ACTIONS(600),
    [sym_command_part_string] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(604),
  },
  [266] = {
    [anon_sym_RBRACE] = ACTIONS(606),
    [anon_sym_runtime] = ACTIONS(606),
    [anon_sym_output] = ACTIONS(606),
    [anon_sym_parameter_meta] = ACTIONS(606),
    [anon_sym_meta] = ACTIONS(606),
    [anon_sym_command] = ACTIONS(606),
  },
  [267] = {
    [anon_sym_RBRACE] = ACTIONS(608),
    [anon_sym_runtime] = ACTIONS(608),
    [anon_sym_output] = ACTIONS(608),
    [anon_sym_parameter_meta] = ACTIONS(608),
    [anon_sym_meta] = ACTIONS(608),
    [anon_sym_command] = ACTIONS(608),
  },
  [268] = {
    [sym_command_part] = STATE(260),
    [sym_command_part_var] = STATE(317),
    [aux_sym_command_repeat1] = STATE(260),
    [anon_sym_RBRACE] = ACTIONS(600),
    [sym_command_part_string] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(604),
  },
  [269] = {
    [sym_primitive_type] = STATE(387),
    [anon_sym_Boolean] = ACTIONS(239),
    [anon_sym_Int] = ACTIONS(239),
    [anon_sym_Float] = ACTIONS(239),
    [anon_sym_File] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
  },
  [270] = {
    [anon_sym_RBRACE] = ACTIONS(610),
    [anon_sym_runtime] = ACTIONS(610),
    [anon_sym_output] = ACTIONS(610),
    [anon_sym_parameter_meta] = ACTIONS(610),
    [anon_sym_meta] = ACTIONS(610),
    [anon_sym_command] = ACTIONS(610),
  },
  [271] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(278),
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_as] = ACTIONS(348),
  },
  [272] = {
    [sym_command_part] = STATE(268),
    [sym_command_part_var] = STATE(317),
    [aux_sym_command_repeat1] = STATE(268),
    [sym_command_part_string] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(604),
  },
  [273] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [sym_identifier] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_QMARK] = ACTIONS(614),
  },
  [274] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(271),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_as] = ACTIONS(407),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [anon_sym_task] = ACTIONS(616),
    [anon_sym_as] = ACTIONS(618),
    [anon_sym_import] = ACTIONS(616),
    [anon_sym_workflow] = ACTIONS(616),
  },
  [276] = {
    [sym_command_part] = STATE(265),
    [sym_command_part_var] = STATE(317),
    [aux_sym_command_repeat1] = STATE(265),
    [sym_command_part_string] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(604),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [sym_identifier] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(620),
    [anon_sym_PLUS] = ACTIONS(620),
    [anon_sym_QMARK] = ACTIONS(620),
  },
  [278] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(278),
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_as] = ACTIONS(362),
  },
  [279] = {
    [sym_type_postfix_quantifier] = STATE(344),
    [ts_builtin_sym_end] = ACTIONS(625),
    [sym_identifier] = ACTIONS(625),
    [anon_sym_PLUS] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_task] = ACTIONS(629),
    [anon_sym_import] = ACTIONS(629),
    [anon_sym_workflow] = ACTIONS(629),
  },
  [281] = {
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_GT_GT_GT] = ACTIONS(631),
    [sym_command_part_string] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(631),
  },
  [282] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_as] = ACTIONS(362),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(633),
    [anon_sym_task] = ACTIONS(633),
    [anon_sym_import] = ACTIONS(633),
    [anon_sym_workflow] = ACTIONS(633),
  },
  [284] = {
    [aux_sym_string_literal_repeat1] = STATE(286),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [aux_sym_string_literal_token1] = ACTIONS(637),
    [sym_escape_sequence] = ACTIONS(637),
  },
  [285] = {
    [aux_sym_string_literal_repeat2] = STATE(294),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [aux_sym_string_literal_token2] = ACTIONS(639),
    [sym_escape_sequence] = ACTIONS(641),
  },
  [286] = {
    [aux_sym_string_literal_repeat1] = STATE(302),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [aux_sym_string_literal_token1] = ACTIONS(645),
    [sym_escape_sequence] = ACTIONS(645),
  },
  [287] = {
    [sym_runtime_kv] = STATE(287),
    [aux_sym_runtime_repeat1] = STATE(287),
    [sym_identifier] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(650),
  },
  [288] = {
    [aux_sym_string_literal_repeat1] = STATE(316),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [aux_sym_string_literal_token1] = ACTIONS(654),
    [sym_escape_sequence] = ACTIONS(654),
  },
  [289] = {
    [aux_sym_string_literal_repeat2] = STATE(315),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [aux_sym_string_literal_token2] = ACTIONS(656),
    [sym_escape_sequence] = ACTIONS(658),
  },
  [290] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_RBRACK] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_RPAREN] = ACTIONS(352),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_task] = ACTIONS(663),
    [anon_sym_import] = ACTIONS(663),
    [anon_sym_workflow] = ACTIONS(663),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [anon_sym_task] = ACTIONS(665),
    [anon_sym_import] = ACTIONS(665),
    [anon_sym_workflow] = ACTIONS(665),
  },
  [293] = {
    [sym_scatter_iteration_statment] = STATE(304),
    [aux_sym_scatter_repeat1] = STATE(304),
    [sym_identifier] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(669),
  },
  [294] = {
    [aux_sym_string_literal_repeat2] = STATE(301),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [aux_sym_string_literal_token2] = ACTIONS(671),
    [sym_escape_sequence] = ACTIONS(673),
  },
  [295] = {
    [aux_sym_string_literal_repeat2] = STATE(301),
    [anon_sym_SQUOTE] = ACTIONS(675),
    [aux_sym_string_literal_token2] = ACTIONS(671),
    [sym_escape_sequence] = ACTIONS(673),
  },
  [296] = {
    [sym_meta_kv] = STATE(296),
    [aux_sym_meta_repeat1] = STATE(296),
    [sym_identifier] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(680),
  },
  [297] = {
    [aux_sym_string_literal_repeat1] = STATE(302),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [aux_sym_string_literal_token1] = ACTIONS(645),
    [sym_escape_sequence] = ACTIONS(645),
  },
  [298] = {
    [sym_runtime_kv] = STATE(287),
    [aux_sym_runtime_repeat1] = STATE(287),
    [sym_identifier] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(684),
  },
  [299] = {
    [sym_scatter_iteration_statment] = STATE(293),
    [aux_sym_scatter_repeat1] = STATE(293),
    [sym_identifier] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(686),
  },
  [300] = {
    [aux_sym_string_literal_repeat2] = STATE(301),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [aux_sym_string_literal_token2] = ACTIONS(671),
    [sym_escape_sequence] = ACTIONS(673),
  },
  [301] = {
    [aux_sym_string_literal_repeat2] = STATE(301),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [aux_sym_string_literal_token2] = ACTIONS(692),
    [sym_escape_sequence] = ACTIONS(695),
  },
  [302] = {
    [aux_sym_string_literal_repeat1] = STATE(302),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [aux_sym_string_literal_token1] = ACTIONS(700),
    [sym_escape_sequence] = ACTIONS(700),
  },
  [303] = {
    [aux_sym_string_literal_repeat1] = STATE(302),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [aux_sym_string_literal_token1] = ACTIONS(645),
    [sym_escape_sequence] = ACTIONS(645),
  },
  [304] = {
    [sym_scatter_iteration_statment] = STATE(304),
    [aux_sym_scatter_repeat1] = STATE(304),
    [sym_identifier] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(706),
  },
  [305] = {
    [aux_sym_string_literal_repeat2] = STATE(300),
    [anon_sym_SQUOTE] = ACTIONS(708),
    [aux_sym_string_literal_token2] = ACTIONS(710),
    [sym_escape_sequence] = ACTIONS(712),
  },
  [306] = {
    [sym_call_body] = STATE(383),
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(714),
    [anon_sym_as] = ACTIONS(716),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [anon_sym_task] = ACTIONS(718),
    [anon_sym_import] = ACTIONS(718),
    [anon_sym_workflow] = ACTIONS(718),
  },
  [308] = {
    [sym_runtime_kv] = STATE(298),
    [aux_sym_runtime_repeat1] = STATE(298),
    [sym_identifier] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(720),
  },
  [309] = {
    [aux_sym_string_literal_repeat1] = STATE(303),
    [anon_sym_DQUOTE] = ACTIONS(708),
    [aux_sym_string_literal_token1] = ACTIONS(722),
    [sym_escape_sequence] = ACTIONS(722),
  },
  [310] = {
    [sym_meta_kv] = STATE(313),
    [aux_sym_meta_repeat1] = STATE(313),
    [sym_identifier] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(726),
  },
  [311] = {
    [aux_sym_string_literal_repeat2] = STATE(295),
    [anon_sym_SQUOTE] = ACTIONS(728),
    [aux_sym_string_literal_token2] = ACTIONS(730),
    [sym_escape_sequence] = ACTIONS(732),
  },
  [312] = {
    [aux_sym_string_literal_repeat1] = STATE(297),
    [anon_sym_DQUOTE] = ACTIONS(728),
    [aux_sym_string_literal_token1] = ACTIONS(734),
    [sym_escape_sequence] = ACTIONS(734),
  },
  [313] = {
    [sym_meta_kv] = STATE(296),
    [aux_sym_meta_repeat1] = STATE(296),
    [sym_identifier] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(736),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(738),
    [anon_sym_GT_GT_GT] = ACTIONS(738),
    [sym_command_part_string] = ACTIONS(738),
    [anon_sym_DOLLAR] = ACTIONS(738),
  },
  [315] = {
    [aux_sym_string_literal_repeat2] = STATE(301),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [aux_sym_string_literal_token2] = ACTIONS(671),
    [sym_escape_sequence] = ACTIONS(673),
  },
  [316] = {
    [aux_sym_string_literal_repeat1] = STATE(302),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [aux_sym_string_literal_token1] = ACTIONS(645),
    [sym_escape_sequence] = ACTIONS(645),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_GT_GT_GT] = ACTIONS(742),
    [sym_command_part_string] = ACTIONS(742),
    [anon_sym_DOLLAR] = ACTIONS(742),
  },
  [318] = {
    [sym_string_literal] = STATE(339),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
  },
  [319] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_RBRACK] = ACTIONS(744),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [320] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(746),
  },
  [321] = {
    [aux_sym_variable_mappings_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(751),
  },
  [322] = {
    [sym_string_literal] = STATE(256),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [323] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(756),
  },
  [324] = {
    [sym_call_body] = STATE(394),
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(714),
  },
  [325] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_RBRACK] = ACTIONS(758),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [326] = {
    [aux_sym_variable_mappings_repeat1] = STATE(321),
    [anon_sym_COMMA] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(762),
  },
  [327] = {
    [sym_inputs] = STATE(374),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_input] = ACTIONS(766),
  },
  [328] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(768),
  },
  [329] = {
    [sym_string_literal] = STATE(377),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [330] = {
    [sym_string_literal] = STATE(275),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [331] = {
    [sym_variable_mappings] = STATE(358),
    [sym_variable_mapping_kv] = STATE(335),
    [sym_identifier] = ACTIONS(770),
  },
  [332] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(772),
  },
  [333] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(774),
  },
  [334] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(776),
  },
  [335] = {
    [aux_sym_variable_mappings_repeat1] = STATE(326),
    [anon_sym_COMMA] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(778),
  },
  [336] = {
    [aux_sym_function_expression_repeat1] = STATE(290),
    [anon_sym_RBRACK] = ACTIONS(780),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [337] = {
    [sym_inputs] = STATE(355),
    [anon_sym_RBRACE] = ACTIONS(782),
    [anon_sym_input] = ACTIONS(766),
  },
  [338] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(784),
  },
  [339] = {
    [sym_identifier] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(786),
  },
  [340] = {
    [sym_variable_mapping_kv] = STATE(345),
    [sym_identifier] = ACTIONS(770),
  },
  [341] = {
    [sym_namespaced_identifier] = STATE(306),
    [sym_identifier] = ACTIONS(788),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_identifier] = ACTIONS(790),
  },
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(792),
    [sym_identifier] = ACTIONS(792),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(794),
    [sym_identifier] = ACTIONS(794),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACE] = ACTIONS(751),
  },
  [346] = {
    [anon_sym_LBRACE] = ACTIONS(796),
    [anon_sym_LT_LT_LT] = ACTIONS(798),
  },
  [347] = {
    [sym_namespaced_identifier] = STATE(198),
    [sym_identifier] = ACTIONS(800),
  },
  [348] = {
    [sym_scatter_body] = STATE(240),
    [anon_sym_LBRACE] = ACTIONS(802),
  },
  [349] = {
    [sym_scatter_body] = STATE(234),
    [anon_sym_LBRACE] = ACTIONS(802),
  },
  [350] = {
    [anon_sym_RBRACK] = ACTIONS(804),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(806),
  },
  [352] = {
    [anon_sym_LBRACE] = ACTIONS(808),
  },
  [353] = {
    [anon_sym_LBRACE] = ACTIONS(810),
  },
  [354] = {
    [anon_sym_LBRACE] = ACTIONS(812),
  },
  [355] = {
    [anon_sym_RBRACE] = ACTIONS(814),
  },
  [356] = {
    [anon_sym_EQ] = ACTIONS(816),
  },
  [357] = {
    [anon_sym_in] = ACTIONS(818),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(820),
  },
  [359] = {
    [anon_sym_EQ] = ACTIONS(822),
  },
  [360] = {
    [anon_sym_RBRACE] = ACTIONS(824),
  },
  [361] = {
    [anon_sym_LBRACE] = ACTIONS(826),
  },
  [362] = {
    [anon_sym_EQ] = ACTIONS(828),
  },
  [363] = {
    [anon_sym_RBRACE] = ACTIONS(830),
  },
  [364] = {
    [anon_sym_EQ] = ACTIONS(832),
  },
  [365] = {
    [sym_identifier] = ACTIONS(834),
  },
  [366] = {
    [anon_sym_LBRACK] = ACTIONS(836),
  },
  [367] = {
    [ts_builtin_sym_end] = ACTIONS(518),
  },
  [368] = {
    [sym_identifier] = ACTIONS(838),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(840),
  },
  [370] = {
    [sym_identifier] = ACTIONS(842),
  },
  [371] = {
    [anon_sym_LPAREN] = ACTIONS(844),
  },
  [372] = {
    [anon_sym_LPAREN] = ACTIONS(846),
  },
  [373] = {
    [anon_sym_LPAREN] = ACTIONS(848),
  },
  [374] = {
    [anon_sym_RBRACE] = ACTIONS(850),
  },
  [375] = {
    [anon_sym_COLON] = ACTIONS(852),
  },
  [376] = {
    [ts_builtin_sym_end] = ACTIONS(520),
  },
  [377] = {
    [anon_sym_RBRACE] = ACTIONS(854),
  },
  [378] = {
    [anon_sym_EQ] = ACTIONS(856),
  },
  [379] = {
    [anon_sym_LBRACE] = ACTIONS(858),
  },
  [380] = {
    [anon_sym_LBRACE] = ACTIONS(860),
  },
  [381] = {
    [anon_sym_LBRACE] = ACTIONS(862),
  },
  [382] = {
    [sym_identifier] = ACTIONS(864),
  },
  [383] = {
    [ts_builtin_sym_end] = ACTIONS(536),
  },
  [384] = {
    [sym_identifier] = ACTIONS(866),
  },
  [385] = {
    [sym_identifier] = ACTIONS(868),
  },
  [386] = {
    [anon_sym_COLON] = ACTIONS(870),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(872),
  },
  [388] = {
    [anon_sym_RBRACK] = ACTIONS(874),
  },
  [389] = {
    [anon_sym_LBRACE] = ACTIONS(876),
  },
  [390] = {
    [anon_sym_LBRACE] = ACTIONS(878),
  },
  [391] = {
    [sym_identifier] = ACTIONS(790),
  },
  [392] = {
    [anon_sym_EQ] = ACTIONS(880),
  },
  [393] = {
    [sym_identifier] = ACTIONS(882),
  },
  [394] = {
    [ts_builtin_sym_end] = ACTIONS(502),
  },
  [395] = {
    [ts_builtin_sym_end] = ACTIONS(460),
  },
  [396] = {
    [sym_identifier] = ACTIONS(884),
  },
  [397] = {
    [ts_builtin_sym_end] = ACTIONS(886),
  },
  [398] = {
    [sym_identifier] = ACTIONS(888),
  },
  [399] = {
    [sym_identifier] = ACTIONS(890),
  },
  [400] = {
    [sym_identifier] = ACTIONS(892),
  },
  [401] = {
    [anon_sym_LBRACE] = ACTIONS(894),
  },
  [402] = {
    [anon_sym_LBRACK] = ACTIONS(896),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(161),
  [5] = {.count = 1, .reusable = false}, SHIFT(149),
  [7] = {.count = 1, .reusable = false}, SHIFT(279),
  [9] = {.count = 1, .reusable = false}, SHIFT(264),
  [11] = {.count = 1, .reusable = true}, SHIFT(288),
  [13] = {.count = 1, .reusable = true}, SHIFT(289),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = false}, SHIFT(62),
  [19] = {.count = 1, .reusable = true}, SHIFT(16),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(17),
  [25] = {.count = 1, .reusable = false}, SHIFT(366),
  [27] = {.count = 1, .reusable = false}, SHIFT(402),
  [29] = {.count = 1, .reusable = false}, SHIFT(401),
  [31] = {.count = 1, .reusable = false}, SHIFT(400),
  [33] = {.count = 1, .reusable = false}, SHIFT(341),
  [35] = {.count = 1, .reusable = false}, SHIFT(330),
  [37] = {.count = 1, .reusable = false}, SHIFT(398),
  [39] = {.count = 1, .reusable = false}, SHIFT(203),
  [41] = {.count = 1, .reusable = false}, SHIFT(378),
  [43] = {.count = 1, .reusable = true}, SHIFT(120),
  [45] = {.count = 1, .reusable = true}, SHIFT(85),
  [47] = {.count = 1, .reusable = true}, SHIFT(106),
  [49] = {.count = 1, .reusable = true}, SHIFT(80),
  [51] = {.count = 1, .reusable = false}, SHIFT(98),
  [53] = {.count = 1, .reusable = false}, SHIFT(97),
  [55] = {.count = 1, .reusable = true}, SHIFT(284),
  [57] = {.count = 1, .reusable = true}, SHIFT(285),
  [59] = {.count = 1, .reusable = true}, SHIFT(7),
  [61] = {.count = 1, .reusable = false}, SHIFT(19),
  [63] = {.count = 1, .reusable = true}, SHIFT(42),
  [65] = {.count = 1, .reusable = true}, SHIFT(6),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 1, .reusable = true}, SHIFT(151),
  [71] = {.count = 1, .reusable = true}, SHIFT(147),
  [73] = {.count = 1, .reusable = true}, SHIFT(155),
  [75] = {.count = 1, .reusable = true}, SHIFT(108),
  [77] = {.count = 1, .reusable = true}, SHIFT(127),
  [79] = {.count = 1, .reusable = false}, SHIFT(112),
  [81] = {.count = 1, .reusable = false}, SHIFT(117),
  [83] = {.count = 1, .reusable = true}, SHIFT(309),
  [85] = {.count = 1, .reusable = true}, SHIFT(305),
  [87] = {.count = 1, .reusable = true}, SHIFT(4),
  [89] = {.count = 1, .reusable = false}, SHIFT(21),
  [91] = {.count = 1, .reusable = true}, SHIFT(76),
  [93] = {.count = 1, .reusable = true}, SHIFT(12),
  [95] = {.count = 1, .reusable = true}, SHIFT(71),
  [97] = {.count = 1, .reusable = true}, SHIFT(312),
  [99] = {.count = 1, .reusable = true}, SHIFT(311),
  [101] = {.count = 1, .reusable = false}, SHIFT(18),
  [103] = {.count = 1, .reusable = true}, SHIFT(25),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [109] = {.count = 1, .reusable = false}, SHIFT(41),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(44),
  [121] = {.count = 1, .reusable = true}, SHIFT(34),
  [123] = {.count = 1, .reusable = true}, SHIFT(5),
  [125] = {.count = 1, .reusable = true}, SHIFT(45),
  [127] = {.count = 1, .reusable = true}, SHIFT(69),
  [129] = {.count = 1, .reusable = true}, SHIFT(73),
  [131] = {.count = 1, .reusable = true}, SHIFT(77),
  [133] = {.count = 1, .reusable = false}, SHIFT(75),
  [135] = {.count = 1, .reusable = true}, SHIFT(75),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(46),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_member_access_expression, 3),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_member_access_expression, 3),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 3),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 3),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 6),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 6),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 4),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 4),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_indexing_expression, 4),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_indexing_expression, 4),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 5),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 5),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_if_then_expression, 6),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_expression, 6),
  [211] = {.count = 1, .reusable = false}, SHIFT(37),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(70),
  [219] = {.count = 1, .reusable = true}, SHIFT(72),
  [221] = {.count = 1, .reusable = true}, SHIFT(13),
  [223] = {.count = 1, .reusable = true}, SHIFT(58),
  [225] = {.count = 1, .reusable = true}, SHIFT(52),
  [227] = {.count = 1, .reusable = false}, SHIFT(26),
  [229] = {.count = 1, .reusable = true}, SHIFT(26),
  [231] = {.count = 1, .reusable = true}, SHIFT(64),
  [233] = {.count = 1, .reusable = true}, SHIFT(59),
  [235] = {.count = 1, .reusable = true}, SHIFT(15),
  [237] = {.count = 1, .reusable = true}, SHIFT(279),
  [239] = {.count = 1, .reusable = true}, SHIFT(264),
  [241] = {.count = 1, .reusable = true}, SHIFT(373),
  [243] = {.count = 1, .reusable = true}, SHIFT(291),
  [245] = {.count = 1, .reusable = true}, SHIFT(366),
  [247] = {.count = 1, .reusable = true}, SHIFT(402),
  [249] = {.count = 1, .reusable = true}, SHIFT(354),
  [251] = {.count = 1, .reusable = true}, SHIFT(379),
  [253] = {.count = 1, .reusable = true}, SHIFT(347),
  [255] = {.count = 1, .reusable = true}, SHIFT(372),
  [257] = {.count = 1, .reusable = true}, SHIFT(371),
  [259] = {.count = 1, .reusable = true}, SHIFT(235),
  [261] = {.count = 1, .reusable = true}, SHIFT(242),
  [263] = {.count = 1, .reusable = true}, SHIFT(245),
  [265] = {.count = 1, .reusable = true}, SHIFT(248),
  [267] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(378),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [274] = {.count = 1, .reusable = true}, SHIFT(244),
  [276] = {.count = 1, .reusable = true}, SHIFT(243),
  [278] = {.count = 1, .reusable = true}, SHIFT(280),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(279),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(264),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(373),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(366),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(402),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(354),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(379),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(347),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(372),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(371),
  [312] = {.count = 1, .reusable = true}, SHIFT(401),
  [314] = {.count = 1, .reusable = true}, SHIFT(381),
  [316] = {.count = 1, .reusable = true}, SHIFT(380),
  [318] = {.count = 1, .reusable = true}, SHIFT(346),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [324] = {.count = 1, .reusable = false}, SHIFT(56),
  [326] = {.count = 1, .reusable = true}, SHIFT(47),
  [328] = {.count = 1, .reusable = true}, SHIFT(48),
  [330] = {.count = 1, .reusable = true}, SHIFT(10),
  [332] = {.count = 1, .reusable = true}, SHIFT(49),
  [334] = {.count = 1, .reusable = true}, SHIFT(51),
  [336] = {.count = 1, .reusable = true}, SHIFT(14),
  [338] = {.count = 1, .reusable = true}, SHIFT(53),
  [340] = {.count = 1, .reusable = false}, SHIFT(54),
  [342] = {.count = 1, .reusable = true}, SHIFT(54),
  [344] = {.count = 1, .reusable = true}, SHIFT(50),
  [346] = {.count = 1, .reusable = false}, SHIFT(29),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(396),
  [352] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [354] = {.count = 1, .reusable = true}, SHIFT(31),
  [356] = {.count = 1, .reusable = true}, SHIFT(102),
  [358] = {.count = 1, .reusable = true}, SHIFT(61),
  [360] = {.count = 1, .reusable = true}, SHIFT(100),
  [362] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(396),
  [367] = {.count = 1, .reusable = true}, SHIFT(109),
  [369] = {.count = 1, .reusable = true}, SHIFT(153),
  [371] = {.count = 1, .reusable = true}, SHIFT(93),
  [373] = {.count = 1, .reusable = true}, SHIFT(23),
  [375] = {.count = 1, .reusable = true}, SHIFT(22),
  [377] = {.count = 1, .reusable = true}, SHIFT(20),
  [379] = {.count = 1, .reusable = true}, SHIFT(60),
  [381] = {.count = 1, .reusable = true}, SHIFT(68),
  [383] = {.count = 1, .reusable = true}, SHIFT(36),
  [385] = {.count = 1, .reusable = false}, SHIFT(57),
  [387] = {.count = 1, .reusable = true}, SHIFT(57),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(279),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(264),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(366),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(402),
  [401] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [403] = {.count = 1, .reusable = true}, SHIFT(158),
  [405] = {.count = 1, .reusable = true}, SHIFT(126),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [409] = {.count = 1, .reusable = true}, SHIFT(148),
  [411] = {.count = 1, .reusable = true}, SHIFT(130),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [415] = {.count = 1, .reusable = true}, SHIFT(337),
  [417] = {.count = 1, .reusable = true}, SHIFT(370),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 4),
  [423] = {.count = 1, .reusable = false}, SHIFT(364),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(364),
  [440] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [442] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [450] = {.count = 1, .reusable = true}, SHIFT(99),
  [452] = {.count = 1, .reusable = true}, SHIFT(65),
  [454] = {.count = 1, .reusable = true}, SHIFT(107),
  [456] = {.count = 1, .reusable = true}, SHIFT(110),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [462] = {.count = 1, .reusable = true}, SHIFT(38),
  [464] = {.count = 1, .reusable = true}, SHIFT(66),
  [466] = {.count = 1, .reusable = true}, SHIFT(63),
  [468] = {.count = 1, .reusable = true}, SHIFT(156),
  [470] = {.count = 1, .reusable = true}, SHIFT(281),
  [472] = {.count = 1, .reusable = true}, SHIFT(314),
  [474] = {.count = 1, .reusable = true}, SHIFT(82),
  [476] = {.count = 1, .reusable = true}, SHIFT(35),
  [478] = {.count = 1, .reusable = true}, SHIFT(39),
  [480] = {.count = 1, .reusable = true}, SHIFT(24),
  [482] = {.count = 1, .reusable = true}, SHIFT(353),
  [484] = {.count = 1, .reusable = true}, SHIFT(33),
  [486] = {.count = 1, .reusable = true}, SHIFT(67),
  [488] = {.count = 1, .reusable = true}, SHIFT(352),
  [490] = {.count = 1, .reusable = true}, SHIFT(27),
  [492] = {.count = 1, .reusable = true}, SHIFT(28),
  [494] = {.count = 1, .reusable = true}, SHIFT(154),
  [496] = {.count = 1, .reusable = true}, SHIFT(32),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(279),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(264),
  [510] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(366),
  [515] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(402),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [534] = {.count = 1, .reusable = true}, SHIFT(267),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [540] = {.count = 1, .reusable = true}, SHIFT(270),
  [542] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(401),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(381),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(380),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(379),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(346),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [561] = {.count = 1, .reusable = true}, SHIFT(350),
  [563] = {.count = 1, .reusable = true}, SHIFT(388),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [567] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(400),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(330),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(398),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [580] = {.count = 1, .reusable = true}, SHIFT(400),
  [582] = {.count = 1, .reusable = true}, SHIFT(330),
  [584] = {.count = 1, .reusable = true}, SHIFT(398),
  [586] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(317),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(361),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [600] = {.count = 1, .reusable = true}, SHIFT(266),
  [602] = {.count = 1, .reusable = true}, SHIFT(317),
  [604] = {.count = 1, .reusable = true}, SHIFT(361),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [612] = {.count = 1, .reusable = true}, SHIFT(385),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [618] = {.count = 1, .reusable = true}, SHIFT(382),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(385),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [627] = {.count = 1, .reusable = true}, SHIFT(343),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 5),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [635] = {.count = 1, .reusable = false}, SHIFT(95),
  [637] = {.count = 1, .reusable = true}, SHIFT(286),
  [639] = {.count = 1, .reusable = false}, SHIFT(294),
  [641] = {.count = 1, .reusable = true}, SHIFT(294),
  [643] = {.count = 1, .reusable = false}, SHIFT(87),
  [645] = {.count = 1, .reusable = true}, SHIFT(302),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(386),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [652] = {.count = 1, .reusable = false}, SHIFT(142),
  [654] = {.count = 1, .reusable = true}, SHIFT(316),
  [656] = {.count = 1, .reusable = false}, SHIFT(315),
  [658] = {.count = 1, .reusable = true}, SHIFT(315),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(61),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [667] = {.count = 1, .reusable = true}, SHIFT(357),
  [669] = {.count = 1, .reusable = true}, SHIFT(349),
  [671] = {.count = 1, .reusable = false}, SHIFT(301),
  [673] = {.count = 1, .reusable = true}, SHIFT(301),
  [675] = {.count = 1, .reusable = false}, SHIFT(189),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(362),
  [680] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [682] = {.count = 1, .reusable = true}, SHIFT(386),
  [684] = {.count = 1, .reusable = true}, SHIFT(261),
  [686] = {.count = 1, .reusable = true}, SHIFT(348),
  [688] = {.count = 1, .reusable = false}, SHIFT(131),
  [690] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [692] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(301),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(301),
  [698] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(302),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(357),
  [706] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [708] = {.count = 1, .reusable = false}, SHIFT(119),
  [710] = {.count = 1, .reusable = false}, SHIFT(300),
  [712] = {.count = 1, .reusable = true}, SHIFT(300),
  [714] = {.count = 1, .reusable = true}, SHIFT(327),
  [716] = {.count = 1, .reusable = true}, SHIFT(384),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [720] = {.count = 1, .reusable = true}, SHIFT(262),
  [722] = {.count = 1, .reusable = true}, SHIFT(303),
  [724] = {.count = 1, .reusable = true}, SHIFT(362),
  [726] = {.count = 1, .reusable = true}, SHIFT(202),
  [728] = {.count = 1, .reusable = false}, SHIFT(188),
  [730] = {.count = 1, .reusable = false}, SHIFT(295),
  [732] = {.count = 1, .reusable = true}, SHIFT(295),
  [734] = {.count = 1, .reusable = true}, SHIFT(297),
  [736] = {.count = 1, .reusable = true}, SHIFT(208),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 4),
  [740] = {.count = 1, .reusable = false}, SHIFT(143),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_command_part, 1),
  [744] = {.count = 1, .reusable = true}, SHIFT(96),
  [746] = {.count = 1, .reusable = true}, SHIFT(103),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(340),
  [751] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(31),
  [756] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [758] = {.count = 1, .reusable = true}, SHIFT(152),
  [760] = {.count = 1, .reusable = true}, SHIFT(340),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [764] = {.count = 1, .reusable = true}, SHIFT(376),
  [766] = {.count = 1, .reusable = true}, SHIFT(375),
  [768] = {.count = 1, .reusable = true}, SHIFT(94),
  [770] = {.count = 1, .reusable = true}, SHIFT(359),
  [772] = {.count = 1, .reusable = true}, SHIFT(129),
  [774] = {.count = 1, .reusable = true}, SHIFT(150),
  [776] = {.count = 1, .reusable = true}, SHIFT(160),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [780] = {.count = 1, .reusable = true}, SHIFT(111),
  [782] = {.count = 1, .reusable = true}, SHIFT(239),
  [784] = {.count = 1, .reusable = true}, SHIFT(124),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [788] = {.count = 1, .reusable = true}, SHIFT(274),
  [790] = {.count = 1, .reusable = true}, SHIFT(159),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [796] = {.count = 1, .reusable = true}, SHIFT(272),
  [798] = {.count = 1, .reusable = true}, SHIFT(276),
  [800] = {.count = 1, .reusable = true}, SHIFT(184),
  [802] = {.count = 1, .reusable = true}, SHIFT(133),
  [804] = {.count = 1, .reusable = true}, SHIFT(273),
  [806] = {.count = 1, .reusable = true}, SHIFT(292),
  [808] = {.count = 1, .reusable = true}, SHIFT(135),
  [810] = {.count = 1, .reusable = true}, SHIFT(134),
  [812] = {.count = 1, .reusable = true}, SHIFT(204),
  [814] = {.count = 1, .reusable = true}, SHIFT(238),
  [816] = {.count = 1, .reusable = true}, SHIFT(322),
  [818] = {.count = 1, .reusable = true}, SHIFT(30),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [822] = {.count = 1, .reusable = true}, SHIFT(55),
  [824] = {.count = 1, .reusable = true}, SHIFT(233),
  [826] = {.count = 1, .reusable = true}, SHIFT(3),
  [828] = {.count = 1, .reusable = true}, SHIFT(318),
  [830] = {.count = 1, .reusable = true}, SHIFT(263),
  [832] = {.count = 1, .reusable = true}, SHIFT(329),
  [834] = {.count = 1, .reusable = true}, SHIFT(356),
  [836] = {.count = 1, .reusable = true}, SHIFT(254),
  [838] = {.count = 1, .reusable = true}, SHIFT(79),
  [840] = {.count = 1, .reusable = true}, SHIFT(283),
  [842] = {.count = 1, .reusable = true}, SHIFT(213),
  [844] = {.count = 1, .reusable = true}, SHIFT(299),
  [846] = {.count = 1, .reusable = true}, SHIFT(78),
  [848] = {.count = 1, .reusable = true}, SHIFT(74),
  [850] = {.count = 1, .reusable = true}, SHIFT(367),
  [852] = {.count = 1, .reusable = true}, SHIFT(331),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [858] = {.count = 1, .reusable = true}, SHIFT(310),
  [860] = {.count = 1, .reusable = true}, SHIFT(257),
  [862] = {.count = 1, .reusable = true}, SHIFT(249),
  [864] = {.count = 1, .reusable = true}, SHIFT(307),
  [866] = {.count = 1, .reusable = true}, SHIFT(324),
  [868] = {.count = 1, .reusable = true}, SHIFT(282),
  [870] = {.count = 1, .reusable = true}, SHIFT(43),
  [872] = {.count = 1, .reusable = true}, SHIFT(252),
  [874] = {.count = 1, .reusable = true}, SHIFT(277),
  [876] = {.count = 1, .reusable = true}, SHIFT(132),
  [878] = {.count = 1, .reusable = true}, SHIFT(145),
  [880] = {.count = 1, .reusable = true}, SHIFT(8),
  [882] = {.count = 1, .reusable = true}, SHIFT(171),
  [884] = {.count = 1, .reusable = true}, SHIFT(197),
  [886] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [888] = {.count = 1, .reusable = true}, SHIFT(389),
  [890] = {.count = 1, .reusable = true}, SHIFT(105),
  [892] = {.count = 1, .reusable = true}, SHIFT(390),
  [894] = {.count = 1, .reusable = true}, SHIFT(308),
  [896] = {.count = 1, .reusable = true}, SHIFT(269),
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
