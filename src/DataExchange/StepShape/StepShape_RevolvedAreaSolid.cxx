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

#include <DataExchange/StepGeom/StepGeom_Axis1Placement.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepGeom/StepGeom_CurveBoundedSurface.hxx>
#include <DataExchange/StepShape/StepShape_RevolvedAreaSolid.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_RevolvedAreaSolid)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_SweptAreaSolid),
  STANDARD_TYPE(StepShape_SolidModel),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_RevolvedAreaSolid)
IMPLEMENT_DOWNCAST(StepShape_RevolvedAreaSolid,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_RevolvedAreaSolid)


StepShape_RevolvedAreaSolid::StepShape_RevolvedAreaSolid ()  {}

void StepShape_RevolvedAreaSolid::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_CurveBoundedSurface)& aSweptArea)
{

	StepShape_SweptAreaSolid::Init(aName, aSweptArea);
}

void StepShape_RevolvedAreaSolid::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_CurveBoundedSurface)& aSweptArea,
	const Handle(StepGeom_Axis1Placement)& aAxis,
	const Standard_Real aAngle)
{
	// --- classe own fields ---
	axis = aAxis;
	angle = aAngle;
	// --- classe inherited fields ---
	StepShape_SweptAreaSolid::Init(aName, aSweptArea);
}


void StepShape_RevolvedAreaSolid::SetAxis(const Handle(StepGeom_Axis1Placement)& aAxis)
{
	axis = aAxis;
}

Handle(StepGeom_Axis1Placement) StepShape_RevolvedAreaSolid::Axis() const
{
	return axis;
}

void StepShape_RevolvedAreaSolid::SetAngle(const Standard_Real aAngle)
{
	angle = aAngle;
}

Standard_Real StepShape_RevolvedAreaSolid::Angle() const
{
	return angle;
}
