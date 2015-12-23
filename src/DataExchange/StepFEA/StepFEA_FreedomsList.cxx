// Created on: 2002-12-14
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

#include <DataExchange/StepFEA/StepFEA_HArray1OfDegreeOfFreedom.hxx>
#include <DataExchange/StepFEA/StepFEA_FreedomsList.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_FreedomsList)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_FreedomsList)
IMPLEMENT_DOWNCAST(StepFEA_FreedomsList,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_FreedomsList)

//=======================================================================
//function : StepFEA_FreedomsList
//purpose  : 
//=======================================================================

StepFEA_FreedomsList::StepFEA_FreedomsList ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_FreedomsList::Init (const Handle(StepFEA_HArray1OfDegreeOfFreedom) &aFreedoms)
{

  theFreedoms = aFreedoms;
}

//=======================================================================
//function : Freedoms
//purpose  : 
//=======================================================================

Handle(StepFEA_HArray1OfDegreeOfFreedom) StepFEA_FreedomsList::Freedoms () const
{
  return theFreedoms;
}

//=======================================================================
//function : SetFreedoms
//purpose  : 
//=======================================================================

void StepFEA_FreedomsList::SetFreedoms (const Handle(StepFEA_HArray1OfDegreeOfFreedom) &aFreedoms)
{
  theFreedoms = aFreedoms;
}
