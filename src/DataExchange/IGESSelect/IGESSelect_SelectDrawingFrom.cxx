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

#include <DataExchange/Interface/Interface_InterfaceError.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/Interface/Interface_Graph.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IGESSelect/IGESSelect_SelectDrawingFrom.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_SelectDrawingFrom)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_SelectDrawingFrom)
IMPLEMENT_DOWNCAST(IGESSelect_SelectDrawingFrom,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_SelectDrawingFrom)
#include <DataExchange/IGESSelect/IGESSelect_ViewSorter.hxx>
#include <DataExchange/IGESData/IGESData_IGESModel.hxx>
#include <DataExchange/Interface/Interface_Macros.hxx>



IGESSelect_SelectDrawingFrom::IGESSelect_SelectDrawingFrom ()    {  }


    Standard_Boolean  IGESSelect_SelectDrawingFrom::HasUniqueResult () const
      {  return Standard_True;  }

    Interface_EntityIterator  IGESSelect_SelectDrawingFrom::RootResult
  (const Interface_Graph& G) const
{
  Handle(IGESSelect_ViewSorter) sorter = new IGESSelect_ViewSorter;
  sorter->SetModel (GetCasted(IGESData_IGESModel,G.Model()));
  sorter->Clear();
  sorter->AddList (InputResult(G).Content());
  sorter->SortDrawings(G);
  Interface_EntityIterator list;
  Standard_Integer nb = sorter->NbSets(Standard_True);
  for (Standard_Integer i = 1; i <= nb; i ++)
    list.GetOneItem(sorter->SetItem(i,Standard_True));
  return list;
}

    TCollection_AsciiString  IGESSelect_SelectDrawingFrom::Label () const
      {  return TCollection_AsciiString ("Drawings attached");  }
