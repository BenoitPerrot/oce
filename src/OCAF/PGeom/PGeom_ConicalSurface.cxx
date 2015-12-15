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

#include <Mathematics/Primitives/gp_Ax3.hxx>
#include <PGeom_ConicalSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom_ConicalSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom_ElementarySurface),
  STANDARD_TYPE(PGeom_Surface),
  STANDARD_TYPE(PGeom_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom_ConicalSurface)
IMPLEMENT_DOWNCAST(PGeom_ConicalSurface,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom_ConicalSurface)

//=======================================================================
//function : PGeom_ConicalSurface
//purpose  : 
//=======================================================================

PGeom_ConicalSurface::PGeom_ConicalSurface()
{}


//=======================================================================
//function : PGeom_ConicalSurface
//purpose  : 
//=======================================================================

PGeom_ConicalSurface::PGeom_ConicalSurface
  (const gp_Ax3& aPosition,
   const Standard_Real aRadius,
   const Standard_Real aSemiAngle) :
  PGeom_ElementarySurface(aPosition),
  radius(aRadius),
  semiAngle(aSemiAngle)
{}


//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

void  PGeom_ConicalSurface::Radius(const Standard_Real aRadius)
{ radius = aRadius; }


//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

Standard_Real  PGeom_ConicalSurface::Radius() const 
{ return radius; }


//=======================================================================
//function : SemiAngle
//purpose  : 
//=======================================================================

void  PGeom_ConicalSurface::SemiAngle(const Standard_Real aSemiAngle)
{ semiAngle = aSemiAngle; }


//=======================================================================
//function : SemiAngle
//purpose  : 
//=======================================================================

Standard_Real  PGeom_ConicalSurface::SemiAngle() const 
{ return semiAngle; }
