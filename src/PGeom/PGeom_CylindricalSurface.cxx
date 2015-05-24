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

#include <gp_Ax3.hxx>
#include <PGeom_CylindricalSurface.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom_CylindricalSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom_ElementarySurface),
  STANDARD_TYPE(PGeom_Surface),
  STANDARD_TYPE(PGeom_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom_CylindricalSurface)
IMPLEMENT_DOWNCAST(PGeom_CylindricalSurface,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom_CylindricalSurface)

//=======================================================================
//function : PGeom_CylindricalSurface
//purpose  : 
//=======================================================================

PGeom_CylindricalSurface::PGeom_CylindricalSurface()
{}


//=======================================================================
//function : PGeom_CylindricalSurface
//purpose  : 
//=======================================================================

PGeom_CylindricalSurface::PGeom_CylindricalSurface
  (const gp_Ax3& aPosition,
   const Standard_Real aRadius) :
  PGeom_ElementarySurface(aPosition),
  radius(aRadius)
{}


//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

void  PGeom_CylindricalSurface::Radius(const Standard_Real aRadius)
{ radius = aRadius; }


//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

Standard_Real  PGeom_CylindricalSurface::Radius() const 
{ return radius; }
