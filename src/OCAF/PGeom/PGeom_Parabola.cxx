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

#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <OCAF/PGeom/PGeom_Parabola.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom_Parabola)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom_Conic),
  STANDARD_TYPE(PGeom_Curve),
  STANDARD_TYPE(PGeom_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom_Parabola)
IMPLEMENT_DOWNCAST(PGeom_Parabola,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom_Parabola)

//=======================================================================
//function : PGeom_Parabola
//purpose  : 
//=======================================================================

PGeom_Parabola::PGeom_Parabola()
{}


//=======================================================================
//function : PGeom_Parabola
//purpose  : 
//=======================================================================

PGeom_Parabola::PGeom_Parabola
  (const gp_Ax2& aPosition,
   const Standard_Real aFocalLength) :
  PGeom_Conic(aPosition),
  focalLength(aFocalLength)
{}


//=======================================================================
//function : FocalLength
//purpose  : 
//=======================================================================

void  PGeom_Parabola::FocalLength(const Standard_Real aFocalLength)
{ focalLength = aFocalLength; }


//=======================================================================
//function : FocalLength
//purpose  : 
//=======================================================================

Standard_Real  PGeom_Parabola::FocalLength() const 
{ return focalLength; }
