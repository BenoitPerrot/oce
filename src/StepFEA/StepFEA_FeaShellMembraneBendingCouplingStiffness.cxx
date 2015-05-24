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
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_FeaShellMembraneBendingCouplingStiffness)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaMaterialPropertyRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_FeaShellMembraneBendingCouplingStiffness)
IMPLEMENT_DOWNCAST(StepFEA_FeaShellMembraneBendingCouplingStiffness,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_FeaShellMembraneBendingCouplingStiffness)

//=======================================================================
//function : StepFEA_FeaShellMembraneBendingCouplingStiffness
//purpose  : 
//=======================================================================

StepFEA_FeaShellMembraneBendingCouplingStiffness::StepFEA_FeaShellMembraneBendingCouplingStiffness ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_FeaShellMembraneBendingCouplingStiffness::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                                             const StepFEA_SymmetricTensor42d &aFeaConstants)
{
  StepFEA_FeaMaterialPropertyRepresentationItem::Init(aRepresentationItem_Name);

  theFeaConstants = aFeaConstants;
}

//=======================================================================
//function : FeaConstants
//purpose  : 
//=======================================================================

StepFEA_SymmetricTensor42d StepFEA_FeaShellMembraneBendingCouplingStiffness::FeaConstants () const
{
  return theFeaConstants;
}

//=======================================================================
//function : SetFeaConstants
//purpose  : 
//=======================================================================

void StepFEA_FeaShellMembraneBendingCouplingStiffness::SetFeaConstants (const StepFEA_SymmetricTensor42d &aFeaConstants)
{
  theFeaConstants = aFeaConstants;
}
