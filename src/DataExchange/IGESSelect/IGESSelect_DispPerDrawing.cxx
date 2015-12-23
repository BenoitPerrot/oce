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

#include <DataExchange/IGESSelect/IGESSelect_ViewSorter.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <DataExchange/IFGraph/IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <DataExchange/IGESSelect/IGESSelect_DispPerDrawing.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_DispPerDrawing)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_Dispatch),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_DispPerDrawing)
IMPLEMENT_DOWNCAST(IGESSelect_DispPerDrawing,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_DispPerDrawing)
#include <DataExchange/IFSelect/IFSelect_Selection.hxx>
#include <DataExchange/IGESData/IGESData_IGESModel.hxx>
#include <DataExchange/IFSelect/IFSelect_PacketList.hxx>
#include <Interface_Macros.hxx>



IGESSelect_DispPerDrawing::IGESSelect_DispPerDrawing ()
      {  thesorter = new IGESSelect_ViewSorter;  }

    TCollection_AsciiString  IGESSelect_DispPerDrawing::Label () const
{
  return TCollection_AsciiString("One File per Drawing");
}


    void  IGESSelect_DispPerDrawing::Packets
  (const Interface_Graph& G, IFGraph_SubPartsIterator& packs) const
{
  if (FinalSelection().IsNull()) return;
  Interface_EntityIterator list = FinalSelection()->UniqueResult(G);
  thesorter->SetModel (GetCasted(IGESData_IGESModel,G.Model()));
  thesorter->Clear();
  thesorter->AddList (list.Content());
  thesorter->SortDrawings(G);
  Handle(IFSelect_PacketList) sets = thesorter->Sets(Standard_True);

  packs.SetLoad();
  Standard_Integer nb = sets->NbPackets();
  for (Standard_Integer i = 1; i <= nb; i ++) {
    packs.AddPart();
    packs.GetFromIter (sets->Entities(i));
  }
}


    Standard_Boolean  IGESSelect_DispPerDrawing::CanHaveRemainder () const
      {  return Standard_True;  }

    Interface_EntityIterator  IGESSelect_DispPerDrawing::Remainder
  (const Interface_Graph& G) const
{
  if (thesorter->NbEntities() == 0) {
    Interface_EntityIterator list;
    if (FinalSelection().IsNull()) return list;
    list = FinalSelection()->UniqueResult(G);
    thesorter->Clear();
    thesorter->AddList (list.Content());
    thesorter->SortDrawings(G);
  }
  return thesorter->Sets(Standard_True)->Duplicated (0,Standard_False);
}
