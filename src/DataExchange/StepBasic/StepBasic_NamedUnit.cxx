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

#include <DataExchange/StepBasic/StepBasic_DimensionalExponents.hxx>
#include <DataExchange/StepBasic/StepBasic_NamedUnit.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_NamedUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_NamedUnit)
IMPLEMENT_DOWNCAST(StepBasic_NamedUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_NamedUnit)


StepBasic_NamedUnit::StepBasic_NamedUnit ()  {}

void StepBasic_NamedUnit::Init(
	const Handle(StepBasic_DimensionalExponents)& aDimensions)
{
	// --- classe own fields ---
	dimensions = aDimensions;
}


void StepBasic_NamedUnit::SetDimensions(const Handle(StepBasic_DimensionalExponents)& aDimensions)
{
	dimensions = aDimensions;
}

Handle(StepBasic_DimensionalExponents) StepBasic_NamedUnit::Dimensions() const
{
	return dimensions;
}
