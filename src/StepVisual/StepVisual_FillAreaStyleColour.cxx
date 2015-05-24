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

#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_FillAreaStyleColour)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_FillAreaStyleColour)
IMPLEMENT_DOWNCAST(StepVisual_FillAreaStyleColour,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_FillAreaStyleColour)


StepVisual_FillAreaStyleColour::StepVisual_FillAreaStyleColour ()  {}

void StepVisual_FillAreaStyleColour::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepVisual_Colour)& aFillColour)
{
	// --- classe own fields ---
	name = aName;
	fillColour = aFillColour;
}


void StepVisual_FillAreaStyleColour::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepVisual_FillAreaStyleColour::Name() const
{
	return name;
}

void StepVisual_FillAreaStyleColour::SetFillColour(const Handle(StepVisual_Colour)& aFillColour)
{
	fillColour = aFillColour;
}

Handle(StepVisual_Colour) StepVisual_FillAreaStyleColour::FillColour() const
{
	return fillColour;
}
