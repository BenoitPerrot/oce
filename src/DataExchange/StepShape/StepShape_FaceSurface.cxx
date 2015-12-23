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
#include <DataExchange/StepShape/StepShape_HArray1OfFaceBound.hxx>
#include <DataExchange/StepShape/StepShape_FaceSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_FaceSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_Face),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_FaceSurface)
IMPLEMENT_DOWNCAST(StepShape_FaceSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_FaceSurface)


StepShape_FaceSurface::StepShape_FaceSurface ()  {}

void StepShape_FaceSurface::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfFaceBound)& aBounds)
{

	StepShape_Face::Init(aName, aBounds);
}

void StepShape_FaceSurface::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfFaceBound)& aBounds,
	const Handle(StepGeom_Surface)& aFaceGeometry,
	const Standard_Boolean aSameSense)
{
	// --- classe own fields ---
	faceGeometry = aFaceGeometry;
	sameSense = aSameSense;
	// --- classe inherited fields ---
	StepShape_Face::Init(aName, aBounds);
}


void StepShape_FaceSurface::SetFaceGeometry(const Handle(StepGeom_Surface)& aFaceGeometry)
{
	faceGeometry = aFaceGeometry;
}

Handle(StepGeom_Surface) StepShape_FaceSurface::FaceGeometry() const
{
	return faceGeometry;
}

void StepShape_FaceSurface::SetSameSense(const Standard_Boolean aSameSense)
{
	sameSense = aSameSense;
}

Standard_Boolean StepShape_FaceSurface::SameSense() const
{
	return sameSense;
}
