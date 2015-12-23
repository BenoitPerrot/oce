// Created on: 1999-11-26
// Created by: Andrey BETENEV
// Copyright (c) 1999 Matra Datavision
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <DataExchange/StepBasic/StepBasic_Certification.hxx>
#include <DataExchange/StepBasic/StepBasic_CertificationAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_CertificationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_CertificationAssignment)
IMPLEMENT_DOWNCAST(StepBasic_CertificationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_CertificationAssignment)

//=======================================================================
//function : StepBasic_CertificationAssignment
//purpose  : 
//=======================================================================

StepBasic_CertificationAssignment::StepBasic_CertificationAssignment ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_CertificationAssignment::Init (const Handle(StepBasic_Certification) &aAssignedCertification)
{

  theAssignedCertification = aAssignedCertification;
}

//=======================================================================
//function : AssignedCertification
//purpose  : 
//=======================================================================

Handle(StepBasic_Certification) StepBasic_CertificationAssignment::AssignedCertification () const
{
  return theAssignedCertification;
}

//=======================================================================
//function : SetAssignedCertification
//purpose  : 
//=======================================================================

void StepBasic_CertificationAssignment::SetAssignedCertification (const Handle(StepBasic_Certification) &aAssignedCertification)
{
  theAssignedCertification = aAssignedCertification;
}
