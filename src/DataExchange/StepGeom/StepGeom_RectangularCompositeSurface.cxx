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

#include <StepGeom_HArray2OfSurfacePatch.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_SurfacePatch.hxx>
#include <StepGeom_RectangularCompositeSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_RectangularCompositeSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_BoundedSurface),
  STANDARD_TYPE(StepGeom_Surface),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_RectangularCompositeSurface)
IMPLEMENT_DOWNCAST(StepGeom_RectangularCompositeSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_RectangularCompositeSurface)


StepGeom_RectangularCompositeSurface::StepGeom_RectangularCompositeSurface ()  {}

void StepGeom_RectangularCompositeSurface::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_RectangularCompositeSurface::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_HArray2OfSurfacePatch)& aSegments)
{
	// --- classe own fields ---
	segments = aSegments;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_RectangularCompositeSurface::SetSegments(const Handle(StepGeom_HArray2OfSurfacePatch)& aSegments)
{
	segments = aSegments;
}

Handle(StepGeom_HArray2OfSurfacePatch) StepGeom_RectangularCompositeSurface::Segments() const
{
	return segments;
}

Handle(StepGeom_SurfacePatch) StepGeom_RectangularCompositeSurface::SegmentsValue(const Standard_Integer num1,const Standard_Integer num2) const
{
	return segments->Value(num1,num2);
}

Standard_Integer StepGeom_RectangularCompositeSurface::NbSegmentsI () const
{
	if (segments.IsNull()) return 0;
	return segments->UpperRow() - segments->LowerRow() + 1;
}

Standard_Integer StepGeom_RectangularCompositeSurface::NbSegmentsJ () const
{
	if (segments.IsNull()) return 0;
	return segments->UpperCol() - segments->LowerCol() + 1;
}
