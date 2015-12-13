// Created on: 1998-10-29
// Created by: Mister rmi
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

#include <CDM_NullMessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(CDM_NullMessageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(CDM_MessageDriver),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(CDM_NullMessageDriver)
IMPLEMENT_DOWNCAST(CDM_NullMessageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(CDM_NullMessageDriver)
#include <TCollection_ExtendedString.hxx>
CDM_NullMessageDriver::CDM_NullMessageDriver() {}

void CDM_NullMessageDriver::Write(const Standard_ExtString /*aString*/) {
}
