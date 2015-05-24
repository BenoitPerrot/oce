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

#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepShape_DimensionalCharacteristic.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_DimensionalCharacteristicRepresentation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_DimensionalCharacteristicRepresentation)
IMPLEMENT_DOWNCAST(StepShape_DimensionalCharacteristicRepresentation,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_DimensionalCharacteristicRepresentation)

//=======================================================================
//function : StepShape_DimensionalCharacteristicRepresentation
//purpose  : 
//=======================================================================

StepShape_DimensionalCharacteristicRepresentation::StepShape_DimensionalCharacteristicRepresentation ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_DimensionalCharacteristicRepresentation::Init (const StepShape_DimensionalCharacteristic &aDimension,
                                                              const Handle(StepShape_ShapeDimensionRepresentation) &aRepresentation)
{

  theDimension = aDimension;

  theRepresentation = aRepresentation;
}

//=======================================================================
//function : Dimension
//purpose  : 
//=======================================================================

StepShape_DimensionalCharacteristic StepShape_DimensionalCharacteristicRepresentation::Dimension () const
{
  return theDimension;
}

//=======================================================================
//function : SetDimension
//purpose  : 
//=======================================================================

void StepShape_DimensionalCharacteristicRepresentation::SetDimension (const StepShape_DimensionalCharacteristic &aDimension)
{
  theDimension = aDimension;
}

//=======================================================================
//function : Representation
//purpose  : 
//=======================================================================

Handle(StepShape_ShapeDimensionRepresentation) StepShape_DimensionalCharacteristicRepresentation::Representation () const
{
  return theRepresentation;
}

//=======================================================================
//function : SetRepresentation
//purpose  : 
//=======================================================================

void StepShape_DimensionalCharacteristicRepresentation::SetRepresentation (const Handle(StepShape_ShapeDimensionRepresentation) &aRepresentation)
{
  theRepresentation = aRepresentation;
}
