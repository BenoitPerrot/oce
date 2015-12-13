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

#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_ParametricCurve3dElementCoordinateSystem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_ParametricCurve3dElementCoordinateSystem)
IMPLEMENT_DOWNCAST(StepFEA_ParametricCurve3dElementCoordinateSystem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_ParametricCurve3dElementCoordinateSystem)

//=======================================================================
//function : StepFEA_ParametricCurve3dElementCoordinateSystem
//purpose  : 
//=======================================================================

StepFEA_ParametricCurve3dElementCoordinateSystem::StepFEA_ParametricCurve3dElementCoordinateSystem ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_ParametricCurve3dElementCoordinateSystem::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                                             const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) &aDirection)
{
  StepFEA_FeaRepresentationItem::Init(aRepresentationItem_Name);

  theDirection = aDirection;
}

//=======================================================================
//function : Direction
//purpose  : 
//=======================================================================

Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) StepFEA_ParametricCurve3dElementCoordinateSystem::Direction () const
{
  return theDirection;
}

//=======================================================================
//function : SetDirection
//purpose  : 
//=======================================================================

void StepFEA_ParametricCurve3dElementCoordinateSystem::SetDirection (const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) &aDirection)
{
  theDirection = aDirection;
}
