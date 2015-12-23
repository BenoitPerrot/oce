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

#include <IGESSelect_ViewSorter.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <DataExchange/IFGraph/IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESSelect_DispPerSingleView.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_DispPerSingleView)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Dispatch),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_DispPerSingleView)
IMPLEMENT_DOWNCAST(IGESSelect_DispPerSingleView,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_DispPerSingleView)
#include <DataExchange/IFSelect/IFSelect_Selection.hxx>
#include <IGESData_IGESModel.hxx>
#include <DataExchange/IFSelect/IFSelect_PacketList.hxx>
#include <Interface_Macros.hxx>


IGESSelect_DispPerSingleView::IGESSelect_DispPerSingleView ()
      {  thesorter = new IGESSelect_ViewSorter;  }

    TCollection_AsciiString  IGESSelect_DispPerSingleView::Label () const
{
  return TCollection_AsciiString("One File per single View or Drawing Frame");
}


    void  IGESSelect_DispPerSingleView::Packets
  (const Interface_Graph& G, IFGraph_SubPartsIterator& packs) const
{
  if (FinalSelection().IsNull()) return;
  Interface_EntityIterator list = FinalSelection()->UniqueResult(G);
  thesorter->SetModel (GetCasted(IGESData_IGESModel,G.Model()));
  thesorter->Clear();
  thesorter->AddList (list.Content());
  thesorter->SortSingleViews(Standard_True);
  Handle(IFSelect_PacketList) sets = thesorter->Sets(Standard_True);

  packs.SetLoad();
  Standard_Integer nb = sets->NbPackets();
  for (Standard_Integer i = 1; i <= nb; i ++) {
    packs.AddPart();
    packs.GetFromIter (sets->Entities(i));
  }
}


    Standard_Boolean  IGESSelect_DispPerSingleView::CanHaveRemainder () const
      {  return Standard_True;  }

    Interface_EntityIterator  IGESSelect_DispPerSingleView::Remainder
  (const Interface_Graph& G) const
{
  if (thesorter->NbEntities() == 0) {
    Interface_EntityIterator list;
    if (FinalSelection().IsNull()) return list;
    list = FinalSelection()->UniqueResult(G);
    thesorter->Clear();
    thesorter->Add (list.Content());
    thesorter->SortSingleViews(Standard_True);
  }
  return thesorter->Sets(Standard_True)->Duplicated (0,Standard_False);
}
