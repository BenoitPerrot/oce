// Created on: 2000-08-15
// Created by: data exchange team
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

#include <OCAF/PTopLoc/PTopLoc_Location.hxx>
#include <DataExchange/PXCAFDoc/PXCAFDoc_Location.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PXCAFDoc_Location)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PXCAFDoc_Location)
IMPLEMENT_DOWNCAST(PXCAFDoc_Location,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PXCAFDoc_Location)

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

PXCAFDoc_Location::PXCAFDoc_Location()
{
}

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

PXCAFDoc_Location::PXCAFDoc_Location(const PTopLoc_Location& Loc):
       myPLocation(Loc)
{
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

 void PXCAFDoc_Location::Set(const PTopLoc_Location& Loc) 
{
  myPLocation = Loc;
}

//=======================================================================
//function : Get
//purpose  : 
//=======================================================================

 PTopLoc_Location PXCAFDoc_Location::Get() const
{
  return myPLocation;
}

