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
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ProductCategoryRelationship)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ProductCategoryRelationship)
IMPLEMENT_DOWNCAST(StepBasic_ProductCategoryRelationship,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ProductCategoryRelationship)

//=======================================================================
//function : StepBasic_ProductCategoryRelationship
//purpose  : 
//=======================================================================

StepBasic_ProductCategoryRelationship::StepBasic_ProductCategoryRelationship ()
{
  defDescription = Standard_False;
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_ProductCategoryRelationship::Init (const Handle(TCollection_HAsciiString) &aName,
                                                  const Standard_Boolean hasDescription,
                                                  const Handle(TCollection_HAsciiString) &aDescription,
                                                  const Handle(StepBasic_ProductCategory) &aCategory,
                                                  const Handle(StepBasic_ProductCategory) &aSubCategory)
{

  theName = aName;

  defDescription = hasDescription;
  if (defDescription) {
    theDescription = aDescription;
  }
  else theDescription.Nullify();

  theCategory = aCategory;

  theSubCategory = aSubCategory;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_ProductCategoryRelationship::Name () const
{
  return theName;
}

//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepBasic_ProductCategoryRelationship::SetName (const Handle(TCollection_HAsciiString) &aName)
{
  theName = aName;
}

//=======================================================================
//function : Description
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_ProductCategoryRelationship::Description () const
{
  return theDescription;
}

//=======================================================================
//function : SetDescription
//purpose  : 
//=======================================================================

void StepBasic_ProductCategoryRelationship::SetDescription (const Handle(TCollection_HAsciiString) &aDescription)
{
  theDescription = aDescription;
}

//=======================================================================
//function : HasDescription
//purpose  : 
//=======================================================================

Standard_Boolean StepBasic_ProductCategoryRelationship::HasDescription () const
{
  return defDescription;
}

//=======================================================================
//function : Category
//purpose  : 
//=======================================================================

Handle(StepBasic_ProductCategory) StepBasic_ProductCategoryRelationship::Category () const
{
  return theCategory;
}

//=======================================================================
//function : SetCategory
//purpose  : 
//=======================================================================

void StepBasic_ProductCategoryRelationship::SetCategory (const Handle(StepBasic_ProductCategory) &aCategory)
{
  theCategory = aCategory;
}

//=======================================================================
//function : SubCategory
//purpose  : 
//=======================================================================

Handle(StepBasic_ProductCategory) StepBasic_ProductCategoryRelationship::SubCategory () const
{
  return theSubCategory;
}

//=======================================================================
//function : SetSubCategory
//purpose  : 
//=======================================================================

void StepBasic_ProductCategoryRelationship::SetSubCategory (const Handle(StepBasic_ProductCategory) &aSubCategory)
{
  theSubCategory = aSubCategory;
}
