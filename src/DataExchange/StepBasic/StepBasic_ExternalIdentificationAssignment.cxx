// Created on: 2000-05-10
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1

#include <DataExchange/StepBasic/StepBasic_ExternalSource.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/StepBasic_IdentificationRole.hxx>
#include <DataExchange/StepBasic/StepBasic_ExternalIdentificationAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ExternalIdentificationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_IdentificationAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ExternalIdentificationAssignment)
IMPLEMENT_DOWNCAST(StepBasic_ExternalIdentificationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ExternalIdentificationAssignment)

//=======================================================================
//function : StepBasic_ExternalIdentificationAssignment
//purpose  : 
//=======================================================================

StepBasic_ExternalIdentificationAssignment::StepBasic_ExternalIdentificationAssignment ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_ExternalIdentificationAssignment::Init (const Handle(TCollection_HAsciiString) &aIdentificationAssignment_AssignedId,
                                                       const Handle(StepBasic_IdentificationRole) &aIdentificationAssignment_Role,
                                                       const Handle(StepBasic_ExternalSource) &aSource)
{
  StepBasic_IdentificationAssignment::Init(aIdentificationAssignment_AssignedId,
                                           aIdentificationAssignment_Role);

  theSource = aSource;
}

//=======================================================================
//function : Source
//purpose  : 
//=======================================================================

Handle(StepBasic_ExternalSource) StepBasic_ExternalIdentificationAssignment::Source () const
{
  return theSource;
}

//=======================================================================
//function : SetSource
//purpose  : 
//=======================================================================

void StepBasic_ExternalIdentificationAssignment::SetSource (const Handle(StepBasic_ExternalSource) &aSource)
{
  theSource = aSource;
}
