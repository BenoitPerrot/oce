// Created on: 2007-08-17
// Created by: Sergey ZARITCHNY
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

#include <TDataStd_DataMapOfStringByte.hxx>
#include <TDataStd_HDataMapOfStringByte.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDataStd_HDataMapOfStringByte)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDataStd_HDataMapOfStringByte)
IMPLEMENT_DOWNCAST(TDataStd_HDataMapOfStringByte,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDataStd_HDataMapOfStringByte)

//=======================================================================
//function : TDataStd_HDataMapOfStringByte
//purpose  : Constructor of empty map
//=======================================================================
TDataStd_HDataMapOfStringByte::TDataStd_HDataMapOfStringByte(const Standard_Integer NbBuckets)
{
  myMap.ReSize(NbBuckets);
}

//=======================================================================
//function : TDataStd_HDataMapOfStringByte
//purpose  : Constructor from already existing map; performs copying
//=======================================================================
TDataStd_HDataMapOfStringByte::TDataStd_HDataMapOfStringByte (const TDataStd_DataMapOfStringByte &theOther)
{ 
  myMap.Assign ( theOther ); 
}
