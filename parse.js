const Parser = require("tree-sitter");
const MyLanguage = require("./grammar.js"); // Your grammar
const parser = new Parser();
parser.setLanguage(MyLanguage);

const sourceCode = `
add all from vk_____________treenokh-stwv where name contains "something"
`;

const tree = parser.parse(sourceCode);

console.log(tree.rootNode.toString());
