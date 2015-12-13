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

#include <PGeom_Curve.hxx>
#include <gp_Dir.hxx>
#include <PGeom_OffsetCurve.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PGeom_OffsetCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PGeom_Curve),
  STANDARD_TYPE(PGeom_Geometry),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PGeom_OffsetCurve)
IMPLEMENT_DOWNCAST(PGeom_OffsetCurve,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PGeom_OffsetCurve)

//=======================================================================
//function : PGeom_OffsetCurve
//purpose  : 
//=======================================================================

PGeom_OffsetCurve::PGeom_OffsetCurve()
{}


//=======================================================================
//function : PGeom_OffsetCurve
//purpose  : 
//=======================================================================

PGeom_OffsetCurve::PGeom_OffsetCurve
  (const Handle(PGeom_Curve)& aBasisCurve,
   const Standard_Real aOffsetValue,
   const gp_Dir& aOffsetDirection) :
  basisCurve(aBasisCurve),
  offsetDirection(aOffsetDirection),
  offsetValue(aOffsetValue)
{}


//=======================================================================
//function : BasisCurve
//purpose  : 
//=======================================================================

void  PGeom_OffsetCurve::BasisCurve(const Handle(PGeom_Curve)& aBasisCurve)
{ basisCurve = aBasisCurve; }


//=======================================================================
//function : BasisCurve
//purpose  : 
//=======================================================================

Handle(PGeom_Curve)  PGeom_OffsetCurve::BasisCurve() const 
{ return basisCurve; }


//=======================================================================
//function : OffsetDirection
//purpose  : 
//=======================================================================

void  PGeom_OffsetCurve::OffsetDirection(const gp_Dir& aOffsetDirection)
{ offsetDirection = aOffsetDirection; }


//=======================================================================
//function : OffsetDirection
//purpose  : 
//=======================================================================

gp_Dir  PGeom_OffsetCurve::OffsetDirection() const 
{ return offsetDirection; }


//=======================================================================
//function : OffsetValue
//purpose  : 
//=======================================================================

void  PGeom_OffsetCurve::OffsetValue(const Standard_Real aOffsetValue)
{ offsetValue = aOffsetValue; }


//=======================================================================
//function : OffsetValue
//purpose  : 
//=======================================================================

Standard_Real  PGeom_OffsetCurve::OffsetValue() const 
{ return offsetValue; }
