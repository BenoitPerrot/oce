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
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepRepr_ShapeAspect)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepRepr_ShapeAspect)
IMPLEMENT_DOWNCAST(StepRepr_ShapeAspect,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepRepr_ShapeAspect)


StepRepr_ShapeAspect::StepRepr_ShapeAspect ()  {}

void StepRepr_ShapeAspect::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TCollection_HAsciiString)& aDescription,
	const Handle(StepRepr_ProductDefinitionShape)& aOfShape,
	const StepData_Logical aProductDefinitional)
{
	// --- classe own fields ---
	name = aName;
	description = aDescription;
	ofShape = aOfShape;
	productDefinitional = aProductDefinitional;
}


void StepRepr_ShapeAspect::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) StepRepr_ShapeAspect::Name() const
{
	return name;
}

void StepRepr_ShapeAspect::SetDescription(const Handle(TCollection_HAsciiString)& aDescription)
{
	description = aDescription;
}

Handle(TCollection_HAsciiString) StepRepr_ShapeAspect::Description() const
{
	return description;
}

void StepRepr_ShapeAspect::SetOfShape(const Handle(StepRepr_ProductDefinitionShape)& aOfShape)
{
	ofShape = aOfShape;
}

Handle(StepRepr_ProductDefinitionShape) StepRepr_ShapeAspect::OfShape() const
{
	return ofShape;
}

void StepRepr_ShapeAspect::SetProductDefinitional(const StepData_Logical aProductDefinitional)
{
	productDefinitional = aProductDefinitional;
}

StepData_Logical StepRepr_ShapeAspect::ProductDefinitional() const
{
	return productDefinitional;
}
