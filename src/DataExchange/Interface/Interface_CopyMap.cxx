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

#include <DataExchange/Interface/Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Interface_InterfaceError.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Interface/Interface_CopyMap.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Interface_CopyMap)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Interface_CopyControl),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Interface_CopyMap)
IMPLEMENT_DOWNCAST(Interface_CopyMap,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Interface_CopyMap)
#include <DataExchange/Interface/Interface_InterfaceError.hxx>

//  CopyMap : rien de plus qu une Map passive


Interface_CopyMap::Interface_CopyMap
  (const Handle(Interface_InterfaceModel)& amodel)
    : theres (0,amodel->NbEntities())
      {  themod = amodel;  }


    void Interface_CopyMap::Clear ()
{
  Standard_Integer nb = theres.Upper();
  Handle(Standard_Transient) bid;  // Null
  for (Standard_Integer i = 1; i <= nb; i ++) theres.SetValue(i,bid);
}

    Handle(Interface_InterfaceModel) Interface_CopyMap::Model () const
      {  return themod;  }

    void Interface_CopyMap::Bind
  (const Handle(Standard_Transient)& ent,
   const Handle(Standard_Transient)& res)
{
  Standard_Integer num = themod->Number(ent);
  if (num == 0 || num > theres.Upper()) Interface_InterfaceError::Raise
    ("CopyMap : Bind, Starting Entity not issued from Starting Model");
  if (!theres.Value(num).IsNull()) Interface_InterfaceError::Raise
    ("CopyMap : Bind, Starting Entity already bound");
  theres.SetValue(num,res);
}


    Standard_Boolean Interface_CopyMap::Search
  (const Handle(Standard_Transient)& ent,
   Handle(Standard_Transient)& res) const
{
  Standard_Integer num = themod->Number(ent);
  if (num == 0) return Standard_False;
  res = theres.Value(num);
  return (!res.IsNull());
}
