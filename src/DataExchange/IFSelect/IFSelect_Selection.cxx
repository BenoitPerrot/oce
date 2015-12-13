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

#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_Selection.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_Selection)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_Selection)
IMPLEMENT_DOWNCAST(IFSelect_Selection,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_Selection)
#include <Interface_Graph.hxx>
#include <Interface_GraphContent.hxx>



Standard_Boolean  IFSelect_Selection::HasUniqueResult () const 
      {  return Standard_False;  }    // eminemment redefinissable

// UniqueResult, c est RootResult passe par une Map (-> mis a plat)

    Interface_EntityIterator  IFSelect_Selection::UniqueResult
  (const Interface_Graph& G) const 
{
  Interface_EntityIterator iter = RootResult(G);
  if (HasUniqueResult() || !G.ModeStat()) 
    return iter;
  Interface_Graph GG(G);
  GG.GetFromIter(iter,0);
  return Interface_GraphContent(GG);   // EntityIterator specialise (meme taille)
}

// CompleteResult, c est RootResult + propagation du partage (Shareds)

    Interface_EntityIterator  IFSelect_Selection::CompleteResult
  (const Interface_Graph& G) const 
{
  Interface_EntityIterator iter = RootResult(G);
//  On peut utiliser le Graphe a present
  Interface_Graph GG(G);
  for (iter.Start(); iter.More(); iter.Next()) {
    Handle(Standard_Transient) ent = iter.Value();
    GG.GetFromEntity(ent,Standard_True);    // et voila
  }
  return Interface_GraphContent(GG); // EntityIterator specialise (meme taille)
}
