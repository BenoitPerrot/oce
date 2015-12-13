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
#include <StepShape_FaceSurface.hxx>
#include <StepShape_RevolvedFaceSolid.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_RevolvedFaceSolid)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_SweptFaceSolid),
  STANDARD_TYPE(StepShape_SolidModel),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_RevolvedFaceSolid)
IMPLEMENT_DOWNCAST(StepShape_RevolvedFaceSolid,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_RevolvedFaceSolid)


StepShape_RevolvedFaceSolid::StepShape_RevolvedFaceSolid ()  {}

void StepShape_RevolvedFaceSolid::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_FaceSurface)& aSweptArea)
{

	StepShape_SweptFaceSolid::Init(aName, aSweptArea);
}

void StepShape_RevolvedFaceSolid::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_FaceSurface)& aSweptArea,
	const Handle(StepGeom_Axis1Placement)& aAxis,
	const Standard_Real aAngle)
{
	// --- classe own fields ---
	axis = aAxis;
	angle = aAngle;
	// --- classe inherited fields ---
	StepShape_SweptFaceSolid::Init(aName, aSweptArea);
}


void StepShape_RevolvedFaceSolid::SetAxis(const Handle(StepGeom_Axis1Placement)& aAxis)
{
	axis = aAxis;
}

Handle(StepGeom_Axis1Placement) StepShape_RevolvedFaceSolid::Axis() const
{
	return axis;
}

void StepShape_RevolvedFaceSolid::SetAngle(const Standard_Real aAngle)
{
	angle = aAngle;
}

Standard_Real StepShape_RevolvedFaceSolid::Angle() const
{
	return angle;
}
