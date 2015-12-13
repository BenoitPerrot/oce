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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_ColourRgb)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepVisual_ColourSpecification),
  STANDARD_TYPE(StepVisual_Colour),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_ColourRgb)
IMPLEMENT_DOWNCAST(StepVisual_ColourRgb,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_ColourRgb)


StepVisual_ColourRgb::StepVisual_ColourRgb ()  {}

void StepVisual_ColourRgb::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepVisual_ColourSpecification::Init(aName);
}

void StepVisual_ColourRgb::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Real aRed,
	const Standard_Real aGreen,
	const Standard_Real aBlue)
{
	// --- classe own fields ---
	red = aRed;
	green = aGreen;
	blue = aBlue;
	// --- classe inherited fields ---
	StepVisual_ColourSpecification::Init(aName);
}


void StepVisual_ColourRgb::SetRed(const Standard_Real aRed)
{
	red = aRed;
}

Standard_Real StepVisual_ColourRgb::Red() const
{
	return red;
}

void StepVisual_ColourRgb::SetGreen(const Standard_Real aGreen)
{
	green = aGreen;
}

Standard_Real StepVisual_ColourRgb::Green() const
{
	return green;
}

void StepVisual_ColourRgb::SetBlue(const Standard_Real aBlue)
{
	blue = aBlue;
}

Standard_Real StepVisual_ColourRgb::Blue() const
{
	return blue;
}
