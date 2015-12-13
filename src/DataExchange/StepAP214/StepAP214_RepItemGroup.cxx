// Created on: 2000-05-10
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1

#include <StepRepr_RepresentationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_RepItemGroup)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_Group),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_RepItemGroup)
IMPLEMENT_DOWNCAST(StepAP214_RepItemGroup,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_RepItemGroup)

//=======================================================================
//function : StepAP214_RepItemGroup
//purpose  : 
//=======================================================================

StepAP214_RepItemGroup::StepAP214_RepItemGroup ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepAP214_RepItemGroup::Init (const Handle(TCollection_HAsciiString) &aGroup_Name,
                                   const Standard_Boolean hasGroup_Description,
                                   const Handle(TCollection_HAsciiString) &aGroup_Description,
                                   const Handle(TCollection_HAsciiString) &aRepresentationItem_Name)
{
  StepBasic_Group::Init(aGroup_Name,
                        hasGroup_Description,
                        aGroup_Description);
  theRepresentationItem->Init(aRepresentationItem_Name);
}

//=======================================================================
//function : RepresentationItem
//purpose  : 
//=======================================================================

Handle(StepRepr_RepresentationItem) StepAP214_RepItemGroup::RepresentationItem () const
{
  return theRepresentationItem;
}

//=======================================================================
//function : SetRepresentationItem
//purpose  : 
//=======================================================================

void StepAP214_RepItemGroup::SetRepresentationItem (const Handle(StepRepr_RepresentationItem) &aRepresentationItem)
{
  theRepresentationItem = aRepresentationItem;
}
