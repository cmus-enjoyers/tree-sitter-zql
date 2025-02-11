/**
 * @file Zql grammar for tree-sitter
 * @author ThunderFlight
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "zql",

  rules: {
    source_file: ($) => repeat(choice($._statement, $.comment)),
    _statement: ($) =>
      choice($.addFrom_statement, $.require_statement, $.hide_statement),
    require_statement: ($) =>
      seq(
        "require",
        repeat(seq($.identifier, optional(seq("as", $.identifier)))),
      ),

    addFrom_statement: ($) =>
      seq(
        "add",
        "all",
        "from",
        $.identifier,
        optional($.whereContains_statement),
      ),

    hide_statement: ($) => seq("hide", $.identifier),

    filter: ($) => seq($.string, choice("is", "contains"), $.string),

    whereContains_statement: ($) =>
      seq(
        "where",
        $.filter,
        choice(seq("contains", $.string), seq("is", $.string)),
        optional(repeat(seq("or", $.filter))),
      ),

    identifier_member: () => /[A-Za-z0-9_-]+/,
    identifier: () => /[A-Za-z0-9_-]+/,
    comment: ($) => /\;.*/,
    string: ($) => seq('"', /[^"]*/, '"'),
  },
});
