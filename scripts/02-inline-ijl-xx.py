#!/usr/bin/env python3
import codecs
import os
import re
import string
import sys

def read_whole_file(p):
    with open(p) as f:
        return f.read()

ijlxx_to_path = {}
for root, dirs, files in os.walk('.'):
    for name in files:
        if name.endswith('ixx') or name.endswith('jxx') or name.endswith('lxx'):
            ijlxx_to_path[name] = os.path.join(root, name)

ijlxx_to_realized = {}
def realize_ijlxx(ijlxx):
    result = ijlxx_to_realized.get(ijlxx)
    if result == None:
        _, result = inline_ijlxx_in(ijlxx_to_path[ijlxx])
        result = re.sub("//.*[\n\r]", "", result)
        result = re.sub(" *[\n\r]+", "\n", result)
        ijlxx_to_realized[ijlxx] = result
    return result

re_INCLUDE_IJLXX = re.compile('#include *[<"]([^.]*\.[ijl]xx)[">]')
def inline_ijlxx_in(p):
    modified = False
    result = ""
    with codecs.open(p, "r", encoding='utf-8', errors='ignore') as f:
        for l in f:
            m = re_INCLUDE_IJLXX.match(l)
            if m:
                modified = True
                result += realize_ijlxx(m[1])
            else:
                result += l
    return modified, result

for ijlxx in ijlxx_to_path:
    realize_ijlxx(ijlxx)

for root, dirs, files in os.walk('.'):
    for name in files:
        if name.endswith('hxx') or name.endswith('cxx'):
            p = os.path.join(root, name)
            print("Processing " + p + "...")
            modified, result = inline_ijlxx_in(p)
            if modified:
                with open(p, "w") as f:
                    f.write(result)
