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
#include <DataExchange/IGESSelect/IGESSelect_SelectSubordinate.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_SelectSubordinate)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectExtract),
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_SelectSubordinate)
IMPLEMENT_DOWNCAST(IGESSelect_SelectSubordinate,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_SelectSubordinate)
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/Interface/Interface_Macros.hxx>



IGESSelect_SelectSubordinate::IGESSelect_SelectSubordinate
  (const Standard_Integer status)    {  thestatus = status;  }

    Standard_Integer  IGESSelect_SelectSubordinate::Status () const
      {  return thestatus;  }

    Standard_Boolean  IGESSelect_SelectSubordinate::Sort
  (const Standard_Integer, const Handle(Standard_Transient)& ent,
   const Handle(Interface_InterfaceModel)& /*model*/) const
{
  DeclareAndCast(IGESData_IGESEntity,igesent,ent);
  if (igesent.IsNull()) return Standard_False;
  Standard_Integer sub = igesent->SubordinateStatus();
  if (sub == thestatus) return Standard_True;
  if (thestatus == 4 && (sub == 1 || sub == 3)) return Standard_True;
  if (thestatus == 5 && (sub == 2 || sub == 3)) return Standard_True;
  if (thestatus == 6 && sub != 0) return Standard_True;
  return Standard_False;
}

    TCollection_AsciiString IGESSelect_SelectSubordinate::ExtractLabel () const
{
  TCollection_AsciiString lab("IGESEntity, Subordinate ");
  if (thestatus == 0) lab.AssignCat("Independant (0)");
  if (thestatus == 1) lab.AssignCat("Physically only Dependant (1)");
  if (thestatus == 2) lab.AssignCat("Logically only Dependant (2) ");
  if (thestatus == 3) lab.AssignCat("Both Phys. and Log. Dependant (3)");
  if (thestatus == 4) lab.AssignCat("Physically Dependant (1 or 3)");
  if (thestatus == 5) lab.AssignCat("Logically Dependant (2 or 3)");
  if (thestatus == 6) lab.AssignCat("Dependant in any way (1 or 2 or 3)");
  return lab;
}
