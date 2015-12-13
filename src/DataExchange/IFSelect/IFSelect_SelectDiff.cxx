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
#include <IFSelect_SelectDiff.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SelectDiff)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectControl),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SelectDiff)
IMPLEMENT_DOWNCAST(IFSelect_SelectDiff,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SelectDiff)
#include <IFGraph_Compare.hxx>


IFSelect_SelectDiff::IFSelect_SelectDiff ()    {  }


    Interface_EntityIterator  IFSelect_SelectDiff::RootResult
  (const Interface_Graph& G) const 
{
  IFGraph_Compare GC(G);
  GC.GetFromIter(MainInput()->RootResult(G),Standard_True);    // first
  if (HasSecondInput())
    GC.GetFromIter(SecondInput()->RootResult(G),Standard_False);   // second
  return GC.FirstOnly();
}

    Standard_Boolean  IFSelect_SelectDiff::HasUniqueResult () const 
      {  return Standard_True;  }    // naturellement unique

    TCollection_AsciiString  IFSelect_SelectDiff::Label () const 
      {  return TCollection_AsciiString("Differences");  }
