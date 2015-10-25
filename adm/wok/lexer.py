#!/usr/bin/env python
import os, sys
import re, string

class Lexer:
    def __init__(self, s):
        patterns = [
            ('NUMBER', r'[+-]?\d*\.?\d+([eE][-+]?\d+)?'),
            #
            ('COMMENT', '--[^\n]*'),
            ('SPACES', '[ \t]+'),
            ('NEWLINES', '[\n]+'),
            ('LPAR', '\('),
            ('RPAR', '\)'),
            ('LBRACKET', '\['),
            ('RBRACKET', '\]'),
            ('LBRACE', '{'),
            ('RBRACE', '}'),
            ('COLON', ':'),
            ('COMMA', ','),
            ('SEMICOL', ';'),
            ('EQ', '='),
            ('DASH', '-'),
            ('DOT', '\\.'),
            ('BACKSLASH', '\\\\'),
            ('PERCENT', '%'),
            ('LT', '<'),
            ('GT', '>'),
            #
            ('VIRTUAL', r'virtual\b'),
            ('USES', r'uses\b'),
            ('TO', r'to\b'),
            ('STATIC', r'static\b'),
            ('SCHEMA', r'schema\b'),
            ('RETURNS', r'returns\b'),
            ('REDEFINED', r'redefined\b'),
            ('RAISES', r'raises\b'),
            ('PRIVATE', r'private\b'),
            ('PRIMITIVE', r'primitive\b'),
            ('PROTECTED', r'protected\b'),
            ('POINTER', r'pointer\b'),
            ('PACKAGE', r'package\b'),
            ('MYCLASS', r'myclass\b'),
            ('MUTABLE', r'mutable\b'),
            ('ME', r'me\b'),
            ('OUT', r'out\b'),
            ('LIKE', r'like\b'),
            ('IS', r'is\b'),
            ('INSTANTIATES', r'instantiates\b'),
            ('INHERITS', r'inherits\b'),
            ('IN', r'in\b'),
            ('IMPORTED', r'imported\b'),
            ('GENERIC', r'generic\b'),
            ('FROM', r'from\b'),
            ('FRIENDS', r'friends\b'),
            ('FOR', r'for\b'),
            ('FIELDS', r'fields\b'),
            ('EXECUTABLE', r'executable\b'),
            ('EXCEPTION', r'exception\b'),
            ('ENUMERATION', r'enumeration\b'),
            ('END', r'end\b'),
            ('DEFERRED', r'deferred\b'),
            ('CLASS', r'class\b'),
            ('AS', r'as\b'),
            ('ANY', r'any\b'),
            ('ALIAS', r'alias\b'),
            #
            ('ID', r'[a-zA-Z_]\w*'),
            ('STRING', r'"[^"]*"'),
            #
            ('UNKNOWN', '.')
        ]
        self.re = re.compile('|'.join('(?P<%s>%s)' % (x[0], x[1]) for x in patterns))

        self.last_comments = []

        self.s = s
        self.pos = 0
        self.current_line = 1

        self.lookahead = None

    def peek(self):
        if self.lookahead is None:
            self.lookahead = self.get()
        return self.lookahead

    def get(self):
        if self.lookahead is not None:
            x = self.lookahead
            self.lookahead = None
            return x
        else:
            while self.pos < len(self.s):
                m = self.re.match(self.s, self.pos)
                self.pos = m.end()

                t, v = m.lastgroup, m.group()

                if t == 'COMMENT':
                    self.last_comments.append(v)
                else:
                    if t == 'NEWLINES':
                        x = len(v)
                        self.current_line += x
                        if 1 < x:
                            self.last_comments = []
                    elif t == 'SPACES':
                        pass
                    else:
                        return (t, v)
            return None

    def try_get(self, expected):
        k, v = self.peek()
        if k == expected:
            return self.get()
        else:
            return None

    def get_only(self, expected):
        k, v = self.get()
        if k == expected:
            return k, v
        else:
            raise Exception('line %d: Token %s found instead of expected %s' % (self.current_line, k, expected))

##

def main(args):
    for n in args[1:]:
        f = file(n)
        l = Lexer(f.read())
        while l.peek():
            print l.get()
        f.close()
    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv))
