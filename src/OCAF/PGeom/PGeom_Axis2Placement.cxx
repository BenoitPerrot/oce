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

#include <gp_Ax1.hxx>
#include <gp_Dir.hxx>
#include <PGeom_Axis2Placement.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom_Axis2Placement)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom_AxisPlacement),
  STANDARD_TYPE(PGeom_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom_Axis2Placement)
IMPLEMENT_DOWNCAST(PGeom_Axis2Placement,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom_Axis2Placement)

//=======================================================================
//function : PGeom_Axis2Placement
//purpose  : 
//=======================================================================

PGeom_Axis2Placement::PGeom_Axis2Placement()
{}


//=======================================================================
//function : PGeom_Axis2Placement
//purpose  : 
//=======================================================================

PGeom_Axis2Placement::PGeom_Axis2Placement
  (const gp_Ax1& aAxis,
   const gp_Dir& aXDirection) :
  PGeom_AxisPlacement(aAxis),
  xDirection(aXDirection)
{}


//=======================================================================
//function : XDirection
//purpose  : 
//=======================================================================

void  PGeom_Axis2Placement::XDirection(const gp_Dir& aXDirection)
{ xDirection = aXDirection; }


//=======================================================================
//function : XDirection
//purpose  : 
//=======================================================================

gp_Dir  PGeom_Axis2Placement::XDirection() const 
{ return xDirection; }
