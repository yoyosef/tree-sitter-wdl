#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 4
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  aux_sym_ws_token1 = 1,
  sym_integer = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  sym_object_type = 5,
  aux_sym_string_token1 = 6,
  aux_sym_string_token2 = 7,
  anon_sym_Boolean = 8,
  anon_sym_Int = 9,
  anon_sym_Float = 10,
  anon_sym_File = 11,
  anon_sym_String = 12,
  anon_sym_Array = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_Map = 16,
  anon_sym_COMMA = 17,
  anon_sym_QMARK = 18,
  anon_sym_PLUS = 19,
  anon_sym_DOT = 20,
  anon_sym_EQ = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_if = 24,
  anon_sym_then = 25,
  anon_sym_else = 26,
  anon_sym_LBRACE = 27,
  anon_sym_COLON = 28,
  anon_sym_RBRACE = 29,
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
  anon_sym_import = 43,
  anon_sym_as = 44,
  anon_sym_task = 45,
  anon_sym_command = 46,
  anon_sym_LT_LT_LT = 47,
  anon_sym_GT_GT_GT = 48,
  sym_command_part_string = 49,
  aux_sym_command_part_var_token1 = 50,
  anon_sym_sep = 51,
  anon_sym_quote = 52,
  anon_sym_default = 53,
  anon_sym_output = 54,
  anon_sym_runtime = 55,
  anon_sym_parameter_meta = 56,
  anon_sym_meta = 57,
  anon_sym_workflow = 58,
  anon_sym_call = 59,
  anon_sym_scatter = 60,
  anon_sym_in = 61,
  anon_sym_while = 62,
  sym_ws = 63,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_ws_token1] = "ws_token1",
  [sym_integer] = "integer",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_object_type] = "object_type",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Int] = "Int",
  [anon_sym_Float] = "Float",
  [anon_sym_File] = "File",
  [anon_sym_String] = "String",
  [anon_sym_Array] = "Array",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_Map] = "Map",
  [anon_sym_COMMA] = ",",
  [anon_sym_QMARK] = "?",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_task] = "task",
  [anon_sym_command] = "command",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [sym_command_part_string] = "command_part_string",
  [aux_sym_command_part_var_token1] = "command_part_var_token1",
  [anon_sym_sep] = "sep",
  [anon_sym_quote] = "quote",
  [anon_sym_default] = "default",
  [anon_sym_output] = "output",
  [anon_sym_runtime] = "runtime",
  [anon_sym_parameter_meta] = "parameter_meta",
  [anon_sym_meta] = "meta",
  [anon_sym_workflow] = "workflow",
  [anon_sym_call] = "call",
  [anon_sym_scatter] = "scatter",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [sym_ws] = "ws",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_ws_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
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
  [anon_sym_Array] = {
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
  [anon_sym_Map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
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
  [aux_sym_command_part_var_token1] = {
    .visible = false,
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
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_runtime] = {
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
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
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
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_ws] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
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
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(31);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(33);
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'i')
        ADVANCE(35);
      if (lookahead == 'm')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(38);
      if (lookahead == 'q')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(40);
      if (lookahead == 's')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(42);
      if (lookahead == 'w')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 5:
      if (lookahead == '&')
        ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == ' ')
        ADVANCE(52);
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
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
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(57);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 21:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'o')
        ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'b')
        ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 't')
        ADVANCE(70);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'l')
        ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'f')
        ADVANCE(77);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'u')
        ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'e')
        ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'a')
        ADVANCE(87);
      if (lookahead == 'h')
        ADVANCE(88);
      if (lookahead == 'r')
        ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'h')
        ADVANCE(90);
      if (lookahead == 'o')
        ADVANCE(91);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{')
        ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == '|')
        ADVANCE(93);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 50:
      if (lookahead == 'x')
        ADVANCE(94);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v'))
        ADVANCE(3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 52:
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 54:
      if (lookahead == 'x')
        ADVANCE(98);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(100);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v'))
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '<')
        ADVANCE(102);
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
        ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'r')
        ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'p')
        ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'j')
        ADVANCE(110);
      END_STATE();
    case 70:
      if (lookahead == 'r')
        ADVANCE(111);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 72:
      if (lookahead == 'l')
        ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'm')
        ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'f')
        ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 's')
        ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'l')
        ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 78:
      if (lookahead == 'p')
        ADVANCE(117);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 80:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 't')
        ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'o')
        ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'n')
        ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'a')
        ADVANCE(123);
      END_STATE();
    case 86:
      if (lookahead == 'p')
        ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == 'u')
        ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'i')
        ADVANCE(128);
      END_STATE();
    case 91:
      if (lookahead == 'r')
        ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_command_part_string);
      if (lookahead == '{')
        ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(130);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_ws_token1);
      if (lookahead == '\'')
        ADVANCE(133);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 104:
      if (lookahead == 'a')
        ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'l')
        ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'e')
        ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 'a')
        ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 110:
      if (lookahead == 'e')
        ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == 'i')
        ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'l')
        ADVANCE(143);
      END_STATE();
    case 113:
      if (lookahead == 'm')
        ADVANCE(144);
      END_STATE();
    case 114:
      if (lookahead == 'a')
        ADVANCE(145);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 's')
        ADVANCE(147);
      END_STATE();
    case 117:
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 'a')
        ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'p')
        ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'a')
        ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == 't')
        ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 125:
      if (lookahead == 'k')
        ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'n')
        ADVANCE(156);
      END_STATE();
    case 127:
      if (lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 128:
      if (lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 129:
      if (lookahead == 'k')
        ADVANCE(159);
      END_STATE();
    case 130:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(160);
      END_STATE();
    case 132:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 133:
      if (lookahead == ' ')
        ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(162);
      END_STATE();
    case 136:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 137:
      if (lookahead == 'y')
        ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 140:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'c')
        ADVANCE(166);
      END_STATE();
    case 142:
      if (lookahead == 'n')
        ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 144:
      if (lookahead == 'a')
        ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 147:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 'r')
        ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 150:
      if (lookahead == 'u')
        ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'm')
        ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(175);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_task);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 159:
      if (lookahead == 'f')
        ADVANCE(178);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(179);
      END_STATE();
    case 161:
      if (lookahead == '\'')
        ADVANCE(97);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 164:
      if (lookahead == 'a')
        ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 166:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 167:
      if (lookahead == 'g')
        ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'n')
        ADVANCE(184);
      END_STATE();
    case 169:
      if (lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 171:
      if (lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 175:
      if (lookahead == 'm')
        ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 178:
      if (lookahead == 'l')
        ADVANCE(191);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(192);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_object_type);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 184:
      if (lookahead == 'd')
        ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 188:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'r')
        ADVANCE(199);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(200);
      END_STATE();
    case 192:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 193:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 197:
      if (lookahead == 'e')
        ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_runtime);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_scatter);
      END_STATE();
    case 200:
      if (lookahead == 'w')
        ADVANCE(204);
      END_STATE();
    case 201:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 202:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 205:
      if (lookahead == '"')
        ADVANCE(49);
      if (lookahead == '\\')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 206:
      if (lookahead == '\'')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 207:
      if (lookahead == '_')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'm')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 't')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'a')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_parameter_meta);
      END_STATE();
    case 213:
      if (lookahead == '\'')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 213},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_runtime] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_sep] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_task] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_parameter_meta] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_scatter] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_object_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [sym_command_part_string] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [aux_sym_ws_token1] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [aux_sym_command_part_var_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_ws] = STATE(3),
    [aux_sym_ws_token1] = ACTIONS(3),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(5),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(7),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_ws, 1),
  [7] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
