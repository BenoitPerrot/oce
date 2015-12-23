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

#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/Interface/Interface_Graph.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Interface/Interface_InterfaceModel.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectRoots.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SelectRoots)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectExtract),
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SelectRoots)
IMPLEMENT_DOWNCAST(IFSelect_SelectRoots,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SelectRoots)
#include <DataExchange/IFGraph/IFGraph_Cumulate.hxx>


IFSelect_SelectRoots::IFSelect_SelectRoots ()    {  }


// Refait pour travailler en une fois

    Interface_EntityIterator  IFSelect_SelectRoots::RootResult
  (const Interface_Graph& G) const
{
  Interface_EntityIterator input = InputResult(G);
  Interface_EntityIterator iter;
  IFGraph_Cumulate GC(G);

//  On note dans le graphe : le cumul de chaque ensemble (Entite + Shared tous
//  niveaux). Les Roots initiales comptees une seule fois sont bonnes
  for (input.Start(); input.More(); input.Next()) {
    Handle(Standard_Transient) ent = input.Value();
    GC.GetFromEntity(ent);
  }
//  A present, on retient, parmi les inputs, celles comptees une seule fois
  for (input.Start(); input.More(); input.Next()) {
    Handle(Standard_Transient) ent = input.Value();
    if ((GC.NbTimes(ent) <= 1) == IsDirect()) iter.GetOneItem(ent);
  }
  return iter;
}

    Standard_Boolean  IFSelect_SelectRoots::HasUniqueResult () const
      {  return Standard_True;  }

    Standard_Boolean  IFSelect_SelectRoots::Sort
  (const Standard_Integer , const Handle(Standard_Transient)& ,
   const Handle(Interface_InterfaceModel)& ) const 
      {  return Standard_True;  }

    TCollection_AsciiString  IFSelect_SelectRoots::ExtractLabel () const 
      {  return TCollection_AsciiString("Local Roots");  }
