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

#include <StepElement_HArray1OfSurfaceSection.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepElement_SurfaceSectionFieldVarying)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepElement_SurfaceSectionField),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepElement_SurfaceSectionFieldVarying)
IMPLEMENT_DOWNCAST(StepElement_SurfaceSectionFieldVarying,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepElement_SurfaceSectionFieldVarying)

//=======================================================================
//function : StepElement_SurfaceSectionFieldVarying
//purpose  : 
//=======================================================================

StepElement_SurfaceSectionFieldVarying::StepElement_SurfaceSectionFieldVarying ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepElement_SurfaceSectionFieldVarying::Init (const Handle(StepElement_HArray1OfSurfaceSection) &aDefinitions,
                                                   const Standard_Boolean aAdditionalNodeValues)
{
  //StepElement_SurfaceSectionField::Init();

  theDefinitions = aDefinitions;

  theAdditionalNodeValues = aAdditionalNodeValues;
}

//=======================================================================
//function : Definitions
//purpose  : 
//=======================================================================

Handle(StepElement_HArray1OfSurfaceSection) StepElement_SurfaceSectionFieldVarying::Definitions () const
{
  return theDefinitions;
}

//=======================================================================
//function : SetDefinitions
//purpose  : 
//=======================================================================

void StepElement_SurfaceSectionFieldVarying::SetDefinitions (const Handle(StepElement_HArray1OfSurfaceSection) &aDefinitions)
{
  theDefinitions = aDefinitions;
}

//=======================================================================
//function : AdditionalNodeValues
//purpose  : 
//=======================================================================

Standard_Boolean StepElement_SurfaceSectionFieldVarying::AdditionalNodeValues () const
{
  return theAdditionalNodeValues;
}

//=======================================================================
//function : SetAdditionalNodeValues
//purpose  : 
//=======================================================================

void StepElement_SurfaceSectionFieldVarying::SetAdditionalNodeValues (const Standard_Boolean aAdditionalNodeValues)
{
  theAdditionalNodeValues = aAdditionalNodeValues;
}
