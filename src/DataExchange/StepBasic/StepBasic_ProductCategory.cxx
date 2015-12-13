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
#include <StepBasic_ProductCategory.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ProductCategory)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ProductCategory)
IMPLEMENT_DOWNCAST(StepBasic_ProductCategory,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ProductCategory)


StepBasic_ProductCategory::StepBasic_ProductCategory ()  {}

void StepBasic_ProductCategory::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Boolean hasAdescription,
	const Handle(TCollection_HAsciiString)& aDescription)
{
	// --- classe own fields ---
	name = aName;
	hasDescription = hasAdescription;
	description = aDescription;
}


void StepBasic_ProductCategory::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepBasic_ProductCategory::Name() const
{
	return name;
}

void StepBasic_ProductCategory::SetDescription(const Handle(TCollection_HAsciiString)& aDescription)
{
	description = aDescription;
	hasDescription = Standard_True;
}

void StepBasic_ProductCategory::UnSetDescription()
{
	hasDescription = Standard_False;
	description.Nullify();
}

Handle(TCollection_HAsciiString) StepBasic_ProductCategory::Description() const
{
	return description;
}

Standard_Boolean StepBasic_ProductCategory::HasDescription() const
{
	return hasDescription;
}
