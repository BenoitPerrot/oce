// Created on: 2000-05-25
// Created by: Peter KURNEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <Draw_Text3D.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Draw_Color.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Draw_Display.hxx>
#include <Viewer/BOPTest/BOPTest_DrawableShape.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BOPTest_DrawableShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(DBRep_DrawableShape),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BOPTest_DrawableShape)
IMPLEMENT_DOWNCAST(BOPTest_DrawableShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BOPTest_DrawableShape)
#include <stdio.h>

#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Iterator.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>

#include <ModelingData/TopExp/TopExp_Explorer.hxx>


#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <Geometry/Geom/Geom_RectangularTrimmedSurface.hxx>
#include <Precision.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Draw_Color.hxx>
#include <Draw_Segment3D.hxx>
#include <Mathematics/Primitives/gp.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <DBRep_DrawableShape.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Draw_Circle3D.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Draw_Color.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>

//=======================================================================
//function : 
//purpose  : 
//=======================================================================
BOPTest_DrawableShape::BOPTest_DrawableShape (const TopoDS_Shape& aShape,
						const Draw_Color& FreeCol,
						const Draw_Color& ConnCol,
						const Draw_Color& EdgeCol,
						const Draw_Color& IsosCol,
						const Standard_Real size,
						const Standard_Integer nbisos,
						const Standard_Integer discret,
						const Standard_CString Text,
						const Draw_Color& TextColor) 
:
  DBRep_DrawableShape(aShape,FreeCol,ConnCol,EdgeCol,IsosCol,size,nbisos,discret)
{
  myText = new Draw_Text3D(Pnt(),Text,TextColor);
  myTextColor = TextColor;
}

//=======================================================================
//function : 
//purpose  : 
//=======================================================================
  BOPTest_DrawableShape::BOPTest_DrawableShape (const TopoDS_Shape& aShape,
						const Standard_CString Text,
						const Draw_Color& TextColor) 
:  DBRep_DrawableShape(
		       aShape,
		       Draw_vert,
		       Draw_jaune,
		       Draw_rouge,
		       Draw_bleu,
		       100., //size
		       2,    //nbIsos
		       30    //discret
		       )
{
  myText = new Draw_Text3D(Pnt(),Text,TextColor);
  myTextColor = TextColor;
}

//=======================================================================
//function : Pnt
//purpose  : 
//=======================================================================
  gp_Pnt BOPTest_DrawableShape::Pnt() const
{
  gp_Pnt P(0,0,0);
  Standard_Real u, v, u1, u2, v1, v2, p;
  TopExp_Explorer ex;

  TopoDS_Shape S = Shape();
  TopAbs_ShapeEnum T = S.ShapeType();
  Standard_Real facpar = 0.;

  while ( T == TopAbs_COMPOUND ) {
    TopoDS_Iterator ti(S);
    if ( ti.More() ) {
      S = ti.Value(); 
      T = S.ShapeType();
    }
    else {
      break;
    }
  }
  // si S final = compound --> P = 0 0 0 

  switch (T) 
    {
    case TopAbs_VERTEX : 
      P = BRep_Tool::Pnt(TopoDS::Vertex(S)); 
      break;

    case TopAbs_EDGE : 
      {
	BRepAdaptor_Curve CU(TopoDS::Edge(S));
	u1 = CU.FirstParameter(); 
	u2 = CU.LastParameter();
	if (facpar == 0.) facpar = 0.20;
	p = u1 + (u2-u1)*facpar;
	P = CU.Value(p);
      }
      break;

    case TopAbs_WIRE :
      {
	TopTools_IndexedMapOfShape aME;
	TopExp::MapShapes(S, TopAbs_EDGE, aME);
	const TopoDS_Edge& anEdge=TopoDS::Edge(aME(1));
	BRepAdaptor_Curve CU(anEdge);
	u1 = CU.FirstParameter(); 
	u2 = CU.LastParameter();
	if (facpar == 0.) facpar = 0.40;
	p = u1 + (u2-u1)*facpar;
	P = CU.Value(p);
      }
      break;

    case TopAbs_FACE : 
      {
	BRepAdaptor_Surface SU(TopoDS::Face(S));
	BRepTools::UVBounds(TopoDS::Face(S),u1,u2,v1,v2);
	//
	facpar = .2;
	u = u1 + (u2-u1)*facpar;
	v = v1 + (v2-v1)*facpar;
	P = SU.Value(u,v);
      }
      break;

     case TopAbs_SHELL : 
     case TopAbs_SOLID : 
      {
	TopTools_IndexedMapOfShape aMF;
	TopExp::MapShapes(S, TopAbs_FACE, aMF);
	const TopoDS_Face& aF=TopoDS::Face(aMF(1));
	
	BRepAdaptor_Surface SU(TopoDS::Face(aF));
	BRepTools::UVBounds(aF,u1,u2,v1,v2);
	facpar = .4;
	u = u1 + (u2-u1)*facpar;
	v = v1 + (v2-v1)*facpar;
	P = SU.Value(u,v);
      }
      break; 

    default: 
      break;
    }
  return P;
}


//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================
  void BOPTest_DrawableShape::DrawOn(Draw_Display& dis) const
{
  DBRep_DrawableShape::DrawOn(dis);
  myText->SetPnt(Pnt());
  myText->DrawOn(dis);
}

