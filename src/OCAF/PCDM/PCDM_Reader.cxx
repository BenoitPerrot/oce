// Created on: 1997-12-18
// Created by: Jean-Louis Frenkel
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

#include <OCAF/PCDM/PCDM_DriverError.hxx>
#include <OCAF/CDM/CDM_Document.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/CDM/CDM_Application.hxx>
#include <OCAF/PCDM/PCDM_Reader.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PCDM_Reader)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PCDM_Reader)
IMPLEMENT_DOWNCAST(PCDM_Reader,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(PCDM_Reader)

