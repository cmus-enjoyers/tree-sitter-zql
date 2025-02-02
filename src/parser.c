#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_require = 1,
  anon_sym_as = 2,
  anon_sym_add = 3,
  anon_sym_all = 4,
  anon_sym_from = 5,
  anon_sym_hide = 6,
  anon_sym_where = 7,
  anon_sym_contains = 8,
  anon_sym_is = 9,
  sym_comment = 10,
  sym_identifier = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  sym_source_file = 14,
  sym__statement = 15,
  sym_require_statement = 16,
  sym_addFrom_statement = 17,
  sym_hide_statement = 18,
  sym_whereContains_statement = 19,
  sym_string = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_require_statement_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_require] = "require",
  [anon_sym_as] = "as",
  [anon_sym_add] = "add",
  [anon_sym_all] = "all",
  [anon_sym_from] = "from",
  [anon_sym_hide] = "hide",
  [anon_sym_where] = "where",
  [anon_sym_contains] = "contains",
  [anon_sym_is] = "is",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_require_statement] = "require_statement",
  [sym_addFrom_statement] = "addFrom_statement",
  [sym_hide_statement] = "hide_statement",
  [sym_whereContains_statement] = "whereContains_statement",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_require_statement_repeat1] = "require_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_hide] = anon_sym_hide,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_is] = anon_sym_is,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_require_statement] = sym_require_statement,
  [sym_addFrom_statement] = sym_addFrom_statement,
  [sym_hide_statement] = sym_hide_statement,
  [sym_whereContains_statement] = sym_whereContains_statement,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_require_statement_repeat1] = aux_sym_require_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_require_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_addFrom_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_hide_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_whereContains_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_require_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '"', 63,
        ';', 47,
        'a', 3,
        'c', 19,
        'f', 22,
        'h', 12,
        'i', 25,
        'r', 6,
        'w', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'q') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_hide);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_hide);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_hide] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__statement] = STATE(2),
    [sym_require_statement] = STATE(2),
    [sym_addFrom_statement] = STATE(2),
    [sym_hide_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_require] = ACTIONS(5),
    [anon_sym_add] = ACTIONS(7),
    [anon_sym_hide] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_require,
    ACTIONS(7), 1,
      anon_sym_add,
    ACTIONS(9), 1,
      anon_sym_hide,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    STATE(3), 5,
      sym__statement,
      sym_require_statement,
      sym_addFrom_statement,
      sym_hide_statement,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_require,
    ACTIONS(22), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_hide,
    ACTIONS(28), 1,
      sym_comment,
    STATE(3), 5,
      sym__statement,
      sym_require_statement,
      sym_addFrom_statement,
      sym_hide_statement,
      aux_sym_source_file_repeat1,
  [46] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_require_statement_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
  [62] = 4,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_require_statement_repeat1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
  [78] = 3,
    ACTIONS(45), 1,
      anon_sym_as,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(43), 4,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_identifier,
  [92] = 3,
    ACTIONS(49), 1,
      anon_sym_where,
    STATE(11), 1,
      sym_whereContains_statement,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_comment,
  [106] = 4,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_require_statement_repeat1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
  [122] = 2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(60), 4,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_identifier,
  [133] = 1,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_comment,
  [141] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_comment,
  [149] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_comment,
  [157] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_require,
      anon_sym_add,
      anon_sym_hide,
      sym_comment,
  [165] = 1,
    ACTIONS(70), 2,
      anon_sym_all,
      sym_identifier,
  [170] = 1,
    ACTIONS(72), 2,
      anon_sym_contains,
      anon_sym_is,
  [175] = 2,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
  [182] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [186] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [190] = 1,
    ACTIONS(80), 1,
      anon_sym_from,
  [194] = 1,
    ACTIONS(82), 1,
      sym_identifier,
  [198] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [202] = 1,
    ACTIONS(86), 1,
      aux_sym_string_token1,
  [206] = 1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
  [210] = 1,
    ACTIONS(90), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 202,
  [SMALL_STATE(23)] = 206,
  [SMALL_STATE(24)] = 210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_statement, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_require_statement, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_statement, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_require_statement, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_require_statement_repeat1, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_require_statement_repeat1, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addFrom_statement, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_require_statement_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_require_statement_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_require_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_require_statement_repeat1, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_require_statement_repeat1, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_statement, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addFrom_statement, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereContains_statement, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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

TS_PUBLIC const TSLanguage *tree_sitter_zql(void) {
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
