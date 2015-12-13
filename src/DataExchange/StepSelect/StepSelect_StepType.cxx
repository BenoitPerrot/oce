// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <StepData_Protocol.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Protocol.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepSelect_StepType.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepSelect_StepType)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Signature),
  STANDARD_TYPE(Interface_SignType),
  STANDARD_TYPE(MoniTool_SignText),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepSelect_StepType)
IMPLEMENT_DOWNCAST(StepSelect_StepType,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepSelect_StepType)
#include <TColStd_SequenceOfAsciiString.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_UndefinedEntity.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_Macros.hxx>


static TCollection_AsciiString lastvalue;


    StepSelect_StepType::StepSelect_StepType ()
    : IFSelect_Signature ("Step Type")      {  }

    void  StepSelect_StepType::SetProtocol
  (const Handle(Interface_Protocol)& proto)
{
  DeclareAndCast(StepData_Protocol,newproto,proto);
  if (newproto.IsNull()) Interface_InterfaceError::Raise("StepSelect_StepType");
  theproto = newproto;
  thelib.Clear();
  thelib.AddProtocol (theproto);
  thename.Clear();
  thename.AssignCat ("Step Type (Schema ");
  thename.AssignCat (theproto->SchemaName());
  thename.AssignCat (")");
}

    Standard_CString  StepSelect_StepType::Value
  (const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& /*model*/) const
{
  lastvalue.Clear();
  Handle(StepData_ReadWriteModule) module;
  Standard_Integer CN;
  Standard_Boolean ok = thelib.Select (ent,module,CN);
  if (!ok) {
    lastvalue.AssignCat ("..NOT FROM SCHEMA ");
    lastvalue.AssignCat (theproto->SchemaName());
    lastvalue.AssignCat ("..");
  } else {
    Standard_Boolean plex = module->IsComplex(CN);
    if (!plex) lastvalue = module->StepType(CN);
    else {
      lastvalue.AssignCat ("(");
      TColStd_SequenceOfAsciiString list;
      module->ComplexType (CN,list);
      Standard_Integer nb = list.Length();
      if (nb == 0) lastvalue.AssignCat ("..COMPLEX TYPE..");
      for (Standard_Integer i = 1; i <= nb; i ++) {
	if (i > 1) lastvalue.AssignCat (",");
	lastvalue.AssignCat (list.Value(i).ToCString());
      }
      lastvalue.AssignCat (")");
    }
  }
  if (lastvalue.Length() > 0) return lastvalue.ToCString();

  DeclareAndCast(StepData_UndefinedEntity,und,ent);
  if (und.IsNull()) return lastvalue.ToCString();
  if (und->IsComplex()) {
    lastvalue.AssignCat("(");
    while (!und.IsNull()) {
      lastvalue.AssignCat (und->StepType());
      und = und->Next();
      if (!und.IsNull()) lastvalue.AssignCat(",");
    }
    lastvalue.AssignCat(")");
  }
  else return und->StepType();
  return lastvalue.ToCString();
}
