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

#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndMassUnit.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ConversionBasedUnitAndMassUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ConversionBasedUnit),
  STANDARD_TYPE(StepBasic_NamedUnit),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ConversionBasedUnitAndMassUnit)
IMPLEMENT_DOWNCAST(StepBasic_ConversionBasedUnitAndMassUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndMassUnit)
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepBasic_MassUnit.hxx>


//=======================================================================
//function : StepBasic_ConversionBasedUnitAndMassUnit
//purpose  : 
//=======================================================================

StepBasic_ConversionBasedUnitAndMassUnit::StepBasic_ConversionBasedUnitAndMassUnit ()
{
}


//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_ConversionBasedUnitAndMassUnit::Init
  (const Handle(StepBasic_DimensionalExponents)& aDimensions)
{
  StepBasic_NamedUnit::Init(aDimensions);
}


//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_ConversionBasedUnitAndMassUnit::Init
  (const Handle(StepBasic_DimensionalExponents)& aDimensions,
   const Handle(TCollection_HAsciiString)& aName,
   const Handle(StepBasic_MeasureWithUnit)& aConversionFactor)
{
  // --- ANDOR componant fields ---
  StepBasic_ConversionBasedUnit::Init(aDimensions, aName, aConversionFactor);
  
  // --- ANDOR componant fields ---
  massUnit = new StepBasic_MassUnit();
  massUnit->Init(aDimensions);
}


//=======================================================================
//function : SetMassUnit
//purpose  : 
//=======================================================================

void StepBasic_ConversionBasedUnitAndMassUnit::SetMassUnit
  (const Handle(StepBasic_MassUnit)& aMassUnit)
{
  massUnit = aMassUnit;
}


//=======================================================================
//function : MassUnit
//purpose  : 
//=======================================================================

Handle(StepBasic_MassUnit) StepBasic_ConversionBasedUnitAndMassUnit::MassUnit() const
{
  return massUnit;
}

