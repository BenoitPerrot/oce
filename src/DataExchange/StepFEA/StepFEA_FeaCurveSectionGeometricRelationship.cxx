// Created on: 2003-01-22
// Created by: data exchange team
// Copyright (c) 2003-2014 OPEN CASCADE SAS
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

#include <DataExchange/StepElement/StepElement_CurveElementSectionDefinition.hxx>
#include <DataExchange/StepElement/StepElement_AnalysisItemWithinRepresentation.hxx>
#include <DataExchange/StepFEA/StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_FeaCurveSectionGeometricRelationship)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_FeaCurveSectionGeometricRelationship)
IMPLEMENT_DOWNCAST(StepFEA_FeaCurveSectionGeometricRelationship,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_FeaCurveSectionGeometricRelationship)

//=======================================================================
//function : StepFEA_FeaCurveSectionGeometricRelationship
//purpose  : 
//=======================================================================

StepFEA_FeaCurveSectionGeometricRelationship::StepFEA_FeaCurveSectionGeometricRelationship ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_FeaCurveSectionGeometricRelationship::Init (const Handle(StepElement_CurveElementSectionDefinition) &aSectionRef,
                                                         const Handle(StepElement_AnalysisItemWithinRepresentation) &aItem)
{

  theSectionRef = aSectionRef;

  theItem = aItem;
}

//=======================================================================
//function : SectionRef
//purpose  : 
//=======================================================================

Handle(StepElement_CurveElementSectionDefinition) StepFEA_FeaCurveSectionGeometricRelationship::SectionRef () const
{
  return theSectionRef;
}

//=======================================================================
//function : SetSectionRef
//purpose  : 
//=======================================================================

void StepFEA_FeaCurveSectionGeometricRelationship::SetSectionRef (const Handle(StepElement_CurveElementSectionDefinition) &aSectionRef)
{
  theSectionRef = aSectionRef;
}

//=======================================================================
//function : Item
//purpose  : 
//=======================================================================

Handle(StepElement_AnalysisItemWithinRepresentation) StepFEA_FeaCurveSectionGeometricRelationship::Item () const
{
  return theItem;
}

//=======================================================================
//function : SetItem
//purpose  : 
//=======================================================================

void StepFEA_FeaCurveSectionGeometricRelationship::SetItem (const Handle(StepElement_AnalysisItemWithinRepresentation) &aItem)
{
  theItem = aItem;
}
