// Created on: 2000-05-25
// Created by: data exchange team
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

#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeUpgrade_ClosedEdgeDivide)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(ShapeUpgrade_EdgeDivide),
  STANDARD_TYPE(ShapeUpgrade_Tool),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeUpgrade_ClosedEdgeDivide)
IMPLEMENT_DOWNCAST(ShapeUpgrade_ClosedEdgeDivide,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeUpgrade_ClosedEdgeDivide)
#include <ShapeAnalysis_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Foundation/TColStd/TColStd_HSequenceOfReal.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>

//=======================================================================
//function : ShapeUpgrade_ClosedEdgeDivide
//purpose  : 
//=======================================================================

ShapeUpgrade_ClosedEdgeDivide::ShapeUpgrade_ClosedEdgeDivide():
      ShapeUpgrade_EdgeDivide()
{
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================

Standard_Boolean ShapeUpgrade_ClosedEdgeDivide::Compute(const TopoDS_Edge& anEdge)
{
  Clear();
  ShapeAnalysis_Edge sae;
  TopoDS_Vertex V1 = sae.FirstVertex(anEdge);
  TopoDS_Vertex V2 = sae.LastVertex(anEdge);
  if( V1.IsSame(V2) && !BRep_Tool::Degenerated ( anEdge ) ) {
    const Standard_Integer nbPoints = 23;
    gp_Pnt pntV = BRep_Tool::Pnt(V1);
    Standard_Real TolV1 = LimitTolerance( BRep_Tool::Tolerance(V1) );
    TolV1=TolV1*TolV1;
    Standard_Real f, l;
    Handle(Geom_Curve) curve3d = BRep_Tool::Curve (anEdge, f, l);
    myHasCurve3d = !curve3d.IsNull();
    Standard_Real f2d = 0., l2d = 0.;
    Handle(Geom2d_Curve) pcurve1;
    if ( ! myFace.IsNull() ) { // process free edges
      sae.PCurve (anEdge, myFace, pcurve1, f2d, l2d, Standard_False);
    }
    myHasCurve2d = !pcurve1.IsNull();
    
    if ( myHasCurve3d ) {
      Standard_Real maxPar = f, dMax = 0;
      Standard_Real step = (l-f)/(nbPoints-1);
      Standard_Real param = f+step;
      for (Standard_Integer i = 1; i < 23; i++, param+=step) {
	gp_Pnt curPnt = curve3d->Value(param);
	Standard_Real dist = pntV.SquareDistance(curPnt);
	if(dist > dMax) {
	  maxPar = param;
	  dMax = dist;
	}
      }
      if(dMax > TolV1) {
	Handle(ShapeUpgrade_SplitCurve3d) theSplit3dTool = GetSplitCurve3dTool();
	theSplit3dTool->Init(curve3d,f,l);
	
	Handle(TColStd_HSequenceOfReal) values = new TColStd_HSequenceOfReal;
	values->Append(maxPar);
	theSplit3dTool->SetSplitValues(values);
	myKnots3d = theSplit3dTool->SplitValues();
      
	if(myHasCurve2d) {
	  Handle(ShapeUpgrade_SplitCurve2d) theSplit2dTool = GetSplitCurve2dTool();
	  theSplit2dTool->Init(pcurve1,f2d,l2d);
	  myKnots2d = theSplit2dTool->SplitValues();
	}
	return Standard_True;
      }
      else
	return Standard_False;
    }
    
    if ( myHasCurve2d ) {
      Handle(Geom_Surface) surf = BRep_Tool::Surface(myFace);
      Standard_Real maxPar = f2d, dMax = 0;
      Standard_Real step = (l2d-f2d)/(nbPoints-1);
      Standard_Real param = f2d+step;
      for (Standard_Integer i = 1; i < 23; i++, param+=step) {
	gp_Pnt2d p2d = pcurve1->Value(param);
	gp_Pnt curPnt = surf->Value(p2d.X(),p2d.Y());
	Standard_Real dist = pntV.SquareDistance(curPnt);
	if(dist > dMax) {
	  maxPar = param;
	  dMax = dist;
	}
      }
      if(dMax > TolV1) {
	
	Handle(ShapeUpgrade_SplitCurve2d) theSplit2dTool = GetSplitCurve2dTool();
	theSplit2dTool->Init(pcurve1,f2d,l2d);
      
	Handle(TColStd_HSequenceOfReal) values = new TColStd_HSequenceOfReal;
	values->Append(maxPar);
	theSplit2dTool->SetSplitValues(values);
	myKnots2d = theSplit2dTool->SplitValues();
	return Standard_True;
      }
      else
	return Standard_False;
    }
    
    return Standard_False;
    
  }
  else
    return Standard_False;
}
