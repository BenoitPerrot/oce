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

#include <StepAP214_HArray1OfExternalIdentificationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_AppliedExternalIdentificationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ExternalIdentificationAssignment),
  STANDARD_TYPE(StepBasic_IdentificationAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_AppliedExternalIdentificationAssignment)
IMPLEMENT_DOWNCAST(StepAP214_AppliedExternalIdentificationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_AppliedExternalIdentificationAssignment)

//=======================================================================
//function : StepAP214_AppliedExternalIdentificationAssignment
//purpose  : 
//=======================================================================

StepAP214_AppliedExternalIdentificationAssignment::StepAP214_AppliedExternalIdentificationAssignment ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepAP214_AppliedExternalIdentificationAssignment::Init (const Handle(TCollection_HAsciiString) &aIdentificationAssignment_AssignedId,
                                                              const Handle(StepBasic_IdentificationRole) &aIdentificationAssignment_Role,
                                                              const Handle(StepBasic_ExternalSource) &aExternalIdentificationAssignment_Source,
                                                              const Handle(StepAP214_HArray1OfExternalIdentificationItem) &aItems)
{
  StepBasic_ExternalIdentificationAssignment::Init(aIdentificationAssignment_AssignedId,
                                                   aIdentificationAssignment_Role,
                                                   aExternalIdentificationAssignment_Source);

  theItems = aItems;
}

//=======================================================================
//function : Items
//purpose  : 
//=======================================================================

Handle(StepAP214_HArray1OfExternalIdentificationItem) StepAP214_AppliedExternalIdentificationAssignment::Items () const
{
  return theItems;
}

//=======================================================================
//function : SetItems
//purpose  : 
//=======================================================================

void StepAP214_AppliedExternalIdentificationAssignment::SetItems (const Handle(StepAP214_HArray1OfExternalIdentificationItem) &aItems)
{
  theItems = aItems;
}
