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

#include <StepElement_HArray1OfCurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_CurveElementIntervalLinearlyVarying)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_CurveElementInterval),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_CurveElementIntervalLinearlyVarying)
IMPLEMENT_DOWNCAST(StepFEA_CurveElementIntervalLinearlyVarying,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_CurveElementIntervalLinearlyVarying)

//=======================================================================
//function : StepFEA_CurveElementIntervalLinearlyVarying
//purpose  : 
//=======================================================================

StepFEA_CurveElementIntervalLinearlyVarying::StepFEA_CurveElementIntervalLinearlyVarying ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_CurveElementIntervalLinearlyVarying::Init (const Handle(StepFEA_CurveElementLocation) &aCurveElementInterval_FinishPosition,
                                                        const Handle(StepBasic_EulerAngles) &aCurveElementInterval_EuAngles,
                                                        const Handle(StepElement_HArray1OfCurveElementSectionDefinition) &aSections)
{
  StepFEA_CurveElementInterval::Init(aCurveElementInterval_FinishPosition,
                                     aCurveElementInterval_EuAngles);

  theSections = aSections;
}

//=======================================================================
//function : Sections
//purpose  : 
//=======================================================================

Handle(StepElement_HArray1OfCurveElementSectionDefinition) StepFEA_CurveElementIntervalLinearlyVarying::Sections () const
{
  return theSections;
}

//=======================================================================
//function : SetSections
//purpose  : 
//=======================================================================

void StepFEA_CurveElementIntervalLinearlyVarying::SetSections (const Handle(StepElement_HArray1OfCurveElementSectionDefinition) &aSections)
{
  theSections = aSections;
}
