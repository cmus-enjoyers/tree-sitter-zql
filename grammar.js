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
        repeat(
          seq($.identifier_member, optional(seq("as", $.identifier_member))),
        ),
      ),

    addFrom_statement: ($) =>
      seq(
        "add",
        choice(
          seq("all", "from", $.identifier_member),
          seq($.identifier_member, "from", $.identifier_member),
        ),
        optional($.whereContains_statement),
      ),

    hide_statement: ($) => seq("hide", $.identifier_member),

    whereContains_statement: ($) =>
      seq(
        "where",
        $.identifier_member,
        choice(
          seq("contains", $.string),
          seq("or", seq($.identifier_member, "contains", $.string)),
          seq("is", $.string),
        ),
      ),

    identifier_member: () => /[A-Za-z0-9_-]+/,
    comment: ($) => /\;.*/,
    string: ($) => seq('"', /[^"]*/, '"'),
  },
});
