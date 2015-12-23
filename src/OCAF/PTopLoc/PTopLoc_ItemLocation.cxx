// Created on: 1993-03-03
// Created by: Remi LEQUETTE
// Copyright (c) 1993-1999 Matra Datavision
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

#include <OCAF/PTopLoc/PTopLoc_Datum3D.hxx>
#include <OCAF/PTopLoc/PTopLoc_Location.hxx>
#include <OCAF/PTopLoc/PTopLoc_ItemLocation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PTopLoc_ItemLocation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PTopLoc_ItemLocation)
IMPLEMENT_DOWNCAST(PTopLoc_ItemLocation,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PTopLoc_ItemLocation)

//=======================================================================
//function : PTopLoc_ItemLocation
//purpose  : 
//=======================================================================

PTopLoc_ItemLocation::PTopLoc_ItemLocation(const Handle(PTopLoc_Datum3D)& D, 
					   const Standard_Integer P,
					   const PTopLoc_Location& N) :
       myDatum(D),
       myPower(P),
       myNext(N)
{
}


//=======================================================================
//function : Datum3D
//purpose  : 
//=======================================================================

Handle(PTopLoc_Datum3D)  PTopLoc_ItemLocation::Datum3D()const 
{
  return myDatum;
}


//=======================================================================
//function : Power
//purpose  : 
//=======================================================================

Standard_Integer  PTopLoc_ItemLocation::Power()const 
{
  return myPower;
}


//=======================================================================
//function : Next
//purpose  : 
//=======================================================================

PTopLoc_Location  PTopLoc_ItemLocation::Next()const 
{
  return myNext;
}


