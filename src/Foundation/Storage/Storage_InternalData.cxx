// Copyright (c) 1998-1999 Matra Datavision
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

#include <Standard_Type.hxx>
#include <Storage_HPArray.hxx>
#include <Storage_InternalData.hxx>
#include <Storage_Schema.hxx>

IMPLEMENT_STANDARD_TYPE(Storage_InternalData)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Storage_InternalData)

IMPLEMENT_DOWNCAST(Storage_InternalData,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Storage_InternalData)

Storage_InternalData::Storage_InternalData() : myObjId(1), myTypeId(1)
{
}

void Storage_InternalData::Clear()
{
  myTypeId = 1;
  myObjId  = 1;
  myReadArray.Nullify();
  myPtoA.Clear();
  myTypeBinding.Clear();
}

