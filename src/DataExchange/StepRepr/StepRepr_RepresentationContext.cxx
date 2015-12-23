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
#include <DataExchange/StepRepr/StepRepr_RepresentationContext.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepRepr_RepresentationContext)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepRepr_RepresentationContext)
IMPLEMENT_DOWNCAST(StepRepr_RepresentationContext,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepRepr_RepresentationContext)


StepRepr_RepresentationContext::StepRepr_RepresentationContext ()  {}

void StepRepr_RepresentationContext::Init(
	const Handle(TCollection_HAsciiString)& aContextIdentifier,
	const Handle(TCollection_HAsciiString)& aContextType)
{
	// --- classe own fields ---
	contextIdentifier = aContextIdentifier;
	contextType = aContextType;
}


void StepRepr_RepresentationContext::SetContextIdentifier(const Handle(TCollection_HAsciiString)& aContextIdentifier)
{
	contextIdentifier = aContextIdentifier;
}

Handle(TCollection_HAsciiString) StepRepr_RepresentationContext::ContextIdentifier() const
{
	return contextIdentifier;
}

void StepRepr_RepresentationContext::SetContextType(const Handle(TCollection_HAsciiString)& aContextType)
{
	contextType = aContextType;
}

Handle(TCollection_HAsciiString) StepRepr_RepresentationContext::ContextType() const
{
	return contextType;
}
