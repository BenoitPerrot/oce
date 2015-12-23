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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepFEA/StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_ParametricSurface3dElementCoordinateSystem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_ParametricSurface3dElementCoordinateSystem)
IMPLEMENT_DOWNCAST(StepFEA_ParametricSurface3dElementCoordinateSystem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_ParametricSurface3dElementCoordinateSystem)

//=======================================================================
//function : StepFEA_ParametricSurface3dElementCoordinateSystem
//purpose  : 
//=======================================================================

StepFEA_ParametricSurface3dElementCoordinateSystem::StepFEA_ParametricSurface3dElementCoordinateSystem ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_ParametricSurface3dElementCoordinateSystem::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                                               const Standard_Integer aAxis,
                                                               const Standard_Real aAngle)
{
  StepFEA_FeaRepresentationItem::Init(aRepresentationItem_Name);

  theAxis = aAxis;

  theAngle = aAngle;
}

//=======================================================================
//function : Axis
//purpose  : 
//=======================================================================

Standard_Integer StepFEA_ParametricSurface3dElementCoordinateSystem::Axis () const
{
  return theAxis;
}

//=======================================================================
//function : SetAxis
//purpose  : 
//=======================================================================

void StepFEA_ParametricSurface3dElementCoordinateSystem::SetAxis (const Standard_Integer aAxis)
{
  theAxis = aAxis;
}

//=======================================================================
//function : Angle
//purpose  : 
//=======================================================================

Standard_Real StepFEA_ParametricSurface3dElementCoordinateSystem::Angle () const
{
  return theAngle;
}

//=======================================================================
//function : SetAngle
//purpose  : 
//=======================================================================

void StepFEA_ParametricSurface3dElementCoordinateSystem::SetAngle (const Standard_Real aAngle)
{
  theAngle = aAngle;
}
