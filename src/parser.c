#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_add = 1,
  anon_sym_all = 2,
  anon_sym_from = 3,
  anon_sym_where = 4,
  anon_sym_contains = 5,
  anon_sym_is = 6,
  sym_identifier = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  sym_source_file = 10,
  sym__statement = 11,
  sym_addFrom_statement = 12,
  sym_whereContains_statement = 13,
  sym_string = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_add] = "add",
  [anon_sym_all] = "all",
  [anon_sym_from] = "from",
  [anon_sym_where] = "where",
  [anon_sym_contains] = "contains",
  [anon_sym_is] = "is",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_addFrom_statement] = "addFrom_statement",
  [sym_whereContains_statement] = "whereContains_statement",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_is] = anon_sym_is,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_addFrom_statement] = sym_addFrom_statement,
  [sym_whereContains_statement] = sym_whereContains_statement,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_addFrom_statement] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__statement] = STATE(2),
    [sym_addFrom_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_add] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_add,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__statement,
      sym_addFrom_statement,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_add,
    STATE(3), 3,
      sym__statement,
      sym_addFrom_statement,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(16), 1,
      anon_sym_where,
    STATE(6), 1,
      sym_whereContains_statement,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_add,
  [35] = 1,
    ACTIONS(18), 2,
      anon_sym_all,
      sym_identifier,
  [40] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_add,
  [45] = 1,
    ACTIONS(22), 2,
      anon_sym_contains,
      anon_sym_is,
  [50] = 2,
    ACTIONS(24), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string,
  [57] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_add,
  [62] = 1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      anon_sym_add,
  [67] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [71] = 1,
    ACTIONS(32), 1,
      anon_sym_from,
  [75] = 1,
    ACTIONS(34), 1,
      sym_identifier,
  [79] = 1,
    ACTIONS(36), 1,
      sym_identifier,
  [83] = 1,
    ACTIONS(38), 1,
      aux_sym_string_token1,
  [87] = 1,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 57,
  [SMALL_STATE(10)] = 62,
  [SMALL_STATE(11)] = 67,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 75,
  [SMALL_STATE(14)] = 79,
  [SMALL_STATE(15)] = 83,
  [SMALL_STATE(16)] = 87,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addFrom_statement, 4, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addFrom_statement, 5, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereContains_statement, 4, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
