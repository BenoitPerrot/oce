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

#include <DataExchange/StepVisual/StepVisual_PreDefinedItem.hxx>
#include <DataExchange/StepVisual/StepVisual_PreDefinedColour.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_PreDefinedColour)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepVisual_Colour),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_PreDefinedColour)
IMPLEMENT_DOWNCAST(StepVisual_PreDefinedColour,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_PreDefinedColour)


StepVisual_PreDefinedColour::StepVisual_PreDefinedColour ()  
{
  myItem = new StepVisual_PreDefinedItem;
}

void StepVisual_PreDefinedColour::SetPreDefinedItem (const Handle(StepVisual_PreDefinedItem) &item)  
{
  myItem = item;
}

const Handle(StepVisual_PreDefinedItem) &StepVisual_PreDefinedColour::GetPreDefinedItem () const 
{
  return myItem;
}
