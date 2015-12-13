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

#include <PTopLoc_ItemLocation.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <PTopLoc_Datum3D.hxx>
#include <PTopLoc_Location.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PTopLoc_Location)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PTopLoc_Location)
#include <Foundation/Standard/Standard_NoSuchObject.hxx>

//=======================================================================
//function : PTopLoc_Location
//purpose  : 
//=======================================================================

PTopLoc_Location::PTopLoc_Location() 
{
}


//=======================================================================
//function : PTopLoc_Location
//purpose  : 
//=======================================================================

PTopLoc_Location::PTopLoc_Location(const Handle(PTopLoc_Datum3D)& D,
				   const Standard_Integer P,
				   const PTopLoc_Location& N) 
{
  myData = new PTopLoc_ItemLocation(D,P,N);
}


//=======================================================================
//function : IsIdentity
//purpose  : 
//=======================================================================

Standard_Boolean PTopLoc_Location::IsIdentity() const 
{
  return myData.IsNull();
}

//=======================================================================
//function : Datum3D
//purpose  : 
//=======================================================================

Handle(PTopLoc_Datum3D)  PTopLoc_Location::Datum3D()const 
{
  Standard_NoSuchObject_Raise_if(IsIdentity(),"PTopLoc_Location::Datum3D");
  return myData->Datum3D();
}


//=======================================================================
//function : Power
//purpose  : 
//=======================================================================

Standard_Integer  PTopLoc_Location::Power()const 
{
  Standard_NoSuchObject_Raise_if(IsIdentity(),"PTopLoc_Location::Power");
  return myData->Power();
}


//=======================================================================
//function : PTopLoc_Location
//purpose  : 
//=======================================================================

PTopLoc_Location PTopLoc_Location::Next() const
{
  Standard_NoSuchObject_Raise_if(IsIdentity(),"PTopLoc_Location::Next");
  return myData->Next();
}



