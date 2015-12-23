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

#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Interface/Interface_InterfaceModel.hxx>
#include <DataExchange/IFSelect/IFSelect_SignType.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SignType)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Signature),
  STANDARD_TYPE(Interface_SignType),
  STANDARD_TYPE(MoniTool_SignText),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SignType)
IMPLEMENT_DOWNCAST(IFSelect_SignType,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SignType)
#include <Foundation/Standard/Standard_Type.hxx>
#include <DataExchange/Interface/Interface_Macros.hxx>

static Standard_CString nulsign = "";


    IFSelect_SignType::IFSelect_SignType (const Standard_Boolean nopk)
    : IFSelect_Signature ((Standard_CString ) (nopk ? "Class Type" : "Dynamic Type") ) ,
      thenopk (nopk)
{}

    Standard_CString IFSelect_SignType::Value
  (const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& /*model*/) const
{
  if (ent.IsNull()) return nulsign;
  DeclareAndCast(Standard_Type,atype,ent);
  if (atype.IsNull()) atype = ent->DynamicType();
  Standard_CString tn = atype->Name();
  if (!thenopk) return tn;
  for (int i = 0; tn[i] != '\0'; i ++) {
    if (tn[i] == '_') return &tn[i+1];
  }
  return tn;
}
