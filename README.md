# tree-sitter-wdl

## Introduction
Parser for WDL, a workflow language developed by Broad Institute (MIT)
Developed using tree-sitter, an open source parser generator
## Software
* [tree-sitter github](https://github.com/tree-sitter/tree-sitter)
* [tree-sitter documentation](https://tree-sitter.github.io/tree-sitter/)

## Generating the grammar
```
$ cd tree-sitter-wdl
$ tree-sitter generate
```
## Running tests
```
$ tree-sitter test
```
## WDL Language Specification
https://software.broadinstitute.org/wdl/documentation/spec

## TODO
* Write more tests
* Fix Command parsing (Currently Broken)
