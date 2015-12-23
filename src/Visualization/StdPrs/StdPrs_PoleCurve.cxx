// Created on: 1995-07-24
// Created by: Modelistation
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

#include <Visualization/Prs3d/Prs3d_Presentation.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_Curve.hxx>
#include <Visualization/Prs3d/Prs3d_Drawer.hxx>
#include <Visualization/StdPrs/StdPrs_PoleCurve.hxx>

#include <Visualization/Graphic3d/Graphic3d_ArrayOfPolylines.hxx>
#include <Visualization/Graphic3d/Graphic3d_Group.hxx>
#include <Visualization/Prs3d/Prs3d_LineAspect.hxx>
#include <Visualization/Prs3d/Prs3d_Arrow.hxx>
#include <Visualization/Prs3d/Prs3d_ArrowAspect.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Geometry/Geom/Geom_BezierCurve.hxx>
#include <Geometry/Geom/Geom_BSplineCurve.hxx>


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void StdPrs_PoleCurve::Add (const Handle (Prs3d_Presentation)& aPresentation,
			    const Adaptor3d_Curve&               aCurve,
			    const Handle (Prs3d_Drawer)&       aDrawer) 
{
  Prs3d_Root::CurrentGroup(aPresentation)->SetPrimitivesAspect(aDrawer->LineAspect()->Aspect());

  GeomAbs_CurveType CType = aCurve.GetType();
  if (CType == GeomAbs_BezierCurve || CType == GeomAbs_BSplineCurve) {
    Standard_Integer i, Nb;
    if (CType == GeomAbs_BezierCurve) {
      Handle(Geom_BezierCurve) Bz = aCurve.Bezier();
      Nb = Bz->NbPoles();
      Handle(Graphic3d_ArrayOfPolylines) aPrims = new Graphic3d_ArrayOfPolylines(Nb);
      for (i = 1; i <= Nb; i++)
        aPrims->AddVertex(Bz->Pole(i));
      Prs3d_Root::CurrentGroup(aPresentation)->AddPrimitiveArray(aPrims);
    }
    else if (CType == GeomAbs_BSplineCurve) {
      Handle(Geom_BSplineCurve) Bs = aCurve.BSpline();
      Nb = Bs->NbPoles();
      Handle(Graphic3d_ArrayOfPolylines) aPrims = new Graphic3d_ArrayOfPolylines(Nb);
      for (i = 1; i <= Nb; i++)
        aPrims->AddVertex(Bs->Pole(i));
      Prs3d_Root::CurrentGroup(aPresentation)->AddPrimitiveArray(aPrims);
    }
  }
  
  if (aDrawer->LineArrowDraw()) {
    gp_Pnt Location;
    gp_Vec Direction;
    aCurve.D1(aCurve.LastParameter(),Location,Direction);
    Prs3d_Arrow::Draw (aPresentation,
		       Location,
		       gp_Dir(Direction),
		       aDrawer->ArrowAspect()->Angle(),
		       aDrawer->ArrowAspect()->Length());
  }
}
     

//=======================================================================
//function : Match
//purpose  : 
//=======================================================================

Standard_Boolean StdPrs_PoleCurve::Match(const Quantity_Length        X,
					 const Quantity_Length        Y,
					 const Quantity_Length        Z,
					 const Quantity_Length        aDistance,
					 const Adaptor3d_Curve&         aCurve,
					 const Handle (Prs3d_Drawer)& /*aDrawer*/) 
{
  GeomAbs_CurveType CType = aCurve.GetType();
  Standard_Integer i, Nb = 0;
  Standard_Real x,y,z;
  if (CType == GeomAbs_BezierCurve) {
    Handle(Geom_BezierCurve) Bz = aCurve.Bezier();
    Nb = Bz->NbPoles();
    for (i = 1; i <= Nb; i++) { 
      Bz->Pole(i).Coord(x,y,z);
      if ( Abs(X-x) +Abs(Y-y)+Abs(Z-z) <= aDistance) return Standard_True;
    }
    return Standard_False;
  }
  else if (CType == GeomAbs_BSplineCurve) {
    Handle(Geom_BSplineCurve) Bs = aCurve.BSpline();
    Nb = Bs->NbPoles();
    for (i = 1; i <= Nb; i++) { 
      Bs->Pole(i).Coord(x,y,z);
      if ( Abs(X-x) +Abs(Y-y)+Abs(Z-z) <= aDistance) return Standard_True;
    }
    return Standard_False;
  }
  return Standard_False;
}

//=======================================================================
//function : Pick
//purpose  : 
//=======================================================================

Standard_Integer StdPrs_PoleCurve::Pick
             (const Quantity_Length       X,
	      const Quantity_Length       Y,
	      const Quantity_Length       Z,
	      const Quantity_Length       aDistance,
	      const Adaptor3d_Curve&        aCurve,
	      const Handle(Prs3d_Drawer)& /*aDrawer*/) 
{
  Standard_Real x, y, z, DistMin = RealLast();
  Standard_Integer num = 0, i, Nb = 0;
  Standard_Real dist;
  GeomAbs_CurveType CType = aCurve.GetType();

  if (CType == GeomAbs_BezierCurve) {
    Handle(Geom_BezierCurve) Bz = aCurve.Bezier();
    Nb = Bz->NbPoles();
    for (i = 1; i <= Nb; i++) { 
      Bz->Pole(i).Coord(x,y,z);
      dist = Abs(X-x) +Abs(Y-y)+Abs(Z-z);
      if ( dist <= aDistance) {
	if (dist < DistMin) {
	  DistMin = dist;
	  num = i;
	}
      }
    }
  }
  else if (CType == GeomAbs_BSplineCurve) {
    Handle(Geom_BSplineCurve) Bs = aCurve.BSpline();
    Nb = Bs->NbPoles();
    for (i = 1; i <= Nb; i++) { 
      Bs->Pole(i).Coord(x,y,z);
      dist = Abs(X-x) +Abs(Y-y)+Abs(Z-z);
      if (dist <= aDistance) {
	if (dist < DistMin) {
	  DistMin = dist;
	  num = i;
	}
      }
    }
  }

  return num;
}



     



