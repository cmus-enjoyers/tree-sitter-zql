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
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
