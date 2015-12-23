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

#include <DataExchange/StepGeom/StepGeom_GeometricRepresentationContext.hxx>
#include <DataExchange/StepRepr/StepRepr_ParametricRepresentationContext.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepGeom/StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_GeometricRepresentationContextAndParametricRepresentationContext)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepRepr_RepresentationContext),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_GeometricRepresentationContextAndParametricRepresentationContext)
IMPLEMENT_DOWNCAST(StepGeom_GeometricRepresentationContextAndParametricRepresentationContext,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_GeometricRepresentationContextAndParametricRepresentationContext)

#include <DataExchange/StepGeom/StepGeom_GeometricRepresentationContext.hxx>

#include <DataExchange/StepRepr/StepRepr_GlobalUnitAssignedContext.hxx>


StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::StepGeom_GeometricRepresentationContextAndParametricRepresentationContext ()  {}

void StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::Init(
	const Handle(TCollection_HAsciiString)& aContextIdentifier,
	const Handle(TCollection_HAsciiString)& aContextType)
{

	StepRepr_RepresentationContext::Init(aContextIdentifier, aContextType);
}

void StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::Init
(const Handle(TCollection_HAsciiString)& aContextIdentifier,
 const Handle(TCollection_HAsciiString)& aContextType,
 const Handle(StepGeom_GeometricRepresentationContext)& aGeometricRepresentationContext,
 const Handle(StepRepr_ParametricRepresentationContext)& aParametricRepresentationContext)
{
  // --- classe own fields ---
  geometricRepresentationContext = aGeometricRepresentationContext;
  parametricRepresentationContext= aParametricRepresentationContext;
  // --- classe inherited fields ---
  StepRepr_RepresentationContext::Init(aContextIdentifier, aContextType);
}


void StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::Init
(const Handle(TCollection_HAsciiString)& aContextIdentifier,
 const Handle(TCollection_HAsciiString)& aContextType,
 const Standard_Integer aCoordinateSpaceDimension)
{
  // --- classe inherited fields ---
  
  StepRepr_RepresentationContext::Init(aContextIdentifier, aContextType);
  
  // --- ANDOR componant fields ---
  
  geometricRepresentationContext = new StepGeom_GeometricRepresentationContext();
  geometricRepresentationContext->Init(aContextIdentifier, aContextType, aCoordinateSpaceDimension);
  
  // --- ANDOR componant fields ---
  
  parametricRepresentationContext = new StepRepr_ParametricRepresentationContext();
  parametricRepresentationContext->Init(aContextIdentifier, aContextType);
}


void StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::SetGeometricRepresentationContext(const Handle(StepGeom_GeometricRepresentationContext)& aGeometricRepresentationContext)
{
  geometricRepresentationContext = aGeometricRepresentationContext;
}

Handle(StepGeom_GeometricRepresentationContext) StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::GeometricRepresentationContext() const
{
  return geometricRepresentationContext;
}

void StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::SetParametricRepresentationContext(const Handle(StepRepr_ParametricRepresentationContext)& aParametricRepresentationContext)
{
  parametricRepresentationContext = aParametricRepresentationContext;
}

Handle(StepRepr_ParametricRepresentationContext) StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::ParametricRepresentationContext() const
{
	return parametricRepresentationContext;
}

//--- Specific Methods for AND classe field access ---


void StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::SetCoordinateSpaceDimension(const Standard_Integer aCoordinateSpaceDimension)
{
  geometricRepresentationContext->SetCoordinateSpaceDimension(aCoordinateSpaceDimension);
}

Standard_Integer StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::CoordinateSpaceDimension() const
{
  return geometricRepresentationContext->CoordinateSpaceDimension();
}
