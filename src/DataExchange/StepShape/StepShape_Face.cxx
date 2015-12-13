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

#include <StepShape_HArray1OfFaceBound.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_Face.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_Face)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_Face)
IMPLEMENT_DOWNCAST(StepShape_Face,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_Face)


StepShape_Face::StepShape_Face ()  {}

void StepShape_Face::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_Face::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfFaceBound)& aBounds)
{
	// --- classe own fields ---
	bounds = aBounds;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_Face::SetBounds(const Handle(StepShape_HArray1OfFaceBound)& aBounds)
{
	bounds = aBounds;
}

Handle(StepShape_HArray1OfFaceBound) StepShape_Face::Bounds() const
{
	return bounds;
}

Handle(StepShape_FaceBound) StepShape_Face::BoundsValue(const Standard_Integer num) const
{
	return bounds->Value(num);
}

Standard_Integer StepShape_Face::NbBounds () const
{
	if (bounds.IsNull()) return 0;
	return bounds->Length();
}
