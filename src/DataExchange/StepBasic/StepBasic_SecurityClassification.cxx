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
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_SecurityClassification)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_SecurityClassification)
IMPLEMENT_DOWNCAST(StepBasic_SecurityClassification,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_SecurityClassification)


StepBasic_SecurityClassification::StepBasic_SecurityClassification ()  {}

void StepBasic_SecurityClassification::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TCollection_HAsciiString)& aPurpose,
	const Handle(StepBasic_SecurityClassificationLevel)& aSecurityLevel)
{
	// --- classe own fields ---
	name = aName;
	purpose = aPurpose;
	securityLevel = aSecurityLevel;
}


void StepBasic_SecurityClassification::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepBasic_SecurityClassification::Name() const
{
	return name;
}

void StepBasic_SecurityClassification::SetPurpose(const Handle(TCollection_HAsciiString)& aPurpose)
{
	purpose = aPurpose;
}

Handle(TCollection_HAsciiString) StepBasic_SecurityClassification::Purpose() const
{
	return purpose;
}

void StepBasic_SecurityClassification::SetSecurityLevel(const Handle(StepBasic_SecurityClassificationLevel)& aSecurityLevel)
{
	securityLevel = aSecurityLevel;
}

Handle(StepBasic_SecurityClassificationLevel) StepBasic_SecurityClassification::SecurityLevel() const
{
	return securityLevel;
}
