#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  sym__newline = 3,
  sym__blank = 4,
  sym__emptyline = 5,
  sym_option = 6,
  anon_sym_COLON = 7,
  aux_sym_command_token1 = 8,
  aux_sym_command_name_token1 = 9,
  sym_import_path = 10,
  anon_sym_try_DASHimport = 11,
  anon_sym_import = 12,
  sym_source_file = 13,
  sym_comment = 14,
  sym_command = 15,
  sym_command_name = 16,
  sym_config_name = 17,
  sym_try_import = 18,
  sym_import = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_command_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__newline] = "_newline",
  [sym__blank] = "_blank",
  [sym__emptyline] = "_emptyline",
  [sym_option] = "option",
  [anon_sym_COLON] = ":",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_command_name_token1] = "command_name_token1",
  [sym_import_path] = "import_path",
  [anon_sym_try_DASHimport] = "try-import",
  [anon_sym_import] = "import",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [sym_command_name] = "command_name",
  [sym_config_name] = "config_name",
  [sym_try_import] = "try_import",
  [sym_import] = "import",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__newline] = sym__newline,
  [sym__blank] = sym__blank,
  [sym__emptyline] = sym__emptyline,
  [sym_option] = sym_option,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_command_name_token1] = aux_sym_command_name_token1,
  [sym_import_path] = sym_import_path,
  [anon_sym_try_DASHimport] = anon_sym_try_DASHimport,
  [anon_sym_import] = anon_sym_import,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_command] = sym_command,
  [sym_command_name] = sym_command_name,
  [sym_config_name] = sym_config_name,
  [sym_try_import] = sym_try_import,
  [sym_import] = sym_import,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [sym__emptyline] = {
    .visible = false,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_import_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_try_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_config_name] = {
    .visible = true,
    .named = true,
  },
  [sym_try_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_config = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_config] = "config",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_config, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__blank);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__blank);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__emptyline);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_option);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'y') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == 'y') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_import_path);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_import_path);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_import_path);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_import_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_try_DASHimport);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_try_DASHimport);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__blank] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [aux_sym_command_name_token1] = ACTIONS(1),
    [sym_import_path] = ACTIONS(1),
    [anon_sym_try_DASHimport] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_comment] = STATE(2),
    [sym_command] = STATE(2),
    [sym_command_name] = STATE(22),
    [sym_try_import] = STATE(2),
    [sym_import] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__emptyline] = ACTIONS(7),
    [aux_sym_command_name_token1] = ACTIONS(9),
    [anon_sym_try_DASHimport] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = STATE(3),
    [sym_command] = STATE(3),
    [sym_command_name] = STATE(22),
    [sym_try_import] = STATE(3),
    [sym_import] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__emptyline] = ACTIONS(17),
    [aux_sym_command_name_token1] = ACTIONS(9),
    [anon_sym_try_DASHimport] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym_command] = STATE(3),
    [sym_command_name] = STATE(22),
    [sym_try_import] = STATE(3),
    [sym_import] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
    [sym__emptyline] = ACTIONS(24),
    [aux_sym_command_name_token1] = ACTIONS(27),
    [anon_sym_try_DASHimport] = ACTIONS(30),
    [anon_sym_import] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(38), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [11] = 2,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(42), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [22] = 2,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(46), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [33] = 2,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(50), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [44] = 2,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(54), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [55] = 2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(58), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [66] = 2,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(62), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [77] = 2,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(66), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [88] = 2,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__emptyline,
    ACTIONS(70), 3,
      aux_sym_command_name_token1,
      anon_sym_try_DASHimport,
      anon_sym_import,
  [99] = 3,
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(74), 1,
      aux_sym_command_token1,
    STATE(15), 1,
      aux_sym_command_repeat1,
  [109] = 3,
    ACTIONS(74), 1,
      aux_sym_command_token1,
    ACTIONS(76), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_command_repeat1,
  [119] = 3,
    ACTIONS(78), 1,
      sym__newline,
    ACTIONS(80), 1,
      aux_sym_command_token1,
    STATE(15), 1,
      aux_sym_command_repeat1,
  [129] = 3,
    ACTIONS(74), 1,
      aux_sym_command_token1,
    ACTIONS(83), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_command_repeat1,
  [139] = 3,
    ACTIONS(74), 1,
      aux_sym_command_token1,
    ACTIONS(85), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_command_repeat1,
  [149] = 2,
    ACTIONS(87), 1,
      sym__newline,
    ACTIONS(89), 1,
      sym_option,
  [156] = 2,
    ACTIONS(91), 1,
      aux_sym_command_name_token1,
    STATE(26), 1,
      sym_config_name,
  [163] = 2,
    ACTIONS(93), 1,
      sym__newline,
    ACTIONS(95), 1,
      sym_option,
  [170] = 1,
    ACTIONS(78), 2,
      sym__newline,
      aux_sym_command_token1,
  [175] = 2,
    ACTIONS(97), 1,
      sym__blank,
    ACTIONS(99), 1,
      anon_sym_COLON,
  [182] = 1,
    ACTIONS(101), 2,
      sym__blank,
      anon_sym_COLON,
  [187] = 1,
    ACTIONS(103), 1,
      aux_sym_comment_token1,
  [191] = 1,
    ACTIONS(105), 1,
      sym__blank,
  [195] = 1,
    ACTIONS(107), 1,
      sym__blank,
  [199] = 1,
    ACTIONS(109), 1,
      sym__newline,
  [203] = 1,
    ACTIONS(111), 1,
      sym__newline,
  [207] = 1,
    ACTIONS(113), 1,
      sym_option,
  [211] = 1,
    ACTIONS(115), 1,
      sym_import_path,
  [215] = 1,
    ACTIONS(117), 1,
      sym_import_path,
  [219] = 1,
    ACTIONS(119), 1,
      sym__newline,
  [223] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [227] = 1,
    ACTIONS(123), 1,
      sym__blank,
  [231] = 1,
    ACTIONS(125), 1,
      sym__blank,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 109,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 149,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 163,
  [SMALL_STATE(21)] = 170,
  [SMALL_STATE(22)] = 175,
  [SMALL_STATE(23)] = 182,
  [SMALL_STATE(24)] = 187,
  [SMALL_STATE(25)] = 191,
  [SMALL_STATE(26)] = 195,
  [SMALL_STATE(27)] = 199,
  [SMALL_STATE(28)] = 203,
  [SMALL_STATE(29)] = 207,
  [SMALL_STATE(30)] = 211,
  [SMALL_STATE(31)] = 215,
  [SMALL_STATE(32)] = 219,
  [SMALL_STATE(33)] = 223,
  [SMALL_STATE(34)] = 227,
  [SMALL_STATE(35)] = 231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 7, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 6, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_import, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_import, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(29),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_name, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bazelrc() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
