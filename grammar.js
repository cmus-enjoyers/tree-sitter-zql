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
    source_file: ($) => repeat($._statement),
    _statement: ($) => choice($.addFrom_statement),
    //require_statement: ($) => seq("require", repeat($._statement)),
    //add_statement: ($) => seq("add"),
    //all_statement: ($) => seq("all"),
    //from_statement: ($) => seq("from"),
    //where_statement: ($) => seq("where"),
    //contains_statement: ($) => seq("contains"),
    //is_statement: ($) => seq("is"),

    addFrom_statement: ($) =>
      seq(
        "add",
        choice(
          seq("all", "from", $.identifier),
          seq($.identifier, "from", $.identifier),
        ),
        optional($.whereContains_statement),
      ),
    whereContains_statement: ($) =>
      seq(
        "where",
        $.identifier,
        choice(seq("contains", $.string), seq("is", $.string)),
      ),

    identifier: ($) => /[A-Za-z0-9_-]+/,
    string: ($) => seq('"', /[^"]*/, '"'),
  },
});
