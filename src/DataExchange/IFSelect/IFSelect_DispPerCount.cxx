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

#include <DataExchange/IFSelect/IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <DataExchange/IFGraph/IFGraph_SubPartsIterator.hxx>
#include <DataExchange/IFSelect/IFSelect_DispPerCount.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_DispPerCount)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Dispatch),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_DispPerCount)
IMPLEMENT_DOWNCAST(IFSelect_DispPerCount,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_DispPerCount)
#include <DataExchange/IFSelect/IFSelect_Selection.hxx>
#include <DataExchange/IFGraph/IFGraph_SCRoots.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>


IFSelect_DispPerCount::IFSelect_DispPerCount ()    {  }

    Handle(IFSelect_IntParam)  IFSelect_DispPerCount::Count () const 
      {  return thecount;  }

    void  IFSelect_DispPerCount::SetCount
  (const Handle(IFSelect_IntParam)& pcount)
      {  thecount = pcount;  }

    Standard_Integer  IFSelect_DispPerCount::CountValue () const
{
  Standard_Integer pcount = 0;
  if (!thecount.IsNull()) pcount = thecount->Value();
  if (pcount <= 0) pcount = 1;    // option prise par defaut
  return pcount;
}

    TCollection_AsciiString  IFSelect_DispPerCount::Label () const
{
  TCollection_AsciiString lab(CountValue());
  lab.Insert(1,"One File per ");
  lab.AssignCat(" Entities");
  return lab;
}


    Standard_Boolean  IFSelect_DispPerCount::LimitedMax
  (const Standard_Integer nbent, Standard_Integer& pcount) const 
{
  pcount = 1 + nbent / CountValue();
  return Standard_True;
}

    Standard_Integer  IFSelect_DispPerCount::PacketsCount
  (const Interface_Graph& G, Standard_Integer& /*count*/) const 
      {  return 1 + G.Size() / CountValue();  }

    void  IFSelect_DispPerCount::Packets
  (const Interface_Graph& G, IFGraph_SubPartsIterator& packs) const 
{
//  Ressemble a DispPerOne, mais fait un AddPart tous les "count" racines
  Standard_Integer pcount = CountValue();

  IFGraph_SCRoots roots(G,Standard_False);
  roots.SetLoad();
  roots.GetFromIter(FinalSelection()->UniqueResult(G));
//   SCRoots a initie la resolution : decoupage en StrongComponants + selection
//   des racines. Un paquet correspond des lors a <count> racines
//   Donc, il faut iterer sur les Parts de roots et les prendre par <count>

  Standard_Integer i = 0;
  for (roots.Start(); roots.More(); roots.Next()) {
    if (i == 0) packs.AddPart();
    i ++;  if (i >= pcount) i = 0;  // regroupement selon "count"
    packs.GetFromIter(roots.Entities());
  }
}
