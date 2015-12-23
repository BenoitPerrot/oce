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
#include <DataExchange/StepFEA/StepFEA_SymmetricTensor23d.hxx>
#include <DataExchange/StepFEA/StepFEA_FeaMoistureAbsorption.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_FeaMoistureAbsorption)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaMaterialPropertyRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_FeaMoistureAbsorption)
IMPLEMENT_DOWNCAST(StepFEA_FeaMoistureAbsorption,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_FeaMoistureAbsorption)

//=======================================================================
//function : StepFEA_FeaMoistureAbsorption
//purpose  : 
//=======================================================================

StepFEA_FeaMoistureAbsorption::StepFEA_FeaMoistureAbsorption ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_FeaMoistureAbsorption::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                          const StepFEA_SymmetricTensor23d &aFeaConstants)
{
  StepFEA_FeaMaterialPropertyRepresentationItem::Init(aRepresentationItem_Name);

  theFeaConstants = aFeaConstants;
}

//=======================================================================
//function : FeaConstants
//purpose  : 
//=======================================================================

StepFEA_SymmetricTensor23d StepFEA_FeaMoistureAbsorption::FeaConstants () const
{
  return theFeaConstants;
}

//=======================================================================
//function : SetFeaConstants
//purpose  : 
//=======================================================================

void StepFEA_FeaMoistureAbsorption::SetFeaConstants (const StepFEA_SymmetricTensor23d &aFeaConstants)
{
  theFeaConstants = aFeaConstants;
}
