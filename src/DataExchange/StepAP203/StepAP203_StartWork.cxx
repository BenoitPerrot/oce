// Created on: 1999-11-26
// Created by: Andrey BETENEV
// Copyright (c) 1999 Matra Datavision
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <StepAP203_HArray1OfWorkItem.hxx>
#include <StepBasic_Action.hxx>
#include <StepAP203_StartWork.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP203_StartWork)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ActionAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP203_StartWork)
IMPLEMENT_DOWNCAST(StepAP203_StartWork,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP203_StartWork)

//=======================================================================
//function : StepAP203_StartWork
//purpose  : 
//=======================================================================

StepAP203_StartWork::StepAP203_StartWork ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepAP203_StartWork::Init (const Handle(StepBasic_Action) &aActionAssignment_AssignedAction,
                                const Handle(StepAP203_HArray1OfWorkItem) &aItems)
{
  StepBasic_ActionAssignment::Init(aActionAssignment_AssignedAction);

  theItems = aItems;
}

//=======================================================================
//function : Items
//purpose  : 
//=======================================================================

Handle(StepAP203_HArray1OfWorkItem) StepAP203_StartWork::Items () const
{
  return theItems;
}

//=======================================================================
//function : SetItems
//purpose  : 
//=======================================================================

void StepAP203_StartWork::SetItems (const Handle(StepAP203_HArray1OfWorkItem) &aItems)
{
  theItems = aItems;
}
