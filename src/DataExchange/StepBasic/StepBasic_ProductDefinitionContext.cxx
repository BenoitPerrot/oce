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
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ProductDefinitionContext)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ApplicationContextElement),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ProductDefinitionContext)
IMPLEMENT_DOWNCAST(StepBasic_ProductDefinitionContext,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ProductDefinitionContext)


StepBasic_ProductDefinitionContext::StepBasic_ProductDefinitionContext ()  {}

void StepBasic_ProductDefinitionContext::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepBasic_ApplicationContext)& aFrameOfReference)
{

	StepBasic_ApplicationContextElement::Init(aName, aFrameOfReference);
}

void StepBasic_ProductDefinitionContext::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepBasic_ApplicationContext)& aFrameOfReference,
	const Handle(TCollection_HAsciiString)& aLifeCycleStage)
{
	// --- classe own fields ---
	lifeCycleStage = aLifeCycleStage;
	// --- classe inherited fields ---
	StepBasic_ApplicationContextElement::Init(aName, aFrameOfReference);
}


void StepBasic_ProductDefinitionContext::SetLifeCycleStage(const Handle(TCollection_HAsciiString)& aLifeCycleStage)
{
	lifeCycleStage = aLifeCycleStage;
}

Handle(TCollection_HAsciiString) StepBasic_ProductDefinitionContext::LifeCycleStage() const
{
	return lifeCycleStage;
}
