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

#include <DataExchange/StepGeom/StepGeom_Point.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_VertexPoint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_VertexPoint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_Vertex),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_VertexPoint)
IMPLEMENT_DOWNCAST(StepShape_VertexPoint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_VertexPoint)


StepShape_VertexPoint::StepShape_VertexPoint ()  {}

void StepShape_VertexPoint::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_VertexPoint::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Point)& aVertexGeometry)
{
	// --- classe own fields ---
	vertexGeometry = aVertexGeometry;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_VertexPoint::SetVertexGeometry(const Handle(StepGeom_Point)& aVertexGeometry)
{
	vertexGeometry = aVertexGeometry;
}

Handle(StepGeom_Point) StepShape_VertexPoint::VertexGeometry() const
{
	return vertexGeometry;
}
