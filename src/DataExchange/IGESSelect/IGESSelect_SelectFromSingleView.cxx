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
#include <TCollection_AsciiString.hxx>
#include <IGESSelect_SelectFromSingleView.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_SelectFromSingleView)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectDeduct),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_SelectFromSingleView)
IMPLEMENT_DOWNCAST(IGESSelect_SelectFromSingleView,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_SelectFromSingleView)
#include <IGESData_IGESEntity.hxx>
#include <Interface_Macros.hxx>



IGESSelect_SelectFromSingleView::IGESSelect_SelectFromSingleView ()    {  }


    Interface_EntityIterator  IGESSelect_SelectFromSingleView::RootResult
  (const Interface_Graph& G) const
{
  Interface_EntityIterator list;
  Interface_EntityIterator views = InputResult(G);
  if (views.NbEntities() == 0) return list;
  Standard_Integer nb = G.Size();
  Standard_Integer i; // svv Jan11 2000 : porting on DEC
  for (i = 1; i <= nb; i ++) {
//    if (!G.IsPresent(i)) continue;
    DeclareAndCast(IGESData_IGESEntity,igesent,G.Entity(i));
    if (igesent.IsNull()) continue;
    Standard_Integer nv = G.EntityNumber (igesent->View());
    if (nv > 0 && nv <= nb) list.GetOneItem(igesent);
  }
  return list;
}


    TCollection_AsciiString  IGESSelect_SelectFromSingleView::Label () const
{  return TCollection_AsciiString ("Entities attached to a single View");  }
