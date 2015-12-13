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
#include <IFSelect_SelectUnion.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SelectUnion)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectCombine),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SelectUnion)
IMPLEMENT_DOWNCAST(IFSelect_SelectUnion,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SelectUnion)
#include <IFGraph_Cumulate.hxx>


IFSelect_SelectUnion::IFSelect_SelectUnion ()    {  }


    Interface_EntityIterator  IFSelect_SelectUnion::RootResult
  (const Interface_Graph& G) const 
{
  IFGraph_Cumulate GC(G);
  Standard_Integer nb = NbInputs();
  for (Standard_Integer i = 1; i <= nb; i ++)
    GC.GetFromIter(Input(i)->RootResult(G));
  return GC.Result();
}

    TCollection_AsciiString  IFSelect_SelectUnion::Label () const 
      {  return TCollection_AsciiString("Union (OR)");  }
