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

#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectSharing.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SelectSharing)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SelectSharing)
IMPLEMENT_DOWNCAST(IFSelect_SelectSharing,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SelectSharing)
#include <Interface_Graph.hxx>
#include <Interface_GraphContent.hxx>


IFSelect_SelectSharing::IFSelect_SelectSharing ()    {  }


// Entites en partageant d autres (a 1 niveau et au sens Strict)

    Interface_EntityIterator  IFSelect_SelectSharing::RootResult
  (const Interface_Graph& G) const 
{
  Interface_EntityIterator iter = InputResult(G);
  Interface_Graph GG(G);
  for (iter.Start(); iter.More(); iter.Next()) {
    GG.GetFromIter(G.Sharings(iter.Value()),0);
  }
  return Interface_GraphContent(GG);
}

    TCollection_AsciiString  IFSelect_SelectSharing::Label () const
      {  return TCollection_AsciiString("Sharing Entities (one level)");  }
