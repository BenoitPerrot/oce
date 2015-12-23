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

#include <StepShape_BoxDomain.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepGeom/StepGeom_Surface.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_BoxedHalfSpace)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_HalfSpaceSolid),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_BoxedHalfSpace)
IMPLEMENT_DOWNCAST(StepShape_BoxedHalfSpace,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_BoxedHalfSpace)


StepShape_BoxedHalfSpace::StepShape_BoxedHalfSpace ()  {}

void StepShape_BoxedHalfSpace::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Surface)& aBaseSurface,
	const Standard_Boolean aAgreementFlag)
{

	StepShape_HalfSpaceSolid::Init(aName, aBaseSurface, aAgreementFlag);
}

void StepShape_BoxedHalfSpace::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Surface)& aBaseSurface,
	const Standard_Boolean aAgreementFlag,
	const Handle(StepShape_BoxDomain)& aEnclosure)
{
	// --- classe own fields ---
	enclosure = aEnclosure;
	// --- classe inherited fields ---
	StepShape_HalfSpaceSolid::Init(aName, aBaseSurface, aAgreementFlag);
}


void StepShape_BoxedHalfSpace::SetEnclosure(const Handle(StepShape_BoxDomain)& aEnclosure)
{
	enclosure = aEnclosure;
}

Handle(StepShape_BoxDomain) StepShape_BoxedHalfSpace::Enclosure() const
{
	return enclosure;
}
