package tree_sitter_zql_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_zql "github.com/tree-sitter/tree-sitter-zql/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_zql.Language())
	if language == nil {
		t.Errorf("Error loading Zql grammar")
	}
}
