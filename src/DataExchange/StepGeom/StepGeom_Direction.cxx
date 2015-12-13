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

#include <TColStd_HArray1OfReal.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_Direction)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_Direction)
IMPLEMENT_DOWNCAST(StepGeom_Direction,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_Direction)


StepGeom_Direction::StepGeom_Direction ()  {}

void StepGeom_Direction::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_Direction::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TColStd_HArray1OfReal)& aDirectionRatios)
{
	// --- classe own fields ---
	directionRatios = aDirectionRatios;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_Direction::SetDirectionRatios(const Handle(TColStd_HArray1OfReal)& aDirectionRatios)
{
	directionRatios = aDirectionRatios;
}

Handle(TColStd_HArray1OfReal) StepGeom_Direction::DirectionRatios() const
{
	return directionRatios;
}

Standard_Real StepGeom_Direction::DirectionRatiosValue(const Standard_Integer num) const
{
	return directionRatios->Value(num);
}

Standard_Integer StepGeom_Direction::NbDirectionRatios () const
{
	return directionRatios->Length();
}
