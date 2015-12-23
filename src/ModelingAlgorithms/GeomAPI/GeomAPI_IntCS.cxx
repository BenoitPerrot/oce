// Created on: 1995-09-12
// Created by: Bruno DUMORTIER
// Copyright (c) 1995-1999 Matra Datavision
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

#include <Geometry/Geom/Geom_Curve.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingAlgorithms/GeomAPI/GeomAPI_IntCS.hxx>

#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_HCurve.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_HSurface.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_IntersectionPoint.hxx>
#include <ModelingAlgorithms/IntCurveSurface/IntCurveSurface_IntersectionSegment.hxx>

//=======================================================================
//function : GeomAPI_IntCS
//purpose  : 
//=======================================================================

GeomAPI_IntCS::GeomAPI_IntCS()
{
}


//=======================================================================
//function : GeomAPI_IntCS
//purpose  : 
//=======================================================================

GeomAPI_IntCS::GeomAPI_IntCS(const Handle(Geom_Curve)&   C, 
			     const Handle(Geom_Surface)& S)
{
  Perform(C, S);
}


//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void GeomAPI_IntCS::Perform(const Handle(Geom_Curve)&   C,
			    const Handle(Geom_Surface)& S)
{
  myCurve = C;

  Handle(GeomAdaptor_HCurve) HC = 
    new GeomAdaptor_HCurve(C);
  Handle(GeomAdaptor_HSurface) HS = 
    new GeomAdaptor_HSurface(S);

  myIntCS.Perform(HC, HS);
}


//=======================================================================
//function : IsDone
//purpose  : 
//=======================================================================

Standard_Boolean GeomAPI_IntCS::IsDone() const 
{
  return myIntCS.IsDone();
}


//=======================================================================
//function : NbPoints
//purpose  : 
//=======================================================================

Standard_Integer GeomAPI_IntCS::NbPoints() const 
{
  return myIntCS.NbPoints();
}


//=======================================================================
//function : gp_Pnt&
//purpose  : 
//=======================================================================

const gp_Pnt& GeomAPI_IntCS::Point(const Standard_Integer Index) const 
{
  return myIntCS.Point(Index).Pnt();
}


//=======================================================================
//function : Parameters
//purpose  : 
//=======================================================================

void GeomAPI_IntCS::Parameters(const Standard_Integer Index,
			       Quantity_Parameter& U, 
			       Quantity_Parameter& V, 
			       Quantity_Parameter& W) const 
{
  const IntCurveSurface_IntersectionPoint& ThePoint = 
    myIntCS.Point(Index);

  U = ThePoint.U();
  V = ThePoint.V();
  W = ThePoint.W();
}


//=======================================================================
//function : NbSegments
//purpose  : 
//=======================================================================

Standard_Integer GeomAPI_IntCS::NbSegments() const 
{
  return myIntCS.NbSegments();
}


//=======================================================================
//function : Segment
//purpose  : 
//=======================================================================

Handle(Geom_Curve) GeomAPI_IntCS::Segment(const Standard_Integer Index) const 
{
  const IntCurveSurface_IntersectionPoint& FirstPoint = 
    myIntCS.Segment(Index).FirstPoint();

  const IntCurveSurface_IntersectionPoint& LastPoint = 
    myIntCS.Segment(Index).SecondPoint();

  Handle(Geom_TrimmedCurve) TheCurve  = 
    new Geom_TrimmedCurve( myCurve, FirstPoint.W(), LastPoint.W());
  
  return TheCurve;
}


//=======================================================================
//function : Parameters
//purpose  : 
//=======================================================================

void GeomAPI_IntCS::Parameters(const Standard_Integer Index,
			       Quantity_Parameter& U1,
			       Quantity_Parameter& V1,
			       Quantity_Parameter& U2,
			       Quantity_Parameter& V2) const 
{
  const IntCurveSurface_IntersectionPoint& FirstPoint = 
    myIntCS.Segment(Index).FirstPoint();

  const IntCurveSurface_IntersectionPoint& LastPoint = 
    myIntCS.Segment(Index).SecondPoint();

  U1 = FirstPoint.U();
  V1 = FirstPoint.V();
  U2 =  LastPoint.U();
  V2 =  LastPoint.V();
}
