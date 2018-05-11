#!/usr/bin/env python3
import codecs
import os

for root, _, files in os.walk('.'):
    if os.path.dirname(root) in ['./drv', './examples', './inc', './samples', './src', './test', './tests']:
        for name in files:
            if name.endswith('xx'):
                p = os.path.join(root, name)
                with codecs.open(p, "r", encoding='utf-8', errors='ignore') as f:
                    utf8_content = f.read()
                    with open(p, "w") as f:
                        f.write(utf8_content)
