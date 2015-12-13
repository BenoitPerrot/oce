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

#include <StepVisual_HArray1OfTextOrCharacter.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextOrCharacter.hxx>
#include <StepVisual_CompositeText.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_CompositeText)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_CompositeText)
IMPLEMENT_DOWNCAST(StepVisual_CompositeText,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_CompositeText)


StepVisual_CompositeText::StepVisual_CompositeText ()  {}

void StepVisual_CompositeText::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepVisual_CompositeText::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText)
{
	// --- classe own fields ---
	collectedText = aCollectedText;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepVisual_CompositeText::SetCollectedText(const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText)
{
	collectedText = aCollectedText;
}

Handle(StepVisual_HArray1OfTextOrCharacter) StepVisual_CompositeText::CollectedText() const
{
	return collectedText;
}

StepVisual_TextOrCharacter StepVisual_CompositeText::CollectedTextValue(const Standard_Integer num) const
{
	return collectedText->Value(num);
}

Standard_Integer StepVisual_CompositeText::NbCollectedText () const
{
	return collectedText->Length();
}
