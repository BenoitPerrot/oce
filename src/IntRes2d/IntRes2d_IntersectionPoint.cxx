// Created on: 1992-10-01
// Created by: Laurent BUCHARD
// Copyright (c) 1992-1999 Matra Datavision
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

#include <gp_Pnt2d.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IntRes2d_IntersectionPoint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IntRes2d_IntersectionPoint)

IntRes2d_IntersectionPoint::IntRes2d_IntersectionPoint ():
      pt(),p1(RealLast()),p2(RealLast()),trans1(),trans2()
{}

