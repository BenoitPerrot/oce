// Created on: 1994-08-05
// Created by: Remi LEQUETTE
// Copyright (c) 1994-1999 Matra Datavision
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

#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <GeomAPI.hxx>

#include <ProjLib_ProjectedCurve.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_CurveOnSurface.hxx>
#include <Geometry/Geom2dAdaptor/Geom2dAdaptor.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_Surface.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_HCurve.hxx>
#include <Geometry/Geom2dAdaptor/Geom2dAdaptor_HCurve.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_HSurface.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor.hxx>

#include <Geometry/Geom/Geom_Plane.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>
#include <Geometry/Geom/Geom_Ellipse.hxx>
#include <Geometry/Geom/Geom_Parabola.hxx>
#include <Geometry/Geom/Geom_Hyperbola.hxx>
#include <Geometry/Geom/Geom_BezierCurve.hxx>
#include <Geometry/Geom/Geom_BSplineCurve.hxx>
#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <Geometry/Geom2d/Geom2d_TrimmedCurve.hxx>

#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>

//=======================================================================
//function : To2d
//purpose  : 
//=======================================================================

Handle(Geom2d_Curve) GeomAPI::To2d(const Handle(Geom_Curve)& C,
				   const gp_Pln& P)
{
  Handle(Geom2d_Curve) result;
  Handle(GeomAdaptor_HCurve) HC = new GeomAdaptor_HCurve(C);
  Handle(Geom_Plane) Plane = new Geom_Plane(P);
  Handle(GeomAdaptor_HSurface) HS = new GeomAdaptor_HSurface(Plane);

  ProjLib_ProjectedCurve Proj(HS,HC);

  if (Proj.GetType() != GeomAbs_OtherCurve) {
    result = Geom2dAdaptor::MakeCurve(Proj);
  }
  
  return result;
}



//=======================================================================
//function : To3d
//purpose  : 
//=======================================================================

Handle(Geom_Curve) GeomAPI::To3d(const Handle(Geom2d_Curve)& C,
				 const gp_Pln& P)
{
  Handle(Geom2dAdaptor_HCurve) AHC  = new Geom2dAdaptor_HCurve(C);

  Handle(Geom_Plane) ThePlane = new Geom_Plane(P);
  Handle(GeomAdaptor_HSurface) AHS = new GeomAdaptor_HSurface(ThePlane);

  Adaptor3d_CurveOnSurface COS(AHC,AHS);
  return GeomAdaptor::MakeCurve(COS);
}
