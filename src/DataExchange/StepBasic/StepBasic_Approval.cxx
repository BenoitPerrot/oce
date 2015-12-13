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

#include <StepBasic_ApprovalStatus.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Approval.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_Approval)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_Approval)
IMPLEMENT_DOWNCAST(StepBasic_Approval,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_Approval)


StepBasic_Approval::StepBasic_Approval ()  {}

void StepBasic_Approval::Init(
	const Handle(StepBasic_ApprovalStatus)& aStatus,
	const Handle(TCollection_HAsciiString)& aLevel)
{
	// --- classe own fields ---
	status = aStatus;
	level = aLevel;
}


void StepBasic_Approval::SetStatus(const Handle(StepBasic_ApprovalStatus)& aStatus)
{
	status = aStatus;
}

Handle(StepBasic_ApprovalStatus) StepBasic_Approval::Status() const
{
	return status;
}

void StepBasic_Approval::SetLevel(const Handle(TCollection_HAsciiString)& aLevel)
{
	level = aLevel;
}

Handle(TCollection_HAsciiString) StepBasic_Approval::Level() const
{
	return level;
}
