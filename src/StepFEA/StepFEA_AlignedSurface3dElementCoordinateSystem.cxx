// Created on: 2002-12-26
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

#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_AlignedSurface3dElementCoordinateSystem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_AlignedSurface3dElementCoordinateSystem)
IMPLEMENT_DOWNCAST(StepFEA_AlignedSurface3dElementCoordinateSystem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_AlignedSurface3dElementCoordinateSystem)

//=======================================================================
//function : StepFEA_AlignedSurface3dElementCoordinateSystem
//purpose  : 
//=======================================================================

StepFEA_AlignedSurface3dElementCoordinateSystem::StepFEA_AlignedSurface3dElementCoordinateSystem ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_AlignedSurface3dElementCoordinateSystem::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                                            const Handle(StepFEA_FeaAxis2Placement3d) &aCoordinateSystem)
{
  StepFEA_FeaRepresentationItem::Init(aRepresentationItem_Name);

  theCoordinateSystem = aCoordinateSystem;
}

//=======================================================================
//function : CoordinateSystem
//purpose  : 
//=======================================================================

Handle(StepFEA_FeaAxis2Placement3d) StepFEA_AlignedSurface3dElementCoordinateSystem::CoordinateSystem () const
{
  return theCoordinateSystem;
}

//=======================================================================
//function : SetCoordinateSystem
//purpose  : 
//=======================================================================

void StepFEA_AlignedSurface3dElementCoordinateSystem::SetCoordinateSystem (const Handle(StepFEA_FeaAxis2Placement3d) &aCoordinateSystem)
{
  theCoordinateSystem = aCoordinateSystem;
}
