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

#include <DataExchange/StepGeom/StepGeom_Surface.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepGeom/StepGeom_OffsetSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_OffsetSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_Surface),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_OffsetSurface)
IMPLEMENT_DOWNCAST(StepGeom_OffsetSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_OffsetSurface)


StepGeom_OffsetSurface::StepGeom_OffsetSurface ()  {}

void StepGeom_OffsetSurface::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_OffsetSurface::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Surface)& aBasisSurface,
	const Standard_Real aDistance,
	const StepData_Logical aSelfIntersect)
{
	// --- classe own fields ---
	basisSurface = aBasisSurface;
	distance = aDistance;
	selfIntersect = aSelfIntersect;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_OffsetSurface::SetBasisSurface(const Handle(StepGeom_Surface)& aBasisSurface)
{
	basisSurface = aBasisSurface;
}

Handle(StepGeom_Surface) StepGeom_OffsetSurface::BasisSurface() const
{
	return basisSurface;
}

void StepGeom_OffsetSurface::SetDistance(const Standard_Real aDistance)
{
	distance = aDistance;
}

Standard_Real StepGeom_OffsetSurface::Distance() const
{
	return distance;
}

void StepGeom_OffsetSurface::SetSelfIntersect(const StepData_Logical aSelfIntersect)
{
	selfIntersect = aSelfIntersect;
}

StepData_Logical StepGeom_OffsetSurface::SelfIntersect() const
{
	return selfIntersect;
}
