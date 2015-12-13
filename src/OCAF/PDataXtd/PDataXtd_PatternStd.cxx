// Created on: 1998-02-16
// Created by: Jing Cheng MEI
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

#include <PNaming_NamedShape.hxx>
#include <PDataStd_Real.hxx>
#include <PDataStd_Integer.hxx>
#include <PDataXtd_PatternStd.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PDataXtd_PatternStd)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PDataXtd_PatternStd)
IMPLEMENT_DOWNCAST(PDataXtd_PatternStd,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PDataXtd_PatternStd)

PDataXtd_PatternStd::PDataXtd_PatternStd() :
    mySignature(0),
    myAxis1Reversed(Standard_False),
    myAxis2Reversed(Standard_False)
{
}
