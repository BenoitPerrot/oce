// Created on: 1999-02-17
// Created by: Pavel DURANDIN
// Copyright (c) 1999-1999 Matra Datavision
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
#include <Interface_InterfaceModel.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <IFSelect_SignAncestor.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SignAncestor)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SignType),
  STANDARD_TYPE(IFSelect_Signature),
  STANDARD_TYPE(Interface_SignType),
  STANDARD_TYPE(MoniTool_SignText),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SignAncestor)
IMPLEMENT_DOWNCAST(IFSelect_SignAncestor,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SignAncestor)
#include <Foundation/Standard/Standard_Type.hxx>
#include <Interface_Macros.hxx>

IFSelect_SignAncestor::IFSelect_SignAncestor (const Standard_Boolean nopk) 
     : IFSelect_SignType (nopk) {  }
     
Standard_Boolean IFSelect_SignAncestor::Matches(const Handle(Standard_Transient)& ent,
						const Handle(Interface_InterfaceModel)& /*model*/,
						const TCollection_AsciiString& text,
						const Standard_Boolean /*exact*/) const
{
  if (ent.IsNull()) return Standard_False;
  DeclareAndCast(Standard_Type,atype,ent);
  if (atype.IsNull()) atype = ent->DynamicType();
  return atype->SubType(text.ToCString());
}
						
