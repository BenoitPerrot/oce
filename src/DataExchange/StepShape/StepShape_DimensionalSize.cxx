// Created on: 2000-04-18
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <DataExchange/StepRepr/StepRepr_ShapeAspect.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_DimensionalSize)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_DimensionalSize)
IMPLEMENT_DOWNCAST(StepShape_DimensionalSize,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_DimensionalSize)

//=======================================================================
//function : StepShape_DimensionalSize
//purpose  : 
//=======================================================================

StepShape_DimensionalSize::StepShape_DimensionalSize ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_DimensionalSize::Init (const Handle(StepRepr_ShapeAspect) &aAppliesTo,
                                      const Handle(TCollection_HAsciiString) &aName)
{

  theAppliesTo = aAppliesTo;

  theName = aName;
}

//=======================================================================
//function : AppliesTo
//purpose  : 
//=======================================================================

Handle(StepRepr_ShapeAspect) StepShape_DimensionalSize::AppliesTo () const
{
  return theAppliesTo;
}

//=======================================================================
//function : SetAppliesTo
//purpose  : 
//=======================================================================

void StepShape_DimensionalSize::SetAppliesTo (const Handle(StepRepr_ShapeAspect) &aAppliesTo)
{
  theAppliesTo = aAppliesTo;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepShape_DimensionalSize::Name () const
{
  return theName;
}

//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepShape_DimensionalSize::SetName (const Handle(TCollection_HAsciiString) &aName)
{
  theName = aName;
}
