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

#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Vertex.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_EdgeCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_Edge),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_EdgeCurve)
IMPLEMENT_DOWNCAST(StepShape_EdgeCurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_EdgeCurve)


StepShape_EdgeCurve::StepShape_EdgeCurve ()  {}

void StepShape_EdgeCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_Vertex)& aEdgeStart,
	const Handle(StepShape_Vertex)& aEdgeEnd)
{

	StepShape_Edge::Init(aName, aEdgeStart, aEdgeEnd);
}

void StepShape_EdgeCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_Vertex)& aEdgeStart,
	const Handle(StepShape_Vertex)& aEdgeEnd,
	const Handle(StepGeom_Curve)& aEdgeGeometry,
	const Standard_Boolean aSameSense)
{
	// --- classe own fields ---
	edgeGeometry = aEdgeGeometry;
	sameSense = aSameSense;
	// --- classe inherited fields ---
	StepShape_Edge::Init(aName, aEdgeStart, aEdgeEnd);
}


void StepShape_EdgeCurve::SetEdgeGeometry(const Handle(StepGeom_Curve)& aEdgeGeometry)
{
	edgeGeometry = aEdgeGeometry;
}

Handle(StepGeom_Curve) StepShape_EdgeCurve::EdgeGeometry() const
{
	return edgeGeometry;
}

void StepShape_EdgeCurve::SetSameSense(const Standard_Boolean aSameSense)
{
	sameSense = aSameSense;
}

Standard_Boolean StepShape_EdgeCurve::SameSense() const
{
	return sameSense;
}
