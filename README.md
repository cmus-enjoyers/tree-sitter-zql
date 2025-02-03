# Installation

add following code into your nvim-treesitter config():

```lua
local parsers = require("nvim-treesitter.parsers").get_parser_configs()

parsers.zql = {
  install_info = {
    url = "https://github.com/cmus-enjoyers/tree-sitter-zql",
    files = { "src/parser.c" },
    branch = "dev",
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "zql",
}

vim.filetype.add({
  extension = {
    zql = "zql",
  },
})
```

add queries into your nvim config:

```bash
mkdir -p ~/.config/nvim/queries/zql/
cp queries/highlights.scm ~/.config/nvim/queries/zql/
```
