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

#include <DataExchange/StepGeom/StepGeom_HArray1OfCartesianPoint.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepGeom/StepGeom_CartesianPoint.hxx>
#include <DataExchange/StepShape/StepShape_PolyLoop.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_PolyLoop)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_Loop),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_PolyLoop)
IMPLEMENT_DOWNCAST(StepShape_PolyLoop,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_PolyLoop)


StepShape_PolyLoop::StepShape_PolyLoop ()  {}

void StepShape_PolyLoop::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_PolyLoop::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aPolygon)
{
	// --- classe own fields ---
	polygon = aPolygon;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_PolyLoop::SetPolygon(const Handle(StepGeom_HArray1OfCartesianPoint)& aPolygon)
{
	polygon = aPolygon;
}

Handle(StepGeom_HArray1OfCartesianPoint) StepShape_PolyLoop::Polygon() const
{
	return polygon;
}

Handle(StepGeom_CartesianPoint) StepShape_PolyLoop::PolygonValue(const Standard_Integer num) const
{
	return polygon->Value(num);
}

Standard_Integer StepShape_PolyLoop::NbPolygon () const
{
	if (polygon.IsNull()) return 0;
	return polygon->Length();
}
