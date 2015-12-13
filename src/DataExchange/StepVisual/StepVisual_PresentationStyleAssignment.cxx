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

#include <StepVisual_HArray1OfPresentationStyleSelect.hxx>
#include <StepVisual_PresentationStyleSelect.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_PresentationStyleAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_PresentationStyleAssignment)
IMPLEMENT_DOWNCAST(StepVisual_PresentationStyleAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_PresentationStyleAssignment)


StepVisual_PresentationStyleAssignment::StepVisual_PresentationStyleAssignment ()  {}

void StepVisual_PresentationStyleAssignment::Init(
	const Handle(StepVisual_HArray1OfPresentationStyleSelect)& aStyles)
{
	// --- classe own fields ---
	styles = aStyles;
}


void StepVisual_PresentationStyleAssignment::SetStyles(const Handle(StepVisual_HArray1OfPresentationStyleSelect)& aStyles)
{
	styles = aStyles;
}

Handle(StepVisual_HArray1OfPresentationStyleSelect) StepVisual_PresentationStyleAssignment::Styles() const
{
	return styles;
}

StepVisual_PresentationStyleSelect StepVisual_PresentationStyleAssignment::StylesValue(const Standard_Integer num) const
{
	return styles->Value(num);
}

Standard_Integer StepVisual_PresentationStyleAssignment::NbStyles () const
{
	return styles->Length();
}
