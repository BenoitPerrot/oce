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

#include <TCollection_HAsciiString.hxx>
#include <StepFEA_SymmetricTensor42d.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_FeaShellMembraneStiffness)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaMaterialPropertyRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_FeaShellMembraneStiffness)
IMPLEMENT_DOWNCAST(StepFEA_FeaShellMembraneStiffness,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_FeaShellMembraneStiffness)

//=======================================================================
//function : StepFEA_FeaShellMembraneStiffness
//purpose  : 
//=======================================================================

StepFEA_FeaShellMembraneStiffness::StepFEA_FeaShellMembraneStiffness ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_FeaShellMembraneStiffness::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                              const StepFEA_SymmetricTensor42d &aFeaConstants)
{
  StepFEA_FeaMaterialPropertyRepresentationItem::Init(aRepresentationItem_Name);

  theFeaConstants = aFeaConstants;
}

//=======================================================================
//function : FeaConstants
//purpose  : 
//=======================================================================

StepFEA_SymmetricTensor42d StepFEA_FeaShellMembraneStiffness::FeaConstants () const
{
  return theFeaConstants;
}

//=======================================================================
//function : SetFeaConstants
//purpose  : 
//=======================================================================

void StepFEA_FeaShellMembraneStiffness::SetFeaConstants (const StepFEA_SymmetricTensor42d &aFeaConstants)
{
  theFeaConstants = aFeaConstants;
}
