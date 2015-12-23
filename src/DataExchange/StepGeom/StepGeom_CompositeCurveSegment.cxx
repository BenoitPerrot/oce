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

#include <DataExchange/StepGeom/StepGeom_Curve.hxx>
#include <DataExchange/StepGeom/StepGeom_CompositeCurveSegment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_CompositeCurveSegment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_CompositeCurveSegment)
IMPLEMENT_DOWNCAST(StepGeom_CompositeCurveSegment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_CompositeCurveSegment)


StepGeom_CompositeCurveSegment::StepGeom_CompositeCurveSegment ()  {}

void StepGeom_CompositeCurveSegment::Init(
	const StepGeom_TransitionCode aTransition,
	const Standard_Boolean aSameSense,
	const Handle(StepGeom_Curve)& aParentCurve)
{
	// --- classe own fields ---
	transition = aTransition;
	sameSense = aSameSense;
	parentCurve = aParentCurve;
}


void StepGeom_CompositeCurveSegment::SetTransition(const StepGeom_TransitionCode aTransition)
{
	transition = aTransition;
}

StepGeom_TransitionCode StepGeom_CompositeCurveSegment::Transition() const
{
	return transition;
}

void StepGeom_CompositeCurveSegment::SetSameSense(const Standard_Boolean aSameSense)
{
	sameSense = aSameSense;
}

Standard_Boolean StepGeom_CompositeCurveSegment::SameSense() const
{
	return sameSense;
}

void StepGeom_CompositeCurveSegment::SetParentCurve(const Handle(StepGeom_Curve)& aParentCurve)
{
	parentCurve = aParentCurve;
}

Handle(StepGeom_Curve) StepGeom_CompositeCurveSegment::ParentCurve() const
{
	return parentCurve;
}
