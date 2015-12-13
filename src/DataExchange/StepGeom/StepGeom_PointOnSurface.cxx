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

#include <StepGeom_Surface.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepGeom_PointOnSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_PointOnSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_Point),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_PointOnSurface)
IMPLEMENT_DOWNCAST(StepGeom_PointOnSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_PointOnSurface)


StepGeom_PointOnSurface::StepGeom_PointOnSurface ()  {}

void StepGeom_PointOnSurface::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_PointOnSurface::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Surface)& aBasisSurface,
	const Standard_Real aPointParameterU,
	const Standard_Real aPointParameterV)
{
	// --- classe own fields ---
	basisSurface = aBasisSurface;
	pointParameterU = aPointParameterU;
	pointParameterV = aPointParameterV;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_PointOnSurface::SetBasisSurface(const Handle(StepGeom_Surface)& aBasisSurface)
{
	basisSurface = aBasisSurface;
}

Handle(StepGeom_Surface) StepGeom_PointOnSurface::BasisSurface() const
{
	return basisSurface;
}

void StepGeom_PointOnSurface::SetPointParameterU(const Standard_Real aPointParameterU)
{
	pointParameterU = aPointParameterU;
}

Standard_Real StepGeom_PointOnSurface::PointParameterU() const
{
	return pointParameterU;
}

void StepGeom_PointOnSurface::SetPointParameterV(const Standard_Real aPointParameterV)
{
	pointParameterV = aPointParameterV;
}

Standard_Real StepGeom_PointOnSurface::PointParameterV() const
{
	return pointParameterV;
}
