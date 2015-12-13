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

#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_DispPerOne.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_DispPerOne)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Dispatch),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_DispPerOne)
IMPLEMENT_DOWNCAST(IFSelect_DispPerOne,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_DispPerOne)
#include <IFSelect_Selection.hxx>
#include <IFGraph_SCRoots.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>


//  Genere un paquet par racine (strong comp.) locale a la liste transmise


IFSelect_DispPerOne::IFSelect_DispPerOne ()    {  }

    TCollection_AsciiString  IFSelect_DispPerOne::Label () const
{  return TCollection_AsciiString ("One File per Input Entity");  }


    Standard_Boolean  IFSelect_DispPerOne::LimitedMax
  (const Standard_Integer nbent, Standard_Integer& pcount) const 
{  pcount = nbent;  return Standard_True;  }

    Standard_Integer  IFSelect_DispPerOne::PacketsCount
  (const Interface_Graph& G, Standard_Integer& pcount) const 
{  pcount = G.Size();  return Standard_True;  }

    void  IFSelect_DispPerOne::Packets
  (const Interface_Graph& G, IFGraph_SubPartsIterator& packs) const 
{
  IFGraph_SCRoots packsc(G,Standard_False);  // OK pour SubPartsIterator
  packsc.SetLoad();
  packsc.GetFromIter(FinalSelection()->UniqueResult(G));
//   SCRoots a initie la resolution : decoupage en StrongComponants + selection
//   des Racines. Chaque Racine correspond a un Packet. CQFD
  packs.GetParts(packsc);
}
