// Created on: 1993-07-26
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

#include <PGeom2d_Curve.hxx>
#include <OCAF/PGeom/PGeom_Surface.hxx>
#include <PTopLoc_Location.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <OCAF/PBRep/PBRep_CurveOnClosedSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PBRep_CurveOnClosedSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PBRep_CurveOnSurface),
  STANDARD_TYPE(PBRep_GCurve),
  STANDARD_TYPE(PBRep_CurveRepresentation),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PBRep_CurveOnClosedSurface)
IMPLEMENT_DOWNCAST(PBRep_CurveOnClosedSurface,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PBRep_CurveOnClosedSurface)


//=======================================================================
//function : PBRep_CurveOnClosedSurface
//purpose  : 
//=======================================================================

PBRep_CurveOnClosedSurface::PBRep_CurveOnClosedSurface
  (const Handle(PGeom2d_Curve)& PC1,
   const Handle(PGeom2d_Curve)& PC2,
   const Standard_Real          CF,
   const Standard_Real          CL,
   const Handle(PGeom_Surface)& S,
   const PTopLoc_Location& L,
   const GeomAbs_Shape C) :
  PBRep_CurveOnSurface(PC1, CF, CL, S, L),
  myPCurve2(PC2),
  myContinuity(C)
{
}


//=======================================================================
//function : PCurve2
//purpose  : 
//=======================================================================

Handle(PGeom2d_Curve)  PBRep_CurveOnClosedSurface::PCurve2()const 
{
  return myPCurve2;
}


//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape  PBRep_CurveOnClosedSurface::Continuity()const 
{
  return myContinuity;
}

//=======================================================================
//function : IsCurveOnClosedSurface
//purpose  : 
//=======================================================================

Standard_Boolean  PBRep_CurveOnClosedSurface::IsCurveOnClosedSurface()const 
{
  return Standard_True;
}

//=======================================================================
//function : IsRegularity
//purpose  : 
//=======================================================================

Standard_Boolean  PBRep_CurveOnClosedSurface::IsRegularity()const 
{
  return Standard_True;
}

//=======================================================================
//function : SetUVPoints2
//purpose  : 
//=======================================================================

void PBRep_CurveOnClosedSurface::SetUVPoints2(const gp_Pnt2d& Pnt1,
					      const gp_Pnt2d& Pnt2) 
{
  myUV21 = Pnt1;
  myUV22 = Pnt2;
}

//=======================================================================
//function : FirstUV2
//purpose  : 
//=======================================================================

gp_Pnt2d PBRep_CurveOnClosedSurface::FirstUV2() const 
{
  return myUV21;
}

//=======================================================================
//function : LastUV2
//purpose  : 
//=======================================================================

gp_Pnt2d PBRep_CurveOnClosedSurface::LastUV2() const 
{
  return myUV22;
}

