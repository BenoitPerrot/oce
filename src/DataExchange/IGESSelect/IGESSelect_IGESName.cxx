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
#include <DataExchange/IGESSelect/IGESSelect_IGESName.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_IGESName)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Signature),
  STANDARD_TYPE(Interface_SignType),
  STANDARD_TYPE(MoniTool_SignText),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_IGESName)
IMPLEMENT_DOWNCAST(IGESSelect_IGESName,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_IGESName)
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <Interface_Macros.hxx>

static char falsetype [] = "?";
static char voidlabel [] = "";



    IGESSelect_IGESName::IGESSelect_IGESName ()
    : IFSelect_Signature ("IGES Name (Short Label)")      {  }

    Standard_CString  IGESSelect_IGESName::Value
  (const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& /*model*/) const
{
  DeclareAndCast(IGESData_IGESEntity,igesent,ent);
  if (igesent.IsNull()) return &falsetype[0];
  Handle(TCollection_HAsciiString) label = igesent->ShortLabel();
  if (label.IsNull()) return &voidlabel[0];
  return label->ToCString();
}
