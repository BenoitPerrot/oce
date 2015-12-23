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

#include <DataExchange/StepVisual/StepVisual_AreaOrView.hxx>
#include <DataExchange/StepVisual/StepVisual_BackgroundColour.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_BackgroundColour)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepVisual_Colour),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_BackgroundColour)
IMPLEMENT_DOWNCAST(StepVisual_BackgroundColour,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_BackgroundColour)


StepVisual_BackgroundColour::StepVisual_BackgroundColour ()  {}

void StepVisual_BackgroundColour::Init(
	const StepVisual_AreaOrView& aPresentation)
{
	// --- classe own fields ---
	presentation = aPresentation;
}


void StepVisual_BackgroundColour::SetPresentation(const StepVisual_AreaOrView& aPresentation)
{
	presentation = aPresentation;
}

StepVisual_AreaOrView StepVisual_BackgroundColour::Presentation() const
{
	return presentation;
}
