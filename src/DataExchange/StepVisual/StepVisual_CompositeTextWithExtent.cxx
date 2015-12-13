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

#include <StepVisual_PlanarExtent.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepVisual_HArray1OfTextOrCharacter.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_CompositeTextWithExtent)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepVisual_CompositeText),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_CompositeTextWithExtent)
IMPLEMENT_DOWNCAST(StepVisual_CompositeTextWithExtent,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_CompositeTextWithExtent)


StepVisual_CompositeTextWithExtent::StepVisual_CompositeTextWithExtent ()  {}

void StepVisual_CompositeTextWithExtent::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText)
{

	StepVisual_CompositeText::Init(aName, aCollectedText);
}

void StepVisual_CompositeTextWithExtent::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText,
	const Handle(StepVisual_PlanarExtent)& aExtent)
{
	// --- classe own fields ---
	extent = aExtent;
	// --- classe inherited fields ---
	StepVisual_CompositeText::Init(aName, aCollectedText);
}


void StepVisual_CompositeTextWithExtent::SetExtent(const Handle(StepVisual_PlanarExtent)& aExtent)
{
	extent = aExtent;
}

Handle(StepVisual_PlanarExtent) StepVisual_CompositeTextWithExtent::Extent() const
{
	return extent;
}
