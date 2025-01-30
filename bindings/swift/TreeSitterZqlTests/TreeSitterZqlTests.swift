import XCTest
import SwiftTreeSitter
import TreeSitterZql

final class TreeSitterZqlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_zql())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Zql grammar")
    }
}
