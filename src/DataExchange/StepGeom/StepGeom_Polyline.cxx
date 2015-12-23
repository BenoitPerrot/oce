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
#include <DataExchange/StepGeom/StepGeom_Polyline.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_Polyline)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_BoundedCurve),
  STANDARD_TYPE(StepGeom_Curve),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_Polyline)
IMPLEMENT_DOWNCAST(StepGeom_Polyline,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_Polyline)


StepGeom_Polyline::StepGeom_Polyline ()  {}

void StepGeom_Polyline::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_Polyline::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aPoints)
{
	// --- classe own fields ---
	points = aPoints;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_Polyline::SetPoints(const Handle(StepGeom_HArray1OfCartesianPoint)& aPoints)
{
	points = aPoints;
}

Handle(StepGeom_HArray1OfCartesianPoint) StepGeom_Polyline::Points() const
{
	return points;
}

Handle(StepGeom_CartesianPoint) StepGeom_Polyline::PointsValue(const Standard_Integer num) const
{
	return points->Value(num);
}

Standard_Integer StepGeom_Polyline::NbPoints () const
{
	if (points.IsNull()) return 0;
	return points->Length();
}
