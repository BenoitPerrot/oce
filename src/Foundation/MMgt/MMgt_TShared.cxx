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

#include <Standard_OutOfMemory.hxx>
#include <Standard_Type.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>

IMPLEMENT_STANDARD_TYPE(MMgt_TShared)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MMgt_TShared)

IMPLEMENT_DOWNCAST(MMgt_TShared,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MMgt_TShared)

//=======================================================================
//function : Delete
//purpose  : 
//=======================================================================
void MMgt_TShared::Delete() const
{
  delete (MMgt_TShared *)this;
}

