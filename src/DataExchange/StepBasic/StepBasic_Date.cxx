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

#include <StepBasic_Date.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_Date)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_Date)
IMPLEMENT_DOWNCAST(StepBasic_Date,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_Date)


StepBasic_Date::StepBasic_Date ()  {}

void StepBasic_Date::Init(
	const Standard_Integer aYearComponent)
{
	// --- classe own fields ---
	yearComponent = aYearComponent;
}


void StepBasic_Date::SetYearComponent(const Standard_Integer aYearComponent)
{
	yearComponent = aYearComponent;
}

Standard_Integer StepBasic_Date::YearComponent() const
{
	return yearComponent;
}
