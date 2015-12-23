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
#include <DataExchange/IFSelect/IFSelect_SelectUnknownEntities.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SelectUnknownEntities)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectExtract),
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SelectUnknownEntities)
IMPLEMENT_DOWNCAST(IFSelect_SelectUnknownEntities,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SelectUnknownEntities)


IFSelect_SelectUnknownEntities::IFSelect_SelectUnknownEntities ()    {  }

    Standard_Boolean  IFSelect_SelectUnknownEntities::Sort
  (const Standard_Integer , const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& model) const 
      {  return model->IsUnknownEntity(model->Number(ent));  }

    TCollection_AsciiString  IFSelect_SelectUnknownEntities::ExtractLabel () const
      {  return TCollection_AsciiString("Unrecognized type Entities");  }
