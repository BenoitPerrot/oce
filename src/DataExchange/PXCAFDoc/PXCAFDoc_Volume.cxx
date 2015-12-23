// Created on: 2000-09-08
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

#include <DataExchange/PXCAFDoc/PXCAFDoc_Volume.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PXCAFDoc_Volume)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PXCAFDoc_Volume)
IMPLEMENT_DOWNCAST(PXCAFDoc_Volume,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PXCAFDoc_Volume)

//=======================================================================
//function : PXCAFDoc_Volume
//purpose  : 
//=======================================================================

PXCAFDoc_Volume::PXCAFDoc_Volume () : myValue(0.) { }

//=======================================================================
//function : PXCAFDoc_Volume
//purpose  : 
//=======================================================================

PXCAFDoc_Volume::PXCAFDoc_Volume (const Standard_Real V) : myValue (V) {}
    
//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

void PXCAFDoc_Volume::Set (const Standard_Real V) 
{
  myValue = V;
}

//=======================================================================
//function : Get
//purpose  : 
//=======================================================================

Standard_Real PXCAFDoc_Volume::Get () const
{
  return myValue;
}
