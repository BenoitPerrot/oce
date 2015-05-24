// Created on: 2007-05-29
// Created by: Vlad Romashko
// Copyright (c) 2007-2014 OPEN CASCADE SAS
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

#include <PColStd_HArray1OfInteger.hxx>
#include <PDataStd_ByteArray.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PDataStd_ByteArray)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PDataStd_ByteArray)
IMPLEMENT_DOWNCAST(PDataStd_ByteArray,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PDataStd_ByteArray)

//=======================================================================
//function : PDataStd_ByteArray
//purpose  : 
//=======================================================================
PDataStd_ByteArray::PDataStd_ByteArray() 
{ 

}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================
void PDataStd_ByteArray::Set(const Handle(PColStd_HArray1OfInteger)& values)
{
  myValues = values;
}

//=======================================================================
//function : Get
//purpose  : 
//=======================================================================
const Handle(PColStd_HArray1OfInteger)& PDataStd_ByteArray::Get() const
{
  return myValues;
}
