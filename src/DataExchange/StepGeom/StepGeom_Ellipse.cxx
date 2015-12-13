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
#include <StepGeom_Axis2Placement.hxx>
#include <StepGeom_Ellipse.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_Ellipse)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_Conic),
  STANDARD_TYPE(StepGeom_Curve),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_Ellipse)
IMPLEMENT_DOWNCAST(StepGeom_Ellipse,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_Ellipse)


StepGeom_Ellipse::StepGeom_Ellipse ()  {}

void StepGeom_Ellipse::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const StepGeom_Axis2Placement& aPosition)
{

	StepGeom_Conic::Init(aName, aPosition);
}

void StepGeom_Ellipse::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const StepGeom_Axis2Placement& aPosition,
	const Standard_Real aSemiAxis1,
	const Standard_Real aSemiAxis2)
{
	// --- classe own fields ---
	semiAxis1 = aSemiAxis1;
	semiAxis2 = aSemiAxis2;
	// --- classe inherited fields ---
	StepGeom_Conic::Init(aName, aPosition);
}


void StepGeom_Ellipse::SetSemiAxis1(const Standard_Real aSemiAxis1)
{
	semiAxis1 = aSemiAxis1;
}

Standard_Real StepGeom_Ellipse::SemiAxis1() const
{
	return semiAxis1;
}

void StepGeom_Ellipse::SetSemiAxis2(const Standard_Real aSemiAxis2)
{
	semiAxis2 = aSemiAxis2;
}

Standard_Real StepGeom_Ellipse::SemiAxis2() const
{
	return semiAxis2;
}
