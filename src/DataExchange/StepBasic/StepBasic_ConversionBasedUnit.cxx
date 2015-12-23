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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/StepBasic_MeasureWithUnit.hxx>
#include <DataExchange/StepBasic/StepBasic_DimensionalExponents.hxx>
#include <DataExchange/StepBasic/StepBasic_ConversionBasedUnit.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ConversionBasedUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_NamedUnit),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ConversionBasedUnit)
IMPLEMENT_DOWNCAST(StepBasic_ConversionBasedUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ConversionBasedUnit)


StepBasic_ConversionBasedUnit::StepBasic_ConversionBasedUnit ()  {}

void StepBasic_ConversionBasedUnit::Init(
	const Handle(StepBasic_DimensionalExponents)& aDimensions)
{

	StepBasic_NamedUnit::Init(aDimensions);
}

void StepBasic_ConversionBasedUnit::Init(
	const Handle(StepBasic_DimensionalExponents)& aDimensions,
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepBasic_MeasureWithUnit)& aConversionFactor)
{
	// --- classe own fields ---
	name = aName;
	conversionFactor = aConversionFactor;
	// --- classe inherited fields ---
	StepBasic_NamedUnit::Init(aDimensions);
}


void StepBasic_ConversionBasedUnit::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepBasic_ConversionBasedUnit::Name() const
{
	return name;
}

void StepBasic_ConversionBasedUnit::SetConversionFactor(const Handle(StepBasic_MeasureWithUnit)& aConversionFactor)
{
	conversionFactor = aConversionFactor;
}

Handle(StepBasic_MeasureWithUnit) StepBasic_ConversionBasedUnit::ConversionFactor() const
{
	return conversionFactor;
}
