#!/usr/bin/env python3

import os, sys
import string, re

##
class QualifiedName:
    def __init__(self, name, package):
        self.package = package
        self.name = name
    def __str__(self):
        if self.package:
            return self.name + ' from ' + self.package
        return self.name

class QualifiedType:
    def __init__(self, qname, parameters = []):
        self.qname = qname
        self.parameters = parameters
        self.is_mutable = False
    def __str__(self):
        s = ''
        if self.is_mutable: s += 'mutable '
        s += str(self.qname)
        if 0 < len(self.parameters):
            s += '(' + string.join(self.parameters, ', ') + ')'
        return s

class QualifiedMethod:
    def __init__(self, name, class_name, package_name, me, formals):
        self.name = name
        self.class_name = class_name
        self.package_name = package_name
        self.me = me
        self.formals = formals
    def __str__(self):
        s = self.name
        if self.class_name:
            s += ' from ' + self.class_name
        if self.package_name:
            s += ' from ' + self.package_name
        s += '('
        if self.me != None:
            s += 'me'
            if len(self.me):
                s += ': ' + string.join(self.me)
        if 0 < len(self.formals):
            if self.me != None: s += '; '
            s += string.join([str(x) for x in self.formals], '; ')
        s += ')'
        return s

class FieldGroupDeclaration:
    def __init__(self, names, qtype):
        self.names = names
        self.qtype = qtype
        self.visibility = None
    def __str__(self):
        s = string.join([str(x) for x in self.names], ', ') + ' : ' + str(self.qtype)
        if self.visibility: s += ' is ' + self.visibility
        return s + ';'

class ParameterDeclaration:
    def __init__(self, name, qtype, is_in, is_out, default_value):
        self.name = name
        self.qtype = qtype
        self.is_in = is_in
        self.is_out = is_out
        self.default_value = default_value
    def __str__(self):
        s = self.name
        s += ' :'
        if self.is_in:
            s += ' in'
        if self.is_out:
            s += ' out'
        if self.qtype:
            s += ' ' + str(self.qtype)
        return s

class MethodDeclaration:
    def __init__(self, name, me, formals, return_qtype, raises, qualifiers):
        self.name = name
        self.me = me
        self.formals = formals
        self.return_qtype = return_qtype
        self.raises = raises
        self.qualifiers = qualifiers
    def __str__(self):
        s = self.name
        s += '('
        if self.me != None:
            s += 'me'
            if len(self.me):
                s += ': ' + string.join(self.me)
        if 0 < len(self.formals):
            if self.me != None: s += '; '
            s += string.join([str(x) for x in self.formals], '; ')
        s += ')'
        if self.return_qtype:
            s += ' returns ' + str(self.return_qtype)
        if self.raises:
            s += ' raises '
            s += string.join([str(x) for x in self.raises], ', ')
        if len(self.qualifiers):
            s += ' is ' + string.join(self.qualifiers);
        s += ';'
        return s

class ClassDeclaration:
    def __init__(self,
                 qname, parameters,
                 base,
                 uses, raises,
                 nested_declarations,
                 methods, fields, friends,
                 qualifiers):
        self.qname = qname
        self.parameters = parameters
        self.base = base
        self.uses = uses
        self.raises = raises
        self.nested_declarations = nested_declarations
        self.methods = methods
        self.fields = fields
        self.friends = friends
        self.qualifiers = qualifiers
    def __str__(self):
        s = ''
        # if self.comments:
        #     s += str(self.comments)
        if 'deferred' in self.qualifiers:
            s += 'deferred '
        elif 'generic' in self.qualifiers:
            s += 'generic '
        s += 'class ' + str(self.qname)
        if 'generic' in self.qualifiers:
            s += ' (' + string.join([pn + ' as ' + str(pc) for pn, pc in self.parameters]) + ')'
        s += '\n\n'
        if self.base:
            s += 'inherits ' + str(self.base) + '\n\n'
        if 0 < len(self.uses):
            s += 'uses\n  ' + string.join([str(x) for x in self.uses], ',\n  ') + '\n\n'
        if 0 < len(self.raises):
            s += 'raises\n  ' + string.join([str(x) for x in self.raises], ',\n  ') + '\n\n'
        if 0 < len(self.methods):
            s += 'is\n  ' + string.join([str(x) for x in self.methods], '\n  ') + '\n\n'
        if 0 < len(self.fields):
            s += 'fields\n  ' + string.join([str(x) for x in self.fields], '\n  ') + '\n\n'
        if 0 < len(self.friends):
            s += 'friends\n  ' + string.join([str(x) for x in self.friends], '\n  ') + '\n\n'
        s += 'end ' + self.qname.name + ';'
        return s

class AliasDeclaration:
    def __init__(self, name, aliased, is_private):
        self.name = name
        self.aliased = aliased
        self.is_private = is_private
    def __str__(self):
        return ('private ' if self.is_private else '') + 'alias ' + self.name + ' is ' + str(self.aliased) + ';'

class EnumerationDeclaration:
    def __init__(self, qname, members, is_private):
        self.qname = qname
        self.members = members
        self.is_private = is_private
    def __str__(self):
        s = ('private ' if self.is_private else '') + 'enumeration ' + str(self.qname) + ' is\n'
        first = True
        for m in self.members:
            if not first:
                s += ',\n'
            s += '\t' + str(m)
            first = False
        s += '\nend;'
        return s

class PointerDeclaration:
    def __init__(self, name, pointee, is_private):
        self.name = name
        self.pointee = pointee
        self.is_private = is_private
    def __str__(self):
        return ('private ' if self.is_private else '') + 'pointer ' + self.name + ' to ' + str(self.pointee) + ';'

class ExceptionDeclaration:
    def __init__(self, name, base):
        self.name = name
        self.base = base
    def __str__(self):
        s = 'exception ' + str(self.name)
        if self.base:
            s += ' inherits ' + str(self.base)
        return s + ';'

class ImportedDeclaration:
    def __init__(self, qtype):
        self.qtype = qtype
    def __str__(self):
        return 'imported ' + str(self.qtype) + ';'

class PrimitiveDeclaration:
    def __init__(self, name, base):
        self.name = name
        self.base = base
    def __str__(self):
        s = 'primitive ' + str(self.name)
        if self.base:
            s += ' inherits ' + str(self.base)
        return s + ';'

class PackageDeclaration:
    def __init__(self, qname, uses, declarations):
        self.qname = qname
        self.uses = uses
        self.declarations = declarations
    def __str__(self):
        s = 'package ' + str(self.qname) + '\n\n'
        if 0 < len(self.uses):
            s += 'uses\n  ' + string.join([str(x) for x in self.uses], ',\n  ') + '\n\n'
        s += 'is\n\n'
        for x in self.declarations:
            s += '  ' + str(x) + '\n'
        s += '\n'
        s += 'end ' + str(self.qname) + ';\n'
        return s

class ClassForwardDeclaration:
    def __init__(self, qname, qualifiers):
        self.qname = qname
        self.qualifiers = qualifiers
    def __str__(self):
        return string.join([q + ' ' for q in self.qualifiers]) + 'class ' + str(self.qname) + ';'

class SpecializationDeclaration:
    def __init__(self, qname, template, parameters, qualifiers):
        self.qname = qname
        self.template = template
        self.parameters = parameters
        self.qualifiers = qualifiers
    def __str__(self):
        s = string.join([q + ' ' for q in self.qualifiers])
        s += 'class ' + str(self.qname) + ' instantiates ' + str(self.template)
        s += '(' + string.join([str(p) for p in self.parameters], ', ') + ');'
        return s

class SchemaDeclaration:
    def __init__(self, qname, qualifiers, content):
        self.qname = qname
        self.qualifiers = qualifiers
        self.content = content
    def __str__(self):
        s = [q + ' ' for q in self.qualifiers] + 'schema ' + str(self.qname)
        s += 'end;'
        return s

class ExecutableDeclaration:
    def __init__(self, name):
        self.name = name
    def __str__(self):
        assert(False)
        return 'executable ' + self.name + ' is\n' +\
            '  executable ' + self.name + ' is\n' +\
            '    ' + self.name + ';' +\
            '  end;\n' +\
            'end;'

class Document:
    def __init__(self, declarations):
        self.declarations = declarations
    def __str__(self):
        return string.join([str(x) for x in self.declarations])
