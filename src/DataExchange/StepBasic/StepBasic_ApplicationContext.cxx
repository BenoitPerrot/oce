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
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ApplicationContext)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ApplicationContext)
IMPLEMENT_DOWNCAST(StepBasic_ApplicationContext,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ApplicationContext)


StepBasic_ApplicationContext::StepBasic_ApplicationContext ()  {}

void StepBasic_ApplicationContext::Init(
	const Handle(TCollection_HAsciiString)& aApplication)
{
	// --- classe own fields ---
	application = aApplication;
}


void StepBasic_ApplicationContext::SetApplication(const Handle(TCollection_HAsciiString)& aApplication)
{
	application = aApplication;
}

Handle(TCollection_HAsciiString) StepBasic_ApplicationContext::Application() const
{
	return application;
}
