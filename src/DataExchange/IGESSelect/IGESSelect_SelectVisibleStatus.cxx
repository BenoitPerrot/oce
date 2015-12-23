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
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IGESSelect/IGESSelect_SelectVisibleStatus.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_SelectVisibleStatus)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectExtract),
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_SelectVisibleStatus)
IMPLEMENT_DOWNCAST(IGESSelect_SelectVisibleStatus,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_SelectVisibleStatus)
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/Interface/Interface_Macros.hxx>



IGESSelect_SelectVisibleStatus::IGESSelect_SelectVisibleStatus ()    {  }


    Standard_Boolean  IGESSelect_SelectVisibleStatus::Sort
  (const Standard_Integer /*rank*/, 
   const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& /*model*/) const
{
  DeclareAndCast(IGESData_IGESEntity,igesent,ent);
  if (igesent.IsNull()) return Standard_False;
  return (igesent->BlankStatus() == 0);
}

    TCollection_AsciiString  IGESSelect_SelectVisibleStatus::ExtractLabel
  () const
      {  return TCollection_AsciiString ("IGES Entity, Status Visible");  }
