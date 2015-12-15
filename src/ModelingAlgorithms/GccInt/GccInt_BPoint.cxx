// Created on: 1991-10-07
// Created by: Remi GILET
// Copyright (c) 1991-1999 Matra Datavision
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

#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <GccInt_BPoint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(GccInt_BPoint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(GccInt_Bisec),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(GccInt_BPoint)
IMPLEMENT_DOWNCAST(GccInt_BPoint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(GccInt_BPoint)
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>

GccInt_BPoint::
   GccInt_BPoint(const gp_Pnt2d& Point) {
   pnt = gp_Pnt2d(Point);
 }

GccInt_IType GccInt_BPoint::
   ArcType() const {
   return GccInt_Pnt;
 }

gp_Pnt2d GccInt_BPoint::
   Point() const { return pnt; }


