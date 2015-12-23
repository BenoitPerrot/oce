// Created on: 2008-08-15
// Created by: Sergey ZARITCHNY
// Copyright (c) 2008-2014 OPEN CASCADE SAS
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

#include <OCAF/PNaming/PNaming_Name_2.hxx>
#include <OCAF/PNaming/PNaming_Naming_2.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PNaming_Naming_2)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PNaming_Naming_2)
IMPLEMENT_DOWNCAST(PNaming_Naming_2,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PNaming_Naming_2)

//=======================================================================
//function : PNaming_Naming_2
//purpose  : 
//=======================================================================

PNaming_Naming_2::PNaming_Naming_2() {}


//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void PNaming_Naming_2::SetName(const Handle(PNaming_Name_2)& Name) 
{myName = Name ;}

//=======================================================================
//function : GetName
//purpose  : 
//=======================================================================

Handle(PNaming_Name_2) PNaming_Naming_2::GetName() const
{
  return myName;
}
