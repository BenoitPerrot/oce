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
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ApplicationContextElement.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ApplicationContextElement)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ApplicationContextElement)
IMPLEMENT_DOWNCAST(StepBasic_ApplicationContextElement,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ApplicationContextElement)


StepBasic_ApplicationContextElement::StepBasic_ApplicationContextElement ()  {}

void StepBasic_ApplicationContextElement::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepBasic_ApplicationContext)& aFrameOfReference)
{
	// --- classe own fields ---
	name = aName;
	frameOfReference = aFrameOfReference;
}


void StepBasic_ApplicationContextElement::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepBasic_ApplicationContextElement::Name() const
{
	return name;
}

void StepBasic_ApplicationContextElement::SetFrameOfReference(const Handle(StepBasic_ApplicationContext)& aFrameOfReference)
{
	frameOfReference = aFrameOfReference;
}

Handle(StepBasic_ApplicationContext) StepBasic_ApplicationContextElement::FrameOfReference() const
{
	return frameOfReference;
}
