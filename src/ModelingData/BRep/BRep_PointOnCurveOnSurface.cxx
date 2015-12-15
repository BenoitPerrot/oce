// Created on: 1993-08-10
// Created by: Remi LEQUETTE
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

#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <BRep_PointOnCurveOnSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRep_PointOnCurveOnSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BRep_PointsOnSurface),
  STANDARD_TYPE(BRep_PointRepresentation),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRep_PointOnCurveOnSurface)
IMPLEMENT_DOWNCAST(BRep_PointOnCurveOnSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRep_PointOnCurveOnSurface)


//=======================================================================
//function : BRep_PointOnCurveOnSurface
//purpose  : 
//=======================================================================

BRep_PointOnCurveOnSurface::BRep_PointOnCurveOnSurface
  (const Standard_Real P, 
   const Handle(Geom2d_Curve)& C,
   const Handle(Geom_Surface)& S,
   const TopLoc_Location& L) :
  BRep_PointsOnSurface(P,S,L),
  myPCurve(C)
{
}


//=======================================================================
//function : IsPointOnCurveOnSurface
//purpose  : 
//=======================================================================

Standard_Boolean  BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface()const 
{
  return Standard_True;
}


//=======================================================================
//function : IsPointOnCurveOnSurface
//purpose  : 
//=======================================================================

Standard_Boolean  BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface
  (const Handle(Geom2d_Curve)& PC,
   const Handle(Geom_Surface)& S, 
   const TopLoc_Location& L)const 
{
  return (myPCurve == PC) && (Surface() == S) && (Location() == L);
}


//=======================================================================
//function : PCurve
//purpose  : 
//=======================================================================

const Handle(Geom2d_Curve)&  BRep_PointOnCurveOnSurface::PCurve()const 
{
  return myPCurve;
}


//=======================================================================
//function : PCurve
//purpose  : 
//=======================================================================

void  BRep_PointOnCurveOnSurface::PCurve(const Handle(Geom2d_Curve)& C)
{
  myPCurve = C;
}


