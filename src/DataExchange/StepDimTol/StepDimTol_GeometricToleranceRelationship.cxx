// Created on: 2003-06-04
// Created by: Galina KULIKOVA
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

#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepDimTol_GeometricToleranceRelationship)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepDimTol_GeometricToleranceRelationship)
IMPLEMENT_DOWNCAST(StepDimTol_GeometricToleranceRelationship,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepDimTol_GeometricToleranceRelationship)

//=======================================================================
//function : StepDimTol_GeometricToleranceRelationship
//purpose  : 
//=======================================================================

StepDimTol_GeometricToleranceRelationship::StepDimTol_GeometricToleranceRelationship ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepDimTol_GeometricToleranceRelationship::Init (const Handle(TCollection_HAsciiString) &aName,
                                                      const Handle(TCollection_HAsciiString) &aDescription,
                                                      const Handle(StepDimTol_GeometricTolerance) &aRelatingGeometricTolerance,
                                                      const Handle(StepDimTol_GeometricTolerance) &aRelatedGeometricTolerance)
{

  theName = aName;

  theDescription = aDescription;

  theRelatingGeometricTolerance = aRelatingGeometricTolerance;

  theRelatedGeometricTolerance = aRelatedGeometricTolerance;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepDimTol_GeometricToleranceRelationship::Name () const
{
  return theName;
}

//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepDimTol_GeometricToleranceRelationship::SetName (const Handle(TCollection_HAsciiString) &aName)
{
  theName = aName;
}

//=======================================================================
//function : Description
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepDimTol_GeometricToleranceRelationship::Description () const
{
  return theDescription;
}

//=======================================================================
//function : SetDescription
//purpose  : 
//=======================================================================

void StepDimTol_GeometricToleranceRelationship::SetDescription (const Handle(TCollection_HAsciiString) &aDescription)
{
  theDescription = aDescription;
}

//=======================================================================
//function : RelatingGeometricTolerance
//purpose  : 
//=======================================================================

Handle(StepDimTol_GeometricTolerance) StepDimTol_GeometricToleranceRelationship::RelatingGeometricTolerance () const
{
  return theRelatingGeometricTolerance;
}

//=======================================================================
//function : SetRelatingGeometricTolerance
//purpose  : 
//=======================================================================

void StepDimTol_GeometricToleranceRelationship::SetRelatingGeometricTolerance (const Handle(StepDimTol_GeometricTolerance) &aRelatingGeometricTolerance)
{
  theRelatingGeometricTolerance = aRelatingGeometricTolerance;
}

//=======================================================================
//function : RelatedGeometricTolerance
//purpose  : 
//=======================================================================

Handle(StepDimTol_GeometricTolerance) StepDimTol_GeometricToleranceRelationship::RelatedGeometricTolerance () const
{
  return theRelatedGeometricTolerance;
}

//=======================================================================
//function : SetRelatedGeometricTolerance
//purpose  : 
//=======================================================================

void StepDimTol_GeometricToleranceRelationship::SetRelatedGeometricTolerance (const Handle(StepDimTol_GeometricTolerance) &aRelatedGeometricTolerance)
{
  theRelatedGeometricTolerance = aRelatedGeometricTolerance;
}
