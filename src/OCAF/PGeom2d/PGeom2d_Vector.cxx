// Created on: 1993-03-04
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

#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <OCAF/PGeom2d/PGeom2d_Vector.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom2d_Vector)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom2d_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom2d_Vector)
IMPLEMENT_DOWNCAST(PGeom2d_Vector,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom2d_Vector)

//=======================================================================
//function : PGeom2d_Vector
//purpose  : 
//=======================================================================

PGeom2d_Vector::PGeom2d_Vector(const gp_Vec2d& aVec) :
       vec(aVec)
{}


//=======================================================================
//function : PGeom2d_Vector
//purpose  : 
//=======================================================================

PGeom2d_Vector::PGeom2d_Vector()
{}


//=======================================================================
//function : Vec
//purpose  : 
//=======================================================================

void  PGeom2d_Vector::Vec(const gp_Vec2d& aVec)
{ vec = aVec; }


//=======================================================================
//function : Vec
//purpose  : 
//=======================================================================

gp_Vec2d PGeom2d_Vector::Vec() const 
{ return vec; }
