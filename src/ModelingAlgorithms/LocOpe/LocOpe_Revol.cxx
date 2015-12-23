// Created on: 1996-09-04
// Created by: Olga PILLOT
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

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Geometry/TColGeom/TColGeom_SequenceOfCurve.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <LocOpe_Revol.hxx>


#include <BRepSweep_Revol.hxx>

#include <TopExp_Explorer.hxx>
#include <LocOpe_BuildShape.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>

#include <ModelingData/BRepTools/BRepTools_TrsfModification.hxx>
#include <ModelingData/BRepTools/BRepTools_Modifier.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>


#include <BRepLib_MakeVertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>

#include <LocOpe.hxx>
#include <TopoDS.hxx>
#include <TopExp.hxx>
#include <Precision.hxx>


static Standard_Boolean FindCircle(const gp_Ax1&,
				   const gp_Pnt&,
				   gp_Circ&);


//=======================================================================
//function : LocOpe_Revol
//purpose  : 
//=======================================================================

LocOpe_Revol::LocOpe_Revol() :  myDone(Standard_False)

{}


//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void LocOpe_Revol::Perform(const TopoDS_Shape& Base,
			   const gp_Ax1& Axis,
			   const Standard_Real Angle)
{
  myMap.Clear();
  myFirstShape.Nullify();
  myLastShape.Nullify();
  myBase.Nullify();
  myRes.Nullify();
  myBase = Base;
  myAngle = Angle;
  myAxis = Axis;
  myAngTra = 0.;
  myIsTrans = Standard_False;
  IntPerf();
}

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void LocOpe_Revol::Perform(const TopoDS_Shape& Base,
			   const gp_Ax1& Axis,
			   const Standard_Real Angle,
			   const Standard_Real angledec)
{
  myMap.Clear();
  myFirstShape.Nullify();
  myLastShape.Nullify();
  myBase.Nullify();
  myRes.Nullify();
  myBase = Base;
  myAngle  = Angle;
  myAxis = Axis;
  myAngTra = angledec;
  myIsTrans = Standard_True;
  IntPerf();
}


//=======================================================================
//function : IntPerf
//purpose  : 
//=======================================================================

void LocOpe_Revol::IntPerf()
{
  TopoDS_Shape theBase = myBase;
  BRepTools_Modifier Modif;
  if (myIsTrans) {
    gp_Trsf T;
    T.SetRotation(myAxis,myAngTra);
    Handle(BRepTools_TrsfModification) modbase = 
      new BRepTools_TrsfModification(T);
    Modif.Init(theBase);
    Modif.Perform(modbase);
    theBase = Modif.ModifiedShape(theBase);
  }
  
  BRepSweep_Revol theRevol(theBase,myAxis,myAngle);

  myFirstShape = theRevol.FirstShape();
  myLastShape = theRevol.LastShape();

  TopExp_Explorer exp;
  if (theBase.ShapeType() == TopAbs_FACE) {
    for (exp.Init(theBase,TopAbs_EDGE);exp.More();exp.Next()) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      if (!myMap.IsBound(edg)) {
        TopTools_ListOfShape thelist;
	myMap.Bind(edg, thelist);
	TopoDS_Shape desc = theRevol.Shape(edg);
	if (!desc.IsNull()) {
	  myMap(edg).Append(desc);
	}
      }
    }
    myRes = theRevol.Shape();
  }

  else {
    // Cas base != FACE
    TopTools_IndexedDataMapOfShapeListOfShape theEFMap;
    TopExp::MapShapesAndAncestors(theBase,TopAbs_EDGE,TopAbs_FACE,theEFMap);
    TopTools_ListOfShape lfaces;
    Standard_Boolean toremove = Standard_False;
    for (Standard_Integer i=1; i<=theEFMap.Extent(); i++) {
      const TopoDS_Shape& edg = theEFMap.FindKey(i);
      TopTools_ListOfShape thelist1;
      myMap.Bind(edg, thelist1);
      TopoDS_Shape desc = theRevol.Shape(edg);
      if (!desc.IsNull()) {
	if (theEFMap(i).Extent() >= 2) {
	  toremove = Standard_True;
	}
	else {
	  myMap(edg).Append(desc);
	  lfaces.Append(desc);
	}
      }
    }    
    if(toremove) {
      // Rajouter les faces de FirstShape et LastShape
      for (exp.Init(myFirstShape,TopAbs_FACE);exp.More();exp.Next()) {
	lfaces.Append(exp.Current());
      }
      for (exp.Init(myLastShape,TopAbs_FACE);exp.More();exp.Next()) {
	lfaces.Append(exp.Current());
      }
      
      LocOpe_BuildShape BS(lfaces);
      myRes = BS.Shape();
    }
    else {
      for (exp.Init(theBase,TopAbs_EDGE);exp.More();exp.Next()) {
	const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
	if (!myMap.IsBound(edg)) {
          TopTools_ListOfShape thelist2;
	  myMap.Bind(edg, thelist2);
	  TopoDS_Shape desc = theRevol.Shape(edg);
	  if (!desc.IsNull()) {
	    myMap(edg).Append(desc);
	  }
	}
      }
      myRes = theRevol.Shape();
    }
  }

  if (myIsTrans) {
    // m-a-j des descendants
    TopExp_Explorer exp;
    for (exp.Init(myBase,TopAbs_EDGE);exp.More();exp.Next()) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      const TopoDS_Edge& edgbis = TopoDS::Edge(Modif.ModifiedShape(edg));
      if (!edgbis.IsSame(edg) && myMap.IsBound(edgbis)) {
	myMap.Bind(edg,myMap(edgbis));
	myMap.UnBind(edgbis);
      }
    }
  }
  myDone = Standard_True;
}

//=======================================================================
//function : Shape
//purpose  : 
//=======================================================================

const TopoDS_Shape& LocOpe_Revol::Shape () const
{
  if (!myDone) {
    StdFail_NotDone::Raise();
  }
  return myRes;
}


//=======================================================================
//function : FirstShape
//purpose  : 
//=======================================================================

const TopoDS_Shape& LocOpe_Revol::FirstShape () const
{
  return myFirstShape;
}

//=======================================================================
//function : LastShape
//purpose  : 
//=======================================================================

const TopoDS_Shape& LocOpe_Revol::LastShape () const
{
  return myLastShape;
}


//=======================================================================
//function : Shapes
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& LocOpe_Revol::Shapes (const TopoDS_Shape& S) const
{
  return myMap(S);
}


//=======================================================================
//function : Curves
//purpose  : 
//=======================================================================

void LocOpe_Revol::Curves(TColGeom_SequenceOfCurve& Scurves) const
{
  Scurves.Clear();
  TColgp_SequenceOfPnt spt;
  LocOpe::SampleEdges(myFirstShape,spt);
  for (Standard_Integer jj=1;jj<=spt.Length(); jj++) {
    const gp_Pnt& pvt = spt(jj);
    gp_Circ CAX;
    if (FindCircle(myAxis,pvt,CAX)) {
      gp_Ax2 A2 = CAX.Position();
      Standard_Real r = CAX.Radius();
      Handle(Geom_Circle) Ci = new Geom_Circle(A2, r);
      Scurves.Append(Ci);
    }
  }
}

//=======================================================================
//function : BarycCurve
//purpose  : 
//=======================================================================

Handle(Geom_Curve) LocOpe_Revol::BarycCurve() const
{
  gp_Pnt bar(0., 0., 0.);
  TColgp_SequenceOfPnt spt;
  LocOpe::SampleEdges(myFirstShape,spt);
  for (Standard_Integer jj=1;jj<=spt.Length(); jj++) {
    const gp_Pnt& pvt = spt(jj);
    bar.ChangeCoord() += pvt.XYZ();
  }
  bar.ChangeCoord().Divide(spt.Length());
  gp_Circ CAX;
  Handle(Geom_Circle) theCi;
  if (FindCircle(myAxis,bar,CAX)) {
    gp_Ax2 A2 = CAX.Position();
    Standard_Real r = CAX.Radius();
    theCi = new Geom_Circle(A2, r);
  }
  return theCi;
}



//=======================================================================
//function : FincCircle
//purpose  : 
//=======================================================================

static Standard_Boolean FindCircle(const gp_Ax1& Ax,
				   const gp_Pnt& Pt,
				   gp_Circ& Ci)
{

  const gp_Dir& Dax = Ax.Direction();
  gp_Vec OP(Ax.Location(),Pt);

  Standard_Real prm = OP.Dot(Dax);

  gp_Pnt prj(Ax.Location().XYZ().Added(prm*Dax.XYZ()));
  gp_Vec axx(prj,Pt);
  Standard_Real Radius = axx.Magnitude();
  if (Radius < Precision::Confusion()) {
    return Standard_False;
  }
  Ci.SetRadius(Radius);
  Ci.SetPosition(gp_Ax2(prj,Dax,axx));
  return Standard_True;
}
