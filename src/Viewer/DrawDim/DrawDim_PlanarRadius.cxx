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

#include <TopoDS_Face.hxx>
#include <TopoDS_Shape.hxx>
#include <Draw_Display.hxx>
#include <DrawDim_PlanarRadius.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DrawDim_PlanarRadius)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(DrawDim_PlanarDimension),
  STANDARD_TYPE(DrawDim_Dimension),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DrawDim_PlanarRadius)
IMPLEMENT_DOWNCAST(DrawDim_PlanarRadius,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DrawDim_PlanarRadius)
#include <DrawDim.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <BRep_Tool.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Draw_Color.hxx>
#include <ElCLib.hxx>
#include <TopExp.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Vertex.hxx>

//=======================================================================
//function : DrawDim_PlanarRadius
//purpose  : 
//=======================================================================

DrawDim_PlanarRadius::DrawDim_PlanarRadius(const TopoDS_Face& face, const TopoDS_Shape& c)
{
  myPlane  = face;
  myCircle = c;
}


//=======================================================================
//function : DrawDim_PlanarRadius
//purpose  : 
//=======================================================================

DrawDim_PlanarRadius::DrawDim_PlanarRadius(const TopoDS_Shape& c)
{
  myCircle = c;
}


//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void DrawDim_PlanarRadius::DrawOn(Draw_Display& dis) const
{  
  if (myCircle.ShapeType() == TopAbs_EDGE) {
    Standard_Real f,l;
    Handle(Geom_Curve) curve = BRep_Tool::Curve (TopoDS::Edge(myCircle),f,l);
    if (curve->IsKind(STANDARD_TYPE(Geom_Circle))) {
      gp_Circ circle = Handle(Geom_Circle)::DownCast(curve)->Circ();
      const gp_Pnt& first = circle.Location();
      TopoDS_Vertex vf, vl;
      TopExp::Vertices(TopoDS::Edge(myCircle),vf,vl);    
      const gp_Pnt last = BRep_Tool::Pnt(vf);
      //
      dis.Draw (first,last);
      gp_Pnt p ((first.X()+ last.X())/2,(first.Y()+ last.Y())/2,(first.Z()+ last.Z())/2);
      DrawText(p,dis);
      return;
    }
  }  
#ifdef OCCT_DEBUG
  cout << " DrawDim_PlanarRadius::DrawOn : dimension error" << endl;
#endif
}
