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

#include <StepShape_HArray1OfGeometricSetSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_GeometricSetSelect.hxx>
#include <StepShape_GeometricSet.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_GeometricSet)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_GeometricSet)
IMPLEMENT_DOWNCAST(StepShape_GeometricSet,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_GeometricSet)


StepShape_GeometricSet::StepShape_GeometricSet ()  {}

void StepShape_GeometricSet::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_GeometricSet::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfGeometricSetSelect)& aElements)
{
	// --- classe own fields ---
	elements = aElements;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_GeometricSet::SetElements(const Handle(StepShape_HArray1OfGeometricSetSelect)& aElements)
{
	elements = aElements;
}

Handle(StepShape_HArray1OfGeometricSetSelect) StepShape_GeometricSet::Elements() const
{
	return elements;
}

StepShape_GeometricSetSelect StepShape_GeometricSet::ElementsValue(const Standard_Integer num) const
{
	return elements->Value(num);
}

Standard_Integer StepShape_GeometricSet::NbElements () const
{
	return elements->Length();
}
