// Created on: 1997-03-06
// Created by: Robert COUBLANC
// Copyright (c) 1997-1999 Matra Datavision
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

#include <SelectMgr_EntityOwner.hxx>
#include <AIS_TypeFilter.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(AIS_TypeFilter)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectMgr_Filter),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AIS_TypeFilter)
IMPLEMENT_DOWNCAST(AIS_TypeFilter,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AIS_TypeFilter)
#include <AIS_InteractiveObject.hxx>

AIS_TypeFilter::AIS_TypeFilter(const AIS_KindOfInteractive TheKind):
myKind(TheKind){}

Standard_Boolean AIS_TypeFilter::IsOk(const Handle(SelectMgr_EntityOwner)& anObj) const 
{
  if(Handle(AIS_InteractiveObject)::DownCast(anObj->Selectable()).IsNull()) 
    return Standard_False;
  
//#ifndef OCCT_DEBUG
  Handle(SelectMgr_SelectableObject) aSelectableObject = anObj->Selectable() ;
  return ((Handle(AIS_InteractiveObject)&) aSelectableObject)->Type()== myKind;
//#else
//  return ((Handle(AIS_InteractiveObject)&)anObj->Selectable())->Type()== myKind;
//#endif
}
