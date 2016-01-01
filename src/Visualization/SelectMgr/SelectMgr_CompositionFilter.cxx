// Created on: 1996-01-29
// Created by: Robert COUBLANC
// Copyright (c) 1996-1999 Matra Datavision
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

#include <Visualization/SelectMgr/SelectMgr_Filter.hxx>
#include <Visualization/SelectMgr/SelectMgr_CompositionFilter.hxx>
#include <Visualization/SelectMgr/SelectMgr_ListIteratorOfListOfFilter.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(SelectMgr_CompositionFilter)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectMgr_Filter),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(SelectMgr_CompositionFilter)
IMPLEMENT_DOWNCAST(SelectMgr_CompositionFilter,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(SelectMgr_CompositionFilter)

#warning myFilters: seeing how it is used, a set seems more appropriate than a list

void SelectMgr_CompositionFilter::Add(const Handle(SelectMgr_Filter)& afilter)
{
  myFilters.push_back(afilter);
}

void SelectMgr_CompositionFilter::Remove(const Handle(SelectMgr_Filter)& afilter)
{
  for (SelectMgr_ListIteratorOfListOfFilter It(myFilters.begin()); It != myFilters.end(); ++It) {
    if (afilter==(*It)){
      myFilters.erase(It);
      return;
    }
  }
}


Standard_Boolean SelectMgr_CompositionFilter::IsEmpty() const
{
  return myFilters.empty();
}

Standard_Boolean SelectMgr_CompositionFilter::IsIn(const Handle(SelectMgr_Filter)& afilter) const
{
  for (auto filter : myFilters)
    if (afilter==filter)
      return Standard_True;
  return Standard_False;

}

void  SelectMgr_CompositionFilter::Clear()
{
  myFilters.clear();
}


Standard_Boolean SelectMgr_CompositionFilter::ActsOn(const TopAbs_ShapeEnum aStandardMode) const
{
  for (auto filter : myFilters) {
    if (filter->ActsOn(aStandardMode))
      return Standard_True;
  }
  
  return Standard_False;
}
