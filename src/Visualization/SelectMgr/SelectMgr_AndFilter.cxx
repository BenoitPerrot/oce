// Copyright (c) 1998-1999 Matra Datavision
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

#include <Visualization/SelectMgr/SelectMgr_EntityOwner.hxx>
#include <Visualization/SelectMgr/SelectMgr_AndFilter.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(SelectMgr_AndFilter)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectMgr_CompositionFilter),
  STANDARD_TYPE(SelectMgr_Filter),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(SelectMgr_AndFilter)
IMPLEMENT_DOWNCAST(SelectMgr_AndFilter,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(SelectMgr_AndFilter)

#include <Visualization/SelectMgr/SelectMgr_Filter.hxx>
#include <Visualization/SelectMgr/SelectMgr_ListIteratorOfListOfFilter.hxx>

SelectMgr_AndFilter::SelectMgr_AndFilter()
{
}
Standard_Boolean SelectMgr_AndFilter::IsOk(const Handle(SelectMgr_EntityOwner)& anobj) const 
{
  SelectMgr_ListIteratorOfListOfFilter it(myFilters);
  for ( ; it.More();it.Next()) 
    if(!it.Value()->IsOk(anobj)) 
      return Standard_False;
  return Standard_True;
}


