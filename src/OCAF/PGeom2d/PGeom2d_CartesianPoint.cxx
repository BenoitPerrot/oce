// Created on: 1993-03-03
// Created by: Philippe DAUTRY
// Copyright (c) 1993-1999 Matra Datavision
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
#include <PGeom2d_CartesianPoint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom2d_CartesianPoint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom2d_Point),
  STANDARD_TYPE(PGeom2d_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom2d_CartesianPoint)
IMPLEMENT_DOWNCAST(PGeom2d_CartesianPoint,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom2d_CartesianPoint)

//=======================================================================
//function : PGeom2d_CartesianPoint
//purpose  : 
//=======================================================================

PGeom2d_CartesianPoint::PGeom2d_CartesianPoint ()
{}


//=======================================================================
//function : PGeom2d_CartesianPoint
//purpose  : 
//=======================================================================

PGeom2d_CartesianPoint::PGeom2d_CartesianPoint (const gp_Pnt2d& aPnt) :
       pnt(aPnt)
{}


//=======================================================================
//function : Pnt
//purpose  : 
//=======================================================================

void  PGeom2d_CartesianPoint::Pnt(const gp_Pnt2d& aPnt)
{ pnt = aPnt; }


//=======================================================================
//function : Pnt
//purpose  : 
//=======================================================================

gp_Pnt2d PGeom2d_CartesianPoint::Pnt() const 
{ return pnt; }
