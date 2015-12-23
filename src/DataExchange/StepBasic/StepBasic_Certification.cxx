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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/StepBasic_CertificationType.hxx>
#include <DataExchange/StepBasic/StepBasic_Certification.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_Certification)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_Certification)
IMPLEMENT_DOWNCAST(StepBasic_Certification,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_Certification)

//=======================================================================
//function : StepBasic_Certification
//purpose  : 
//=======================================================================

StepBasic_Certification::StepBasic_Certification ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_Certification::Init (const Handle(TCollection_HAsciiString) &aName,
                                    const Handle(TCollection_HAsciiString) &aPurpose,
                                    const Handle(StepBasic_CertificationType) &aKind)
{

  theName = aName;

  thePurpose = aPurpose;

  theKind = aKind;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_Certification::Name () const
{
  return theName;
}

//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepBasic_Certification::SetName (const Handle(TCollection_HAsciiString) &aName)
{
  theName = aName;
}

//=======================================================================
//function : Purpose
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_Certification::Purpose () const
{
  return thePurpose;
}

//=======================================================================
//function : SetPurpose
//purpose  : 
//=======================================================================

void StepBasic_Certification::SetPurpose (const Handle(TCollection_HAsciiString) &aPurpose)
{
  thePurpose = aPurpose;
}

//=======================================================================
//function : Kind
//purpose  : 
//=======================================================================

Handle(StepBasic_CertificationType) StepBasic_Certification::Kind () const
{
  return theKind;
}

//=======================================================================
//function : SetKind
//purpose  : 
//=======================================================================

void StepBasic_Certification::SetKind (const Handle(StepBasic_CertificationType) &aKind)
{
  theKind = aKind;
}
