// Created on: 1997-04-21
// Created by: Denis PASCAL
// Copyright (c) 1997-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Draw_Display.hxx>
#include <DrawDim_Radius.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DrawDim_Radius)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(DrawDim_Dimension),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DrawDim_Radius)
IMPLEMENT_DOWNCAST(DrawDim_Radius,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DrawDim_Radius)
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#include <Geometry/GC/GC_MakeCircle.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <Geometry/Geom/Geom_ToroidalSurface.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>

//=======================================================================
//function : DrawDim_Radius
//purpose  : 
//=======================================================================

DrawDim_Radius::DrawDim_Radius(const TopoDS_Face& cylinder)
{
  myCylinder = cylinder;
}

//=======================================================================
//function : Cylinder
//purpose  : 
//=======================================================================

const TopoDS_Face& DrawDim_Radius::Cylinder() const
{
  return myCylinder;
}

//=======================================================================
//function : Cylinder
//purpose  : 
//=======================================================================

void DrawDim_Radius::Cylinder(const TopoDS_Face& face) 
{
  myCylinder = face;
}


//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void DrawDim_Radius::DrawOn(Draw_Display& dis) const
{
  // input  
  TopoDS_Shape myFShape = myCylinder;

  // output
  gp_Pnt myPosition;
  gp_Circ myCircle;

//=======================================================================
//function : ComputeOneFaceRadius
//purpose  : 
//=======================================================================

//void AIS_RadiusDimension::ComputeOneFaceRadius(const Handle(Prs3d_Presentation)& aPresentation)
//{
#ifdef OCCT_DEBUG
  cout << "entree dans computeonefaceradius"<< endl;
#endif
  BRepAdaptor_Surface surfAlgo (TopoDS::Face(myFShape));
  Standard_Real uFirst, uLast, vFirst, vLast;
  uFirst = surfAlgo.FirstUParameter();
  uLast = surfAlgo.LastUParameter();
  vFirst = surfAlgo.FirstVParameter();
  vLast = surfAlgo.LastVParameter();
  Standard_Real uMoy = (uFirst + uLast)/2;
  Standard_Real vMoy = (vFirst + vLast)/2;
  gp_Pnt curpos ;
  surfAlgo.D0(uMoy, vMoy, curpos);
  const Handle(Geom_Surface)& surf = surfAlgo.Surface().Surface();
  Handle(Geom_Curve) aCurve;
  if (surf->DynamicType() == STANDARD_TYPE(Geom_ToroidalSurface)) {
    aCurve = surf->UIso(uMoy);
    uFirst = vFirst;
    uLast = vLast;
  }
  else {
    aCurve = surf->VIso(vMoy);
  }

  if (aCurve->DynamicType() == STANDARD_TYPE(Geom_Circle)) {
    myCircle = Handle(Geom_Circle)::DownCast(aCurve)->Circ();
  } // if (aCurve->DynamicType() ...

  else {
    // compute a circle from 3 points on "aCurve"
    gp_Pnt P1, P2;
    surfAlgo.D0(uFirst, vMoy, P1);
    surfAlgo.D0(uLast, vMoy, P2);
    GC_MakeCircle mkCirc(P1, curpos, P2);
    myCircle = mkCirc.Value()->Circ();
  } // else ...

  myPosition = curpos;

  // DISPLAY
  // Add(myText, curpos, mCircle, uFirst, uLast)    

  dis.Draw(myCircle,uFirst,uLast);  
  dis.DrawMarker(myPosition, Draw_Losange);
}
