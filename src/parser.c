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
#define STATE_COUNT 547
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
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
  anon_sym_import = 62,
  anon_sym_workflow = 63,
  anon_sym_scatter = 64,
  anon_sym_in = 65,
  sym_definition = 66,
  sym_identifier = 67,
  sym_boolean = 68,
  sym_primitive_type = 69,
  sym_string_literal = 70,
  sym_expression = 71,
  sym_parentheses_expression = 72,
  sym_dictionary_expression = 73,
  sym_bracket_expression = 74,
  sym_math_expression = 75,
  sym_equality_expression = 76,
  sym_type = 77,
  sym_array_type = 78,
  sym_map_type = 79,
  sym_type_postfix_quantifier = 80,
  sym_runtime = 81,
  sym_runtime_kv = 82,
  sym_task_output = 83,
  sym_task_output_kv = 84,
  sym_parameter_meta = 85,
  sym_parameter_meta_kv = 86,
  sym_meta = 87,
  sym_meta_kv = 88,
  sym_task = 89,
  sym_task_sections = 90,
  sym_declaration = 91,
  sym_command = 92,
  sym_command_part = 93,
  sym_command_part_var = 94,
  sym_var_option = 95,
  sym_var_option_key = 96,
  sym_var_option_value = 97,
  sym_call = 98,
  sym_call_body = 99,
  sym_inputs = 100,
  sym_variable_mappings = 101,
  sym_variable_mapping_kv = 102,
  sym_namespaced_identifier = 103,
  sym_loop = 104,
  sym_conditional = 105,
  sym_document = 106,
  sym_import = 107,
  sym_workflow = 108,
  sym_workflow_element = 109,
  sym_scatter = 110,
  sym_scatter_iteration_statment = 111,
  sym_scatter_body = 112,
  aux_sym_string_literal_repeat1 = 113,
  aux_sym_expression_repeat1 = 114,
  aux_sym_dictionary_expression_repeat1 = 115,
  aux_sym_bracket_expression_repeat1 = 116,
  aux_sym_runtime_repeat1 = 117,
  aux_sym_task_output_repeat1 = 118,
  aux_sym_parameter_meta_repeat1 = 119,
  aux_sym_meta_repeat1 = 120,
  aux_sym_task_repeat1 = 121,
  aux_sym_task_sections_repeat1 = 122,
  aux_sym_command_repeat1 = 123,
  aux_sym_command_part_var_repeat1 = 124,
  aux_sym_variable_mappings_repeat1 = 125,
  aux_sym_namespaced_identifier_repeat1 = 126,
  aux_sym_loop_repeat1 = 127,
  aux_sym_document_repeat1 = 128,
  aux_sym_scatter_repeat1 = 129,
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
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_dictionary_expression_repeat1] = "dictionary_expression_repeat1",
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
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_expression_repeat1] = {
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
      if (lookahead == 'm')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(91);
      if (lookahead == 'h')
        ADVANCE(92);
      if (lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'h')
        ADVANCE(94);
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      if (lookahead == '|')
        ADVANCE(96);
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
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
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
        ADVANCE(100);
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
        ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'p')
        ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'j')
        ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'r')
        ADVANCE(109);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 76:
      if (lookahead == 'l')
        ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'm')
        ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'f')
        ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 's')
        ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 'l')
        ADVANCE(118);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 82:
      if (lookahead == 'p')
        ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'a')
        ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'p')
        ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 's')
        ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'u')
        ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'i')
        ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'r')
        ADVANCE(131);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 102:
      if (lookahead == 'a')
        ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'l')
        ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'a')
        ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'i')
        ADVANCE(137);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(138);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(72);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(74);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 114:
      if (lookahead == 'l')
        ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'm')
        ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == 'a')
        ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 's')
        ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 'o')
        ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'a')
        ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'p')
        ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 'a')
        ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 't')
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
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 127:
      if (lookahead == 'k')
        ADVANCE(151);
      END_STATE();
    case 128:
      if (lookahead == 'n')
        ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'l')
        ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'k')
        ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'y')
        ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 135:
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 'c')
        ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'n')
        ADVANCE(160);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 140:
      if (lookahead == 'a')
        ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'u')
        ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 143:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 'r')
        ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 146:
      if (lookahead == 'u')
        ADVANCE(166);
      END_STATE();
    case 147:
      if (lookahead == 'm')
        ADVANCE(167);
      END_STATE();
    case 148:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 'i')
        ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(171);
      END_STATE();
    case 155:
      if (lookahead == 'f')
        ADVANCE(172);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 157:
      if (lookahead == 'a')
        ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 159:
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 160:
      if (lookahead == 'g')
        ADVANCE(175);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(71);
      END_STATE();
    case 162:
      if (lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'l')
        ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      if (lookahead == 't')
        ADVANCE(178);
      END_STATE();
    case 166:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 169:
      if (lookahead == 'm')
        ADVANCE(181);
      END_STATE();
    case 170:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 172:
      if (lookahead == 'l')
        ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'n')
        ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 176:
      if (lookahead == 'd')
        ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 181:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 182:
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 183:
      if (lookahead == 'o')
        ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 190:
      if (lookahead == 'w')
        ADVANCE(192);
      END_STATE();
    case 191:
      if (lookahead == 'r')
        ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 193:
      if (lookahead == '_')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'm')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'a')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 199:
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
        ADVANCE(200);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == 'A')
        ADVANCE(201);
      if (lookahead == 'B')
        ADVANCE(202);
      if (lookahead == 'F')
        ADVANCE(203);
      if (lookahead == 'I')
        ADVANCE(204);
      if (lookahead == 'M')
        ADVANCE(205);
      if (lookahead == 'O')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(211);
      if (lookahead == 't')
        ADVANCE(212);
      if (lookahead == 'w')
        ADVANCE(213);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      END_STATE();
    case 201:
      if (lookahead == 'r')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 202:
      if (lookahead == 'o')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 203:
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 204:
      if (lookahead == 'n')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 205:
      if (lookahead == 'a')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 206:
      if (lookahead == 'b')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 207:
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 208:
      if (lookahead == 'a')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 209:
      if (lookahead == 'a')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 210:
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'm')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 211:
      if (lookahead == 'u')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 212:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 213:
      if (lookahead == 'o')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'j')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_task);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_object_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_runtime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 279:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 280:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 281:
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 282:
      if (lookahead == 'f')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 283:
      if (lookahead == 'r')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 284:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 285:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 287:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 288:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 289:
      if (lookahead == '\n')
        SKIP(290);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(291);
      if (lookahead != 0)
        ADVANCE(292);
      END_STATE();
    case 290:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(292);
      END_STATE();
    case 293:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 294:
      if (lookahead == 0)
        ADVANCE(1);
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
      if (lookahead == 'i')
        ADVANCE(295);
      if (lookahead == 't')
        ADVANCE(296);
      if (lookahead == 'w')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == 'm')
        ADVANCE(82);
      END_STATE();
    case 296:
      if (lookahead == 'a')
        ADVANCE(91);
      END_STATE();
    case 297:
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 298:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
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
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == 'i')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(302);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      END_STATE();
    case 299:
      if (lookahead == 'f')
        ADVANCE(81);
      END_STATE();
    case 300:
      if (lookahead == 'c')
        ADVANCE(89);
      END_STATE();
    case 301:
      if (lookahead == 'h')
        ADVANCE(92);
      END_STATE();
    case 302:
      if (lookahead == 'h')
        ADVANCE(94);
      END_STATE();
    case 303:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
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
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'c')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(302);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      END_STATE();
    case 304:
      if (lookahead == 'f')
        ADVANCE(81);
      if (lookahead == 'n')
        ADVANCE(83);
      END_STATE();
    case 305:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(305);
      END_STATE();
    case 306:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(306);
      END_STATE();
    case 307:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 308:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(286);
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
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(300);
      if (lookahead == 'w')
        ADVANCE(302);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      END_STATE();
    case 309:
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 310:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 311:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(311);
      END_STATE();
    case 312:
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
        ADVANCE(200);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(312);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 313:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
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
        ADVANCE(314);
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
        SKIP(313);
      END_STATE();
    case 314:
      if (lookahead == 'o')
        ADVANCE(77);
      END_STATE();
    case 315:
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(315);
      END_STATE();
    case 316:
      if (lookahead == 'n')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'p')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'u')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 't')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 321:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      END_STATE();
    case 322:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'e')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(322);
      END_STATE();
    case 323:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 324:
      if (lookahead == '<')
        ADVANCE(325);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      END_STATE();
    case 325:
      if (lookahead == '<')
        ADVANCE(57);
      END_STATE();
    case 326:
      if (lookahead == 'A')
        ADVANCE(201);
      if (lookahead == 'B')
        ADVANCE(202);
      if (lookahead == 'F')
        ADVANCE(203);
      if (lookahead == 'I')
        ADVANCE(204);
      if (lookahead == 'M')
        ADVANCE(205);
      if (lookahead == 'O')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'c')
        ADVANCE(208);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'm')
        ADVANCE(327);
      if (lookahead == 'p')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(329);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 327:
      if (lookahead == 'e')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 328:
      if (lookahead == 'a')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 329:
      if (lookahead == 'c')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 330:
      if (lookahead == 'h')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_scatter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 357:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 358:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
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
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(300);
      if (lookahead == 'w')
        ADVANCE(302);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(358);
      END_STATE();
    case 359:
      if (lookahead == 'c')
        ADVANCE(360);
      if (lookahead == 'm')
        ADVANCE(327);
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'p')
        ADVANCE(328);
      if (lookahead == 'r')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 360:
      if (lookahead == 'o')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 361:
      if (lookahead == 'u')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 373:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(374);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      END_STATE();
    case 374:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_command_part_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      END_STATE();
    case 376:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(286);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
      if (lookahead == 'i')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      END_STATE();
    case 378:
      if (lookahead == 'n')
        ADVANCE(83);
      END_STATE();
    case 379:
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
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(300);
      if (lookahead == 'w')
        ADVANCE(302);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(379);
      END_STATE();
    case 380:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      END_STATE();
    case 381:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      END_STATE();
    case 382:
      if (lookahead == '!')
        ADVANCE(280);
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
        ADVANCE(281);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'q')
        ADVANCE(384);
      if (lookahead == 's')
        ADVANCE(385);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(382);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 384:
      if (lookahead == 'u')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 385:
      if (lookahead == 'e')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_quote);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 199},
  [2] = {.lex_state = 279},
  [3] = {.lex_state = 284},
  [4] = {.lex_state = 199},
  [5] = {.lex_state = 285},
  [6] = {.lex_state = 287},
  [7] = {.lex_state = 288},
  [8] = {.lex_state = 279},
  [9] = {.lex_state = 279},
  [10] = {.lex_state = 289},
  [11] = {.lex_state = 199},
  [12] = {.lex_state = 285},
  [13] = {.lex_state = 199},
  [14] = {.lex_state = 288},
  [15] = {.lex_state = 288},
  [16] = {.lex_state = 288},
  [17] = {.lex_state = 279},
  [18] = {.lex_state = 199},
  [19] = {.lex_state = 293},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 294},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 298},
  [25] = {.lex_state = 279},
  [26] = {.lex_state = 303},
  [27] = {.lex_state = 279},
  [28] = {.lex_state = 279},
  [29] = {.lex_state = 298},
  [30] = {.lex_state = 279},
  [31] = {.lex_state = 289},
  [32] = {.lex_state = 293},
  [33] = {.lex_state = 305},
  [34] = {.lex_state = 294},
  [35] = {.lex_state = 288},
  [36] = {.lex_state = 288},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 279},
  [39] = {.lex_state = 279},
  [40] = {.lex_state = 306},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 289},
  [43] = {.lex_state = 294},
  [44] = {.lex_state = 307},
  [45] = {.lex_state = 308},
  [46] = {.lex_state = 294},
  [47] = {.lex_state = 308},
  [48] = {.lex_state = 199},
  [49] = {.lex_state = 199},
  [50] = {.lex_state = 310},
  [51] = {.lex_state = 279},
  [52] = {.lex_state = 310},
  [53] = {.lex_state = 285},
  [54] = {.lex_state = 279},
  [55] = {.lex_state = 279},
  [56] = {.lex_state = 310},
  [57] = {.lex_state = 279},
  [58] = {.lex_state = 289},
  [59] = {.lex_state = 293},
  [60] = {.lex_state = 279},
  [61] = {.lex_state = 279},
  [62] = {.lex_state = 289},
  [63] = {.lex_state = 294},
  [64] = {.lex_state = 279},
  [65] = {.lex_state = 285},
  [66] = {.lex_state = 279},
  [67] = {.lex_state = 293},
  [68] = {.lex_state = 311},
  [69] = {.lex_state = 294},
  [70] = {.lex_state = 279},
  [71] = {.lex_state = 279},
  [72] = {.lex_state = 279},
  [73] = {.lex_state = 279},
  [74] = {.lex_state = 279},
  [75] = {.lex_state = 312},
  [76] = {.lex_state = 305},
  [77] = {.lex_state = 298},
  [78] = {.lex_state = 298},
  [79] = {.lex_state = 279},
  [80] = {.lex_state = 306},
  [81] = {.lex_state = 298},
  [82] = {.lex_state = 289},
  [83] = {.lex_state = 298},
  [84] = {.lex_state = 293},
  [85] = {.lex_state = 279},
  [86] = {.lex_state = 279},
  [87] = {.lex_state = 279},
  [88] = {.lex_state = 279},
  [89] = {.lex_state = 279},
  [90] = {.lex_state = 279},
  [91] = {.lex_state = 312},
  [92] = {.lex_state = 306},
  [93] = {.lex_state = 305},
  [94] = {.lex_state = 279},
  [95] = {.lex_state = 279},
  [96] = {.lex_state = 279},
  [97] = {.lex_state = 285},
  [98] = {.lex_state = 279},
  [99] = {.lex_state = 285},
  [100] = {.lex_state = 289},
  [101] = {.lex_state = 279},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 307},
  [104] = {.lex_state = 313},
  [105] = {.lex_state = 288},
  [106] = {.lex_state = 315},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 288},
  [109] = {.lex_state = 308},
  [110] = {.lex_state = 308},
  [111] = {.lex_state = 313},
  [112] = {.lex_state = 305},
  [113] = {.lex_state = 310},
  [114] = {.lex_state = 310},
  [115] = {.lex_state = 279},
  [116] = {.lex_state = 306},
  [117] = {.lex_state = 310},
  [118] = {.lex_state = 289},
  [119] = {.lex_state = 310},
  [120] = {.lex_state = 293},
  [121] = {.lex_state = 279},
  [122] = {.lex_state = 279},
  [123] = {.lex_state = 279},
  [124] = {.lex_state = 279},
  [125] = {.lex_state = 279},
  [126] = {.lex_state = 312},
  [127] = {.lex_state = 285},
  [128] = {.lex_state = 279},
  [129] = {.lex_state = 294},
  [130] = {.lex_state = 289},
  [131] = {.lex_state = 288},
  [132] = {.lex_state = 305},
  [133] = {.lex_state = 285},
  [134] = {.lex_state = 293},
  [135] = {.lex_state = 279},
  [136] = {.lex_state = 279},
  [137] = {.lex_state = 279},
  [138] = {.lex_state = 279},
  [139] = {.lex_state = 279},
  [140] = {.lex_state = 285},
  [141] = {.lex_state = 285},
  [142] = {.lex_state = 285},
  [143] = {.lex_state = 285},
  [144] = {.lex_state = 279},
  [145] = {.lex_state = 279},
  [146] = {.lex_state = 321},
  [147] = {.lex_state = 279},
  [148] = {.lex_state = 285},
  [149] = {.lex_state = 279},
  [150] = {.lex_state = 306},
  [151] = {.lex_state = 279},
  [152] = {.lex_state = 298},
  [153] = {.lex_state = 298},
  [154] = {.lex_state = 298},
  [155] = {.lex_state = 298},
  [156] = {.lex_state = 305},
  [157] = {.lex_state = 298},
  [158] = {.lex_state = 305},
  [159] = {.lex_state = 279},
  [160] = {.lex_state = 279},
  [161] = {.lex_state = 322},
  [162] = {.lex_state = 305},
  [163] = {.lex_state = 321},
  [164] = {.lex_state = 298},
  [165] = {.lex_state = 306},
  [166] = {.lex_state = 294},
  [167] = {.lex_state = 279},
  [168] = {.lex_state = 306},
  [169] = {.lex_state = 306},
  [170] = {.lex_state = 306},
  [171] = {.lex_state = 323},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 307},
  [174] = {.lex_state = 279},
  [175] = {.lex_state = 199},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 311},
  [178] = {.lex_state = 293},
  [179] = {.lex_state = 308},
  [180] = {.lex_state = 308},
  [181] = {.lex_state = 199},
  [182] = {.lex_state = 199},
  [183] = {.lex_state = 199},
  [184] = {.lex_state = 199},
  [185] = {.lex_state = 288},
  [186] = {.lex_state = 294},
  [187] = {.lex_state = 199},
  [188] = {.lex_state = 308},
  [189] = {.lex_state = 308},
  [190] = {.lex_state = 288},
  [191] = {.lex_state = 199},
  [192] = {.lex_state = 324},
  [193] = {.lex_state = 199},
  [194] = {.lex_state = 199},
  [195] = {.lex_state = 313},
  [196] = {.lex_state = 293},
  [197] = {.lex_state = 313},
  [198] = {.lex_state = 288},
  [199] = {.lex_state = 279},
  [200] = {.lex_state = 310},
  [201] = {.lex_state = 310},
  [202] = {.lex_state = 310},
  [203] = {.lex_state = 310},
  [204] = {.lex_state = 279},
  [205] = {.lex_state = 310},
  [206] = {.lex_state = 279},
  [207] = {.lex_state = 279},
  [208] = {.lex_state = 321},
  [209] = {.lex_state = 310},
  [210] = {.lex_state = 306},
  [211] = {.lex_state = 294},
  [212] = {.lex_state = 294},
  [213] = {.lex_state = 294},
  [214] = {.lex_state = 279},
  [215] = {.lex_state = 311},
  [216] = {.lex_state = 311},
  [217] = {.lex_state = 311},
  [218] = {.lex_state = 279},
  [219] = {.lex_state = 279},
  [220] = {.lex_state = 293},
  [221] = {.lex_state = 305},
  [222] = {.lex_state = 279},
  [223] = {.lex_state = 279},
  [224] = {.lex_state = 279},
  [225] = {.lex_state = 285},
  [226] = {.lex_state = 279},
  [227] = {.lex_state = 305},
  [228] = {.lex_state = 279},
  [229] = {.lex_state = 279},
  [230] = {.lex_state = 279},
  [231] = {.lex_state = 279},
  [232] = {.lex_state = 279},
  [233] = {.lex_state = 306},
  [234] = {.lex_state = 322},
  [235] = {.lex_state = 305},
  [236] = {.lex_state = 279},
  [237] = {.lex_state = 279},
  [238] = {.lex_state = 279},
  [239] = {.lex_state = 279},
  [240] = {.lex_state = 279},
  [241] = {.lex_state = 298},
  [242] = {.lex_state = 306},
  [243] = {.lex_state = 279},
  [244] = {.lex_state = 322},
  [245] = {.lex_state = 279},
  [246] = {.lex_state = 279},
  [247] = {.lex_state = 307},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 288},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 279},
  [252] = {.lex_state = 326},
  [253] = {.lex_state = 357},
  [254] = {.lex_state = 279},
  [255] = {.lex_state = 308},
  [256] = {.lex_state = 308},
  [257] = {.lex_state = 307},
  [258] = {.lex_state = 294},
  [259] = {.lex_state = 308},
  [260] = {.lex_state = 358},
  [261] = {.lex_state = 359},
  [262] = {.lex_state = 373},
  [263] = {.lex_state = 373},
  [264] = {.lex_state = 307},
  [265] = {.lex_state = 308},
  [266] = {.lex_state = 313},
  [267] = {.lex_state = 293},
  [268] = {.lex_state = 294},
  [269] = {.lex_state = 313},
  [270] = {.lex_state = 313},
  [271] = {.lex_state = 322},
  [272] = {.lex_state = 310},
  [273] = {.lex_state = 306},
  [274] = {.lex_state = 322},
  [275] = {.lex_state = 305},
  [276] = {.lex_state = 279},
  [277] = {.lex_state = 279},
  [278] = {.lex_state = 279},
  [279] = {.lex_state = 279},
  [280] = {.lex_state = 279},
  [281] = {.lex_state = 321},
  [282] = {.lex_state = 321},
  [283] = {.lex_state = 321},
  [284] = {.lex_state = 279},
  [285] = {.lex_state = 306},
  [286] = {.lex_state = 306},
  [287] = {.lex_state = 306},
  [288] = {.lex_state = 306},
  [289] = {.lex_state = 285},
  [290] = {.lex_state = 306},
  [291] = {.lex_state = 279},
  [292] = {.lex_state = 279},
  [293] = {.lex_state = 322},
  [294] = {.lex_state = 322},
  [295] = {.lex_state = 322},
  [296] = {.lex_state = 285},
  [297] = {.lex_state = 298},
  [298] = {.lex_state = 323},
  [299] = {.lex_state = 279},
  [300] = {.lex_state = 305},
  [301] = {.lex_state = 279},
  [302] = {.lex_state = 279},
  [303] = {.lex_state = 279},
  [304] = {.lex_state = 279},
  [305] = {.lex_state = 376},
  [306] = {.lex_state = 293},
  [307] = {.lex_state = 313},
  [308] = {.lex_state = 306},
  [309] = {.lex_state = 293},
  [310] = {.lex_state = 326},
  [311] = {.lex_state = 313},
  [312] = {.lex_state = 199},
  [313] = {.lex_state = 357},
  [314] = {.lex_state = 377},
  [315] = {.lex_state = 306},
  [316] = {.lex_state = 288},
  [317] = {.lex_state = 315},
  [318] = {.lex_state = 308},
  [319] = {.lex_state = 288},
  [320] = {.lex_state = 308},
  [321] = {.lex_state = 379},
  [322] = {.lex_state = 307},
  [323] = {.lex_state = 313},
  [324] = {.lex_state = 279},
  [325] = {.lex_state = 293},
  [326] = {.lex_state = 359},
  [327] = {.lex_state = 373},
  [328] = {.lex_state = 199},
  [329] = {.lex_state = 380},
  [330] = {.lex_state = 381},
  [331] = {.lex_state = 313},
  [332] = {.lex_state = 307},
  [333] = {.lex_state = 313},
  [334] = {.lex_state = 308},
  [335] = {.lex_state = 288},
  [336] = {.lex_state = 294},
  [337] = {.lex_state = 279},
  [338] = {.lex_state = 279},
  [339] = {.lex_state = 310},
  [340] = {.lex_state = 279},
  [341] = {.lex_state = 279},
  [342] = {.lex_state = 293},
  [343] = {.lex_state = 293},
  [344] = {.lex_state = 293},
  [345] = {.lex_state = 322},
  [346] = {.lex_state = 322},
  [347] = {.lex_state = 305},
  [348] = {.lex_state = 322},
  [349] = {.lex_state = 306},
  [350] = {.lex_state = 279},
  [351] = {.lex_state = 307},
  [352] = {.lex_state = 307},
  [353] = {.lex_state = 307},
  [354] = {.lex_state = 288},
  [355] = {.lex_state = 376},
  [356] = {.lex_state = 279},
  [357] = {.lex_state = 199},
  [358] = {.lex_state = 326},
  [359] = {.lex_state = 326},
  [360] = {.lex_state = 199},
  [361] = {.lex_state = 308},
  [362] = {.lex_state = 308},
  [363] = {.lex_state = 199},
  [364] = {.lex_state = 357},
  [365] = {.lex_state = 279},
  [366] = {.lex_state = 199},
  [367] = {.lex_state = 308},
  [368] = {.lex_state = 308},
  [369] = {.lex_state = 293},
  [370] = {.lex_state = 308},
  [371] = {.lex_state = 308},
  [372] = {.lex_state = 379},
  [373] = {.lex_state = 307},
  [374] = {.lex_state = 199},
  [375] = {.lex_state = 279},
  [376] = {.lex_state = 279},
  [377] = {.lex_state = 358},
  [378] = {.lex_state = 359},
  [379] = {.lex_state = 359},
  [380] = {.lex_state = 382},
  [381] = {.lex_state = 313},
  [382] = {.lex_state = 380},
  [383] = {.lex_state = 381},
  [384] = {.lex_state = 313},
  [385] = {.lex_state = 313},
  [386] = {.lex_state = 308},
  [387] = {.lex_state = 313},
  [388] = {.lex_state = 279},
  [389] = {.lex_state = 279},
  [390] = {.lex_state = 313},
  [391] = {.lex_state = 279},
  [392] = {.lex_state = 311},
  [393] = {.lex_state = 322},
  [394] = {.lex_state = 279},
  [395] = {.lex_state = 279},
  [396] = {.lex_state = 279},
  [397] = {.lex_state = 322},
  [398] = {.lex_state = 376},
  [399] = {.lex_state = 376},
  [400] = {.lex_state = 279},
  [401] = {.lex_state = 279},
  [402] = {.lex_state = 376},
  [403] = {.lex_state = 308},
  [404] = {.lex_state = 293},
  [405] = {.lex_state = 308},
  [406] = {.lex_state = 308},
  [407] = {.lex_state = 308},
  [408] = {.lex_state = 279},
  [409] = {.lex_state = 279},
  [410] = {.lex_state = 357},
  [411] = {.lex_state = 308},
  [412] = {.lex_state = 308},
  [413] = {.lex_state = 308},
  [414] = {.lex_state = 307},
  [415] = {.lex_state = 305},
  [416] = {.lex_state = 279},
  [417] = {.lex_state = 279},
  [418] = {.lex_state = 279},
  [419] = {.lex_state = 279},
  [420] = {.lex_state = 279},
  [421] = {.lex_state = 313},
  [422] = {.lex_state = 279},
  [423] = {.lex_state = 313},
  [424] = {.lex_state = 313},
  [425] = {.lex_state = 307},
  [426] = {.lex_state = 382},
  [427] = {.lex_state = 199},
  [428] = {.lex_state = 305},
  [429] = {.lex_state = 279},
  [430] = {.lex_state = 279},
  [431] = {.lex_state = 279},
  [432] = {.lex_state = 279},
  [433] = {.lex_state = 279},
  [434] = {.lex_state = 321},
  [435] = {.lex_state = 306},
  [436] = {.lex_state = 322},
  [437] = {.lex_state = 279},
  [438] = {.lex_state = 305},
  [439] = {.lex_state = 279},
  [440] = {.lex_state = 279},
  [441] = {.lex_state = 279},
  [442] = {.lex_state = 279},
  [443] = {.lex_state = 308},
  [444] = {.lex_state = 308},
  [445] = {.lex_state = 308},
  [446] = {.lex_state = 305},
  [447] = {.lex_state = 279},
  [448] = {.lex_state = 279},
  [449] = {.lex_state = 279},
  [450] = {.lex_state = 279},
  [451] = {.lex_state = 308},
  [452] = {.lex_state = 308},
  [453] = {.lex_state = 279},
  [454] = {.lex_state = 358},
  [455] = {.lex_state = 358},
  [456] = {.lex_state = 358},
  [457] = {.lex_state = 305},
  [458] = {.lex_state = 279},
  [459] = {.lex_state = 373},
  [460] = {.lex_state = 279},
  [461] = {.lex_state = 279},
  [462] = {.lex_state = 279},
  [463] = {.lex_state = 279},
  [464] = {.lex_state = 307},
  [465] = {.lex_state = 382},
  [466] = {.lex_state = 308},
  [467] = {.lex_state = 279},
  [468] = {.lex_state = 313},
  [469] = {.lex_state = 313},
  [470] = {.lex_state = 313},
  [471] = {.lex_state = 293},
  [472] = {.lex_state = 307},
  [473] = {.lex_state = 279},
  [474] = {.lex_state = 376},
  [475] = {.lex_state = 376},
  [476] = {.lex_state = 376},
  [477] = {.lex_state = 308},
  [478] = {.lex_state = 279},
  [479] = {.lex_state = 357},
  [480] = {.lex_state = 357},
  [481] = {.lex_state = 357},
  [482] = {.lex_state = 308},
  [483] = {.lex_state = 322},
  [484] = {.lex_state = 279},
  [485] = {.lex_state = 382},
  [486] = {.lex_state = 279},
  [487] = {.lex_state = 382},
  [488] = {.lex_state = 279},
  [489] = {.lex_state = 279},
  [490] = {.lex_state = 382},
  [491] = {.lex_state = 279},
  [492] = {.lex_state = 289},
  [493] = {.lex_state = 293},
  [494] = {.lex_state = 382},
  [495] = {.lex_state = 382},
  [496] = {.lex_state = 307},
  [497] = {.lex_state = 307},
  [498] = {.lex_state = 307},
  [499] = {.lex_state = 373},
  [500] = {.lex_state = 322},
  [501] = {.lex_state = 322},
  [502] = {.lex_state = 322},
  [503] = {.lex_state = 279},
  [504] = {.lex_state = 322},
  [505] = {.lex_state = 305},
  [506] = {.lex_state = 382},
  [507] = {.lex_state = 382},
  [508] = {.lex_state = 279},
  [509] = {.lex_state = 306},
  [510] = {.lex_state = 382},
  [511] = {.lex_state = 289},
  [512] = {.lex_state = 382},
  [513] = {.lex_state = 293},
  [514] = {.lex_state = 279},
  [515] = {.lex_state = 279},
  [516] = {.lex_state = 279},
  [517] = {.lex_state = 279},
  [518] = {.lex_state = 279},
  [519] = {.lex_state = 312},
  [520] = {.lex_state = 279},
  [521] = {.lex_state = 279},
  [522] = {.lex_state = 279},
  [523] = {.lex_state = 358},
  [524] = {.lex_state = 279},
  [525] = {.lex_state = 279},
  [526] = {.lex_state = 382},
  [527] = {.lex_state = 382},
  [528] = {.lex_state = 382},
  [529] = {.lex_state = 382},
  [530] = {.lex_state = 382},
  [531] = {.lex_state = 382},
  [532] = {.lex_state = 382},
  [533] = {.lex_state = 382},
  [534] = {.lex_state = 321},
  [535] = {.lex_state = 382},
  [536] = {.lex_state = 306},
  [537] = {.lex_state = 313},
  [538] = {.lex_state = 376},
  [539] = {.lex_state = 357},
  [540] = {.lex_state = 307},
  [541] = {.lex_state = 322},
  [542] = {.lex_state = 382},
  [543] = {.lex_state = 306},
  [544] = {.lex_state = 279},
  [545] = {.lex_state = 382},
  [546] = {.lex_state = 382},
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
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_object_type] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_task] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_scatter] = ACTIONS(1),
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
    [sym_document] = STATE(20),
    [sym_map_type] = STATE(7),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_type] = STATE(20),
    [sym_array_type] = STATE(7),
    [sym_bracket_expression] = STATE(12),
    [sym_call] = STATE(20),
    [sym_task] = STATE(21),
    [sym_definition] = STATE(22),
    [sym_expression] = STATE(23),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_import] = STATE(21),
    [sym_runtime] = STATE(20),
    [sym_workflow] = STATE(21),
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
    [anon_sym_call] = ACTIONS(27),
    [anon_sym_workflow] = ACTIONS(29),
    [anon_sym_task] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_Boolean] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [2] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(33),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
    [anon_sym_COMMA] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [aux_sym_identifier_token1] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_QMARK] = ACTIONS(57),
  },
  [4] = {
    [anon_sym_LBRACK] = ACTIONS(59),
  },
  [5] = {
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
  },
  [6] = {
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [7] = {
    [sym_type_postfix_quantifier] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_identifier_token1] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
  },
  [8] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
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
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [10] = {
    [aux_sym_string_literal_repeat1] = STATE(42),
    [aux_sym_string_literal_token1] = ACTIONS(75),
    [sym_escape_sequence] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [11] = {
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [12] = {
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(83),
  },
  [14] = {
    [sym_namespaced_identifier] = STATE(46),
    [sym_identifier] = STATE(47),
    [aux_sym_identifier_token1] = ACTIONS(85),
  },
  [15] = {
    [sym_identifier] = STATE(48),
    [aux_sym_identifier_token1] = ACTIONS(87),
  },
  [16] = {
    [sym_identifier] = STATE(49),
    [aux_sym_identifier_token1] = ACTIONS(87),
  },
  [17] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(61),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [18] = {
    [sym_string_literal] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(109),
  },
  [19] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(67),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(117),
  },
  [21] = {
    [sym_import] = STATE(69),
    [sym_workflow] = STATE(69),
    [sym_task] = STATE(69),
    [aux_sym_document_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_workflow] = ACTIONS(121),
    [anon_sym_task] = ACTIONS(123),
    [anon_sym_import] = ACTIONS(125),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(127),
  },
  [23] = {
    [anon_sym_PERCENT] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(133),
  },
  [24] = {
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_Map] = ACTIONS(61),
    [anon_sym_parameter_meta] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_scatter] = ACTIONS(61),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_command] = ACTIONS(61),
    [anon_sym_Float] = ACTIONS(61),
    [anon_sym_Int] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_then] = ACTIONS(61),
    [anon_sym_meta] = ACTIONS(61),
    [anon_sym_File] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [sym_object_type] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_else] = ACTIONS(61),
    [anon_sym_runtime] = ACTIONS(61),
    [anon_sym_Array] = ACTIONS(61),
    [anon_sym_output] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_call] = ACTIONS(61),
    [anon_sym_String] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_Boolean] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
  },
  [25] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(76),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [26] = {
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_Map] = ACTIONS(63),
    [anon_sym_parameter_meta] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(63),
    [anon_sym_scatter] = ACTIONS(63),
    [anon_sym_while] = ACTIONS(63),
    [anon_sym_command] = ACTIONS(63),
    [anon_sym_Float] = ACTIONS(63),
    [anon_sym_Int] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_then] = ACTIONS(63),
    [anon_sym_meta] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_File] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_in] = ACTIONS(63),
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
    [anon_sym_String] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_Boolean] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [27] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(77),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [28] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(79),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [29] = {
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_Map] = ACTIONS(81),
    [anon_sym_parameter_meta] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_scatter] = ACTIONS(81),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_command] = ACTIONS(81),
    [anon_sym_Float] = ACTIONS(81),
    [anon_sym_Int] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_then] = ACTIONS(81),
    [anon_sym_meta] = ACTIONS(81),
    [anon_sym_File] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [sym_object_type] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_runtime] = ACTIONS(81),
    [anon_sym_Array] = ACTIONS(81),
    [anon_sym_output] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_call] = ACTIONS(81),
    [anon_sym_String] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_Boolean] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
  },
  [30] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(80),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [31] = {
    [aux_sym_string_literal_repeat1] = STATE(82),
    [aux_sym_string_literal_token1] = ACTIONS(143),
    [sym_escape_sequence] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(145),
  },
  [32] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(84),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [33] = {
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
  [34] = {
    [sym_primitive_type] = STATE(92),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
  },
  [35] = {
    [aux_sym_identifier_token1] = ACTIONS(165),
    [ts_builtin_sym_end] = ACTIONS(165),
  },
  [36] = {
    [aux_sym_identifier_token1] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [aux_sym_identifier_token1] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [38] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(93),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [39] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [41] = {
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [aux_sym_identifier_token1] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
  },
  [42] = {
    [aux_sym_string_literal_repeat1] = STATE(100),
    [aux_sym_string_literal_token1] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(185),
  },
  [43] = {
    [sym_array_type] = STATE(101),
    [sym_primitive_type] = STATE(101),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Float] = ACTIONS(163),
    [sym_object_type] = ACTIONS(187),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_String] = ACTIONS(163),
  },
  [44] = {
    [sym_runtime_kv] = STATE(103),
    [aux_sym_runtime_repeat1] = STATE(103),
    [sym_identifier] = STATE(104),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(191),
  },
  [45] = {
    [anon_sym_DOT] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [46] = {
    [sym_call_body] = STATE(107),
    [anon_sym_LBRACE] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(197),
  },
  [47] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
  },
  [48] = {
    [anon_sym_LBRACE] = ACTIONS(203),
  },
  [49] = {
    [anon_sym_LBRACE] = ACTIONS(205),
  },
  [50] = {
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [aux_sym_identifier_token1] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_float] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_integer] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [51] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(112),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [52] = {
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [53] = {
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [aux_sym_identifier_token1] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
  },
  [54] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(113),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [55] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(115),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [56] = {
    [anon_sym_if] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(213),
    [aux_sym_identifier_token1] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_float] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_integer] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
  },
  [57] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(116),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [58] = {
    [aux_sym_string_literal_repeat1] = STATE(118),
    [aux_sym_string_literal_token1] = ACTIONS(215),
    [sym_escape_sequence] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(217),
  },
  [59] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(120),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [60] = {
    [anon_sym_if] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(221),
    [aux_sym_identifier_token1] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [sym_float] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_integer] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [61] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(128),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [62] = {
    [aux_sym_string_literal_repeat1] = STATE(130),
    [aux_sym_string_literal_token1] = ACTIONS(239),
    [sym_escape_sequence] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(241),
  },
  [63] = {
    [anon_sym_workflow] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_task] = ACTIONS(243),
    [anon_sym_import] = ACTIONS(243),
    [anon_sym_as] = ACTIONS(245),
  },
  [64] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(132),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [65] = {
    [anon_sym_DOT] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [aux_sym_identifier_token1] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
  },
  [66] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [67] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [68] = {
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(253),
  },
  [69] = {
    [sym_import] = STATE(69),
    [sym_workflow] = STATE(69),
    [sym_task] = STATE(69),
    [aux_sym_document_repeat1] = STATE(69),
    [anon_sym_workflow] = ACTIONS(261),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_task] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(269),
  },
  [70] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(140),
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
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
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
  [72] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(142),
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
  [73] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(143),
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
  [74] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(146),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [75] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(150),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [76] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [77] = {
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_Map] = ACTIONS(169),
    [anon_sym_parameter_meta] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_scatter] = ACTIONS(169),
    [anon_sym_while] = ACTIONS(169),
    [anon_sym_command] = ACTIONS(169),
    [anon_sym_Float] = ACTIONS(169),
    [anon_sym_Int] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
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
    [anon_sym_String] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_Boolean] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
  },
  [78] = {
    [anon_sym_if] = ACTIONS(209),
    [anon_sym_Map] = ACTIONS(209),
    [anon_sym_parameter_meta] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_scatter] = ACTIONS(209),
    [anon_sym_while] = ACTIONS(209),
    [anon_sym_command] = ACTIONS(209),
    [anon_sym_Float] = ACTIONS(209),
    [anon_sym_Int] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_then] = ACTIONS(209),
    [anon_sym_meta] = ACTIONS(209),
    [anon_sym_File] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [sym_object_type] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_else] = ACTIONS(209),
    [anon_sym_runtime] = ACTIONS(209),
    [anon_sym_Array] = ACTIONS(209),
    [anon_sym_output] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_call] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_Boolean] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
  },
  [79] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(128),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [80] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [81] = {
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_Map] = ACTIONS(181),
    [anon_sym_parameter_meta] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_scatter] = ACTIONS(181),
    [anon_sym_while] = ACTIONS(181),
    [anon_sym_command] = ACTIONS(181),
    [anon_sym_Float] = ACTIONS(181),
    [anon_sym_Int] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_then] = ACTIONS(181),
    [anon_sym_meta] = ACTIONS(181),
    [anon_sym_File] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [sym_object_type] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_else] = ACTIONS(181),
    [anon_sym_runtime] = ACTIONS(181),
    [anon_sym_Array] = ACTIONS(181),
    [anon_sym_output] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_call] = ACTIONS(181),
    [anon_sym_String] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_Boolean] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
  },
  [82] = {
    [aux_sym_string_literal_repeat1] = STATE(100),
    [aux_sym_string_literal_token1] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(288),
  },
  [83] = {
    [anon_sym_if] = ACTIONS(247),
    [anon_sym_Map] = ACTIONS(247),
    [anon_sym_parameter_meta] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_scatter] = ACTIONS(247),
    [anon_sym_while] = ACTIONS(247),
    [anon_sym_command] = ACTIONS(247),
    [anon_sym_Float] = ACTIONS(247),
    [anon_sym_Int] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_then] = ACTIONS(247),
    [anon_sym_meta] = ACTIONS(247),
    [anon_sym_File] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(247),
    [sym_object_type] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_else] = ACTIONS(247),
    [anon_sym_runtime] = ACTIONS(247),
    [anon_sym_Array] = ACTIONS(247),
    [anon_sym_output] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_call] = ACTIONS(247),
    [anon_sym_String] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_Boolean] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
  },
  [84] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [85] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(156),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(157),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(158),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [88] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(161),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [89] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(162),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [90] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(163),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [91] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(165),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(298),
  },
  [93] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [94] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(168),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [95] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [96] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(169),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [97] = {
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [aux_sym_identifier_token1] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(302),
  },
  [98] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(170),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [99] = {
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [aux_sym_identifier_token1] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
  },
  [100] = {
    [aux_sym_string_literal_repeat1] = STATE(100),
    [aux_sym_string_literal_token1] = ACTIONS(306),
    [sym_escape_sequence] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(309),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(311),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(313),
  },
  [103] = {
    [sym_runtime_kv] = STATE(173),
    [aux_sym_runtime_repeat1] = STATE(173),
    [sym_identifier] = STATE(104),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(315),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(317),
  },
  [105] = {
    [sym_identifier] = STATE(175),
    [aux_sym_identifier_token1] = ACTIONS(87),
  },
  [106] = {
    [sym_inputs] = STATE(178),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_input] = ACTIONS(321),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(323),
  },
  [108] = {
    [sym_identifier] = STATE(179),
    [aux_sym_identifier_token1] = ACTIONS(85),
  },
  [109] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
  },
  [110] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(189),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(189),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [111] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_task_output] = STATE(197),
    [aux_sym_task_repeat1] = STATE(195),
    [sym_map_type] = STATE(7),
    [sym_task_sections] = STATE(196),
    [sym_parameter_meta] = STATE(197),
    [aux_sym_task_sections_repeat1] = STATE(197),
    [sym_declaration] = STATE(195),
    [sym_runtime] = STATE(197),
    [sym_command] = STATE(197),
    [sym_meta] = STATE(197),
    [sym_type] = STATE(198),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(345),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_command] = ACTIONS(347),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_runtime] = ACTIONS(349),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_output] = ACTIONS(351),
    [anon_sym_Int] = ACTIONS(163),
  },
  [112] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [113] = {
    [anon_sym_if] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(355),
    [aux_sym_identifier_token1] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_float] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_integer] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
  },
  [114] = {
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(357),
    [aux_sym_identifier_token1] = ACTIONS(357),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [sym_float] = ACTIONS(357),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym_integer] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
  },
  [115] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(128),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [117] = {
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(363),
    [aux_sym_identifier_token1] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_float] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_integer] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
  },
  [118] = {
    [aux_sym_string_literal_repeat1] = STATE(100),
    [aux_sym_string_literal_token1] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(365),
  },
  [119] = {
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [aux_sym_identifier_token1] = ACTIONS(367),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_float] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [sym_integer] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
  },
  [120] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [121] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(204),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [122] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(205),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [123] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(206),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [124] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(207),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [125] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(208),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [126] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(210),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [127] = {
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [aux_sym_identifier_token1] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
  },
  [128] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(128),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(378),
    [anon_sym_true] = ACTIONS(375),
    [aux_sym_identifier_token1] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym_integer] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(386),
    [sym_float] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(401),
  },
  [129] = {
    [anon_sym_workflow] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_task] = ACTIONS(181),
    [anon_sym_import] = ACTIONS(181),
    [anon_sym_as] = ACTIONS(181),
  },
  [130] = {
    [aux_sym_string_literal_repeat1] = STATE(100),
    [aux_sym_string_literal_token1] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(404),
  },
  [131] = {
    [sym_identifier] = STATE(213),
    [aux_sym_identifier_token1] = ACTIONS(406),
  },
  [132] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [133] = {
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [aux_sym_identifier_token1] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_COLON] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
  },
  [134] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(412),
    [anon_sym_if] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_true] = ACTIONS(412),
    [aux_sym_identifier_token1] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym_integer] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(423),
    [sym_float] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(438),
  },
  [135] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(215),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [136] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [137] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(216),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [138] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(217),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [139] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(220),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [140] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(133),
  },
  [141] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [aux_sym_identifier_token1] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(447),
  },
  [142] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [143] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [144] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(221),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [145] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [146] = {
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(453),
  },
  [147] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(227),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [148] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [aux_sym_identifier_token1] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(445),
  },
  [149] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [150] = {
    [aux_sym_expression_repeat1] = STATE(233),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [151] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(234),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [152] = {
    [anon_sym_if] = ACTIONS(373),
    [anon_sym_Map] = ACTIONS(373),
    [anon_sym_parameter_meta] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_scatter] = ACTIONS(373),
    [anon_sym_while] = ACTIONS(373),
    [anon_sym_command] = ACTIONS(373),
    [anon_sym_Float] = ACTIONS(373),
    [anon_sym_Int] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_then] = ACTIONS(373),
    [anon_sym_meta] = ACTIONS(373),
    [anon_sym_File] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [sym_object_type] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_else] = ACTIONS(373),
    [anon_sym_runtime] = ACTIONS(373),
    [anon_sym_Array] = ACTIONS(373),
    [anon_sym_output] = ACTIONS(373),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_call] = ACTIONS(373),
    [anon_sym_String] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_Boolean] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
  },
  [153] = {
    [anon_sym_if] = ACTIONS(302),
    [anon_sym_Map] = ACTIONS(302),
    [anon_sym_parameter_meta] = ACTIONS(302),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [anon_sym_scatter] = ACTIONS(302),
    [anon_sym_while] = ACTIONS(302),
    [anon_sym_command] = ACTIONS(302),
    [anon_sym_Float] = ACTIONS(302),
    [anon_sym_Int] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_then] = ACTIONS(302),
    [anon_sym_meta] = ACTIONS(302),
    [anon_sym_File] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(302),
    [sym_object_type] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_else] = ACTIONS(302),
    [anon_sym_runtime] = ACTIONS(302),
    [anon_sym_Array] = ACTIONS(302),
    [anon_sym_output] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_call] = ACTIONS(302),
    [anon_sym_String] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_Boolean] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
  },
  [154] = {
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_Map] = ACTIONS(304),
    [anon_sym_parameter_meta] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_scatter] = ACTIONS(304),
    [anon_sym_while] = ACTIONS(304),
    [anon_sym_command] = ACTIONS(304),
    [anon_sym_Float] = ACTIONS(304),
    [anon_sym_Int] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_then] = ACTIONS(304),
    [anon_sym_meta] = ACTIONS(304),
    [anon_sym_File] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [sym_object_type] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_else] = ACTIONS(304),
    [anon_sym_runtime] = ACTIONS(304),
    [anon_sym_Array] = ACTIONS(304),
    [anon_sym_output] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_call] = ACTIONS(304),
    [anon_sym_String] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_Boolean] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
  },
  [155] = {
    [anon_sym_if] = ACTIONS(410),
    [anon_sym_Map] = ACTIONS(410),
    [anon_sym_parameter_meta] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_scatter] = ACTIONS(410),
    [anon_sym_while] = ACTIONS(410),
    [anon_sym_command] = ACTIONS(410),
    [anon_sym_Float] = ACTIONS(410),
    [anon_sym_Int] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_then] = ACTIONS(410),
    [anon_sym_meta] = ACTIONS(410),
    [anon_sym_File] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(410),
    [sym_object_type] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(410),
    [anon_sym_else] = ACTIONS(410),
    [anon_sym_runtime] = ACTIONS(410),
    [anon_sym_Array] = ACTIONS(410),
    [anon_sym_output] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_call] = ACTIONS(410),
    [anon_sym_String] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(410),
    [anon_sym_Boolean] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
  },
  [156] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_then] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [157] = {
    [anon_sym_if] = ACTIONS(447),
    [anon_sym_Map] = ACTIONS(447),
    [anon_sym_parameter_meta] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_scatter] = ACTIONS(447),
    [anon_sym_while] = ACTIONS(447),
    [anon_sym_command] = ACTIONS(447),
    [anon_sym_Float] = ACTIONS(447),
    [anon_sym_Int] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_then] = ACTIONS(447),
    [anon_sym_meta] = ACTIONS(447),
    [anon_sym_File] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [sym_object_type] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_else] = ACTIONS(447),
    [anon_sym_runtime] = ACTIONS(447),
    [anon_sym_Array] = ACTIONS(447),
    [anon_sym_output] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_call] = ACTIONS(447),
    [anon_sym_String] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_Boolean] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
  },
  [158] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_then] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [159] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(235),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [160] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(77),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [161] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(479),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [162] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_then] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [163] = {
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(453),
  },
  [164] = {
    [anon_sym_if] = ACTIONS(445),
    [anon_sym_Map] = ACTIONS(445),
    [anon_sym_parameter_meta] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_scatter] = ACTIONS(445),
    [anon_sym_while] = ACTIONS(445),
    [anon_sym_command] = ACTIONS(445),
    [anon_sym_Float] = ACTIONS(445),
    [anon_sym_Int] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_then] = ACTIONS(445),
    [anon_sym_meta] = ACTIONS(445),
    [anon_sym_File] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [sym_object_type] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_else] = ACTIONS(445),
    [anon_sym_runtime] = ACTIONS(445),
    [anon_sym_Array] = ACTIONS(445),
    [anon_sym_output] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_call] = ACTIONS(445),
    [anon_sym_String] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_Boolean] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
  },
  [165] = {
    [aux_sym_expression_repeat1] = STATE(242),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [166] = {
    [sym_array_type] = STATE(243),
    [sym_primitive_type] = STATE(243),
    [sym_map_type] = STATE(243),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [sym_object_type] = ACTIONS(483),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Int] = ACTIONS(163),
  },
  [167] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(244),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [168] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [169] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [170] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [aux_sym_identifier_token1] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_QMARK] = ACTIONS(485),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(487),
  },
  [173] = {
    [sym_runtime_kv] = STATE(173),
    [aux_sym_runtime_repeat1] = STATE(173),
    [sym_identifier] = STATE(104),
    [aux_sym_identifier_token1] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(492),
  },
  [174] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(247),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [175] = {
    [sym_call_body] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(193),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(500),
  },
  [177] = {
    [anon_sym_COLON] = ACTIONS(502),
  },
  [178] = {
    [anon_sym_RBRACE] = ACTIONS(504),
  },
  [179] = {
    [anon_sym_DOT] = ACTIONS(506),
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(506),
  },
  [180] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(180),
    [anon_sym_DOT] = ACTIONS(508),
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(506),
  },
  [181] = {
    [anon_sym_LPAREN] = ACTIONS(511),
  },
  [182] = {
    [anon_sym_LBRACE] = ACTIONS(513),
  },
  [183] = {
    [anon_sym_LPAREN] = ACTIONS(515),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(517),
  },
  [185] = {
    [sym_namespaced_identifier] = STATE(255),
    [sym_identifier] = STATE(256),
    [aux_sym_identifier_token1] = ACTIONS(519),
  },
  [186] = {
    [anon_sym_workflow] = ACTIONS(521),
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_task] = ACTIONS(521),
    [anon_sym_import] = ACTIONS(521),
  },
  [187] = {
    [anon_sym_LBRACE] = ACTIONS(523),
  },
  [188] = {
    [anon_sym_if] = ACTIONS(525),
    [anon_sym_File] = ACTIONS(525),
    [anon_sym_Map] = ACTIONS(525),
    [anon_sym_parameter_meta] = ACTIONS(525),
    [sym_object_type] = ACTIONS(525),
    [anon_sym_scatter] = ACTIONS(525),
    [anon_sym_while] = ACTIONS(525),
    [anon_sym_Float] = ACTIONS(525),
    [anon_sym_Array] = ACTIONS(525),
    [anon_sym_Int] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_call] = ACTIONS(525),
    [anon_sym_String] = ACTIONS(525),
    [anon_sym_meta] = ACTIONS(525),
    [anon_sym_Boolean] = ACTIONS(525),
  },
  [189] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(259),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(259),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [190] = {
    [sym_identifier] = STATE(260),
    [aux_sym_identifier_token1] = ACTIONS(519),
  },
  [191] = {
    [anon_sym_LBRACE] = ACTIONS(529),
  },
  [192] = {
    [anon_sym_LT_LT_LT] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(533),
  },
  [193] = {
    [anon_sym_LBRACE] = ACTIONS(535),
  },
  [194] = {
    [anon_sym_LBRACE] = ACTIONS(537),
  },
  [195] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_task_output] = STATE(197),
    [aux_sym_task_repeat1] = STATE(266),
    [sym_map_type] = STATE(7),
    [sym_task_sections] = STATE(267),
    [sym_parameter_meta] = STATE(197),
    [aux_sym_task_sections_repeat1] = STATE(197),
    [sym_declaration] = STATE(266),
    [sym_runtime] = STATE(197),
    [sym_command] = STATE(197),
    [sym_meta] = STATE(197),
    [sym_type] = STATE(198),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(345),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_command] = ACTIONS(347),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_runtime] = ACTIONS(349),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_output] = ACTIONS(351),
    [anon_sym_Int] = ACTIONS(163),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(539),
  },
  [197] = {
    [sym_task_output] = STATE(269),
    [sym_command] = STATE(269),
    [sym_runtime] = STATE(269),
    [aux_sym_task_sections_repeat1] = STATE(269),
    [sym_meta] = STATE(269),
    [sym_parameter_meta] = STATE(269),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_command] = ACTIONS(347),
    [anon_sym_parameter_meta] = ACTIONS(345),
    [anon_sym_runtime] = ACTIONS(349),
    [anon_sym_output] = ACTIONS(351),
    [anon_sym_meta] = ACTIONS(343),
  },
  [198] = {
    [sym_identifier] = STATE(270),
    [aux_sym_identifier_token1] = ACTIONS(519),
  },
  [199] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(271),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [200] = {
    [anon_sym_if] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_true] = ACTIONS(543),
    [aux_sym_identifier_token1] = ACTIONS(543),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym_float] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [sym_integer] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
  },
  [201] = {
    [anon_sym_if] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(545),
    [aux_sym_identifier_token1] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [sym_float] = ACTIONS(545),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [sym_integer] = ACTIONS(545),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [202] = {
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(547),
    [aux_sym_identifier_token1] = ACTIONS(547),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [sym_float] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym_integer] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
  },
  [203] = {
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym_float] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(410),
    [sym_integer] = ACTIONS(549),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(410),
  },
  [204] = {
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_float] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_integer] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(445),
  },
  [205] = {
    [anon_sym_if] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(553),
    [aux_sym_identifier_token1] = ACTIONS(553),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [sym_float] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym_integer] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
  },
  [206] = {
    [anon_sym_if] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_true] = ACTIONS(555),
    [aux_sym_identifier_token1] = ACTIONS(555),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_float] = ACTIONS(555),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(555),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_integer] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(449),
  },
  [207] = {
    [anon_sym_if] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(553),
    [aux_sym_identifier_token1] = ACTIONS(553),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [sym_float] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym_integer] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(447),
  },
  [208] = {
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(453),
  },
  [209] = {
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_float] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [sym_integer] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
  },
  [210] = {
    [aux_sym_expression_repeat1] = STATE(273),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [211] = {
    [anon_sym_workflow] = ACTIONS(304),
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_task] = ACTIONS(304),
    [anon_sym_import] = ACTIONS(304),
    [anon_sym_as] = ACTIONS(304),
  },
  [212] = {
    [anon_sym_workflow] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_task] = ACTIONS(63),
    [anon_sym_import] = ACTIONS(63),
  },
  [213] = {
    [anon_sym_workflow] = ACTIONS(559),
    [ts_builtin_sym_end] = ACTIONS(559),
    [anon_sym_task] = ACTIONS(559),
    [anon_sym_import] = ACTIONS(559),
  },
  [214] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(274),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(253),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [217] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [218] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(275),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [219] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(113),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [220] = {
    [anon_sym_if] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(563),
    [anon_sym_true] = ACTIONS(561),
    [aux_sym_identifier_token1] = ACTIONS(561),
    [anon_sym_BANG_EQ] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym_float] = ACTIONS(561),
    [anon_sym_EQ_EQ] = ACTIONS(565),
    [anon_sym_false] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_integer] = ACTIONS(561),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(571),
  },
  [221] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(573),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [222] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(281),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [223] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [224] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(282),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [225] = {
    [anon_sym_DOT] = ACTIONS(575),
    [anon_sym_BANG_EQ] = ACTIONS(575),
    [aux_sym_identifier_token1] = ACTIONS(575),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(575),
    [anon_sym_EQ_EQ] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_PERCENT] = ACTIONS(575),
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_DASH] = ACTIONS(575),
    [anon_sym_COLON] = ACTIONS(575),
    [anon_sym_SLASH] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(575),
  },
  [226] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(283),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(577),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [228] = {
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
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [229] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [230] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(286),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [231] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(287),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [232] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(288),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [233] = {
    [aux_sym_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(579),
  },
  [234] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(581),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [235] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(583),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [236] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(293),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [237] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(157),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [238] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(294),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [239] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(295),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [240] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(296),
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
  [241] = {
    [anon_sym_if] = ACTIONS(575),
    [anon_sym_Map] = ACTIONS(575),
    [anon_sym_parameter_meta] = ACTIONS(575),
    [anon_sym_BANG_EQ] = ACTIONS(575),
    [anon_sym_scatter] = ACTIONS(575),
    [anon_sym_while] = ACTIONS(575),
    [anon_sym_command] = ACTIONS(575),
    [anon_sym_Float] = ACTIONS(575),
    [anon_sym_Int] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_PERCENT] = ACTIONS(575),
    [anon_sym_then] = ACTIONS(575),
    [anon_sym_meta] = ACTIONS(575),
    [anon_sym_File] = ACTIONS(575),
    [anon_sym_DOT] = ACTIONS(575),
    [sym_object_type] = ACTIONS(575),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(575),
    [anon_sym_else] = ACTIONS(575),
    [anon_sym_runtime] = ACTIONS(575),
    [anon_sym_Array] = ACTIONS(575),
    [anon_sym_output] = ACTIONS(575),
    [anon_sym_EQ_EQ] = ACTIONS(575),
    [anon_sym_call] = ACTIONS(575),
    [anon_sym_String] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_Boolean] = ACTIONS(575),
    [anon_sym_DASH] = ACTIONS(575),
    [anon_sym_SLASH] = ACTIONS(575),
  },
  [242] = {
    [aux_sym_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(585),
  },
  [243] = {
    [anon_sym_RBRACK] = ACTIONS(587),
  },
  [244] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(589),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [245] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(300),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [246] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(593),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_identifier_token1] = ACTIONS(591),
    [anon_sym_BANG_EQ] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(597),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(601),
  },
  [249] = {
    [sym_variable_mapping_kv] = STATE(305),
    [sym_identifier] = STATE(307),
    [sym_variable_mappings] = STATE(306),
    [aux_sym_identifier_token1] = ACTIONS(87),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(603),
  },
  [251] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(308),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [252] = {
    [sym_parameter_meta_kv] = STATE(309),
    [aux_sym_parameter_meta_repeat1] = STATE(310),
    [sym_identifier] = STATE(311),
    [anon_sym_if] = ACTIONS(605),
    [anon_sym_File] = ACTIONS(605),
    [anon_sym_Map] = ACTIONS(605),
    [anon_sym_parameter_meta] = ACTIONS(605),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_object_type] = ACTIONS(605),
    [anon_sym_scatter] = ACTIONS(605),
    [anon_sym_while] = ACTIONS(605),
    [anon_sym_Float] = ACTIONS(605),
    [anon_sym_Array] = ACTIONS(605),
    [anon_sym_Int] = ACTIONS(605),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_call] = ACTIONS(605),
    [anon_sym_String] = ACTIONS(605),
    [anon_sym_meta] = ACTIONS(605),
    [anon_sym_Boolean] = ACTIONS(605),
  },
  [253] = {
    [aux_sym_scatter_repeat1] = STATE(313),
    [sym_scatter_iteration_statment] = STATE(313),
    [sym_identifier] = STATE(314),
    [aux_sym_identifier_token1] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(609),
  },
  [254] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(315),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [255] = {
    [sym_call_body] = STATE(318),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_File] = ACTIONS(195),
    [anon_sym_Map] = ACTIONS(195),
    [anon_sym_parameter_meta] = ACTIONS(195),
    [sym_object_type] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(611),
    [anon_sym_scatter] = ACTIONS(195),
    [anon_sym_while] = ACTIONS(195),
    [anon_sym_Float] = ACTIONS(195),
    [anon_sym_Array] = ACTIONS(195),
    [anon_sym_Int] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_call] = ACTIONS(195),
    [anon_sym_String] = ACTIONS(195),
    [anon_sym_meta] = ACTIONS(195),
    [anon_sym_Boolean] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(613),
  },
  [256] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(320),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_File] = ACTIONS(199),
    [anon_sym_Map] = ACTIONS(199),
    [anon_sym_parameter_meta] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(615),
    [sym_object_type] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(199),
    [anon_sym_scatter] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_Float] = ACTIONS(199),
    [anon_sym_Array] = ACTIONS(199),
    [anon_sym_Int] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_call] = ACTIONS(199),
    [anon_sym_String] = ACTIONS(199),
    [anon_sym_meta] = ACTIONS(199),
    [anon_sym_Boolean] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
  },
  [257] = {
    [sym_identifier] = STATE(323),
    [sym_meta_kv] = STATE(322),
    [aux_sym_meta_repeat1] = STATE(322),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(617),
  },
  [258] = {
    [anon_sym_workflow] = ACTIONS(619),
    [ts_builtin_sym_end] = ACTIONS(619),
    [anon_sym_task] = ACTIONS(619),
    [anon_sym_import] = ACTIONS(619),
  },
  [259] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(259),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(259),
    [anon_sym_if] = ACTIONS(621),
    [anon_sym_File] = ACTIONS(624),
    [anon_sym_Map] = ACTIONS(627),
    [anon_sym_parameter_meta] = ACTIONS(630),
    [sym_object_type] = ACTIONS(633),
    [anon_sym_scatter] = ACTIONS(636),
    [anon_sym_while] = ACTIONS(639),
    [anon_sym_Float] = ACTIONS(624),
    [anon_sym_Array] = ACTIONS(642),
    [anon_sym_Int] = ACTIONS(624),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_call] = ACTIONS(647),
    [anon_sym_String] = ACTIONS(624),
    [anon_sym_meta] = ACTIONS(650),
    [anon_sym_Boolean] = ACTIONS(624),
  },
  [260] = {
    [anon_sym_if] = ACTIONS(653),
    [anon_sym_File] = ACTIONS(653),
    [anon_sym_Map] = ACTIONS(653),
    [anon_sym_parameter_meta] = ACTIONS(653),
    [sym_object_type] = ACTIONS(653),
    [anon_sym_scatter] = ACTIONS(653),
    [anon_sym_while] = ACTIONS(653),
    [anon_sym_Float] = ACTIONS(653),
    [anon_sym_Array] = ACTIONS(653),
    [anon_sym_Int] = ACTIONS(653),
    [anon_sym_RBRACE] = ACTIONS(653),
    [anon_sym_call] = ACTIONS(653),
    [anon_sym_String] = ACTIONS(653),
    [anon_sym_meta] = ACTIONS(653),
    [anon_sym_EQ] = ACTIONS(655),
    [anon_sym_Boolean] = ACTIONS(653),
  },
  [261] = {
    [sym_parameter_meta_kv] = STATE(325),
    [aux_sym_parameter_meta_repeat1] = STATE(326),
    [sym_identifier] = STATE(311),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_parameter_meta] = ACTIONS(605),
    [anon_sym_runtime] = ACTIONS(605),
    [anon_sym_command] = ACTIONS(605),
    [anon_sym_output] = ACTIONS(605),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(605),
  },
  [262] = {
    [sym_command_part_var] = STATE(327),
    [aux_sym_command_repeat1] = STATE(329),
    [sym_command_part] = STATE(329),
    [sym_command_part_string] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(659),
  },
  [263] = {
    [sym_command_part_var] = STATE(327),
    [aux_sym_command_repeat1] = STATE(330),
    [sym_command_part] = STATE(330),
    [sym_command_part_string] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(659),
  },
  [264] = {
    [sym_runtime_kv] = STATE(332),
    [aux_sym_runtime_repeat1] = STATE(332),
    [sym_identifier] = STATE(104),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(661),
  },
  [265] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_task_output_kv] = STATE(334),
    [sym_map_type] = STATE(7),
    [aux_sym_task_output_repeat1] = STATE(334),
    [sym_type] = STATE(335),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(663),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
  },
  [266] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_declaration] = STATE(266),
    [aux_sym_task_repeat1] = STATE(266),
    [sym_map_type] = STATE(7),
    [sym_type] = STATE(198),
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
  [267] = {
    [anon_sym_RBRACE] = ACTIONS(679),
  },
  [268] = {
    [anon_sym_workflow] = ACTIONS(681),
    [ts_builtin_sym_end] = ACTIONS(681),
    [anon_sym_task] = ACTIONS(681),
    [anon_sym_import] = ACTIONS(681),
  },
  [269] = {
    [sym_task_output] = STATE(269),
    [sym_command] = STATE(269),
    [sym_runtime] = STATE(269),
    [aux_sym_task_sections_repeat1] = STATE(269),
    [sym_meta] = STATE(269),
    [sym_parameter_meta] = STATE(269),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_parameter_meta] = ACTIONS(685),
    [anon_sym_runtime] = ACTIONS(688),
    [anon_sym_command] = ACTIONS(691),
    [anon_sym_output] = ACTIONS(694),
    [anon_sym_meta] = ACTIONS(697),
  },
  [270] = {
    [anon_sym_File] = ACTIONS(653),
    [anon_sym_Map] = ACTIONS(653),
    [anon_sym_parameter_meta] = ACTIONS(653),
    [sym_object_type] = ACTIONS(653),
    [anon_sym_String] = ACTIONS(653),
    [anon_sym_meta] = ACTIONS(653),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_command] = ACTIONS(653),
    [anon_sym_Boolean] = ACTIONS(653),
    [anon_sym_runtime] = ACTIONS(653),
    [anon_sym_Array] = ACTIONS(653),
    [anon_sym_Float] = ACTIONS(653),
    [anon_sym_output] = ACTIONS(653),
    [anon_sym_Int] = ACTIONS(653),
  },
  [271] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(702),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [272] = {
    [anon_sym_if] = ACTIONS(704),
    [anon_sym_DOT] = ACTIONS(704),
    [anon_sym_true] = ACTIONS(704),
    [aux_sym_identifier_token1] = ACTIONS(704),
    [anon_sym_BANG_EQ] = ACTIONS(575),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_float] = ACTIONS(704),
    [anon_sym_EQ_EQ] = ACTIONS(575),
    [anon_sym_false] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_PERCENT] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [sym_integer] = ACTIONS(704),
    [anon_sym_DASH] = ACTIONS(575),
    [anon_sym_SLASH] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(575),
  },
  [273] = {
    [aux_sym_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(706),
  },
  [274] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(708),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [275] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [276] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(342),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [277] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(205),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [278] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(343),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [279] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(344),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [280] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(345),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [281] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(453),
  },
  [282] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [283] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [284] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(346),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [285] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [286] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [287] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [288] = {
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(712),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [289] = {
    [anon_sym_DOT] = ACTIONS(714),
    [anon_sym_BANG_EQ] = ACTIONS(714),
    [aux_sym_identifier_token1] = ACTIONS(714),
    [anon_sym_PLUS] = ACTIONS(714),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_LPAREN] = ACTIONS(714),
    [anon_sym_EQ_EQ] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(714),
    [anon_sym_PERCENT] = ACTIONS(714),
    [ts_builtin_sym_end] = ACTIONS(714),
    [anon_sym_RPAREN] = ACTIONS(714),
    [anon_sym_RBRACK] = ACTIONS(714),
    [anon_sym_LBRACK] = ACTIONS(714),
    [anon_sym_DASH] = ACTIONS(714),
    [anon_sym_COLON] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_COMMA] = ACTIONS(714),
  },
  [290] = {
    [aux_sym_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(712),
  },
  [291] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(347),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [292] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(348),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [293] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [294] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_else] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [295] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_else] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [296] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(133),
  },
  [297] = {
    [anon_sym_if] = ACTIONS(714),
    [anon_sym_Map] = ACTIONS(714),
    [anon_sym_parameter_meta] = ACTIONS(714),
    [anon_sym_BANG_EQ] = ACTIONS(714),
    [anon_sym_scatter] = ACTIONS(714),
    [anon_sym_while] = ACTIONS(714),
    [anon_sym_command] = ACTIONS(714),
    [anon_sym_Float] = ACTIONS(714),
    [anon_sym_Int] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(714),
    [anon_sym_PERCENT] = ACTIONS(714),
    [anon_sym_then] = ACTIONS(714),
    [anon_sym_meta] = ACTIONS(714),
    [anon_sym_File] = ACTIONS(714),
    [anon_sym_DOT] = ACTIONS(714),
    [sym_object_type] = ACTIONS(714),
    [anon_sym_PLUS] = ACTIONS(714),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_LPAREN] = ACTIONS(714),
    [anon_sym_else] = ACTIONS(714),
    [anon_sym_runtime] = ACTIONS(714),
    [anon_sym_Array] = ACTIONS(714),
    [anon_sym_output] = ACTIONS(714),
    [anon_sym_EQ_EQ] = ACTIONS(714),
    [anon_sym_call] = ACTIONS(714),
    [anon_sym_String] = ACTIONS(714),
    [anon_sym_LBRACK] = ACTIONS(714),
    [anon_sym_Boolean] = ACTIONS(714),
    [anon_sym_DASH] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(721),
    [aux_sym_identifier_token1] = ACTIONS(721),
    [anon_sym_RBRACK] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(721),
    [anon_sym_QMARK] = ACTIONS(721),
  },
  [299] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(349),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [300] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(723),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [301] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(351),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [302] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [303] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(352),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [304] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(353),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [305] = {
    [aux_sym_variable_mappings_repeat1] = STATE(355),
    [anon_sym_RBRACE] = ACTIONS(725),
    [anon_sym_COMMA] = ACTIONS(727),
  },
  [306] = {
    [anon_sym_RBRACE] = ACTIONS(729),
  },
  [307] = {
    [anon_sym_EQ] = ACTIONS(731),
  },
  [308] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [309] = {
    [anon_sym_RBRACE] = ACTIONS(735),
  },
  [310] = {
    [sym_parameter_meta_kv] = STATE(309),
    [aux_sym_parameter_meta_repeat1] = STATE(359),
    [sym_identifier] = STATE(311),
    [anon_sym_if] = ACTIONS(737),
    [anon_sym_File] = ACTIONS(737),
    [anon_sym_Map] = ACTIONS(737),
    [anon_sym_parameter_meta] = ACTIONS(737),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_object_type] = ACTIONS(737),
    [anon_sym_scatter] = ACTIONS(737),
    [anon_sym_while] = ACTIONS(737),
    [anon_sym_Float] = ACTIONS(737),
    [anon_sym_Array] = ACTIONS(737),
    [anon_sym_Int] = ACTIONS(737),
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_call] = ACTIONS(737),
    [anon_sym_String] = ACTIONS(737),
    [anon_sym_meta] = ACTIONS(737),
    [anon_sym_Boolean] = ACTIONS(737),
  },
  [311] = {
    [anon_sym_EQ] = ACTIONS(741),
  },
  [312] = {
    [sym_scatter_body] = STATE(362),
    [anon_sym_LBRACE] = ACTIONS(743),
  },
  [313] = {
    [aux_sym_scatter_repeat1] = STATE(364),
    [sym_scatter_iteration_statment] = STATE(364),
    [sym_identifier] = STATE(314),
    [aux_sym_identifier_token1] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(745),
  },
  [314] = {
    [anon_sym_in] = ACTIONS(747),
  },
  [315] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [316] = {
    [sym_identifier] = STATE(367),
    [aux_sym_identifier_token1] = ACTIONS(519),
  },
  [317] = {
    [sym_inputs] = STATE(369),
    [anon_sym_RBRACE] = ACTIONS(751),
    [anon_sym_input] = ACTIONS(321),
  },
  [318] = {
    [anon_sym_if] = ACTIONS(323),
    [anon_sym_File] = ACTIONS(323),
    [anon_sym_Map] = ACTIONS(323),
    [anon_sym_parameter_meta] = ACTIONS(323),
    [sym_object_type] = ACTIONS(323),
    [anon_sym_scatter] = ACTIONS(323),
    [anon_sym_while] = ACTIONS(323),
    [anon_sym_Float] = ACTIONS(323),
    [anon_sym_Array] = ACTIONS(323),
    [anon_sym_Int] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_call] = ACTIONS(323),
    [anon_sym_String] = ACTIONS(323),
    [anon_sym_meta] = ACTIONS(323),
    [anon_sym_Boolean] = ACTIONS(323),
  },
  [319] = {
    [sym_identifier] = STATE(370),
    [aux_sym_identifier_token1] = ACTIONS(519),
  },
  [320] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(371),
    [anon_sym_if] = ACTIONS(325),
    [anon_sym_File] = ACTIONS(325),
    [anon_sym_Map] = ACTIONS(325),
    [anon_sym_parameter_meta] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(615),
    [sym_object_type] = ACTIONS(325),
    [anon_sym_as] = ACTIONS(325),
    [anon_sym_scatter] = ACTIONS(325),
    [anon_sym_while] = ACTIONS(325),
    [anon_sym_Float] = ACTIONS(325),
    [anon_sym_Array] = ACTIONS(325),
    [anon_sym_Int] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_call] = ACTIONS(325),
    [anon_sym_String] = ACTIONS(325),
    [anon_sym_meta] = ACTIONS(325),
    [anon_sym_Boolean] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
  },
  [321] = {
    [anon_sym_if] = ACTIONS(753),
    [anon_sym_File] = ACTIONS(753),
    [anon_sym_Map] = ACTIONS(753),
    [anon_sym_parameter_meta] = ACTIONS(753),
    [sym_object_type] = ACTIONS(753),
    [anon_sym_scatter] = ACTIONS(753),
    [anon_sym_while] = ACTIONS(753),
    [anon_sym_command] = ACTIONS(753),
    [anon_sym_runtime] = ACTIONS(753),
    [anon_sym_Float] = ACTIONS(753),
    [anon_sym_Array] = ACTIONS(753),
    [anon_sym_output] = ACTIONS(753),
    [anon_sym_Int] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_call] = ACTIONS(753),
    [anon_sym_String] = ACTIONS(753),
    [anon_sym_meta] = ACTIONS(753),
    [anon_sym_Boolean] = ACTIONS(753),
  },
  [322] = {
    [sym_identifier] = STATE(323),
    [sym_meta_kv] = STATE(373),
    [aux_sym_meta_repeat1] = STATE(373),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(755),
  },
  [323] = {
    [anon_sym_EQ] = ACTIONS(757),
  },
  [324] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(377),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [325] = {
    [anon_sym_RBRACE] = ACTIONS(763),
  },
  [326] = {
    [sym_parameter_meta_kv] = STATE(325),
    [aux_sym_parameter_meta_repeat1] = STATE(379),
    [sym_identifier] = STATE(311),
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_parameter_meta] = ACTIONS(737),
    [anon_sym_runtime] = ACTIONS(737),
    [anon_sym_command] = ACTIONS(737),
    [anon_sym_output] = ACTIONS(737),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_meta] = ACTIONS(737),
  },
  [327] = {
    [sym_command_part_string] = ACTIONS(765),
    [anon_sym_RBRACE] = ACTIONS(765),
    [anon_sym_GT_GT_GT] = ACTIONS(765),
    [anon_sym_DOLLAR] = ACTIONS(765),
  },
  [328] = {
    [anon_sym_LBRACE] = ACTIONS(767),
  },
  [329] = {
    [sym_command_part_var] = STATE(327),
    [aux_sym_command_repeat1] = STATE(382),
    [sym_command_part] = STATE(382),
    [sym_command_part_string] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(659),
    [anon_sym_GT_GT_GT] = ACTIONS(769),
  },
  [330] = {
    [sym_command_part_var] = STATE(327),
    [aux_sym_command_repeat1] = STATE(383),
    [sym_command_part] = STATE(383),
    [sym_command_part_string] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(769),
  },
  [331] = {
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_parameter_meta] = ACTIONS(313),
    [anon_sym_runtime] = ACTIONS(313),
    [anon_sym_command] = ACTIONS(313),
    [anon_sym_output] = ACTIONS(313),
    [anon_sym_meta] = ACTIONS(313),
  },
  [332] = {
    [sym_runtime_kv] = STATE(173),
    [aux_sym_runtime_repeat1] = STATE(173),
    [sym_identifier] = STATE(104),
    [aux_sym_identifier_token1] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(771),
  },
  [333] = {
    [anon_sym_RBRACE] = ACTIONS(773),
    [anon_sym_parameter_meta] = ACTIONS(773),
    [anon_sym_runtime] = ACTIONS(773),
    [anon_sym_command] = ACTIONS(773),
    [anon_sym_output] = ACTIONS(773),
    [anon_sym_meta] = ACTIONS(773),
  },
  [334] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_task_output_kv] = STATE(386),
    [sym_map_type] = STATE(7),
    [aux_sym_task_output_repeat1] = STATE(386),
    [sym_type] = STATE(335),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_Boolean] = ACTIONS(163),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
  },
  [335] = {
    [sym_identifier] = STATE(387),
    [aux_sym_identifier_token1] = ACTIONS(87),
  },
  [336] = {
    [anon_sym_workflow] = ACTIONS(777),
    [ts_builtin_sym_end] = ACTIONS(777),
    [anon_sym_task] = ACTIONS(777),
    [anon_sym_import] = ACTIONS(777),
  },
  [337] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(390),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [338] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(391),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [339] = {
    [anon_sym_if] = ACTIONS(783),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_true] = ACTIONS(783),
    [aux_sym_identifier_token1] = ACTIONS(783),
    [anon_sym_BANG_EQ] = ACTIONS(714),
    [anon_sym_PLUS] = ACTIONS(714),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_LPAREN] = ACTIONS(714),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [sym_float] = ACTIONS(783),
    [anon_sym_EQ_EQ] = ACTIONS(714),
    [anon_sym_false] = ACTIONS(783),
    [anon_sym_RBRACE] = ACTIONS(714),
    [anon_sym_PERCENT] = ACTIONS(714),
    [anon_sym_RBRACK] = ACTIONS(714),
    [anon_sym_LBRACK] = ACTIONS(714),
    [sym_integer] = ACTIONS(783),
    [anon_sym_DASH] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_LBRACE] = ACTIONS(714),
  },
  [340] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(392),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [341] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(393),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [342] = {
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_BANG_EQ] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_float] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(565),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_integer] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(445),
  },
  [343] = {
    [anon_sym_if] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_true] = ACTIONS(555),
    [aux_sym_identifier_token1] = ACTIONS(555),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_float] = ACTIONS(555),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_integer] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(449),
  },
  [344] = {
    [anon_sym_if] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(553),
    [aux_sym_identifier_token1] = ACTIONS(553),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [sym_float] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym_integer] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(447),
  },
  [345] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(785),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [346] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(787),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [347] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_then] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [348] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(789),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [349] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [350] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(397),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_identifier_token1] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(597),
  },
  [352] = {
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_identifier_token1] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [353] = {
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_identifier_token1] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [354] = {
    [sym_variable_mapping_kv] = STATE(398),
    [sym_identifier] = STATE(307),
    [aux_sym_identifier_token1] = ACTIONS(87),
  },
  [355] = {
    [aux_sym_variable_mappings_repeat1] = STATE(399),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_COMMA] = ACTIONS(727),
  },
  [356] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(402),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [357] = {
    [anon_sym_LBRACE] = ACTIONS(797),
  },
  [358] = {
    [anon_sym_if] = ACTIONS(799),
    [anon_sym_File] = ACTIONS(799),
    [anon_sym_Map] = ACTIONS(799),
    [anon_sym_parameter_meta] = ACTIONS(799),
    [aux_sym_identifier_token1] = ACTIONS(799),
    [sym_object_type] = ACTIONS(799),
    [anon_sym_scatter] = ACTIONS(799),
    [anon_sym_while] = ACTIONS(799),
    [anon_sym_Float] = ACTIONS(799),
    [anon_sym_Array] = ACTIONS(799),
    [anon_sym_Int] = ACTIONS(799),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_call] = ACTIONS(799),
    [anon_sym_String] = ACTIONS(799),
    [anon_sym_meta] = ACTIONS(799),
    [anon_sym_Boolean] = ACTIONS(799),
  },
  [359] = {
    [sym_parameter_meta_kv] = STATE(309),
    [aux_sym_parameter_meta_repeat1] = STATE(359),
    [sym_identifier] = STATE(311),
    [anon_sym_if] = ACTIONS(799),
    [anon_sym_File] = ACTIONS(799),
    [anon_sym_Map] = ACTIONS(799),
    [anon_sym_parameter_meta] = ACTIONS(799),
    [aux_sym_identifier_token1] = ACTIONS(803),
    [sym_object_type] = ACTIONS(799),
    [anon_sym_scatter] = ACTIONS(799),
    [anon_sym_while] = ACTIONS(799),
    [anon_sym_Float] = ACTIONS(799),
    [anon_sym_Array] = ACTIONS(799),
    [anon_sym_Int] = ACTIONS(799),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_call] = ACTIONS(799),
    [anon_sym_String] = ACTIONS(799),
    [anon_sym_meta] = ACTIONS(799),
    [anon_sym_Boolean] = ACTIONS(799),
  },
  [360] = {
    [sym_string_literal] = STATE(404),
    [anon_sym_DQUOTE] = ACTIONS(19),
  },
  [361] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(406),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(406),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(806),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [362] = {
    [anon_sym_if] = ACTIONS(808),
    [anon_sym_File] = ACTIONS(808),
    [anon_sym_Map] = ACTIONS(808),
    [anon_sym_parameter_meta] = ACTIONS(808),
    [sym_object_type] = ACTIONS(808),
    [anon_sym_scatter] = ACTIONS(808),
    [anon_sym_while] = ACTIONS(808),
    [anon_sym_Float] = ACTIONS(808),
    [anon_sym_Array] = ACTIONS(808),
    [anon_sym_Int] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_call] = ACTIONS(808),
    [anon_sym_String] = ACTIONS(808),
    [anon_sym_meta] = ACTIONS(808),
    [anon_sym_Boolean] = ACTIONS(808),
  },
  [363] = {
    [sym_scatter_body] = STATE(407),
    [anon_sym_LBRACE] = ACTIONS(743),
  },
  [364] = {
    [aux_sym_scatter_repeat1] = STATE(364),
    [sym_scatter_iteration_statment] = STATE(364),
    [sym_identifier] = STATE(314),
    [aux_sym_identifier_token1] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(813),
  },
  [365] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(410),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [366] = {
    [anon_sym_LBRACE] = ACTIONS(819),
  },
  [367] = {
    [sym_call_body] = STATE(412),
    [anon_sym_if] = ACTIONS(498),
    [anon_sym_File] = ACTIONS(498),
    [anon_sym_Map] = ACTIONS(498),
    [anon_sym_parameter_meta] = ACTIONS(498),
    [sym_object_type] = ACTIONS(498),
    [anon_sym_scatter] = ACTIONS(498),
    [anon_sym_while] = ACTIONS(498),
    [anon_sym_Float] = ACTIONS(498),
    [anon_sym_Array] = ACTIONS(498),
    [anon_sym_Int] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_call] = ACTIONS(498),
    [anon_sym_String] = ACTIONS(498),
    [anon_sym_meta] = ACTIONS(498),
    [anon_sym_Boolean] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(613),
  },
  [368] = {
    [anon_sym_if] = ACTIONS(500),
    [anon_sym_File] = ACTIONS(500),
    [anon_sym_Map] = ACTIONS(500),
    [anon_sym_parameter_meta] = ACTIONS(500),
    [sym_object_type] = ACTIONS(500),
    [anon_sym_scatter] = ACTIONS(500),
    [anon_sym_while] = ACTIONS(500),
    [anon_sym_Float] = ACTIONS(500),
    [anon_sym_Array] = ACTIONS(500),
    [anon_sym_Int] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_call] = ACTIONS(500),
    [anon_sym_String] = ACTIONS(500),
    [anon_sym_meta] = ACTIONS(500),
    [anon_sym_Boolean] = ACTIONS(500),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(821),
  },
  [370] = {
    [anon_sym_if] = ACTIONS(506),
    [anon_sym_File] = ACTIONS(506),
    [anon_sym_DOT] = ACTIONS(506),
    [anon_sym_Map] = ACTIONS(506),
    [anon_sym_parameter_meta] = ACTIONS(506),
    [sym_object_type] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(506),
    [anon_sym_scatter] = ACTIONS(506),
    [anon_sym_while] = ACTIONS(506),
    [anon_sym_Float] = ACTIONS(506),
    [anon_sym_Array] = ACTIONS(506),
    [anon_sym_Int] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_call] = ACTIONS(506),
    [anon_sym_String] = ACTIONS(506),
    [anon_sym_meta] = ACTIONS(506),
    [anon_sym_Boolean] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(506),
  },
  [371] = {
    [aux_sym_namespaced_identifier_repeat1] = STATE(371),
    [anon_sym_if] = ACTIONS(506),
    [anon_sym_File] = ACTIONS(506),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_Map] = ACTIONS(506),
    [anon_sym_parameter_meta] = ACTIONS(506),
    [sym_object_type] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(506),
    [anon_sym_scatter] = ACTIONS(506),
    [anon_sym_while] = ACTIONS(506),
    [anon_sym_Float] = ACTIONS(506),
    [anon_sym_Array] = ACTIONS(506),
    [anon_sym_Int] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_call] = ACTIONS(506),
    [anon_sym_String] = ACTIONS(506),
    [anon_sym_meta] = ACTIONS(506),
    [anon_sym_Boolean] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(506),
  },
  [372] = {
    [anon_sym_if] = ACTIONS(826),
    [anon_sym_File] = ACTIONS(826),
    [anon_sym_Map] = ACTIONS(826),
    [anon_sym_parameter_meta] = ACTIONS(826),
    [sym_object_type] = ACTIONS(826),
    [anon_sym_scatter] = ACTIONS(826),
    [anon_sym_while] = ACTIONS(826),
    [anon_sym_command] = ACTIONS(826),
    [anon_sym_runtime] = ACTIONS(826),
    [anon_sym_Float] = ACTIONS(826),
    [anon_sym_Array] = ACTIONS(826),
    [anon_sym_output] = ACTIONS(826),
    [anon_sym_Int] = ACTIONS(826),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_call] = ACTIONS(826),
    [anon_sym_String] = ACTIONS(826),
    [anon_sym_meta] = ACTIONS(826),
    [anon_sym_Boolean] = ACTIONS(826),
  },
  [373] = {
    [sym_identifier] = STATE(323),
    [sym_meta_kv] = STATE(373),
    [aux_sym_meta_repeat1] = STATE(373),
    [aux_sym_identifier_token1] = ACTIONS(828),
    [anon_sym_RBRACE] = ACTIONS(831),
  },
  [374] = {
    [sym_string_literal] = STATE(414),
    [anon_sym_DQUOTE] = ACTIONS(19),
  },
  [375] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(415),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [376] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(77),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [377] = {
    [anon_sym_if] = ACTIONS(833),
    [anon_sym_File] = ACTIONS(833),
    [anon_sym_Map] = ACTIONS(833),
    [anon_sym_parameter_meta] = ACTIONS(833),
    [anon_sym_DOT] = ACTIONS(835),
    [sym_object_type] = ACTIONS(833),
    [anon_sym_BANG_EQ] = ACTIONS(837),
    [anon_sym_scatter] = ACTIONS(833),
    [anon_sym_while] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(839),
    [anon_sym_STAR] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_Float] = ACTIONS(833),
    [anon_sym_Array] = ACTIONS(833),
    [anon_sym_EQ_EQ] = ACTIONS(837),
    [anon_sym_Int] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_call] = ACTIONS(833),
    [anon_sym_PERCENT] = ACTIONS(841),
    [anon_sym_String] = ACTIONS(833),
    [anon_sym_meta] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_Boolean] = ACTIONS(833),
    [anon_sym_DASH] = ACTIONS(839),
    [anon_sym_SLASH] = ACTIONS(841),
  },
  [378] = {
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_parameter_meta] = ACTIONS(799),
    [anon_sym_runtime] = ACTIONS(799),
    [aux_sym_identifier_token1] = ACTIONS(799),
    [anon_sym_output] = ACTIONS(799),
    [anon_sym_command] = ACTIONS(799),
    [anon_sym_meta] = ACTIONS(799),
  },
  [379] = {
    [sym_parameter_meta_kv] = STATE(325),
    [aux_sym_parameter_meta_repeat1] = STATE(379),
    [sym_identifier] = STATE(311),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_parameter_meta] = ACTIONS(799),
    [anon_sym_runtime] = ACTIONS(799),
    [aux_sym_identifier_token1] = ACTIONS(803),
    [anon_sym_output] = ACTIONS(799),
    [anon_sym_command] = ACTIONS(799),
    [anon_sym_meta] = ACTIONS(799),
  },
  [380] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_var_option] = STATE(426),
    [sym_var_option_key] = STATE(424),
    [sym_expression] = STATE(425),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [aux_sym_command_part_var_repeat1] = STATE(426),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_quote] = ACTIONS(845),
    [anon_sym_true] = ACTIONS(847),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_sep] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_float] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(849),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [381] = {
    [anon_sym_RBRACE] = ACTIONS(851),
    [anon_sym_parameter_meta] = ACTIONS(851),
    [anon_sym_runtime] = ACTIONS(851),
    [anon_sym_command] = ACTIONS(851),
    [anon_sym_output] = ACTIONS(851),
    [anon_sym_meta] = ACTIONS(851),
  },
  [382] = {
    [sym_command_part_var] = STATE(327),
    [aux_sym_command_repeat1] = STATE(382),
    [sym_command_part] = STATE(382),
    [sym_command_part_string] = ACTIONS(853),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [anon_sym_GT_GT_GT] = ACTIONS(859),
  },
  [383] = {
    [sym_command_part_var] = STATE(327),
    [aux_sym_command_repeat1] = STATE(383),
    [sym_command_part] = STATE(383),
    [sym_command_part_string] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_DOLLAR] = ACTIONS(856),
  },
  [384] = {
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_parameter_meta] = ACTIONS(487),
    [anon_sym_runtime] = ACTIONS(487),
    [anon_sym_command] = ACTIONS(487),
    [anon_sym_output] = ACTIONS(487),
    [anon_sym_meta] = ACTIONS(487),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_parameter_meta] = ACTIONS(861),
    [anon_sym_runtime] = ACTIONS(861),
    [anon_sym_command] = ACTIONS(861),
    [anon_sym_output] = ACTIONS(861),
    [anon_sym_meta] = ACTIONS(861),
  },
  [386] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_task_output_kv] = STATE(386),
    [sym_map_type] = STATE(7),
    [aux_sym_task_output_repeat1] = STATE(386),
    [sym_type] = STATE(335),
    [anon_sym_File] = ACTIONS(863),
    [anon_sym_RBRACE] = ACTIONS(866),
    [anon_sym_Map] = ACTIONS(868),
    [sym_object_type] = ACTIONS(871),
    [anon_sym_String] = ACTIONS(863),
    [anon_sym_Boolean] = ACTIONS(863),
    [anon_sym_Float] = ACTIONS(863),
    [anon_sym_Array] = ACTIONS(874),
    [anon_sym_Int] = ACTIONS(863),
  },
  [387] = {
    [anon_sym_EQ] = ACTIONS(877),
  },
  [388] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(428),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [389] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(77),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [390] = {
    [anon_sym_File] = ACTIONS(833),
    [anon_sym_Map] = ACTIONS(833),
    [anon_sym_parameter_meta] = ACTIONS(833),
    [anon_sym_DOT] = ACTIONS(879),
    [sym_object_type] = ACTIONS(833),
    [anon_sym_BANG_EQ] = ACTIONS(881),
    [anon_sym_PLUS] = ACTIONS(883),
    [anon_sym_STAR] = ACTIONS(885),
    [anon_sym_command] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_runtime] = ACTIONS(833),
    [anon_sym_Array] = ACTIONS(833),
    [anon_sym_Float] = ACTIONS(833),
    [anon_sym_output] = ACTIONS(833),
    [anon_sym_Int] = ACTIONS(833),
    [anon_sym_EQ_EQ] = ACTIONS(881),
    [anon_sym_PERCENT] = ACTIONS(885),
    [anon_sym_String] = ACTIONS(833),
    [anon_sym_meta] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_Boolean] = ACTIONS(833),
    [anon_sym_DASH] = ACTIONS(883),
    [anon_sym_SLASH] = ACTIONS(885),
  },
  [391] = {
    [anon_sym_if] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(887),
    [anon_sym_true] = ACTIONS(887),
    [aux_sym_identifier_token1] = ACTIONS(887),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym_float] = ACTIONS(887),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(887),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_integer] = ACTIONS(887),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(719),
  },
  [392] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(719),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(253),
  },
  [393] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(889),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [394] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(434),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [395] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(435),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [396] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(436),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [397] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(891),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [398] = {
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(893),
  },
  [399] = {
    [aux_sym_variable_mappings_repeat1] = STATE(399),
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(895),
  },
  [400] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(438),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [401] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [402] = {
    [anon_sym_RBRACE] = ACTIONS(898),
    [anon_sym_DOT] = ACTIONS(900),
    [anon_sym_PERCENT] = ACTIONS(902),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(898),
    [anon_sym_EQ_EQ] = ACTIONS(904),
  },
  [403] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(444),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(444),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(908),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [404] = {
    [anon_sym_RBRACE] = ACTIONS(910),
  },
  [405] = {
    [anon_sym_if] = ACTIONS(912),
    [anon_sym_File] = ACTIONS(912),
    [anon_sym_Map] = ACTIONS(912),
    [anon_sym_parameter_meta] = ACTIONS(912),
    [sym_object_type] = ACTIONS(912),
    [anon_sym_scatter] = ACTIONS(912),
    [anon_sym_while] = ACTIONS(912),
    [anon_sym_Float] = ACTIONS(912),
    [anon_sym_Array] = ACTIONS(912),
    [anon_sym_Int] = ACTIONS(912),
    [anon_sym_RBRACE] = ACTIONS(912),
    [anon_sym_call] = ACTIONS(912),
    [anon_sym_String] = ACTIONS(912),
    [anon_sym_meta] = ACTIONS(912),
    [anon_sym_Boolean] = ACTIONS(912),
  },
  [406] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(259),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(259),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(914),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [407] = {
    [anon_sym_if] = ACTIONS(916),
    [anon_sym_File] = ACTIONS(916),
    [anon_sym_Map] = ACTIONS(916),
    [anon_sym_parameter_meta] = ACTIONS(916),
    [sym_object_type] = ACTIONS(916),
    [anon_sym_scatter] = ACTIONS(916),
    [anon_sym_while] = ACTIONS(916),
    [anon_sym_Float] = ACTIONS(916),
    [anon_sym_Array] = ACTIONS(916),
    [anon_sym_Int] = ACTIONS(916),
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_call] = ACTIONS(916),
    [anon_sym_String] = ACTIONS(916),
    [anon_sym_meta] = ACTIONS(916),
    [anon_sym_Boolean] = ACTIONS(916),
  },
  [408] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(446),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [409] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [410] = {
    [anon_sym_DOT] = ACTIONS(918),
    [anon_sym_RPAREN] = ACTIONS(920),
    [aux_sym_identifier_token1] = ACTIONS(920),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_BANG_EQ] = ACTIONS(924),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(926),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(926),
    [anon_sym_SLASH] = ACTIONS(922),
    [anon_sym_EQ_EQ] = ACTIONS(924),
  },
  [411] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(452),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(452),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [412] = {
    [anon_sym_if] = ACTIONS(601),
    [anon_sym_File] = ACTIONS(601),
    [anon_sym_Map] = ACTIONS(601),
    [anon_sym_parameter_meta] = ACTIONS(601),
    [sym_object_type] = ACTIONS(601),
    [anon_sym_scatter] = ACTIONS(601),
    [anon_sym_while] = ACTIONS(601),
    [anon_sym_Float] = ACTIONS(601),
    [anon_sym_Array] = ACTIONS(601),
    [anon_sym_Int] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_call] = ACTIONS(601),
    [anon_sym_String] = ACTIONS(601),
    [anon_sym_meta] = ACTIONS(601),
    [anon_sym_Boolean] = ACTIONS(601),
  },
  [413] = {
    [anon_sym_if] = ACTIONS(603),
    [anon_sym_File] = ACTIONS(603),
    [anon_sym_Map] = ACTIONS(603),
    [anon_sym_parameter_meta] = ACTIONS(603),
    [sym_object_type] = ACTIONS(603),
    [anon_sym_scatter] = ACTIONS(603),
    [anon_sym_while] = ACTIONS(603),
    [anon_sym_Float] = ACTIONS(603),
    [anon_sym_Array] = ACTIONS(603),
    [anon_sym_Int] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_call] = ACTIONS(603),
    [anon_sym_String] = ACTIONS(603),
    [anon_sym_meta] = ACTIONS(603),
    [anon_sym_Boolean] = ACTIONS(603),
  },
  [414] = {
    [aux_sym_identifier_token1] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(930),
  },
  [415] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(932),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [416] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(454),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [417] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(157),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [418] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(455),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [419] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(456),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [420] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(457),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(934),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
  },
  [422] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(37),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(849),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [423] = {
    [anon_sym_EQ] = ACTIONS(936),
  },
  [424] = {
    [anon_sym_EQ] = ACTIONS(938),
  },
  [425] = {
    [anon_sym_RBRACE] = ACTIONS(940),
    [anon_sym_DOT] = ACTIONS(942),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_BANG_EQ] = ACTIONS(946),
    [anon_sym_PLUS] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_EQ_EQ] = ACTIONS(946),
  },
  [426] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_var_option] = STATE(465),
    [sym_var_option_key] = STATE(424),
    [sym_expression] = STATE(464),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [aux_sym_command_part_var_repeat1] = STATE(465),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_quote] = ACTIONS(845),
    [anon_sym_true] = ACTIONS(847),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_sep] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_float] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(849),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [427] = {
    [sym_string_literal] = STATE(466),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [428] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(950),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [429] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(468),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [430] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(157),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [431] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(469),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [432] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(470),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [433] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [sym_expression] = STATE(471),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(443),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [434] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(453),
  },
  [435] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [436] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(719),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [437] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(472),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(496),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [438] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [439] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(474),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [440] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [441] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(475),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [442] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(476),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [443] = {
    [anon_sym_if] = ACTIONS(954),
    [anon_sym_File] = ACTIONS(954),
    [anon_sym_Map] = ACTIONS(954),
    [anon_sym_parameter_meta] = ACTIONS(954),
    [sym_object_type] = ACTIONS(954),
    [anon_sym_scatter] = ACTIONS(954),
    [anon_sym_while] = ACTIONS(954),
    [anon_sym_Float] = ACTIONS(954),
    [anon_sym_Array] = ACTIONS(954),
    [anon_sym_Int] = ACTIONS(954),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_call] = ACTIONS(954),
    [anon_sym_String] = ACTIONS(954),
    [anon_sym_meta] = ACTIONS(954),
    [anon_sym_Boolean] = ACTIONS(954),
  },
  [444] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(259),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(259),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(956),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [445] = {
    [anon_sym_if] = ACTIONS(958),
    [anon_sym_File] = ACTIONS(958),
    [anon_sym_Map] = ACTIONS(958),
    [anon_sym_parameter_meta] = ACTIONS(958),
    [sym_object_type] = ACTIONS(958),
    [anon_sym_scatter] = ACTIONS(958),
    [anon_sym_while] = ACTIONS(958),
    [anon_sym_Float] = ACTIONS(958),
    [anon_sym_Array] = ACTIONS(958),
    [anon_sym_Int] = ACTIONS(958),
    [anon_sym_RBRACE] = ACTIONS(958),
    [anon_sym_call] = ACTIONS(958),
    [anon_sym_String] = ACTIONS(958),
    [anon_sym_meta] = ACTIONS(958),
    [anon_sym_Boolean] = ACTIONS(958),
  },
  [446] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(960),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [447] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(479),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [448] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [449] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(480),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [450] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(481),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [451] = {
    [anon_sym_if] = ACTIONS(962),
    [anon_sym_File] = ACTIONS(962),
    [anon_sym_Map] = ACTIONS(962),
    [anon_sym_parameter_meta] = ACTIONS(962),
    [sym_object_type] = ACTIONS(962),
    [anon_sym_scatter] = ACTIONS(962),
    [anon_sym_while] = ACTIONS(962),
    [anon_sym_Float] = ACTIONS(962),
    [anon_sym_Array] = ACTIONS(962),
    [anon_sym_Int] = ACTIONS(962),
    [anon_sym_RBRACE] = ACTIONS(962),
    [anon_sym_call] = ACTIONS(962),
    [anon_sym_String] = ACTIONS(962),
    [anon_sym_meta] = ACTIONS(962),
    [anon_sym_Boolean] = ACTIONS(962),
  },
  [452] = {
    [sym_array_type] = STATE(7),
    [sym_primitive_type] = STATE(7),
    [sym_scatter] = STATE(188),
    [sym_conditional] = STATE(188),
    [sym_type] = STATE(190),
    [sym_map_type] = STATE(7),
    [aux_sym_loop_repeat1] = STATE(259),
    [sym_parameter_meta] = STATE(188),
    [sym_declaration] = STATE(188),
    [sym_call] = STATE(188),
    [sym_meta] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_workflow_element] = STATE(259),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_File] = ACTIONS(163),
    [anon_sym_Map] = ACTIONS(329),
    [anon_sym_parameter_meta] = ACTIONS(331),
    [sym_object_type] = ACTIONS(333),
    [anon_sym_scatter] = ACTIONS(335),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_Array] = ACTIONS(189),
    [anon_sym_Float] = ACTIONS(163),
    [anon_sym_Int] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(964),
    [anon_sym_String] = ACTIONS(163),
    [anon_sym_meta] = ACTIONS(343),
    [anon_sym_Boolean] = ACTIONS(163),
  },
  [453] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(483),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [454] = {
    [anon_sym_if] = ACTIONS(445),
    [anon_sym_File] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(837),
    [anon_sym_Map] = ACTIONS(445),
    [sym_object_type] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(839),
    [anon_sym_parameter_meta] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(445),
    [anon_sym_scatter] = ACTIONS(445),
    [anon_sym_Float] = ACTIONS(445),
    [anon_sym_Array] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(837),
    [anon_sym_Int] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(841),
    [anon_sym_call] = ACTIONS(445),
    [anon_sym_String] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(445),
    [anon_sym_Boolean] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(839),
    [anon_sym_SLASH] = ACTIONS(841),
  },
  [455] = {
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_File] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_Map] = ACTIONS(449),
    [sym_object_type] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(839),
    [anon_sym_parameter_meta] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_while] = ACTIONS(449),
    [anon_sym_scatter] = ACTIONS(449),
    [anon_sym_Float] = ACTIONS(449),
    [anon_sym_Array] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_Int] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(841),
    [anon_sym_call] = ACTIONS(449),
    [anon_sym_String] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_meta] = ACTIONS(449),
    [anon_sym_Boolean] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(839),
    [anon_sym_SLASH] = ACTIONS(841),
  },
  [456] = {
    [anon_sym_if] = ACTIONS(447),
    [anon_sym_File] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_Map] = ACTIONS(447),
    [sym_object_type] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_parameter_meta] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_while] = ACTIONS(447),
    [anon_sym_scatter] = ACTIONS(447),
    [anon_sym_Float] = ACTIONS(447),
    [anon_sym_Array] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_Int] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(841),
    [anon_sym_call] = ACTIONS(447),
    [anon_sym_String] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_meta] = ACTIONS(447),
    [anon_sym_Boolean] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(841),
  },
  [457] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(966),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [458] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(494),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [sym_var_option_value] = STATE(495),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [459] = {
    [sym_command_part_string] = ACTIONS(986),
    [anon_sym_RBRACE] = ACTIONS(986),
    [anon_sym_GT_GT_GT] = ACTIONS(986),
    [anon_sym_DOLLAR] = ACTIONS(986),
  },
  [460] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(496),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(849),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [461] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(141),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(849),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [462] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(497),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(849),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [463] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(498),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(849),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [464] = {
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_DOT] = ACTIONS(942),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_BANG_EQ] = ACTIONS(946),
    [anon_sym_PLUS] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_EQ_EQ] = ACTIONS(946),
  },
  [465] = {
    [sym_var_option] = STATE(465),
    [sym_var_option_key] = STATE(424),
    [aux_sym_command_part_var_repeat1] = STATE(465),
    [anon_sym_if] = ACTIONS(990),
    [anon_sym_LBRACE] = ACTIONS(992),
    [anon_sym_true] = ACTIONS(994),
    [aux_sym_identifier_token1] = ACTIONS(990),
    [anon_sym_PLUS] = ACTIONS(992),
    [anon_sym_LPAREN] = ACTIONS(992),
    [anon_sym_sep] = ACTIONS(994),
    [anon_sym_DQUOTE] = ACTIONS(992),
    [sym_float] = ACTIONS(990),
    [anon_sym_false] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(992),
    [sym_integer] = ACTIONS(990),
    [anon_sym_DASH] = ACTIONS(992),
    [anon_sym_default] = ACTIONS(994),
    [anon_sym_quote] = ACTIONS(994),
  },
  [466] = {
    [anon_sym_File] = ACTIONS(997),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_Map] = ACTIONS(997),
    [sym_object_type] = ACTIONS(997),
    [anon_sym_String] = ACTIONS(997),
    [anon_sym_Boolean] = ACTIONS(997),
    [anon_sym_Float] = ACTIONS(997),
    [anon_sym_Array] = ACTIONS(997),
    [anon_sym_Int] = ACTIONS(997),
  },
  [467] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(500),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [468] = {
    [anon_sym_File] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(881),
    [anon_sym_Map] = ACTIONS(445),
    [sym_object_type] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(883),
    [anon_sym_parameter_meta] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_command] = ACTIONS(445),
    [anon_sym_runtime] = ACTIONS(445),
    [anon_sym_Float] = ACTIONS(445),
    [anon_sym_Array] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(881),
    [anon_sym_Int] = ACTIONS(445),
    [anon_sym_output] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(885),
    [anon_sym_String] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(445),
    [anon_sym_Boolean] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(883),
    [anon_sym_SLASH] = ACTIONS(885),
  },
  [469] = {
    [anon_sym_File] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_Map] = ACTIONS(449),
    [sym_object_type] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(883),
    [anon_sym_parameter_meta] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_command] = ACTIONS(449),
    [anon_sym_runtime] = ACTIONS(449),
    [anon_sym_Float] = ACTIONS(449),
    [anon_sym_Array] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_Int] = ACTIONS(449),
    [anon_sym_output] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(885),
    [anon_sym_String] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_meta] = ACTIONS(449),
    [anon_sym_Boolean] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(883),
    [anon_sym_SLASH] = ACTIONS(885),
  },
  [470] = {
    [anon_sym_File] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_Map] = ACTIONS(447),
    [sym_object_type] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_parameter_meta] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_command] = ACTIONS(447),
    [anon_sym_runtime] = ACTIONS(447),
    [anon_sym_Float] = ACTIONS(447),
    [anon_sym_Array] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_Int] = ACTIONS(447),
    [anon_sym_output] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(885),
    [anon_sym_String] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_meta] = ACTIONS(447),
    [anon_sym_Boolean] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(885),
  },
  [471] = {
    [anon_sym_if] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(887),
    [anon_sym_true] = ACTIONS(887),
    [aux_sym_identifier_token1] = ACTIONS(887),
    [anon_sym_BANG_EQ] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym_float] = ACTIONS(887),
    [anon_sym_EQ_EQ] = ACTIONS(565),
    [anon_sym_false] = ACTIONS(887),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_integer] = ACTIONS(887),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(719),
  },
  [472] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_identifier_token1] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(597),
  },
  [473] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(501),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [474] = {
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(902),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(904),
  },
  [475] = {
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(902),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [476] = {
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(902),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [477] = {
    [anon_sym_if] = ACTIONS(999),
    [anon_sym_File] = ACTIONS(999),
    [anon_sym_Map] = ACTIONS(999),
    [anon_sym_parameter_meta] = ACTIONS(999),
    [sym_object_type] = ACTIONS(999),
    [anon_sym_scatter] = ACTIONS(999),
    [anon_sym_while] = ACTIONS(999),
    [anon_sym_Float] = ACTIONS(999),
    [anon_sym_Array] = ACTIONS(999),
    [anon_sym_Int] = ACTIONS(999),
    [anon_sym_RBRACE] = ACTIONS(999),
    [anon_sym_call] = ACTIONS(999),
    [anon_sym_String] = ACTIONS(999),
    [anon_sym_meta] = ACTIONS(999),
    [anon_sym_Boolean] = ACTIONS(999),
  },
  [478] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(502),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [479] = {
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [aux_sym_identifier_token1] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_PLUS] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(926),
    [anon_sym_SLASH] = ACTIONS(922),
    [anon_sym_EQ_EQ] = ACTIONS(924),
  },
  [480] = {
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [aux_sym_identifier_token1] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_PLUS] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(926),
    [anon_sym_SLASH] = ACTIONS(922),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [481] = {
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [aux_sym_identifier_token1] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(922),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [482] = {
    [anon_sym_if] = ACTIONS(1001),
    [anon_sym_File] = ACTIONS(1001),
    [anon_sym_Map] = ACTIONS(1001),
    [anon_sym_parameter_meta] = ACTIONS(1001),
    [sym_object_type] = ACTIONS(1001),
    [anon_sym_scatter] = ACTIONS(1001),
    [anon_sym_while] = ACTIONS(1001),
    [anon_sym_Float] = ACTIONS(1001),
    [anon_sym_Array] = ACTIONS(1001),
    [anon_sym_Int] = ACTIONS(1001),
    [anon_sym_RBRACE] = ACTIONS(1001),
    [anon_sym_call] = ACTIONS(1001),
    [anon_sym_String] = ACTIONS(1001),
    [anon_sym_meta] = ACTIONS(1001),
    [anon_sym_Boolean] = ACTIONS(1001),
  },
  [483] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1003),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [484] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(504),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [485] = {
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_quote] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [aux_sym_identifier_token1] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_sep] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_float] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [sym_integer] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [486] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(505),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
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
  [487] = {
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_quote] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_sep] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_default] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
  },
  [488] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(506),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [489] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(508),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(1005),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [490] = {
    [anon_sym_if] = ACTIONS(213),
    [anon_sym_quote] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(213),
    [aux_sym_identifier_token1] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_sep] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_float] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_integer] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_default] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
  },
  [491] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(509),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [492] = {
    [aux_sym_string_literal_repeat1] = STATE(511),
    [aux_sym_string_literal_token1] = ACTIONS(1007),
    [sym_escape_sequence] = ACTIONS(1007),
    [anon_sym_DQUOTE] = ACTIONS(1009),
  },
  [493] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(513),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [494] = {
    [anon_sym_if] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1015),
    [anon_sym_DOT] = ACTIONS(1017),
    [anon_sym_true] = ACTIONS(1013),
    [aux_sym_identifier_token1] = ACTIONS(1013),
    [anon_sym_BANG_EQ] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_LPAREN] = ACTIONS(1025),
    [anon_sym_sep] = ACTIONS(1013),
    [anon_sym_DQUOTE] = ACTIONS(1015),
    [sym_float] = ACTIONS(1013),
    [anon_sym_EQ_EQ] = ACTIONS(1019),
    [anon_sym_false] = ACTIONS(1013),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_integer] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_default] = ACTIONS(1013),
    [anon_sym_SLASH] = ACTIONS(1023),
    [anon_sym_quote] = ACTIONS(1013),
  },
  [495] = {
    [anon_sym_if] = ACTIONS(1029),
    [anon_sym_LBRACE] = ACTIONS(1031),
    [anon_sym_true] = ACTIONS(1029),
    [aux_sym_identifier_token1] = ACTIONS(1029),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_sep] = ACTIONS(1029),
    [anon_sym_DQUOTE] = ACTIONS(1031),
    [sym_float] = ACTIONS(1029),
    [anon_sym_false] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1031),
    [sym_integer] = ACTIONS(1029),
    [anon_sym_DASH] = ACTIONS(1031),
    [anon_sym_default] = ACTIONS(1029),
    [anon_sym_quote] = ACTIONS(1029),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_BANG_EQ] = ACTIONS(946),
    [anon_sym_PLUS] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_EQ_EQ] = ACTIONS(946),
  },
  [497] = {
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_EQ_EQ] = ACTIONS(449),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_EQ_EQ] = ACTIONS(447),
  },
  [499] = {
    [sym_command_part_string] = ACTIONS(1033),
    [anon_sym_RBRACE] = ACTIONS(1033),
    [anon_sym_GT_GT_GT] = ACTIONS(1033),
    [anon_sym_DOLLAR] = ACTIONS(1033),
  },
  [500] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [501] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1037),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [502] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1039),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [503] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(523),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(761),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [504] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1041),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [505] = {
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_then] = ACTIONS(1043),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
  },
  [506] = {
    [anon_sym_if] = ACTIONS(355),
    [anon_sym_quote] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(355),
    [aux_sym_identifier_token1] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_sep] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_float] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_integer] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
  },
  [507] = {
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_quote] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(357),
    [anon_sym_true] = ACTIONS(357),
    [aux_sym_identifier_token1] = ACTIONS(357),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_sep] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [sym_float] = ACTIONS(357),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym_integer] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_default] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
  },
  [508] = {
    [sym_string_literal] = STATE(56),
    [sym_math_expression] = STATE(56),
    [aux_sym_bracket_expression_repeat1] = STATE(128),
    [sym_parentheses_expression] = STATE(56),
    [sym_equality_expression] = STATE(56),
    [sym_expression] = STATE(60),
    [sym_identifier] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_dictionary_expression] = STATE(56),
    [sym_bracket_expression] = STATE(56),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(1045),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(97),
    [sym_float] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(107),
  },
  [509] = {
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(1047),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
  },
  [510] = {
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(363),
    [aux_sym_identifier_token1] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_sep] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_float] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_integer] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
  },
  [511] = {
    [aux_sym_string_literal_repeat1] = STATE(100),
    [aux_sym_string_literal_token1] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(1049),
  },
  [512] = {
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_quote] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [aux_sym_identifier_token1] = ACTIONS(367),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_sep] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_float] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [sym_integer] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_default] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
  },
  [513] = {
    [aux_sym_dictionary_expression_repeat1] = STATE(134),
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(68),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(1051),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(115),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [514] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(530),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [515] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(531),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [516] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(532),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [517] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(533),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [518] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(534),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(274),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [519] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(536),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(1053),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [520] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(537),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(781),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [521] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(538),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(795),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [522] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(539),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(817),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [523] = {
    [anon_sym_if] = ACTIONS(719),
    [anon_sym_File] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(837),
    [anon_sym_Map] = ACTIONS(719),
    [sym_object_type] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(839),
    [anon_sym_parameter_meta] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(719),
    [anon_sym_scatter] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(837),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(841),
    [anon_sym_call] = ACTIONS(719),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(719),
    [anon_sym_Boolean] = ACTIONS(719),
    [anon_sym_DASH] = ACTIONS(839),
    [anon_sym_SLASH] = ACTIONS(841),
  },
  [524] = {
    [sym_string_literal] = STATE(12),
    [sym_math_expression] = STATE(12),
    [sym_expression] = STATE(540),
    [sym_parentheses_expression] = STATE(12),
    [sym_equality_expression] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_dictionary_expression] = STATE(12),
    [sym_bracket_expression] = STATE(12),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(849),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [525] = {
    [sym_string_literal] = STATE(29),
    [sym_math_expression] = STATE(29),
    [sym_expression] = STATE(541),
    [sym_parentheses_expression] = STATE(29),
    [sym_equality_expression] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_dictionary_expression] = STATE(29),
    [sym_bracket_expression] = STATE(29),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(294),
    [sym_float] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
  },
  [526] = {
    [anon_sym_if] = ACTIONS(543),
    [anon_sym_quote] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_true] = ACTIONS(543),
    [aux_sym_identifier_token1] = ACTIONS(543),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_sep] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym_float] = ACTIONS(543),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [sym_integer] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_default] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
  },
  [527] = {
    [anon_sym_if] = ACTIONS(545),
    [anon_sym_quote] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(545),
    [aux_sym_identifier_token1] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_sep] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [sym_float] = ACTIONS(545),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [sym_integer] = ACTIONS(545),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_default] = ACTIONS(545),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [528] = {
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_quote] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(547),
    [aux_sym_identifier_token1] = ACTIONS(547),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_sep] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [sym_float] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym_integer] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(547),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
  },
  [529] = {
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_quote] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_true] = ACTIONS(549),
    [aux_sym_identifier_token1] = ACTIONS(549),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(410),
    [anon_sym_sep] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym_float] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(410),
    [sym_integer] = ACTIONS(549),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_default] = ACTIONS(549),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(410),
  },
  [530] = {
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_quote] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_BANG_EQ] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_LPAREN] = ACTIONS(1025),
    [anon_sym_sep] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_float] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(1019),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_integer] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_SLASH] = ACTIONS(1023),
    [anon_sym_LBRACE] = ACTIONS(445),
  },
  [531] = {
    [anon_sym_if] = ACTIONS(553),
    [anon_sym_quote] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(553),
    [aux_sym_identifier_token1] = ACTIONS(553),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_sep] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [sym_float] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym_integer] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_default] = ACTIONS(553),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
  },
  [532] = {
    [anon_sym_if] = ACTIONS(555),
    [anon_sym_quote] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_true] = ACTIONS(555),
    [aux_sym_identifier_token1] = ACTIONS(555),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_sep] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_float] = ACTIONS(555),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(555),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_integer] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_default] = ACTIONS(555),
    [anon_sym_SLASH] = ACTIONS(1023),
    [anon_sym_LBRACE] = ACTIONS(449),
  },
  [533] = {
    [anon_sym_if] = ACTIONS(553),
    [anon_sym_quote] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(553),
    [aux_sym_identifier_token1] = ACTIONS(553),
    [anon_sym_BANG_EQ] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_LPAREN] = ACTIONS(447),
    [anon_sym_sep] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [sym_float] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym_integer] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_default] = ACTIONS(553),
    [anon_sym_SLASH] = ACTIONS(1023),
    [anon_sym_LBRACE] = ACTIONS(447),
  },
  [534] = {
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(1055),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(453),
  },
  [535] = {
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_quote] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(551),
    [aux_sym_identifier_token1] = ACTIONS(551),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_sep] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_float] = ACTIONS(551),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [sym_integer] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
  },
  [536] = {
    [aux_sym_expression_repeat1] = STATE(543),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(463),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(1055),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(463),
  },
  [537] = {
    [anon_sym_File] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(881),
    [anon_sym_Map] = ACTIONS(719),
    [sym_object_type] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(883),
    [anon_sym_parameter_meta] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_command] = ACTIONS(719),
    [anon_sym_runtime] = ACTIONS(719),
    [anon_sym_Float] = ACTIONS(719),
    [anon_sym_Array] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(881),
    [anon_sym_Int] = ACTIONS(719),
    [anon_sym_output] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(885),
    [anon_sym_String] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_meta] = ACTIONS(719),
    [anon_sym_Boolean] = ACTIONS(719),
    [anon_sym_DASH] = ACTIONS(883),
    [anon_sym_SLASH] = ACTIONS(885),
  },
  [538] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(902),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(904),
  },
  [539] = {
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [aux_sym_identifier_token1] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_PLUS] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(924),
    [anon_sym_DASH] = ACTIONS(926),
    [anon_sym_SLASH] = ACTIONS(922),
    [anon_sym_EQ_EQ] = ACTIONS(924),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_BANG_EQ] = ACTIONS(946),
    [anon_sym_PLUS] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_EQ_EQ] = ACTIONS(946),
  },
  [541] = {
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(1057),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_EQ_EQ] = ACTIONS(473),
  },
  [542] = {
    [anon_sym_if] = ACTIONS(704),
    [anon_sym_quote] = ACTIONS(704),
    [anon_sym_DOT] = ACTIONS(704),
    [anon_sym_true] = ACTIONS(704),
    [aux_sym_identifier_token1] = ACTIONS(704),
    [anon_sym_BANG_EQ] = ACTIONS(575),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(575),
    [anon_sym_sep] = ACTIONS(704),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_float] = ACTIONS(704),
    [anon_sym_EQ_EQ] = ACTIONS(575),
    [anon_sym_false] = ACTIONS(704),
    [anon_sym_PERCENT] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [sym_integer] = ACTIONS(704),
    [anon_sym_DASH] = ACTIONS(575),
    [anon_sym_default] = ACTIONS(704),
    [anon_sym_SLASH] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(575),
  },
  [543] = {
    [aux_sym_expression_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(1059),
  },
  [544] = {
    [sym_string_literal] = STATE(490),
    [sym_math_expression] = STATE(490),
    [sym_expression] = STATE(546),
    [sym_parentheses_expression] = STATE(490),
    [sym_equality_expression] = STATE(490),
    [sym_identifier] = STATE(490),
    [sym_boolean] = STATE(490),
    [sym_dictionary_expression] = STATE(490),
    [sym_bracket_expression] = STATE(490),
    [anon_sym_false] = ACTIONS(968),
    [anon_sym_if] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(968),
    [aux_sym_identifier_token1] = ACTIONS(972),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_integer] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(974),
    [sym_float] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(984),
  },
  [545] = {
    [anon_sym_if] = ACTIONS(783),
    [anon_sym_quote] = ACTIONS(783),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_true] = ACTIONS(783),
    [aux_sym_identifier_token1] = ACTIONS(783),
    [anon_sym_BANG_EQ] = ACTIONS(714),
    [anon_sym_PLUS] = ACTIONS(714),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_LPAREN] = ACTIONS(714),
    [anon_sym_sep] = ACTIONS(783),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [sym_float] = ACTIONS(783),
    [anon_sym_EQ_EQ] = ACTIONS(714),
    [anon_sym_false] = ACTIONS(783),
    [anon_sym_PERCENT] = ACTIONS(714),
    [anon_sym_LBRACK] = ACTIONS(714),
    [sym_integer] = ACTIONS(783),
    [anon_sym_DASH] = ACTIONS(714),
    [anon_sym_default] = ACTIONS(783),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_LBRACE] = ACTIONS(714),
  },
  [546] = {
    [anon_sym_if] = ACTIONS(887),
    [anon_sym_quote] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(887),
    [anon_sym_true] = ACTIONS(887),
    [aux_sym_identifier_token1] = ACTIONS(887),
    [anon_sym_BANG_EQ] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_STAR] = ACTIONS(1023),
    [anon_sym_LPAREN] = ACTIONS(1025),
    [anon_sym_sep] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym_float] = ACTIONS(887),
    [anon_sym_EQ_EQ] = ACTIONS(1019),
    [anon_sym_false] = ACTIONS(887),
    [anon_sym_PERCENT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_integer] = ACTIONS(887),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_default] = ACTIONS(887),
    [anon_sym_SLASH] = ACTIONS(1023),
    [anon_sym_LBRACE] = ACTIONS(719),
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
  [27] = {.count = 1, .reusable = false}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(24),
  [41] = {.count = 1, .reusable = false}, SHIFT(25),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(27),
  [47] = {.count = 1, .reusable = true}, SHIFT(28),
  [49] = {.count = 1, .reusable = false}, SHIFT(29),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, SHIFT(32),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(34),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(35),
  [71] = {.count = 1, .reusable = false}, SHIFT(38),
  [73] = {.count = 1, .reusable = true}, SHIFT(39),
  [75] = {.count = 1, .reusable = true}, SHIFT(42),
  [77] = {.count = 1, .reusable = false}, SHIFT(41),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, SHIFT(6),
  [89] = {.count = 1, .reusable = false}, SHIFT(50),
  [91] = {.count = 1, .reusable = false}, SHIFT(51),
  [93] = {.count = 1, .reusable = false}, SHIFT(52),
  [95] = {.count = 1, .reusable = true}, SHIFT(53),
  [97] = {.count = 1, .reusable = true}, SHIFT(54),
  [99] = {.count = 1, .reusable = true}, SHIFT(55),
  [101] = {.count = 1, .reusable = false}, SHIFT(56),
  [103] = {.count = 1, .reusable = true}, SHIFT(57),
  [105] = {.count = 1, .reusable = true}, SHIFT(58),
  [107] = {.count = 1, .reusable = true}, SHIFT(59),
  [109] = {.count = 1, .reusable = true}, SHIFT(62),
  [111] = {.count = 1, .reusable = false}, SHIFT(64),
  [113] = {.count = 1, .reusable = true}, SHIFT(65),
  [115] = {.count = 1, .reusable = true}, SHIFT(66),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(15),
  [123] = {.count = 1, .reusable = true}, SHIFT(16),
  [125] = {.count = 1, .reusable = true}, SHIFT(18),
  [127] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [129] = {.count = 1, .reusable = true}, SHIFT(71),
  [131] = {.count = 1, .reusable = true}, SHIFT(70),
  [133] = {.count = 1, .reusable = true}, SHIFT(72),
  [135] = {.count = 1, .reusable = true}, SHIFT(73),
  [137] = {.count = 1, .reusable = true}, SHIFT(74),
  [139] = {.count = 1, .reusable = true}, SHIFT(75),
  [141] = {.count = 1, .reusable = true}, SHIFT(78),
  [143] = {.count = 1, .reusable = true}, SHIFT(82),
  [145] = {.count = 1, .reusable = false}, SHIFT(81),
  [147] = {.count = 1, .reusable = true}, SHIFT(83),
  [149] = {.count = 1, .reusable = true}, SHIFT(85),
  [151] = {.count = 1, .reusable = true}, SHIFT(87),
  [153] = {.count = 1, .reusable = true}, SHIFT(86),
  [155] = {.count = 1, .reusable = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = true}, SHIFT(90),
  [161] = {.count = 1, .reusable = true}, SHIFT(91),
  [163] = {.count = 1, .reusable = true}, SHIFT(3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_type_postfix_quantifier, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_math_expression, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(94),
  [173] = {.count = 1, .reusable = true}, SHIFT(96),
  [175] = {.count = 1, .reusable = true}, SHIFT(95),
  [177] = {.count = 1, .reusable = true}, SHIFT(97),
  [179] = {.count = 1, .reusable = true}, SHIFT(98),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(100),
  [185] = {.count = 1, .reusable = false}, SHIFT(99),
  [187] = {.count = 1, .reusable = true}, SHIFT(101),
  [189] = {.count = 1, .reusable = true}, SHIFT(11),
  [191] = {.count = 1, .reusable = true}, SHIFT(102),
  [193] = {.count = 1, .reusable = true}, SHIFT(106),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_call, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(105),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(108),
  [203] = {.count = 1, .reusable = true}, SHIFT(110),
  [205] = {.count = 1, .reusable = true}, SHIFT(111),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(114),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(118),
  [217] = {.count = 1, .reusable = false}, SHIFT(117),
  [219] = {.count = 1, .reusable = true}, SHIFT(119),
  [221] = {.count = 1, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 1),
  [223] = {.count = 1, .reusable = false}, SHIFT(121),
  [225] = {.count = 1, .reusable = true}, SHIFT(123),
  [227] = {.count = 1, .reusable = true}, SHIFT(124),
  [229] = {.count = 1, .reusable = true}, SHIFT(122),
  [231] = {.count = 1, .reusable = true}, SHIFT(126),
  [233] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(125),
  [237] = {.count = 1, .reusable = true}, SHIFT(127),
  [239] = {.count = 1, .reusable = true}, SHIFT(130),
  [241] = {.count = 1, .reusable = false}, SHIFT(129),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [245] = {.count = 1, .reusable = true}, SHIFT(131),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(133),
  [251] = {.count = 1, .reusable = true}, SHIFT(135),
  [253] = {.count = 1, .reusable = true}, SHIFT(137),
  [255] = {.count = 1, .reusable = true}, SHIFT(136),
  [257] = {.count = 1, .reusable = true}, SHIFT(138),
  [259] = {.count = 1, .reusable = true}, SHIFT(139),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [272] = {.count = 1, .reusable = false}, SHIFT(144),
  [274] = {.count = 1, .reusable = true}, SHIFT(145),
  [276] = {.count = 1, .reusable = false}, SHIFT(147),
  [278] = {.count = 1, .reusable = true}, SHIFT(148),
  [280] = {.count = 1, .reusable = true}, SHIFT(149),
  [282] = {.count = 1, .reusable = true}, SHIFT(151),
  [284] = {.count = 1, .reusable = true}, SHIFT(152),
  [286] = {.count = 1, .reusable = true}, SHIFT(153),
  [288] = {.count = 1, .reusable = false}, SHIFT(154),
  [290] = {.count = 1, .reusable = true}, SHIFT(155),
  [292] = {.count = 1, .reusable = false}, SHIFT(159),
  [294] = {.count = 1, .reusable = true}, SHIFT(160),
  [296] = {.count = 1, .reusable = true}, SHIFT(164),
  [298] = {.count = 1, .reusable = true}, SHIFT(166),
  [300] = {.count = 1, .reusable = true}, SHIFT(167),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_parentheses_expression, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [309] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [311] = {.count = 1, .reusable = true}, SHIFT(171),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 3),
  [315] = {.count = 1, .reusable = true}, SHIFT(172),
  [317] = {.count = 1, .reusable = true}, SHIFT(174),
  [319] = {.count = 1, .reusable = true}, SHIFT(176),
  [321] = {.count = 1, .reusable = true}, SHIFT(177),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_namespaced_identifier, 2),
  [327] = {.count = 1, .reusable = true}, SHIFT(181),
  [329] = {.count = 1, .reusable = true}, SHIFT(4),
  [331] = {.count = 1, .reusable = true}, SHIFT(182),
  [333] = {.count = 1, .reusable = true}, SHIFT(7),
  [335] = {.count = 1, .reusable = true}, SHIFT(183),
  [337] = {.count = 1, .reusable = true}, SHIFT(184),
  [339] = {.count = 1, .reusable = true}, SHIFT(185),
  [341] = {.count = 1, .reusable = true}, SHIFT(186),
  [343] = {.count = 1, .reusable = true}, SHIFT(187),
  [345] = {.count = 1, .reusable = true}, SHIFT(191),
  [347] = {.count = 1, .reusable = true}, SHIFT(192),
  [349] = {.count = 1, .reusable = true}, SHIFT(193),
  [351] = {.count = 1, .reusable = true}, SHIFT(194),
  [353] = {.count = 1, .reusable = true}, SHIFT(199),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_math_expression, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 2),
  [359] = {.count = 1, .reusable = true}, SHIFT(200),
  [361] = {.count = 1, .reusable = true}, SHIFT(201),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [365] = {.count = 1, .reusable = false}, SHIFT(202),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 2),
  [369] = {.count = 1, .reusable = true}, SHIFT(203),
  [371] = {.count = 1, .reusable = true}, SHIFT(209),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_bracket_expression, 3),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(50),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(51),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(52),
  [384] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(54),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(55),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(56),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(57),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(58),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bracket_expression_repeat1, 2), SHIFT_REPEAT(59),
  [404] = {.count = 1, .reusable = false}, SHIFT(211),
  [406] = {.count = 1, .reusable = true}, SHIFT(212),
  [408] = {.count = 1, .reusable = true}, SHIFT(214),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary_expression, 3),
  [412] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(5),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(64),
  [418] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2),
  [420] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(6),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(66),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(17),
  [429] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(12),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(9),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(10),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 2), SHIFT_REPEAT(19),
  [441] = {.count = 1, .reusable = false}, SHIFT(218),
  [443] = {.count = 1, .reusable = true}, SHIFT(219),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_math_expression, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_equality_expression, 3),
  [451] = {.count = 1, .reusable = true}, SHIFT(222),
  [453] = {.count = 1, .reusable = true}, SHIFT(224),
  [455] = {.count = 1, .reusable = true}, SHIFT(223),
  [457] = {.count = 1, .reusable = true}, SHIFT(225),
  [459] = {.count = 1, .reusable = true}, SHIFT(226),
  [461] = {.count = 1, .reusable = true}, SHIFT(228),
  [463] = {.count = 1, .reusable = true}, SHIFT(230),
  [465] = {.count = 1, .reusable = true}, SHIFT(229),
  [467] = {.count = 1, .reusable = true}, SHIFT(231),
  [469] = {.count = 1, .reusable = true}, SHIFT(232),
  [471] = {.count = 1, .reusable = true}, SHIFT(236),
  [473] = {.count = 1, .reusable = true}, SHIFT(238),
  [475] = {.count = 1, .reusable = true}, SHIFT(237),
  [477] = {.count = 1, .reusable = true}, SHIFT(239),
  [479] = {.count = 1, .reusable = true}, SHIFT(240),
  [481] = {.count = 1, .reusable = true}, SHIFT(241),
  [483] = {.count = 1, .reusable = true}, SHIFT(243),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 4),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_runtime, 4),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2), SHIFT_REPEAT(6),
  [492] = {.count = 1, .reusable = true}, REDUCE(aux_sym_runtime_repeat1, 2),
  [494] = {.count = 1, .reusable = false}, SHIFT(245),
  [496] = {.count = 1, .reusable = true}, SHIFT(246),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 2),
  [502] = {.count = 1, .reusable = true}, SHIFT(249),
  [504] = {.count = 1, .reusable = true}, SHIFT(250),
  [506] = {.count = 1, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(108),
  [511] = {.count = 1, .reusable = true}, SHIFT(251),
  [513] = {.count = 1, .reusable = true}, SHIFT(252),
  [515] = {.count = 1, .reusable = true}, SHIFT(253),
  [517] = {.count = 1, .reusable = true}, SHIFT(254),
  [519] = {.count = 1, .reusable = true}, SHIFT(26),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 4),
  [523] = {.count = 1, .reusable = true}, SHIFT(257),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_workflow_element, 1),
  [527] = {.count = 1, .reusable = true}, SHIFT(258),
  [529] = {.count = 1, .reusable = true}, SHIFT(261),
  [531] = {.count = 1, .reusable = true}, SHIFT(262),
  [533] = {.count = 1, .reusable = true}, SHIFT(263),
  [535] = {.count = 1, .reusable = true}, SHIFT(264),
  [537] = {.count = 1, .reusable = true}, SHIFT(265),
  [539] = {.count = 1, .reusable = true}, SHIFT(268),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_task_sections, 1),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_bracket_expression, 3),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_parentheses_expression, 3),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_dictionary_expression, 3),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_math_expression, 3),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym_equality_expression, 3),
  [557] = {.count = 1, .reusable = true}, SHIFT(272),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [561] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dictionary_expression_repeat1, 3),
  [563] = {.count = 1, .reusable = false}, SHIFT(276),
  [565] = {.count = 1, .reusable = true}, SHIFT(278),
  [567] = {.count = 1, .reusable = true}, SHIFT(279),
  [569] = {.count = 1, .reusable = true}, SHIFT(277),
  [571] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_expression_repeat1, 3),
  [573] = {.count = 1, .reusable = true}, SHIFT(280),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 4),
  [577] = {.count = 1, .reusable = true}, SHIFT(284),
  [579] = {.count = 1, .reusable = true}, SHIFT(289),
  [581] = {.count = 1, .reusable = true}, SHIFT(291),
  [583] = {.count = 1, .reusable = true}, SHIFT(292),
  [585] = {.count = 1, .reusable = true}, SHIFT(297),
  [587] = {.count = 1, .reusable = true}, SHIFT(298),
  [589] = {.count = 1, .reusable = true}, SHIFT(299),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_runtime_kv, 3),
  [593] = {.count = 1, .reusable = true}, SHIFT(301),
  [595] = {.count = 1, .reusable = true}, SHIFT(302),
  [597] = {.count = 1, .reusable = true}, SHIFT(303),
  [599] = {.count = 1, .reusable = true}, SHIFT(304),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_call, 5),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_call_body, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 2),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 2),
  [609] = {.count = 1, .reusable = true}, SHIFT(312),
  [611] = {.count = 1, .reusable = true}, SHIFT(316),
  [613] = {.count = 1, .reusable = true}, SHIFT(317),
  [615] = {.count = 1, .reusable = true}, SHIFT(319),
  [617] = {.count = 1, .reusable = true}, SHIFT(321),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_workflow, 5),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(181),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(3),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(4),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(182),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(7),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(183),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(184),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(11),
  [645] = {.count = 1, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(185),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(187),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [655] = {.count = 1, .reusable = true}, SHIFT(324),
  [657] = {.count = 1, .reusable = true}, SHIFT(327),
  [659] = {.count = 1, .reusable = true}, SHIFT(328),
  [661] = {.count = 1, .reusable = true}, SHIFT(331),
  [663] = {.count = 1, .reusable = true}, SHIFT(333),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(3),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(4),
  [671] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(7),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(11),
  [679] = {.count = 1, .reusable = true}, SHIFT(336),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_task, 5),
  [683] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(191),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(193),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(192),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(194),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_sections_repeat1, 2), SHIFT_REPEAT(187),
  [700] = {.count = 1, .reusable = true}, SHIFT(337),
  [702] = {.count = 1, .reusable = true}, SHIFT(338),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 4),
  [706] = {.count = 1, .reusable = true}, SHIFT(339),
  [708] = {.count = 1, .reusable = true}, SHIFT(340),
  [710] = {.count = 1, .reusable = true}, SHIFT(341),
  [712] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 5),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(232),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 6),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_map_type, 6),
  [723] = {.count = 1, .reusable = true}, SHIFT(350),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 1),
  [727] = {.count = 1, .reusable = true}, SHIFT(354),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_inputs, 3),
  [731] = {.count = 1, .reusable = true}, SHIFT(356),
  [733] = {.count = 1, .reusable = true}, SHIFT(357),
  [735] = {.count = 1, .reusable = true}, SHIFT(358),
  [737] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_meta, 3),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta, 3),
  [741] = {.count = 1, .reusable = true}, SHIFT(360),
  [743] = {.count = 1, .reusable = true}, SHIFT(361),
  [745] = {.count = 1, .reusable = true}, SHIFT(363),
  [747] = {.count = 1, .reusable = true}, SHIFT(365),
  [749] = {.count = 1, .reusable = true}, SHIFT(366),
  [751] = {.count = 1, .reusable = true}, SHIFT(368),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 3),
  [755] = {.count = 1, .reusable = true}, SHIFT(372),
  [757] = {.count = 1, .reusable = true}, SHIFT(374),
  [759] = {.count = 1, .reusable = false}, SHIFT(375),
  [761] = {.count = 1, .reusable = true}, SHIFT(376),
  [763] = {.count = 1, .reusable = true}, SHIFT(378),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym_command_part, 1),
  [767] = {.count = 1, .reusable = true}, SHIFT(380),
  [769] = {.count = 1, .reusable = true}, SHIFT(381),
  [771] = {.count = 1, .reusable = true}, SHIFT(384),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 3),
  [775] = {.count = 1, .reusable = true}, SHIFT(385),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_task, 6),
  [779] = {.count = 1, .reusable = false}, SHIFT(388),
  [781] = {.count = 1, .reusable = true}, SHIFT(389),
  [783] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 5),
  [785] = {.count = 1, .reusable = true}, SHIFT(394),
  [787] = {.count = 1, .reusable = true}, SHIFT(395),
  [789] = {.count = 1, .reusable = true}, SHIFT(396),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mappings, 2),
  [793] = {.count = 1, .reusable = false}, SHIFT(400),
  [795] = {.count = 1, .reusable = true}, SHIFT(401),
  [797] = {.count = 1, .reusable = true}, SHIFT(403),
  [799] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [801] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_meta_repeat1, 2),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_meta_repeat1, 2), SHIFT_REPEAT(6),
  [806] = {.count = 1, .reusable = true}, SHIFT(405),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 4),
  [810] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2), SHIFT_REPEAT(26),
  [813] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scatter_repeat1, 2),
  [815] = {.count = 1, .reusable = false}, SHIFT(408),
  [817] = {.count = 1, .reusable = true}, SHIFT(409),
  [819] = {.count = 1, .reusable = true}, SHIFT(411),
  [821] = {.count = 1, .reusable = true}, SHIFT(413),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(319),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_meta, 4),
  [828] = {.count = 2, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(6),
  [831] = {.count = 1, .reusable = true}, REDUCE(aux_sym_meta_repeat1, 2),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [835] = {.count = 1, .reusable = true}, SHIFT(416),
  [837] = {.count = 1, .reusable = true}, SHIFT(418),
  [839] = {.count = 1, .reusable = true}, SHIFT(419),
  [841] = {.count = 1, .reusable = true}, SHIFT(417),
  [843] = {.count = 1, .reusable = false}, SHIFT(420),
  [845] = {.count = 1, .reusable = false}, SHIFT(423),
  [847] = {.count = 1, .reusable = false}, SHIFT(421),
  [849] = {.count = 1, .reusable = true}, SHIFT(422),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(327),
  [856] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(328),
  [859] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_task_output, 4),
  [863] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(3),
  [866] = {.count = 1, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(4),
  [871] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(7),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym_task_output_repeat1, 2), SHIFT_REPEAT(11),
  [877] = {.count = 1, .reusable = true}, SHIFT(427),
  [879] = {.count = 1, .reusable = true}, SHIFT(429),
  [881] = {.count = 1, .reusable = true}, SHIFT(431),
  [883] = {.count = 1, .reusable = true}, SHIFT(432),
  [885] = {.count = 1, .reusable = true}, SHIFT(430),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 6),
  [889] = {.count = 1, .reusable = true}, SHIFT(433),
  [891] = {.count = 1, .reusable = true}, SHIFT(437),
  [893] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2),
  [895] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_mappings_repeat1, 2), SHIFT_REPEAT(354),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_variable_mapping_kv, 3),
  [900] = {.count = 1, .reusable = true}, SHIFT(439),
  [902] = {.count = 1, .reusable = true}, SHIFT(440),
  [904] = {.count = 1, .reusable = true}, SHIFT(441),
  [906] = {.count = 1, .reusable = true}, SHIFT(442),
  [908] = {.count = 1, .reusable = true}, SHIFT(443),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_meta_kv, 3),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 2),
  [914] = {.count = 1, .reusable = true}, SHIFT(445),
  [916] = {.count = 1, .reusable = true}, REDUCE(sym_scatter, 5),
  [918] = {.count = 1, .reusable = true}, SHIFT(447),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_iteration_statment, 3),
  [922] = {.count = 1, .reusable = true}, SHIFT(448),
  [924] = {.count = 1, .reusable = true}, SHIFT(449),
  [926] = {.count = 1, .reusable = true}, SHIFT(450),
  [928] = {.count = 1, .reusable = true}, SHIFT(451),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym_meta_kv, 3),
  [932] = {.count = 1, .reusable = true}, SHIFT(453),
  [934] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_key, 1),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_key, 1),
  [938] = {.count = 1, .reusable = true}, SHIFT(458),
  [940] = {.count = 1, .reusable = true}, SHIFT(459),
  [942] = {.count = 1, .reusable = true}, SHIFT(460),
  [944] = {.count = 1, .reusable = true}, SHIFT(461),
  [946] = {.count = 1, .reusable = true}, SHIFT(462),
  [948] = {.count = 1, .reusable = true}, SHIFT(463),
  [950] = {.count = 1, .reusable = true}, SHIFT(467),
  [952] = {.count = 1, .reusable = true}, SHIFT(473),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 6),
  [956] = {.count = 1, .reusable = true}, SHIFT(477),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_scatter_body, 3),
  [960] = {.count = 1, .reusable = true}, SHIFT(478),
  [962] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 6),
  [964] = {.count = 1, .reusable = true}, SHIFT(482),
  [966] = {.count = 1, .reusable = true}, SHIFT(484),
  [968] = {.count = 1, .reusable = false}, SHIFT(485),
  [970] = {.count = 1, .reusable = false}, SHIFT(486),
  [972] = {.count = 1, .reusable = false}, SHIFT(487),
  [974] = {.count = 1, .reusable = true}, SHIFT(488),
  [976] = {.count = 1, .reusable = true}, SHIFT(489),
  [978] = {.count = 1, .reusable = false}, SHIFT(490),
  [980] = {.count = 1, .reusable = true}, SHIFT(491),
  [982] = {.count = 1, .reusable = true}, SHIFT(492),
  [984] = {.count = 1, .reusable = true}, SHIFT(493),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 4),
  [988] = {.count = 1, .reusable = true}, SHIFT(499),
  [990] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [992] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_part_var_repeat1, 2),
  [994] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_part_var_repeat1, 2), SHIFT_REPEAT(423),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym_task_output_kv, 4),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym_conditional, 7),
  [1001] = {.count = 1, .reusable = true}, REDUCE(sym_loop, 7),
  [1003] = {.count = 1, .reusable = true}, SHIFT(503),
  [1005] = {.count = 1, .reusable = true}, SHIFT(507),
  [1007] = {.count = 1, .reusable = true}, SHIFT(511),
  [1009] = {.count = 1, .reusable = false}, SHIFT(510),
  [1011] = {.count = 1, .reusable = true}, SHIFT(512),
  [1013] = {.count = 1, .reusable = false}, REDUCE(sym_var_option_value, 1),
  [1015] = {.count = 1, .reusable = true}, REDUCE(sym_var_option_value, 1),
  [1017] = {.count = 1, .reusable = false}, SHIFT(514),
  [1019] = {.count = 1, .reusable = true}, SHIFT(516),
  [1021] = {.count = 1, .reusable = true}, SHIFT(517),
  [1023] = {.count = 1, .reusable = true}, SHIFT(515),
  [1025] = {.count = 1, .reusable = true}, SHIFT(519),
  [1027] = {.count = 1, .reusable = true}, SHIFT(518),
  [1029] = {.count = 1, .reusable = false}, REDUCE(sym_var_option, 3),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym_var_option, 3),
  [1033] = {.count = 1, .reusable = true}, REDUCE(sym_command_part_var, 5),
  [1035] = {.count = 1, .reusable = true}, SHIFT(520),
  [1037] = {.count = 1, .reusable = true}, SHIFT(521),
  [1039] = {.count = 1, .reusable = true}, SHIFT(522),
  [1041] = {.count = 1, .reusable = true}, SHIFT(524),
  [1043] = {.count = 1, .reusable = true}, SHIFT(525),
  [1045] = {.count = 1, .reusable = true}, SHIFT(526),
  [1047] = {.count = 1, .reusable = true}, SHIFT(527),
  [1049] = {.count = 1, .reusable = false}, SHIFT(528),
  [1051] = {.count = 1, .reusable = true}, SHIFT(529),
  [1053] = {.count = 1, .reusable = true}, SHIFT(535),
  [1055] = {.count = 1, .reusable = true}, SHIFT(542),
  [1057] = {.count = 1, .reusable = true}, SHIFT(544),
  [1059] = {.count = 1, .reusable = true}, SHIFT(545),
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
