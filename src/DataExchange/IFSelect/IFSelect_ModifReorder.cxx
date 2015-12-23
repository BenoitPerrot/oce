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

#include <DataExchange/IFSelect/IFSelect_ContextModif.hxx>
#include <DataExchange/Interface/Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Interface_Protocol.hxx>
#include <DataExchange/Interface/Interface_CopyTool.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_ModifReorder.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_ModifReorder)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Modifier),
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_ModifReorder)
IMPLEMENT_DOWNCAST(IFSelect_ModifReorder,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_ModifReorder)
#include <DataExchange/Interface/Interface_ShareTool.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>

IFSelect_ModifReorder::IFSelect_ModifReorder (const Standard_Boolean rootlast)
    : IFSelect_Modifier (Standard_True)    {  thertl = rootlast;  }

    void  IFSelect_ModifReorder::Perform (IFSelect_ContextModif& ctx, 
                                          const Handle(Interface_InterfaceModel)& target,
                                          const Handle(Interface_Protocol)& /*protocol*/, 
                                          Interface_CopyTool& /*TC*/) const
{
  Interface_ShareTool sht (ctx.OriginalGraph());
  Interface_EntityIterator list = sht.All (ctx.OriginalModel(),thertl);
  target->ClearEntities();
  for (list.Start(); list.More(); list.Next())  target->AddEntity (list.Value());
}

TCollection_AsciiString  IFSelect_ModifReorder::Label () const
{
  Standard_CString astr = (Standard_CString ) ( thertl ? "Reorder, Roots last" : "Reorder, Roots first");
  return TCollection_AsciiString( astr ) ;
//    ( thertl ? "Reorder, Roots last" : "Reorder, Roots first");
}
