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
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepRepr_FunctionallyDefinedTransformation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepRepr_FunctionallyDefinedTransformation)
IMPLEMENT_DOWNCAST(StepRepr_FunctionallyDefinedTransformation,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepRepr_FunctionallyDefinedTransformation)


StepRepr_FunctionallyDefinedTransformation::StepRepr_FunctionallyDefinedTransformation ()  {}

void StepRepr_FunctionallyDefinedTransformation::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TCollection_HAsciiString)& aDescription)
{
	// --- classe own fields ---
	name = aName;
	description = aDescription;
}


void StepRepr_FunctionallyDefinedTransformation::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepRepr_FunctionallyDefinedTransformation::Name() const
{
	return name;
}

void StepRepr_FunctionallyDefinedTransformation::SetDescription(const Handle(TCollection_HAsciiString)& aDescription)
{
	description = aDescription;
}

Handle(TCollection_HAsciiString) StepRepr_FunctionallyDefinedTransformation::Description() const
{
	return description;
}
