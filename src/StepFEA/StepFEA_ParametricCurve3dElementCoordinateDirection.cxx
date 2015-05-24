// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_ParametricCurve3dElementCoordinateDirection)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_ParametricCurve3dElementCoordinateDirection)
IMPLEMENT_DOWNCAST(StepFEA_ParametricCurve3dElementCoordinateDirection,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_ParametricCurve3dElementCoordinateDirection)

//=======================================================================
//function : StepFEA_ParametricCurve3dElementCoordinateDirection
//purpose  : 
//=======================================================================

StepFEA_ParametricCurve3dElementCoordinateDirection::StepFEA_ParametricCurve3dElementCoordinateDirection ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_ParametricCurve3dElementCoordinateDirection::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                                                const Handle(StepGeom_Direction) &aOrientation)
{
  StepFEA_FeaRepresentationItem::Init(aRepresentationItem_Name);

  theOrientation = aOrientation;
}

//=======================================================================
//function : Orientation
//purpose  : 
//=======================================================================

Handle(StepGeom_Direction) StepFEA_ParametricCurve3dElementCoordinateDirection::Orientation () const
{
  return theOrientation;
}

//=======================================================================
//function : SetOrientation
//purpose  : 
//=======================================================================

void StepFEA_ParametricCurve3dElementCoordinateDirection::SetOrientation (const Handle(StepGeom_Direction) &aOrientation)
{
  theOrientation = aOrientation;
}
