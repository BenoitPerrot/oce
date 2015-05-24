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
#include <StepShape_BooleanOperand.hxx>
#include <StepShape_BooleanResult.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_BooleanResult)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_BooleanResult)
IMPLEMENT_DOWNCAST(StepShape_BooleanResult,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_BooleanResult)


StepShape_BooleanResult::StepShape_BooleanResult ()  {}

void StepShape_BooleanResult::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_BooleanResult::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const StepShape_BooleanOperator aOperator,
	const StepShape_BooleanOperand& aFirstOperand,
	const StepShape_BooleanOperand& aSecondOperand)
{
	// --- classe own fields ---
	anOperator = aOperator;
	firstOperand = aFirstOperand;
	secondOperand = aSecondOperand;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_BooleanResult::SetOperator(const StepShape_BooleanOperator aOperator)
{
	anOperator = aOperator;
}

StepShape_BooleanOperator StepShape_BooleanResult::Operator() const
{
	return anOperator;
}

void StepShape_BooleanResult::SetFirstOperand(const StepShape_BooleanOperand& aFirstOperand)
{
	firstOperand = aFirstOperand;
}

StepShape_BooleanOperand StepShape_BooleanResult::FirstOperand() const
{
	return firstOperand;
}

void StepShape_BooleanResult::SetSecondOperand(const StepShape_BooleanOperand& aSecondOperand)
{
	secondOperand = aSecondOperand;
}

StepShape_BooleanOperand StepShape_BooleanResult::SecondOperand() const
{
	return secondOperand;
}
