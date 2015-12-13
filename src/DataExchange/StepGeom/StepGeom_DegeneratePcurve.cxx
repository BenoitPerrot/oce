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

#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_DegeneratePcurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_Point),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_DegeneratePcurve)
IMPLEMENT_DOWNCAST(StepGeom_DegeneratePcurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_DegeneratePcurve)


StepGeom_DegeneratePcurve::StepGeom_DegeneratePcurve ()  {}

void StepGeom_DegeneratePcurve::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_DegeneratePcurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Surface)& aBasisSurface,
	const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve)
{
	// --- classe own fields ---
	basisSurface = aBasisSurface;
	referenceToCurve = aReferenceToCurve;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_DegeneratePcurve::SetBasisSurface(const Handle(StepGeom_Surface)& aBasisSurface)
{
	basisSurface = aBasisSurface;
}

Handle(StepGeom_Surface) StepGeom_DegeneratePcurve::BasisSurface() const
{
	return basisSurface;
}

void StepGeom_DegeneratePcurve::SetReferenceToCurve(const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve)
{
	referenceToCurve = aReferenceToCurve;
}

Handle(StepRepr_DefinitionalRepresentation) StepGeom_DegeneratePcurve::ReferenceToCurve() const
{
	return referenceToCurve;
}
