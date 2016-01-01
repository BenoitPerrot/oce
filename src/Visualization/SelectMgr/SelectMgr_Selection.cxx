// Created on: 1995-02-16
// Created by: Mister rmi
// Copyright (c) 1995-1999 Matra Datavision
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

#include <Foundation/Standard/Standard_NullObject.hxx>
#include <Visualization/SelectBasics/SelectBasics_SensitiveEntity.hxx>
#include <Visualization/SelectMgr/SelectMgr_Selection.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(SelectMgr_Selection)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(SelectMgr_Selection)
IMPLEMENT_DOWNCAST(SelectMgr_Selection,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(SelectMgr_Selection)


//==================================================
// Function: Create 
// Purpose :
//==================================================
SelectMgr_Selection
::SelectMgr_Selection (const Standard_Integer IdMode):
myMode(IdMode)
{}

//==================================================
// Function: Destroy
// Purpose :
//==================================================
void SelectMgr_Selection::Destroy()
{
  for (auto sensitive : myentities)
  {
    sensitive->Set (NULL);
  }
}

//==================================================
// Function: ADD
// Purpose :
//==================================================
void SelectMgr_Selection
::Add (const Handle(SelectBasics_SensitiveEntity)& aprimitive)
{
  // if input is null:
  // in debug mode raise exception
  Standard_NullObject_Raise_if
    (aprimitive.IsNull(), "Null sensitive entity is added to the selection");
  // in release mode do not add
  if (!aprimitive.IsNull())
    myentities.push_back(aprimitive);
}	

//==================================================
// Function: Clear 
// Purpose :
//==================================================
void SelectMgr_Selection
::Clear () {myentities.clear();}

//==================================================
// Function: IsEmpty 
// Purpose :
//==================================================
Standard_Boolean SelectMgr_Selection
::IsEmpty() const
{
  return myentities.empty();
}






