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

#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <DataExchange/StepBasic/StepBasic_EulerAngles.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_EulerAngles)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_EulerAngles)
IMPLEMENT_DOWNCAST(StepBasic_EulerAngles,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_EulerAngles)

//=======================================================================
//function : StepBasic_EulerAngles
//purpose  : 
//=======================================================================

StepBasic_EulerAngles::StepBasic_EulerAngles ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_EulerAngles::Init (const Handle(TColStd_HArray1OfReal) &aAngles)
{

  theAngles = aAngles;
}

//=======================================================================
//function : Angles
//purpose  : 
//=======================================================================

Handle(TColStd_HArray1OfReal) StepBasic_EulerAngles::Angles () const
{
  return theAngles;
}

//=======================================================================
//function : SetAngles
//purpose  : 
//=======================================================================

void StepBasic_EulerAngles::SetAngles (const Handle(TColStd_HArray1OfReal) &aAngles)
{
  theAngles = aAngles;
}
