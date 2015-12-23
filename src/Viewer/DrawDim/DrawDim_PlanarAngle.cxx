// Created on: 1996-01-12
// Created by: Denis PASCAL
// Copyright (c) 1996-1999 Matra Datavision
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
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Draw_Display.hxx>
#include <DrawDim_PlanarAngle.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DrawDim_PlanarAngle)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(DrawDim_PlanarDimension),
  STANDARD_TYPE(DrawDim_Dimension),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DrawDim_PlanarAngle)
IMPLEMENT_DOWNCAST(DrawDim_PlanarAngle,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DrawDim_PlanarAngle)
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DrawDim.hxx>
#include <Draw.hxx>
#include <Draw_MarkerShape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Geometry/Geom/Geom_Plane.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Geometry/Geom2d/Geom2d_Line.hxx>
#include <Geometry/Geom2d/Geom2d_Circle.hxx>
#include <Geometry/Geom2d/Geom2d_CartesianPoint.hxx>
#include <Geometry/Geom2d/Geom2d_TrimmedCurve.hxx>
#include <GeomAPI.hxx>    
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <ElSLib.hxx>
#include <ElCLib.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <Geometry/IntAna2d/IntAna2d_AnaIntersection.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#include <Precision.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <DBRep_DrawableShape.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>

//=======================================================================
//function : DrawDim_PlanarAngle
//purpose  : 
//=======================================================================

DrawDim_PlanarAngle::DrawDim_PlanarAngle (const TopoDS_Face& face, 
					  const TopoDS_Shape& line1,
					  const TopoDS_Shape& line2)
{
  myPlane = face;
  myLine1 = line1;
  myLine2 = line2;
  myPosition = 100;
}

//=======================================================================
//function : DrawDim_PlanarAngle
//purpose  : 
//=======================================================================

DrawDim_PlanarAngle::DrawDim_PlanarAngle (const TopoDS_Shape& line1,
					  const TopoDS_Shape& line2)
{
  myLine1 = line1;
  myLine2 = line2;  
  myPosition = 100;
}

//=======================================================================
//function : Sector
//purpose  : 
//=======================================================================

void DrawDim_PlanarAngle::Sector (const Standard_Boolean reversed, const Standard_Boolean inverted)
{   
  myIsReversed = reversed;
  myIsInverted = inverted;
}

//=======================================================================
//function : Position
//purpose  : 
//=======================================================================

void DrawDim_PlanarAngle::Position (const Standard_Real value)
{   
  myPosition = value;
}


//=======================================================================
//function : DrawOn
//purpose  : line1^line2 suppose positifs
//=======================================================================

void DrawDim_PlanarAngle::DrawOn(Draw_Display& dis) const 
{      
  Standard_Boolean clockwise = myIsReversed;
  Standard_Boolean parallel  = !myIsInverted;
  // geometrie
  gp_Pln plane = Handle(Geom_Plane)::DownCast(BRep_Tool::Surface(myPlane))->Pln();
  //if (plane.IsNull()) return;  
  if (!(myLine1.ShapeType() == TopAbs_EDGE)) return;
  if (!(myLine2.ShapeType() == TopAbs_EDGE)) return;
  Standard_Real s1,e1,s2,e2;
  Handle(Geom_Curve) curve1 = BRep_Tool::Curve(TopoDS::Edge(myLine1),s1,e1);  
  Handle(Geom_Curve) curve2 = BRep_Tool::Curve(TopoDS::Edge(myLine2),s2,e2);
  if (!curve1->IsKind(STANDARD_TYPE(Geom_Line)) || !curve2->IsKind(STANDARD_TYPE(Geom_Line))) return;
  Handle(Geom2d_Geometry) L1 = GeomAPI::To2d (curve1,plane);
  if (L1->IsInstance(STANDARD_TYPE(Geom2d_TrimmedCurve))) {
    L1 = ((Handle(Geom2d_TrimmedCurve)&) L1)->BasisCurve();
  }
  gp_Lin2d l1 = ((Handle(Geom2d_Line)&) L1)->Lin2d();   
  Handle(Geom2d_Geometry) L2 = GeomAPI::To2d (curve2,plane);
  if (L2->IsInstance(STANDARD_TYPE(Geom2d_TrimmedCurve))) {
    L2 = ((Handle(Geom2d_TrimmedCurve)&) L2)->BasisCurve();
  }
  gp_Lin2d l2 = ((Handle(Geom2d_Line)&) L2)->Lin2d(); 
  //
  IntAna2d_AnaIntersection inter;
  inter.Perform(l1,l2);  
  if (!inter.IsDone() || !inter.NbPoints()) return;
  gp_Pnt2d pinter = inter.Point(1).Value();
  //  
  Standard_Real angle;
  angle =  Abs(l1.Direction().Angle(l2.Direction()));
  gp_Circ2d c (gp_Ax2d (pinter,l1.Direction()),myPosition);

  // retour au plan
  Handle(Geom_Curve) C = GeomAPI::To3d (new Geom2d_Circle(c),plane); 
  gp_Circ circle = ((Handle(Geom_Circle)&) C)->Circ(); 
  //
  Standard_Real p1=0., p2=0.;   
  angle =  Abs(angle);
  if (parallel && !clockwise)  {
    p1 = 0.0;
    p2 = angle;
    dis.Draw(circle,0.0,angle);
  }
  if (!parallel && !clockwise) {
    p1 = angle;
    p2 = M_PI;
  }
  if (parallel && clockwise) {
    p1 = M_PI;
    p2 = M_PI+angle;
  }
  if (!parallel && clockwise) {
    p1 = M_PI+angle;
    p2 = 2*M_PI;
  }
  // affichage
  dis.Draw(circle,p1,p2);
  Standard_Real ptext = (p1+p2)/2;
  gp_Pnt pnttext = ElCLib::Value(ptext,circle);
  //
  DrawText(pnttext,dis);
}
