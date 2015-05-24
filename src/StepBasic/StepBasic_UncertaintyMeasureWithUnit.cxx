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

#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepBasic_UncertaintyMeasureWithUnit.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_UncertaintyMeasureWithUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_MeasureWithUnit),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_UncertaintyMeasureWithUnit)
IMPLEMENT_DOWNCAST(StepBasic_UncertaintyMeasureWithUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_UncertaintyMeasureWithUnit)


//=======================================================================
//function : StepBasic_UncertaintyMeasureWithUnit
//purpose  : 
//=======================================================================

StepBasic_UncertaintyMeasureWithUnit::StepBasic_UncertaintyMeasureWithUnit ()  {}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_UncertaintyMeasureWithUnit::Init(
	const Handle(StepBasic_MeasureValueMember)& aValueComponent,
	const StepBasic_Unit& aUnitComponent)
{

	StepBasic_MeasureWithUnit::Init(aValueComponent, aUnitComponent);
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_UncertaintyMeasureWithUnit::Init(
	const Handle(StepBasic_MeasureValueMember)& aValueComponent,
	const StepBasic_Unit& aUnitComponent,
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TCollection_HAsciiString)& aDescription)
{
	// --- classe own fields ---
	name = aName;
	description = aDescription;
	// --- classe inherited fields ---
	StepBasic_MeasureWithUnit::Init(aValueComponent, aUnitComponent);
}


//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepBasic_UncertaintyMeasureWithUnit::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_UncertaintyMeasureWithUnit::Name() const
{
	return name;
}

//=======================================================================
//function : SetDescription
//purpose  : 
//=======================================================================

void StepBasic_UncertaintyMeasureWithUnit::SetDescription(const Handle(TCollection_HAsciiString)& aDescription)
{
	description = aDescription;
}

//=======================================================================
//function : Description
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_UncertaintyMeasureWithUnit::Description() const
{
	return description;
}
