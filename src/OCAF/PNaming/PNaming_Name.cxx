// Created on: 1997-10-27
// Created by: Yves FRICAUD
// Copyright (c) 1997-1999 Matra Datavision
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

#include <OCAF/PNaming/PNaming_HArray1OfNamedShape.hxx>
#include <OCAF/PNaming/PNaming_NamedShape.hxx>
#include <OCAF/PNaming/PNaming_Name.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PNaming_Name)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PNaming_Name)
IMPLEMENT_DOWNCAST(PNaming_Name,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PNaming_Name)


//=======================================================================
//function : PNaming_Name
//purpose  : 
//=======================================================================

PNaming_Name::PNaming_Name() : myType(0), myShapeType(0), myIndex(0)
{
}
