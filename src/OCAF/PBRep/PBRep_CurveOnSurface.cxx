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

#include <PGeom_Surface.hxx>
#include <PGeom2d_Curve.hxx>
#include <PTopLoc_Location.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <OCAF/PBRep/PBRep_CurveOnSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PBRep_CurveOnSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PBRep_GCurve),
  STANDARD_TYPE(PBRep_CurveRepresentation),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PBRep_CurveOnSurface)
IMPLEMENT_DOWNCAST(PBRep_CurveOnSurface,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PBRep_CurveOnSurface)


//=======================================================================
//function : PBRep_CurveOnSurface
//purpose  : 
//=======================================================================

PBRep_CurveOnSurface::PBRep_CurveOnSurface(const Handle(PGeom2d_Curve)& PC,
					   const Standard_Real          CF,
					   const Standard_Real          CL,
					   const Handle(PGeom_Surface)& S,
					   const PTopLoc_Location&      L) :
       PBRep_GCurve(L, CF, CL),
       myPCurve(PC),
       mySurface(S)
{
}


//=======================================================================
//function : Surface
//purpose  : 
//=======================================================================

Handle(PGeom_Surface)  PBRep_CurveOnSurface::Surface()const 
{
  return mySurface;
}


//=======================================================================
//function : PCurve
//purpose  : 
//=======================================================================

Handle(PGeom2d_Curve)  PBRep_CurveOnSurface::PCurve()const 
{
  return myPCurve;
}



//=======================================================================
//function : IsCurveOnSurface
//purpose  : 
//=======================================================================

Standard_Boolean  PBRep_CurveOnSurface::IsCurveOnSurface()const 
{
  return Standard_True;
}


//=======================================================================
//function : SetUVPoints
//purpose  : 
//=======================================================================

void PBRep_CurveOnSurface::SetUVPoints(const gp_Pnt2d& Pnt1,
				       const gp_Pnt2d& Pnt2) 
{
  myUV1 = Pnt1;
  myUV2 = Pnt2;
}

//=======================================================================
//function : FirstUV
//purpose  : 
//=======================================================================

gp_Pnt2d PBRep_CurveOnSurface::FirstUV() const 
{
  return myUV1;
}

//=======================================================================
//function : LastUV
//purpose  : 
//=======================================================================

gp_Pnt2d PBRep_CurveOnSurface::LastUV() const 
{
  return myUV2;
}

