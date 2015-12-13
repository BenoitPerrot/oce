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

#include <StepGeom_Axis1Placement.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_SurfaceOfRevolution)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_SweptSurface),
  STANDARD_TYPE(StepGeom_Surface),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_SurfaceOfRevolution)
IMPLEMENT_DOWNCAST(StepGeom_SurfaceOfRevolution,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_SurfaceOfRevolution)


StepGeom_SurfaceOfRevolution::StepGeom_SurfaceOfRevolution ()  {}

void StepGeom_SurfaceOfRevolution::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Curve)& aSweptCurve)
{

	StepGeom_SweptSurface::Init(aName, aSweptCurve);
}

void StepGeom_SurfaceOfRevolution::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Curve)& aSweptCurve,
	const Handle(StepGeom_Axis1Placement)& aAxisPosition)
{
	// --- classe own fields ---
	axisPosition = aAxisPosition;
	// --- classe inherited fields ---
	StepGeom_SweptSurface::Init(aName, aSweptCurve);
}


void StepGeom_SurfaceOfRevolution::SetAxisPosition(const Handle(StepGeom_Axis1Placement)& aAxisPosition)
{
	axisPosition = aAxisPosition;
}

Handle(StepGeom_Axis1Placement) StepGeom_SurfaceOfRevolution::AxisPosition() const
{
	return axisPosition;
}
