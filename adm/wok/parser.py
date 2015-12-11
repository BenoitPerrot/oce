#!/usr/bin/env python3
import os, sys
import re, string

from lexer import *
from ast import *

class Parser:
    def __init__(self, l):
        self.l = l

    def report_syntax_error(self, message):
        raise Exception(str(self.l.current_line) + ': syntax error: ' + message)
    def report_semantics_warning(self, message):
        sys.stderr.write(str(self.l.current_line) + ': semantics warning: ' + message + '\n')

    def parse_constant(self):
        k, v = self.l.peek()
        if k == 'ID':
            return self.l.get_only('ID')[1]
        elif k == 'STRING':
            return self.l.get_only('STRING')[1]
        elif k == 'NUMBER':
            return self.l.get_only('NUMBER')[1]
        else:
            print(self.l.current_line)
            assert False

    def parse_id_comma_list(self):
        l = [self.l.get_only('ID')[1]]
        while self.l.try_get('COMMA'):
            l.append(self.l.get_only('ID')[1])
        return l

    def parse_qname(self):
        k, name = self.l.get_only('ID')
        package = None
        if self.l.try_get('FROM'):
            k, package = self.l.get_only('ID')
        return QualifiedName(name, package)

    def parse_qtype(self):
        qname = self.parse_qname()
        parameters = []
        if self.l.try_get('LPAR'):
            parameters = self.parse_qtype_comma_list()
            self.l.get_only('RPAR')
        return QualifiedType(qname, parameters)

    def parse_qtype_comma_list(self):
        l = []
        more = True
        while more:
            l.append(self.parse_qtype())
            more = self.l.try_get('COMMA')
        return l

    def parse_io_qtype(self):
        is_mutable = self.l.try_get('MUTABLE')
        is_root = self.l.try_get('ANY')
        if self.l.try_get('LIKE'):
            if self.l.get_only('ME'):
                if is_mutable:
                    qt = QualifiedType(self.me) # Set by parse_class_declaration
                else:
                    qt = QualifiedType(self.like_me) # Set by parse_class_declaration
            else:
                self.report_syntax_error('"like" can only be followed by "me"')
        else:
            qt = self.parse_qtype()
        qt.is_mutable = is_mutable
        qt.is_root = is_root
        return qt

    def parse_formal_group_declaration(self):
        ids = self.parse_id_comma_list()
        self.l.get_only('COLON')
        is_in = self.l.try_get('IN') != None
        is_out = self.l.try_get('OUT') != None
        qtype = self.parse_io_qtype()
        default_value = None
        if self.l.try_get('EQ'):
            default_value = self.l.get()[1]
            if 1 < len(ids):
                self.report_semantics_warning('default value specified for multiple formals')
        return [ParameterDeclaration(id, qtype, is_in, is_out, default_value) for id in ids]

    def parse_formals(self):
        me = None
        formals = []
        if self.l.try_get('LPAR'):
            expecting_formal = True
            if self.l.try_get('MYCLASS'):
                me = None
                expecting_formal = self.l.try_get('SEMICOL')
            elif self.l.try_get('ME'):
                me = []
                if self.l.try_get('COLON'):
                    if self.l.try_get('IN'): me.append('in')
                    if self.l.try_get('OUT'): me.append('out')
                    if self.l.try_get('MUTABLE'): me.append('mutable')
                    # FIXME: syntax error if none found
                expecting_formal = self.l.try_get('SEMICOL')
            while expecting_formal:
                formals += self.parse_formal_group_declaration()
                expecting_formal = self.l.try_get('SEMICOL')
            self.l.get_only('RPAR')
        return me, formals

    def parse_method_qualifiers(self):
        qualifiers = []
        if self.l.try_get('IS'):
            while self.l.peek()[0] != 'SEMICOL':
                k, q = self.l.get()
                if q in ['public', 'private', 'protected',
                         'virtual', 'static',
                         'deferred', 'redefined']:
                    qualifiers.append(q)
                else:
                    self.report_syntax_error('expecting qualifier, got "' + q + '"')
        return qualifiers

    def parse_method(self):
        k, name = self.l.get_only('ID')
        me, formals = self.parse_formals()
        return_qtype = self.parse_io_qtype() if self.l.try_get('RETURNS') else None
        raises = self.parse_qtype_comma_list() if self.l.try_get('RAISES') else []
        qualifiers = self.parse_method_qualifiers()
        self.l.get_only('SEMICOL')
        return MethodDeclaration(name, me, formals, return_qtype, raises, qualifiers)

    def parse_declaration_end(self, is_end_required, expected_qname):
        if not self.l.try_get('END'):
            if is_end_required:
                self.report_syntax_error('expecting END')
        if self.l.peek()[0] == 'ID':
            qname = self.parse_qname()
            if qname.name != expected_qname.name or\
               (qname.package and expected_qname.package and qname.package != expected_qname.package):
                self.report_semantics_warning('expecting "' + str(expected_qname) +\
                                              '", got "' + str(qname) + '"')
        self.l.get_only('SEMICOL')

    def parse_field_group_declaration(self):
        names = self.parse_id_comma_list()
        self.l.get_only('COLON')
        qtype = self.parse_qtype()
        if self.l.try_get('LBRACKET'):
            qtype.dim = [ self.parse_constant() ]
            while self.l.try_get('COMMA'):
                qtype.dim.append(self.parse_constant())
            self.l.get_only('RBRACKET')
        return FieldGroupDeclaration(names, qtype)

    def parse_qualified_method_declaration(self):
        method_name = self.l.get_only('ID')[1]
        self.l.get_only('FROM')
        if self.l.try_get('CLASS'):
            class_name = self.l.get_only('ID')[1]
            self.l.get_only('FROM')
            package_name = self.l.get_only('ID')[1]
        elif self.l.try_get('PACKAGE'):
            class_name = None
            package_name = self.l.get_only('ID')
        else:
            n = self.l.try_get('ID')[1]
            if self.l.try_get('FROM'):
                class_name = n
                package_name = self.l.get_only('ID')
            else:
                class_name = None
                package_name = n
        me, formals = self.parse_formals()
        return QualifiedMethod(method_name, class_name, package_name, me, formals)

    def parse_template_specialization(self):
        name = self.parse_qname()
        self.l.get_only('LPAR')
        parameters = []
        more = True
        while more:
            parameters.append(self.parse_qtype())
            more = self.l.try_get('COMMA')
        self.l.get_only('RPAR')
        return name, parameters

    def parse_class_declaration(self, class_qualifiers):
        # class_qualifiers <= { deferred }
        self.l.get_only('CLASS')

        qname = self.parse_qname()
        self.me = qname

        if self.l.try_get('INSTANTIATES'):
            template, parameters = self.parse_template_specialization()
            self.l.get_only('SEMICOL')
            return None

        parameters = []
        if 'generic' in class_qualifiers:
            self.l.get_only('LPAR')
            more = True
            while more:
                k, parameter_name = self.l.get_only('ID')
                self.l.get_only('AS')
                parameter_constraint =  self.parse_qtype() if not self.l.try_get('ANY') else None
                parameters.append((parameter_name, parameter_constraint))
                more = self.l.try_get('SEMICOL')
            self.l.get_only('RPAR')

        base = self.parse_qtype() if self.l.try_get('INHERITS') else None

        self.like_me = base or qname

        uses = self.parse_qtype_comma_list() if self.l.try_get('USES') else []
        raises = self.parse_qtype_comma_list() if self.l.try_get('RAISES') else []

        nested_declarations = []
        while self.l.peek()[0] in ['CLASS', 'PRIVATE', 'DEFERRED', 'GENERIC']:
            nested_class_qualifiers = self.parse_qualifiers_opt()
            if self.l.peek()[0] == 'CLASS':
                nested_declarations.append(self.parse_class_declaration(nested_class_qualifiers))
            else:
                self.parse_class_forward_declaration_group(is_private) # TODO: keep

        self.l.get_only('IS')

        methods = []
        while not self.l.peek()[0] in ['FIELDS', 'FRIENDS', 'END']:
            methods.append(self.parse_method())

        fields = []
        if self.l.try_get('FIELDS'):
            while self.l.peek()[0] == 'ID':
                g = self.parse_field_group_declaration()
                if self.l.try_get('IS'):
                    k, visibility = self.l.get()
                    if visibility in ['public', 'protected', 'private']:
                        g.visibility = visibility
                    else:
                        self.report_semantics_warning('invalid visibility: ' + visibility)
                fields.append(g)
                self.l.get_only('SEMICOL')

        friends = []
        if self.l.try_get('FRIENDS'):
            more = True
            while more:
                lookahead = self.l.peek()
                if lookahead[0] == 'CLASS':
                    self.l.get_only('CLASS')
                    friends.append(self.parse_qtype())
                elif lookahead[0] == 'ID':
                    friends.append(self.parse_qualified_method_declaration())
                more = self.l.try_get('COMMA')

        self.parse_declaration_end(True, qname)

        return ClassDeclaration(qname, parameters,
                                base,
                                uses, raises,
                                nested_declarations,
                                methods, fields, friends,
                                class_qualifiers)

    def parse_class_forward_declaration_group(self, qualifiers):
        self.l.get_only('CLASS')
        g = []
        more = True
        while more:
            qname = self.parse_qname()
            if self.l.try_get('INSTANTIATES'):
                template, parameters = self.parse_template_specialization()
                g.append(SpecializationDeclaration(qname, template, parameters, qualifiers))
            else:
                g.append(ClassForwardDeclaration(qname, qualifiers))
            more = self.l.try_get('COMMA')
        self.l.get_only('SEMICOL')
        return g

    def parse_alias_declaration(self, is_private):
        self.l.get_only('ALIAS')
        k, name = self.l.get_only('ID')
        self.l.get_only('IS')
        aliased = self.parse_qtype()
        self.l.get_only('SEMICOL')
        return AliasDeclaration(name, aliased, is_private)

    def parse_enumeration_declaration(self, is_private):
        self.l.get_only('ENUMERATION')
        qname = self.parse_qname()
        self.l.get_only('IS')
        members = self.parse_id_comma_list()
        self.parse_declaration_end(False, qname)
        return EnumerationDeclaration(qname, members, is_private)

    def parse_pointer_declaration(self, is_private):
        self.l.get_only('POINTER')
        k, name = self.l.get_only('ID')
        self.l.get_only('TO')
        pointee = self.parse_qtype()
        self.l.get_only('SEMICOL')
        return PointerDeclaration(name, pointee, is_private)

    def parse_imported_declaration(self):
        self.l.get_only('IMPORTED')
        qt = self.parse_qtype()
        self.l.get_only('SEMICOL')
        return ImportedDeclaration(qt)

    def parse_primitive_declaration(self):
        self.l.get_only('PRIMITIVE')
        k, name = self.l.get_only('ID')
        base = None
        if self.l.try_get('INHERITS'):
            base = self.parse_qtype()
        self.l.get_only('SEMICOL')
        return PrimitiveDeclaration(name, base)

    def parse_exception_declaration(self):
        self.l.get_only('EXCEPTION')
        k, name = self.l.get_only('ID')
        base = None
        if self.l.try_get('INHERITS'):
            base = self.parse_qtype()
        self.l.get_only('SEMICOL')
        return ExceptionDeclaration(name, base)

    def parse_qualifiers_opt(self):
        qualifiers = []
        while True:
            if self.l.try_get('DEFERRED'):
                qualifiers.append('deferred')
            elif self.l.try_get('GENERIC'):
                qualifiers.append('generic')
            elif self.l.try_get('PRIVATE'):
                qualifiers.append('private')
            else:
                break
        return qualifiers

    def parse_package_declaration(self, package_qualifiers):
        self.l.get_only('PACKAGE')
        qname = self.parse_qname()
        uses = self.parse_qtype_comma_list() if self.l.try_get('USES') else []
        self.l.get_only('IS')
        declarations = []
        while True:
            qualifiers = self.parse_qualifiers_opt()
            k, v = self.l.peek()
            if k in 'CLASS':
                declarations += self.parse_class_forward_declaration_group(qualifiers)
            else:
                is_private = False
                for q in qualifiers:
                    if q == 'private':
                        is_private = True
                    else:
                        self.report_syntax_error('unexpected qualifier: ' + q)
                if k == 'ALIAS':
                    declarations.append(self.parse_alias_declaration(is_private))
                elif k == 'ENUMERATION':
                    declarations.append(self.parse_enumeration_declaration(is_private))
                elif k== 'POINTER':
                    declarations.append(self.parse_pointer_declaration(is_private))
                else:
                    if len(qualifiers) != 0: self.report_syntax_error('unexpected qualifiers')
                    if k == 'IMPORTED':
                        declarations.append(self.parse_imported_declaration())
                    elif k == 'PRIMITIVE':
                        declarations.append(self.parse_primitive_declaration())
                    elif k == 'EXCEPTION':
                        declarations.append(self.parse_exception_declaration())
                    elif k == 'ID':
                        declarations.append(self.parse_method())
                    else:
                        break
        self.parse_declaration_end(True, qname)
        return PackageDeclaration(qname, uses, declarations)

    def parse_schema_declaration(self, schema_qualifiers):
        self.l.get_only('SCHEMA')
        qname = self.parse_qname()
        self.l.get_only('IS')
        content = []
        while self.l.try_get('PACKAGE'):
            content.append(self.l.get_only('ID'))
            self.l.get_only('SEMICOL')
        self.parse_declaration_end(True, qname)
        return SchemaDeclaration(qname, schema_qualifiers, content)

    def parse_executable_declaration(self):
        self.l.get_only('EXECUTABLE')
        k, name = self.l.get_only('ID')
        self.l.get_only('IS')
        self.l.get_only('EXECUTABLE')
        x = self.l.get_only('ID')
        self.l.get_only('IS')
        x = self.l.get_only('ID')
        self.l.get_only('SEMICOL')
        self.l.get_only('END')
        self.l.get_only('SEMICOL')
        self.l.get_only('END')
        self.l.get_only('SEMICOL')
        return ExecutableDeclaration(name)

    def parse(self):
        declarations = []
        while self.l.peek() != None:
            qualifiers = self.parse_qualifiers_opt()
            k, v = self.l.peek()
            if k == 'CLASS':
                declarations.append(self.parse_class_declaration(qualifiers))
            elif k == 'PACKAGE':
                declarations.append(self.parse_package_declaration(qualifiers))
            elif k == 'SCHEMA':
                declarations.append(self.parse_schema_declaration(qualifiers))
            elif k == 'EXECUTABLE':
                if len(qualifiers) != 0:
                    self.report_syntax_error('unexpected qualifiers: "' + str(qualifiers) + '"')
                declarations.append(self.parse_executable_declaration())
            else:
                self.report_syntax_error('unexpected token: "' + k + '"')
                self.l.get() # Skip
        return Document(declarations)

##
def main(args):
    exit_code = 0
    for n in args[1:]:
        print(n)
        f = open(n)
        # try:
        p = Parser(Lexer(f.read()))
        d = p.parse()
        # print d
        # except:
        #     exit_code = 1
        f.close()
    return exit_code

if __name__ == "__main__":
    sys.exit(main(sys.argv))
