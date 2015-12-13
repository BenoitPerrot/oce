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

#include <gp_Ax2.hxx>
#include <PGeom_Ellipse.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom_Ellipse)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom_Conic),
  STANDARD_TYPE(PGeom_Curve),
  STANDARD_TYPE(PGeom_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom_Ellipse)
IMPLEMENT_DOWNCAST(PGeom_Ellipse,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom_Ellipse)

//=======================================================================
//function : PGeom_Ellipse
//purpose  : 
//=======================================================================

PGeom_Ellipse::PGeom_Ellipse()
{}


//=======================================================================
//function : PGeom_Ellipse
//purpose  : 
//=======================================================================

PGeom_Ellipse::PGeom_Ellipse
  (const gp_Ax2& aPosition,
   const Standard_Real aMajorRadius,
   const Standard_Real aMinorRadius) :
  PGeom_Conic(aPosition),
  majorRadius(aMajorRadius),
  minorRadius(aMinorRadius)
{}


//=======================================================================
//function : MajorRadius
//purpose  : 
//=======================================================================

void  PGeom_Ellipse::MajorRadius(const Standard_Real aMajorRadius)
{ majorRadius = aMajorRadius; }


//=======================================================================
//function : MajorRadius
//purpose  : 
//=======================================================================

Standard_Real  PGeom_Ellipse::MajorRadius() const 
{ return majorRadius; }


//=======================================================================
//function : MinorRadius
//purpose  : 
//=======================================================================

void  PGeom_Ellipse::MinorRadius(const Standard_Real aMinorRadius)
{ minorRadius = aMinorRadius; }


//=======================================================================
//function : MinorRadius
//purpose  : 
//=======================================================================

Standard_Real  PGeom_Ellipse::MinorRadius() const 
{ return minorRadius; }
