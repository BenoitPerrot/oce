// Created on: 1996-09-03
// Created by: Olga KOULECHOVA
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

#include <Geometry/Geom/Geom_Curve.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <Geometry/TColGeom/TColGeom_SequenceOfCurve.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepFeat/BRepFeat_MakeDPrism.hxx>

#include <ModelingAlgorithms/BRepFeat/BRepFeat.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe_CSIntersector.hxx>
#include <Geometry/TColGeom/TColGeom_SequenceOfCurve.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe_DPrism.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe_SequenceOfLin.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe_PntFace.hxx>

#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>

#include <Mathematics/Precision/Precision.hxx>

#include <Geometry/Geom/Geom_Surface.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Geometry/Geom/Geom_Plane.hxx>
#include <Geometry/Geom/Geom_RectangularTrimmedSurface.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>
#include <Geometry/TColGeom/TColGeom_SequenceOfCurve.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>

#include <ModelingAlgorithms/BRepBndLib/BRepBndLib.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <ModelingAlgorithms/BRepPrimAPI/BRepPrimAPI_MakeBox.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib.hxx>

#include <ModelingAlgorithms/BRepAlgo/BRepAlgo.hxx>
//modified by NIZNHY-PKV Thu Mar 21 17:49:46 2002 f
//#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_Cut.hxx>
//#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_Fuse.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_Cut.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_Fuse.hxx>
//modified by NIZNHY-PKV Thu Mar 21 17:50:04 2002 t

#include <ModelingAlgorithms/BRepLib/BRepLib_MakeFace.hxx>

#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <ModelingData/TopoDS/TopoDS_Compound.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>

#include <Foundation/Standard/Standard_ConstructionError.hxx>

#include <ModelingData/TopExp/TopExp.hxx>

#include <ModelingAlgorithms/BRepFeat/BRepFeat.hxx>
#include <ModelingData/TopAbs/TopAbs.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean BRepFeat_GettraceFEAT();
#endif

static void MajMap(const TopoDS_Shape&,
		   const LocOpe_DPrism&,
		   TopTools_DataMapOfShapeListOfShape&, // myMap
		   TopoDS_Shape&,  // myFShape
		   TopoDS_Shape&); // myLShape

static Standard_Real HeightMax(const TopoDS_Shape& theSbase,
			       const TopoDS_Face& theSkface,
			       const TopoDS_Shape& theSFrom,
			       const TopoDS_Shape& theSUntil);

static Standard_Integer SensOfPrism(const Handle(Geom_Curve) C,
				    const TopoDS_Shape& Until);

static Handle(Geom_Curve) TestCurve(const TopoDS_Face&);

static Standard_Boolean ToFuse(const TopoDS_Face& ,
			       const TopoDS_Face&);



//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void BRepFeat_MakeDPrism::Init(const TopoDS_Shape&    Sbase,
			       const TopoDS_Face&     Pbase,
			       const TopoDS_Face&     Skface,
			       const Standard_Real    Angle,
			       const Standard_Integer Mode,
			       const Standard_Boolean Modify)
	
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::Init" << endl;
#endif
  mySkface = Skface;
  SketchFaceValid();
  mySbase  = Sbase;
  BasisShapeValid();
  myPbase  = Pbase;
  mySlface.Clear();
  if(Mode == 0) {
    myFuse   = Standard_False;
    myJustFeat = Standard_False;
  }
  else if(Mode == 1) {
    myFuse   = Standard_True;
    myJustFeat = Standard_False;
  }
  else if(Mode == 2) {
    myFuse   = Standard_True;
    myJustFeat = Standard_True;
  }
  else {    
  }
  myModify = Modify;
  myJustGluer = Standard_False;


  //-------------- ifv
  //mySkface.Nullify();
  //-------------- ifv

  myShape.Nullify();
  myMap.Clear();
  myFShape.Nullify();
  myLShape.Nullify();
  myTopEdges.clear();
  myLatEdges.clear();
  TopExp_Explorer exp;
  for (exp.Init(mySbase,TopAbs_FACE);exp.More();exp.Next()) {
    TopTools_ListOfShape thelist;
    myMap.Bind(exp.Current(), thelist);
    myMap(exp.Current()).push_back(exp.Current());
  }
  myAngle = Angle;
#ifdef OCCT_DEBUG
  if (trc) {
    if (myJustFeat)  cout << " Just Feature" << endl;
    if (myFuse)  cout << " Fuse" << endl;
    if (!myFuse)  cout << " Cut" << endl;
    if (!myModify) cout << " Modify = 0" << endl;
//    cout <<" Angle = " << myAngle << endl;
  }
#endif 
}


//=======================================================================
//function : Add
//purpose  : add sliding faces and edges
//=======================================================================

void BRepFeat_MakeDPrism::Add(const TopoDS_Edge& E,
			     const TopoDS_Face& F)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::Add(Edge,face)" << endl;
#endif
  TopExp_Explorer exp;
  for (exp.Init(mySbase,TopAbs_FACE);exp.More();exp.Next()) {
    if (exp.Current().IsSame(F)) {
      break;
    }
  }
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }

  for (exp.Init(myPbase,TopAbs_EDGE);exp.More();exp.Next()) {
    if (exp.Current().IsSame(E)) {
      break;
    }
  }
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }

  if (!mySlface.IsBound(F)) {
    TopTools_ListOfShape thelist;
    mySlface.Bind(F, thelist);
  }
#warning factor with MakeLinearForm::Add
#warning find
  Standard_Boolean found = Standard_False;
  for (auto S : mySlface(F)) {
    if (S.IsSame(E)) {
      found = Standard_True;
      break;
    }
  }
  if (!found) {
    mySlface(F).push_back(E);
  }
}


//=======================================================================
//function : Perform
//purpose  : feature of Height
//=======================================================================

void BRepFeat_MakeDPrism::Perform(const Standard_Real Height)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::Perform(Height)" << endl;
#endif
  mySFrom.Nullify();
  ShapeFromValid();
  mySUntil.Nullify();
  ShapeUntilValid();
  myGluedF.Clear();
  myPerfSelection = BRepFeat_NoSelection;
  PerfSelectionValid();

  Standard_Real theheight = Height/cos(myAngle);
//  myPbase.Orientation(TopAbs_FORWARD);

  LocOpe_DPrism theDPrism(myPbase,theheight,myAngle);
  TopoDS_Shape VraiDPrism = theDPrism.Shape();

  MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);

  myGShape = VraiDPrism;
  GeneratedShapeValid();  
  TopoDS_Shape Base = theDPrism.FirstShape();
  TopExp_Explorer exp(Base, TopAbs_FACE);
  TopoDS_Face theBase = TopoDS::Face(exp.Current());
  exp.Next();
  if(exp.More()) {
    NotDone();
    myStatusError = BRepFeat_InvFirstShape;
    return;
  }

  TopoDS_Face FFace;
  
  Standard_Boolean found = Standard_False;

  if(!mySkface.IsNull() || !mySlface.IsEmpty()) {
    if(myLShape.ShapeType() == TopAbs_WIRE) {
      TopExp_Explorer ex1(VraiDPrism, TopAbs_FACE);
      for(; ex1.More(); ex1.Next()) {
	TopExp_Explorer ex2(ex1.Current(), TopAbs_WIRE);
	for(; ex2.More(); ex2.Next()) {
	  if(ex2.Current().IsSame(myLShape)) {
	    FFace = TopoDS::Face(ex1.Current());
	    found = Standard_True;
	    break;
	  }
	}
	if(found) break;
      }
    }
    
    TopExp_Explorer exp(mySbase, TopAbs_FACE);
    for(; exp.More(); exp.Next()) {
      const TopoDS_Face& ff = TopoDS::Face(exp.Current());
      if(ToFuse(ff, FFace)) {
	TopTools_DataMapOfShapeListOfShape sl;
	break;
      }
    }
  }

// management of gluing faces 

  GluedFacesValid();

  if(!myGluedF.IsEmpty()) {   // case gluing
    myJustGluer = Standard_True;
    theDPrism.Curves(myCurves);
    myBCurve = theDPrism.BarycCurve();    
    GlobalPerform();
  }

// if there is no gluing -> call topological operations
  if(!myJustGluer) {
    if(myFuse == 1) {
      //modified by NIZNHY-PKV Thu Mar 21 17:32:17 2002 f
      //BRepAlgo_Fuse f(mySbase, myGShape);
      //myShape = f.Shape();
      //UpdateDescendants(f.Builder(), myShape, Standard_False);
      BRepAlgoAPI_Fuse f(mySbase, myGShape);
      myShape = f.Shape();
      UpdateDescendants(f, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:32:23 2002 t
      Done();
    }
    else if(myFuse == 0) {
      //modified by NIZNHY-PKV Thu Mar 21 17:32:57 2002 f
      //BRepAlgo_Cut c(mySbase, myGShape);
      //myShape = c.Shape();
      //UpdateDescendants(c.Builder(), myShape, Standard_False);
      BRepAlgoAPI_Cut c(mySbase, myGShape);
      myShape = c.Shape();
      UpdateDescendants(c, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:33:00 2002 t
      Done();
    }
    else {
      myShape = myGShape;
      Done();
    }
  }
}

//=======================================================================
//function : Perform
//purpose  : feature limited by the shape Until
//=======================================================================

void BRepFeat_MakeDPrism::Perform(const TopoDS_Shape& Until)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::Perform(Until)" << endl;
#endif
  if (Until.IsNull()) {
    Standard_ConstructionError::Raise();
  }
  TopExp_Explorer exp(Until, TopAbs_FACE);
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }
//  myPbase.Orientation(TopAbs_FORWARD);

  myGluedF.Clear();
  myPerfSelection = BRepFeat_SelectionU;
  PerfSelectionValid();
  mySFrom.Nullify();
  ShapeFromValid();
  mySUntil = Until;
  Standard_Boolean Trf = TransformShapeFU(1);  
  ShapeUntilValid();
  Handle(Geom_Curve) C = TestCurve(myPbase);  
  Standard_Integer sens = SensOfPrism(C, mySUntil);

  BRep_Builder bB;
  Standard_Real Height = 
    sens*HeightMax(mySbase, mySkface, mySFrom, mySUntil);
  LocOpe_DPrism theDPrism(myPbase,Height,myAngle);
  TopoDS_Shape VraiDPrism = theDPrism.Shape();
  if(!Trf) {
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);
    myGShape = VraiDPrism;
    GeneratedShapeValid();
    TopoDS_Shape Base = theDPrism.FirstShape();
    exp.Init(Base, TopAbs_FACE);
    TopoDS_Face theBase = TopoDS::Face(exp.Current());
    exp.Next();
    if(exp.More()) {
      NotDone();
      myStatusError = BRepFeat_InvFirstShape;
      return;
    }

    GluedFacesValid();
    theDPrism.Curves(myCurves);
    myBCurve = theDPrism.BarycCurve();
    GlobalPerform();
  }
  else {
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);
    Handle(Geom_Curve) C1;
    if(sens == -1) {
      C1 = C->Reversed();
    } 
    else {
      C1 = C;
    }

    TColGeom_SequenceOfCurve scur;
    scur.Clear();    
    scur.Append(C1);
    LocOpe_CSIntersector ASI(mySUntil);
    ASI.Perform(scur);
    TopAbs_Orientation Or;
    if (ASI.IsDone() && ASI.NbPoints(1) >=1) { 
      if (myFuse == 1) {
	Or = ASI.Point(1,1).Orientation();
      }
      else {
	Or = ASI.Point(1,ASI.NbPoints(1)).Orientation();
      }     
//      Standard_Real prm = ASI.Point(1,1).Parameter();
//      if(prm < 0) Or = TopAbs::Reverse(Or);
      TopoDS_Face FUntil = ASI.Point(1,1).Face();
      TopoDS_Shape Comp;
      bB.MakeCompound(TopoDS::Compound(Comp));
      TopoDS_Solid S = BRepFeat::Tool(mySUntil, FUntil, Or);
      if (!S.IsNull()) bB.Add(Comp,S);

      //modified by NIZNHY-PKV Thu Mar 21 17:33:27 2002
      //BRepAlgo_Cut trP(VraiDPrism,Comp);
      //UpdateDescendants(trP.Builder(),trP.Shape(), Standard_False);
      BRepAlgoAPI_Cut trP(VraiDPrism,Comp);
      UpdateDescendants(trP, trP.Shape(), Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:33:32 2002 t

      TopExp_Explorer ex(trP.Shape(), TopAbs_SOLID);
      TopoDS_Shape Cutsh = ex.Current();
      if(myFuse == 1) {
	//modified by NIZNHY-PKV Thu Mar 21 17:34:09 2002 f
	//BRepAlgo_Fuse f(mySbase, Cutsh);
	//myShape = f.Shape();
	//UpdateDescendants(f.Builder(), myShape, Standard_False);
	BRepAlgoAPI_Fuse f(mySbase, Cutsh);
	myShape = f.Shape();
	UpdateDescendants(f, myShape, Standard_False);
	//modified by NIZNHY-PKV Thu Mar 21 17:34:13 2002 t
	Done();
      }
      else if(myFuse == 0) {
	//modified by NIZNHY-PKV Thu Mar 21 17:34:56 2002 f
	//BRepAlgo_Cut c(mySbase, Cutsh);
	//myShape = c.Shape();
	//UpdateDescendants(c.Builder(), myShape, Standard_False);
	BRepAlgoAPI_Cut c(mySbase, Cutsh);
	myShape = c.Shape();
	UpdateDescendants(c, myShape, Standard_False);
	//modified by NIZNHY-PKV Thu Mar 21 17:34:59 2002 t
	Done();
      }
      else {
	myShape = Cutsh;
	Done();	
      }
    }         
  }
  for (auto s : myNewEdges) {
    const TopoDS_Edge& ledg=TopoDS::Edge(s);
    if (!BRepAlgo::IsValid(ledg)) {
      bB.SameRange(ledg, Standard_False);
      bB.SameParameter(ledg, Standard_False);
      BRepLib::SameParameter(ledg, BRep_Tool::Tolerance(ledg));
    }
  }  
}


//=======================================================================
//function : Perform
//purpose  : feature limited by two shapes 
//=======================================================================

void BRepFeat_MakeDPrism::Perform(const TopoDS_Shape& From,
				  const TopoDS_Shape& Until)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::Perform(From,Until)" << endl;
#endif
  if (From.IsNull() || Until.IsNull()) {
    Standard_ConstructionError::Raise();
  }

  if (!mySkface.IsNull()) {
    if (From.IsSame(mySkface)) {
      myJustGluer = Standard_True;
      Perform(Until);
      if (myJustGluer) return;
    }
    else if (Until.IsSame(mySkface)) {
      myJustGluer = Standard_True;
      Perform(From);
      if (myJustGluer) return;
    }
  }
//  myPbase.Orientation(TopAbs_FORWARD);

  myGluedF.Clear();
  myPerfSelection = BRepFeat_SelectionFU;
  PerfSelectionValid();

  TopExp_Explorer exp(From, TopAbs_FACE);
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }
  exp.Init(Until, TopAbs_FACE);
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }
  mySFrom = From;
  Standard_Boolean Trff = TransformShapeFU(0);
  ShapeFromValid();
  mySUntil = Until;
  Standard_Boolean Trfu = TransformShapeFU(1);
  ShapeUntilValid();  
  if(Trfu != Trff) {
    NotDone();
    myStatusError = BRepFeat_IncTypes;
    return;
  }
  Handle(Geom_Curve) C = TestCurve(myPbase);  
  Standard_Integer sens;
  if(From.IsSame(Until)) {
    sens = 1;
  }
  else {
    sens = SensOfPrism(C, mySUntil);
  }

  Standard_Real Height = 
    sens*HeightMax(mySbase, myPbase, mySFrom, mySUntil);
  LocOpe_DPrism theDPrism(myPbase, Height, Height, myAngle);
  TopoDS_Shape VraiDPrism = theDPrism.Shape();


  if(!Trff) {
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);
    
    // Make systematically dprism 
    myGShape = VraiDPrism;
    GeneratedShapeValid();

  // management of gluing faces 
	//	  mySbase, myPbase, mySlface, theDPrism, myGluedF);
    GluedFacesValid();
    theDPrism.Curves(myCurves);
    myBCurve = theDPrism.BarycCurve();

    // topologic reconstruction 
    GlobalPerform();
  }
  else {
    // management of descendants
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);
    Handle(Geom_Curve) C1;
    if(sens == -1) {
      C1 = C->Reversed();
    }
    else {
      C1 = C;
    }
    TColGeom_SequenceOfCurve scur;
    scur.Clear();    
    scur.Append(C1);
    LocOpe_CSIntersector ASI1(mySUntil);
    LocOpe_CSIntersector ASI2(mySFrom);
    ASI1.Perform(scur);
    ASI2.Perform(scur);
    TopAbs_Orientation OrU, OrF;
    TopoDS_Face FFrom, FUntil;
    //direction of dprism
    if (ASI1.IsDone() && ASI1.NbPoints(1) >=1) {
      if (myFuse == 1) {
	OrU = ASI1.Point(1,1).Orientation();
      }
      else {
	OrU = ASI1.Point(1,ASI1.NbPoints(1)).Orientation();
      }
//      Standard_Real prm = ASI1.Point(1,1).Parameter();
//      if(prm < 0) OrU = TopAbs::Reverse(OrU);
      FUntil = ASI1.Point(1,1).Face();
    }
    else {
      NotDone();
      myStatusError = BRepFeat_NoIntersectU;
      return;
    }
    if (ASI2.IsDone() && ASI2.NbPoints(1) >=1) {
      OrF = ASI2.Point(1,1).Orientation();
//      Standard_Real prm = ASI2.Point(1,1).Parameter();
      OrF = TopAbs::Reverse(OrF);
      FFrom = ASI2.Point(1,1).Face();
    }
    else {
      NotDone();
      myStatusError = BRepFeat_NoIntersectF;
      return;
    }
    TopoDS_Shape Comp;
    BRep_Builder B;
    B.MakeCompound(TopoDS::Compound(Comp));
    TopoDS_Solid S = BRepFeat::Tool(mySUntil, FUntil, OrU);
    if (!S.IsNull()) B.Add(Comp,S);
    else {
      NotDone();
      myStatusError = BRepFeat_NullToolU;
      return;
    }
    TopoDS_Solid SS = BRepFeat::Tool(mySFrom, FFrom, OrF);
    if (!SS.IsNull()) B.Add(Comp,SS);
    else {
      NotDone();
      myStatusError = BRepFeat_NullToolF;
      return;
    }

    //modified by NIZNHY-PKV Thu Mar 21 17:35:48 2002 f
    //BRepAlgo_Cut trP(VraiDPrism,Comp);
    BRepAlgoAPI_Cut trP(VraiDPrism,Comp);
    //modified by NIZNHY-PKV Thu Mar 21 17:35:59 2002 t

    if(myFuse == 1) {
      //modified by NIZNHY-PKV Thu Mar 21 17:36:06 2002 f
      //BRepAlgo_Fuse f(mySbase, trP.Shape());
      //myShape = f.Shape();
      //UpdateDescendants(f.Builder(), myShape, Standard_False);
      BRepAlgoAPI_Fuse f(mySbase, trP.Shape());
      myShape = f.Shape();
      UpdateDescendants(f, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:36:33 2002 t
      Done();
    }
    //
    else if(myFuse == 0) {
      //modified by NIZNHY-PKV Thu Mar 21 17:37:16 2002 f
      //BRepAlgo_Cut c(mySbase, trP.Shape());
      //myShape = c.Shape();
      //UpdateDescendants(c.Builder(), myShape, Standard_False);
      BRepAlgoAPI_Cut c(mySbase, trP.Shape());
      myShape = c.Shape();
      UpdateDescendants(c, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:37:49 2002 t
      Done();
    }
    else {
      myShape = trP.Shape();
      Done();	
    }
  }
}


//=======================================================================
//function : Perform
//purpose  : feature semi-infinie
//=======================================================================

void BRepFeat_MakeDPrism::PerformUntilEnd()
{  
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::PerformUntilEnd()" << endl;
#endif 
  myPerfSelection = BRepFeat_SelectionSh;
  PerfSelectionValid();
  myGluedF.Clear();
  mySUntil.Nullify();
  ShapeUntilValid();
  mySFrom.Nullify();
  ShapeFromValid();
  Standard_Real Height = HeightMax(mySbase, mySkface, mySFrom, mySUntil);
//  myPbase.Orientation(TopAbs_FORWARD);

  LocOpe_DPrism theDPrism(myPbase, Height, myAngle);  
  TopoDS_Shape VraiDPrism = theDPrism.Shape();

  MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);

  myGShape = VraiDPrism;
  GeneratedShapeValid();
  GluedFacesValid();
  theDPrism.Curves(myCurves);
  myBCurve = theDPrism.BarycCurve();
  GlobalPerform();
}

//=======================================================================
//function : PerformFromEnd
//purpose  : feature semiinfinite limited by the shape Until from the other side
//=======================================================================

void BRepFeat_MakeDPrism::PerformFromEnd(const TopoDS_Shape& Until)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::PerformFromEnd(From,Until)" << endl;
#endif
  if (Until.IsNull()) {
    Standard_ConstructionError::Raise();
  }
  if (!mySkface.IsNull() && Until.IsSame(mySkface)) {
    PerformUntilEnd();
    return;
  }
  TopExp_Explorer exp;
  exp.Init(Until, TopAbs_FACE);
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }
//  myPbase.Orientation(TopAbs_FORWARD);
  myPerfSelection = BRepFeat_SelectionShU;
  PerfSelectionValid();
  mySFrom.Nullify();
  ShapeFromValid();
  mySUntil = Until;
  Standard_Boolean Trf = TransformShapeFU(1);
  ShapeUntilValid();
  Handle(Geom_Curve) C = TestCurve(myPbase);  
  Standard_Integer sens = SensOfPrism(C, mySUntil);
  Standard_Real Height = 
    sens*HeightMax(mySbase, mySkface, mySFrom, mySUntil);

  LocOpe_DPrism theDPrism(myPbase, Height, Height, myAngle);
  TopoDS_Shape VraiDPrism = theDPrism.Shape();
  if(VraiDPrism.IsNull()) {
    NotDone();
    myStatusError = BRepFeat_NullRealTool;
    return;
  }

  if(!Trf) {   // case finite face
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);    
    myGShape = VraiDPrism;
    GeneratedShapeValid();
    myGluedF.Clear();
    GluedFacesValid();
    theDPrism.Curves(myCurves);
    myBCurve = theDPrism.BarycCurve();
    GlobalPerform();
  }
  else {   // case support
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);    
    Handle(Geom_Curve) C2;
    if(sens == -1) {
      C2 = C->Reversed();
    }
    else {
      C2 = C;
    }
    TColGeom_SequenceOfCurve scur;
    scur.Clear();    
    scur.Append(C2);
    LocOpe_CSIntersector ASI1(mySUntil);
    LocOpe_CSIntersector ASI2(mySbase);
    ASI1.Perform(scur);
    ASI2.Perform(scur);
    TopAbs_Orientation OrU = TopAbs_FORWARD, OrF = TopAbs_FORWARD;
    TopoDS_Face FUntil, FFrom;
    if (ASI1.IsDone() && ASI1.NbPoints(1) >=1) {
      OrU = ASI1.Point(1,1).Orientation();
      Standard_Real prm = ASI1.Point(1,1).Parameter();
      if(prm < 0) OrU = TopAbs::Reverse(OrU);
      FUntil = ASI1.Point(1,1).Face();
    }

    if (ASI2.IsDone() && ASI2.NbPoints(1) >=1) {
      Standard_Integer jj = ASI2.NbPoints(1);
      Standard_Real prm = ASI2.Point(1,1).Parameter();
      FFrom = ASI2.Point(1, 1).Face();
      OrF = ASI2.Point(1,1).Orientation();
      OrF = TopAbs::Reverse(OrF);	  
      for(Standard_Integer iii = 1; iii <= jj; iii++) {
	if(ASI2.Point(1,iii).Parameter() < prm) {
	  prm = ASI2.Point(1,iii).Parameter();
	  FFrom = ASI2.Point(1, iii).Face(); 
	  OrF = ASI2.Point(1,iii).Orientation();
	  OrF = TopAbs::Reverse(OrF);	  
	}
      }
      Handle(Geom_Surface) S = BRep_Tool::Surface(FFrom);
      if (S->DynamicType() == 
	  STANDARD_TYPE(Geom_RectangularTrimmedSurface)) {
	S = Handle(Geom_RectangularTrimmedSurface)::
	  DownCast(S)->BasisSurface();
      }
      BRepLib_MakeFace fac(S, Precision::Confusion());
      mySFrom = fac.Face();  
      Trf = TransformShapeFU(0);
//      FFrom = TopoDS::Face(mySFrom);      
    }

    TopoDS_Shape Comp;
    BRep_Builder B;
    B.MakeCompound(TopoDS::Compound(Comp));
    TopoDS_Solid Sol = BRepFeat::Tool(mySUntil, FUntil, OrU);
    if (!Sol.IsNull()) B.Add(Comp,Sol);
    else {
      NotDone();
      myStatusError = BRepFeat_NullToolU;
      return;
    }

    TopoDS_Solid Sol1 = BRepFeat::Tool(mySFrom, FFrom, OrF);
    if (!Sol1.IsNull()) B.Add(Comp,Sol1);
    else {
      NotDone();
      myStatusError = BRepFeat_NullToolF;
      return;
    }

    //modified by NIZNHY-PKV Thu Mar 21 17:38:33 2002 f
    //BRepAlgo_Cut trP(VraiDPrism,Comp);
    BRepAlgoAPI_Cut trP(VraiDPrism,Comp);
    //modified by NIZNHY-PKV Thu Mar 21 17:38:37 2002 t
    if(myFuse == 1) {
      //modified by NIZNHY-PKV Thu Mar 21 17:40:03 2002 f
      //BRepAlgo_Fuse f(mySbase, trP.Shape());
      //myShape = f.Shape();
      //UpdateDescendants(f.Builder(), myShape, Standard_False);
      BRepAlgoAPI_Fuse f(mySbase, trP.Shape());
      myShape = f.Shape();
      UpdateDescendants(f, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:40:07 2002 t
      Done();
    }
    else if(myFuse == 0) {
      //modified by NIZNHY-PKV Thu Mar 21 17:40:33 2002 t
      //BRepAlgo_Cut c(mySbase, trP.Shape());
      //myShape = c.Shape();
      //UpdateDescendants(c.Builder(), myShape, Standard_False);
      BRepAlgoAPI_Cut c(mySbase, trP.Shape());
      myShape = c.Shape();
      UpdateDescendants(c, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:40:44 2002 t
      Done();
    }
    else {
      myShape = trP.Shape();
      Done();	
    }
  }
}



//=======================================================================
//function : PerformThruAll
//purpose  : feature throughout the entire initial shape 
//=======================================================================

void BRepFeat_MakeDPrism::PerformThruAll()
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::PerformThruAll()" << endl;
#endif
  mySUntil.Nullify();
  ShapeUntilValid();
  mySFrom.Nullify();
  ShapeFromValid();
  if(myFuse == 0) {
    myPerfSelection = BRepFeat_NoSelection;
  }
  else {
    myPerfSelection = BRepFeat_SelectionSh;
  }

  PerfSelectionValid();
//  myPbase.Orientation(TopAbs_FORWARD);
  myGluedF.Clear();
  GluedFacesValid();

  Standard_Real Height = HeightMax(mySbase, mySkface, mySFrom, mySUntil);
  LocOpe_DPrism theDPrism(myPbase, Height, Height, myAngle);
  TopoDS_Shape VraiDPrism = theDPrism.Shape();
  MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);

  myGShape = VraiDPrism;
  GeneratedShapeValid();

  if(myFuse == 0) {
    //modified by NIZNHY-PKV Thu Mar 21 17:46:16 2002 f
    //BRepAlgo_Cut c(mySbase, myGShape);
    BRepAlgoAPI_Cut c(mySbase, myGShape);
    //modified by NIZNHY-PKV Thu Mar 21 17:46:26 2002 t
    if (c.IsDone()) {
      myShape = c.Shape();
      //modified by NIZNHY-PKV Thu Mar 21 17:46:39 2002 f
      //UpdateDescendants(c.Builder(), myShape, Standard_False);
      UpdateDescendants(c, myShape, Standard_False);
      //modified by NIZNHY-PKV Thu Mar 21 17:46:43 2002 t
      Done();
    }
  }
  else {  
    theDPrism.Curves(myCurves);
    myBCurve = theDPrism.BarycCurve();
    GlobalPerform();
  }
}


//=======================================================================
//function : PerformUntilHeight
//purpose  : feature until the shape is of the given height
//=======================================================================

void BRepFeat_MakeDPrism::PerformUntilHeight(const TopoDS_Shape& Until,
					     const Standard_Real Height)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::PerformUntilHeight(Until,Height)" << endl;
#endif
  if (Until.IsNull()) {
    Perform(Height);
  }
  if(Height == 0) {
    Perform(Until);
  }
  TopExp_Explorer exp(Until, TopAbs_FACE);
  if (!exp.More()) {
    Standard_ConstructionError::Raise();
  }
//  myPbase.Orientation(TopAbs_FORWARD);
  myGluedF.Clear();
  myPerfSelection = BRepFeat_NoSelection;
  PerfSelectionValid();
  mySFrom.Nullify();
  ShapeFromValid();
  mySUntil = Until;
  Standard_Boolean Trf = TransformShapeFU(1);
  ShapeUntilValid();
  Handle(Geom_Curve) C = TestCurve(myPbase);  
  Standard_Integer sens = SensOfPrism(C, mySUntil);

  LocOpe_DPrism theDPrism(myPbase,sens*Height,myAngle);
  TopoDS_Shape VraiDPrism = theDPrism.Shape();

  if(!Trf) {    // case face finished
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);
    myGShape = VraiDPrism;
    GeneratedShapeValid();
    TopoDS_Shape Base = theDPrism.FirstShape();
    exp.Init(Base, TopAbs_FACE);
    TopoDS_Face theBase = TopoDS::Face(exp.Current());
    exp.Next();
    if(exp.More()) {
      NotDone();
      myStatusError = BRepFeat_InvFirstShape;
      return;
    }

    GluedFacesValid();
    theDPrism.Curves(myCurves);
    myBCurve = theDPrism.BarycCurve();
    GlobalPerform();
  }
  else {      // case support
    MajMap(myPbase,theDPrism,myMap,myFShape,myLShape);
    Handle(Geom_Curve) C1;
    if(sens == -1) {
      C1 = C->Reversed();      
    }
    else {
      C1 = C;
    }
    TColGeom_SequenceOfCurve scur;
    scur.Clear();    
    scur.Append(C1);
    LocOpe_CSIntersector ASI(mySUntil);
    ASI.Perform(scur);
    TopAbs_Orientation Or;
    if (ASI.IsDone() && ASI.NbPoints(1) >=1) {
      if (myFuse == 1) {
	Or = ASI.Point(1,1).Orientation();
      }
      else {
	Or = ASI.Point(1,ASI.NbPoints(1)).Orientation();
      }
//      Standard_Real prm = ASI.Point(1,1).Parameter();
//      if(prm < 0) Or = TopAbs::Reverse(Or);
      TopoDS_Face FUntil = ASI.Point(1,1).Face();
      TopoDS_Shape Comp;
      BRep_Builder B;
      B.MakeCompound(TopoDS::Compound(Comp));
      TopoDS_Solid S = BRepFeat::Tool(mySUntil, FUntil, Or);
      if (!S.IsNull()) B.Add(Comp,S);
      //modified by NIZNHY-PKV Thu Mar 21 17:47:14 2002 f
      //BRepAlgo_Cut trP(VraiDPrism,Comp);
      BRepAlgoAPI_Cut trP(VraiDPrism,Comp);
      //modified by NIZNHY-PKV Thu Mar 21 17:47:21 2002 t
      if(myFuse == 1) {
	//modified by NIZNHY-PKV Thu Mar 21 17:47:42 2002 f
	//BRepAlgo_Fuse f(mySbase, trP.Shape());
	//myShape = f.Shape();
	//UpdateDescendants(f.Builder(), myShape, Standard_False);
	BRepAlgoAPI_Fuse f(mySbase, trP.Shape());
	myShape = f.Shape();
	UpdateDescendants(f, myShape, Standard_False);
	//modified by NIZNHY-PKV Thu Mar 21 17:47:49 2002 t
	Done();
      }
      else if(myFuse == 0) {
	//modified by NIZNHY-PKV Thu Mar 21 17:48:18 2002 f
	//BRepAlgo_Cut c(mySbase, trP.Shape());
	//myShape = c.Shape();
	//UpdateDescendants(c.Builder(), myShape, Standard_False);
	BRepAlgoAPI_Cut c(mySbase, trP.Shape());
	myShape = c.Shape();
	UpdateDescendants(c, myShape, Standard_False);
	//modified by NIZNHY-PKV Thu Mar 21 17:48:26 2002 t
	Done();
      }
      else {
	myShape = trP.Shape();
	Done();	
      }
    }             
  }
}


//=======================================================================
//function : Curves
//purpose  : curves parallel to the axis of the prism
//=======================================================================

void BRepFeat_MakeDPrism::Curves(TColGeom_SequenceOfCurve& scur)
{
  scur = myCurves;
}

//============================================================================
// function : BRepFeat_BossEgdes
// purpose: Determination of TopEdges and LatEdges.
//          sig = 1 -> TopEdges = FirstShape of the DPrism
//          sig = 2 -> TOpEdges = LastShape of the DPrism
//============================================================================
void BRepFeat_MakeDPrism::BossEdges (const Standard_Integer signature) 
{
#ifdef OCCT_DEBUG
  Standard_Boolean trc = BRepFeat_GettraceFEAT();
  if (trc) cout << "BRepFeat_MakeDPrism::BossEdges (integer)" << endl;
#endif
  TopTools_ListOfShape theLastShape;
  theLastShape.clear();
  if (signature == 1 || signature == -1) {
    theLastShape = FirstShape();
  }
  else if (signature == 2 || signature == -2) {
    theLastShape = LastShape();
  }
  else {
    return;
  }

  // Edges Top
  TopExp_Explorer ExpE;
  for (auto S : theLastShape) {
    const TopoDS_Face& FF = TopoDS::Face(S);
    for (ExpE.Init(FF,TopAbs_EDGE);ExpE.More();ExpE.Next()) {
      const TopoDS_Edge& EE = TopoDS::Edge(ExpE.Current());
      myTopEdges.push_back(EE);  
    }
  }
  
  // Edges Bottom    
  if (signature < 0) {
// Attention check if TgtEdges is important
    myLatEdges = NewEdges();
  }
  else if (signature > 0) {
    if ( !myShape.IsNull() ) {
      TopTools_MapOfShape MapE;
      Standard_Boolean Found;
      
      TopExp_Explorer ExpF;
      for (ExpF.Init(myShape,TopAbs_FACE);ExpF.More();ExpF.Next()) {
	Found = Standard_False;
	const TopoDS_Face& FF = TopoDS::Face(ExpF.Current());	
	for (auto TopShape : theLastShape) {
	  const TopoDS_Face& TopFace = TopoDS::Face(TopShape);
	  if (!FF.IsSame(TopFace)) {
	    TopExp_Explorer ExpE;
	    for (ExpE.Init(FF,TopAbs_EDGE);ExpE.More() && !Found ;ExpE.Next()) {
	      const TopoDS_Edge& E1 = TopoDS::Edge(ExpE.Current());
	      TopoDS_Vertex V1,V2;
	      TopExp::Vertices (E1,V1,V2);
#warning find
	      for (auto TopEdge : myTopEdges) {
		if (Found) break;
		TopoDS_Edge E2 = TopoDS::Edge(TopEdge);
		TopoDS_Vertex VT1,VT2;
		TopExp::Vertices (E2,VT1,VT2);
		
		if (V1.IsSame(VT1) || V1.IsSame(VT2) || V2.IsSame(VT1) || V2.IsSame(VT2)) {
		  Found = Standard_True;
		  TopExp_Explorer ExpE2;
		  for (ExpE2.Init(FF,TopAbs_EDGE);ExpE2.More();ExpE2.Next()) {
		    const TopoDS_Edge& E3 = TopoDS::Edge(ExpE2.Current());
		    if (MapE.Contains(E3)) { 
		      MapE.Remove(E3); }
		    else  {
		      MapE.Add(E3);}
		  }
		}
	      }
	    }
	  }
	}
      }
    
      for (auto S : myTopEdges) {
	if (MapE.Contains(S)) {MapE.Remove(S); }
      }
      
      TopTools_MapIteratorOfMapOfShape itMap;
      for (itMap.Initialize(MapE);itMap.More();itMap.Next()) {
	if (!BRep_Tool::Degenerated(TopoDS::Edge(itMap.Key())))
	  myLatEdges.push_back(itMap.Key());
      }
    }
  }
}



//============================================================================
// function : BRepFeat_TopEgdes
// Purpose: Returns the list of TopoDS Edges of the top of the boss           
//============================================================================
const TopTools_ListOfShape& BRepFeat_MakeDPrism::TopEdges () 
{    
  return myTopEdges;
}

//============================================================================
// function : BRepFeat_LatEgdes
// Purpose: Returns the list of TopoDS Edges of the top of the boss           
//============================================================================
const TopTools_ListOfShape& BRepFeat_MakeDPrism::LatEdges () 
{
  return myLatEdges;
}

//=======================================================================
//function : BarycCurve
//purpose  : passe par le centre de masses de la primitive
//=======================================================================

Handle(Geom_Curve) BRepFeat_MakeDPrism::BarycCurve()
{
  return myBCurve;
}


//=======================================================================
//function : HeightMax
//purpose  : Calculate the height of the prism following the parameters of the bounding box 
//=======================================================================

static Standard_Real HeightMax(const TopoDS_Shape& theSbase,  // shape initial
			       const TopoDS_Face&  theSkface, // face de sketch
			       const TopoDS_Shape& theSFrom,  // shape from
			       const TopoDS_Shape& theSUntil) // shape until
{
  Bnd_Box Box;
  BRepBndLib::Add(theSbase,Box);
  BRepBndLib::Add(theSkface,Box);
  if(!theSFrom.IsNull()) {
    BRepBndLib::Add(theSFrom,Box);
  }
  if(!theSUntil.IsNull()) {
    BRepBndLib::Add(theSUntil,Box);
  }
  Standard_Real c[6];

  Box.Get(c[0],c[2],c[4],c[1],c[3],c[5]);
//  Standard_Real parmin=c[0], parmax = c[0];
//  for(Standard_Integer i = 0 ; i < 6; i++) {
//    if(c[i] > parmax) parmax = c[i];
//    if(c[i] < parmin ) parmin = c[i];    
//  }
//  Standard_Real Height = abs(2.*(parmax - parmin));
//  return(2.*Height);
//#ifndef OCCT_DEBUG
  Standard_Real par = Max(  Max( fabs(c[1] - c[0]), fabs(c[3] - c[2]) ), fabs(c[5] - c[4]) );
//#else
//  Standard_Real par = Max(  Max( abs(c[1] - c[0]), abs(c[3] - c[2]) ), abs(c[5] - c[4]) );
//#endif
#ifdef OCCT_DEBUG
  cout << "Height = > " <<  par  << endl;
#endif
  return par;
}





 //=======================================================================
//function : SensOfPrism
//purpose  : determine the direction of prism generation
//=======================================================================
Standard_Integer SensOfPrism(const Handle(Geom_Curve) C,
			     const TopoDS_Shape& Until)
{
  LocOpe_CSIntersector ASI1(Until);
  TColGeom_SequenceOfCurve scur;
  scur.Append(C);
  ASI1.Perform(scur);
  Standard_Integer sens = 1;
  if(ASI1.IsDone() && ASI1.NbPoints(1) >= 1) {
    Standard_Integer nb = ASI1.NbPoints(1);
    Standard_Real prm1 = ASI1.Point(1, 1).Parameter();
    Standard_Real prm2 = ASI1.Point(1, nb).Parameter();
    if(prm1 < 0. && prm2 < 0.) {
      sens = -1;
    }
  }
  else if(BRepFeat::ParametricBarycenter(Until,C) < 0) {
      sens = -1;
  }
  else {}
  return sens;
}

//=======================================================================
//function : MajMap
//purpose  : 
//=======================================================================

static void MajMap(const TopoDS_Shape& theB,
		   const LocOpe_DPrism& theP,
		   TopTools_DataMapOfShapeListOfShape& theMap, // myMap
		   TopoDS_Shape& theFShape,  // myFShape
		   TopoDS_Shape& theLShape) // myLShape
{
  TopExp_Explorer exp;
  if(!theP.FirstShape().IsNull()) {    
    exp.Init(theP.FirstShape(),TopAbs_WIRE);
    if (exp.More()) {
      theFShape = exp.Current();
      TopTools_ListOfShape thelist;
      theMap.Bind(theFShape, thelist);
      for (exp.Init(theP.FirstShape(),TopAbs_FACE);exp.More();exp.Next()) {
	theMap(theFShape).push_back(exp.Current());
      }
    }
  }
  
  if(!theP.LastShape().IsNull()) {    
    exp.Init(theP.LastShape(),TopAbs_WIRE);
    if (exp.More()) {
      theLShape = exp.Current();
      TopTools_ListOfShape thelist1;
      theMap.Bind(theLShape, thelist1);
      for (exp.Init(theP.LastShape(),TopAbs_FACE);exp.More();exp.Next()) {
	theMap(theLShape).push_back(exp.Current());
      }
    }
  }

  for (exp.Init(theB,TopAbs_EDGE); exp.More(); exp.Next()) {
    if (!theMap.IsBound(exp.Current())) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      TopTools_ListOfShape thelist2;
      theMap.Bind(edg, thelist2);
      theMap(edg) = theP.Shapes(edg);
    }
  }
}


//=======================================================================
//function : MajMap
//purpose  : 
//=======================================================================

static Handle(Geom_Curve) TestCurve(const TopoDS_Face& Base)
{
  gp_Pnt bar(0., 0., 0.);
  TColgp_SequenceOfPnt spt;
  LocOpe::SampleEdges(Base,spt);
  for (Standard_Integer jj=1;jj<=spt.Length(); jj++) {
    const gp_Pnt& pvt = spt(jj);
    bar.ChangeCoord() += pvt.XYZ();
  }
  bar.ChangeCoord().Divide(spt.Length());
  Handle(Geom_Surface) s = BRep_Tool::Surface(Base);
  if (s->DynamicType() == STANDARD_TYPE(Geom_RectangularTrimmedSurface)) {
    s = Handle(Geom_RectangularTrimmedSurface)::
      DownCast(s)->BasisSurface();
  }
  Handle (Geom_Plane)   P = Handle(Geom_Plane)::DownCast(s);
  if(P.IsNull())  {
    Handle(Geom_Curve) toto;
    return toto;
  }
  gp_Pln pp = P->Pln();
  gp_Dir Normale(pp.Position().XDirection()^pp.Position().YDirection());
  gp_Ax1 theAx(bar, Normale);
  Handle(Geom_Line) theLin = new Geom_Line(theAx);
  return theLin;
}





//=======================================================================
//function : ToFuse
//purpose  : 
//=======================================================================

Standard_Boolean ToFuse(const TopoDS_Face& F1,
			const TopoDS_Face& F2)
{
  if (F1.IsNull() || F2.IsNull()) {
    return Standard_False;
  }

  Handle(Geom_Surface) S1,S2;
  TopLoc_Location loc1, loc2;
  Handle(Standard_Type) typS1,typS2;
  const Standard_Real tollin = Precision::Confusion();
  const Standard_Real tolang = Precision::Angular();

  S1 = BRep_Tool::Surface(F1,loc1);
  S2 = BRep_Tool::Surface(F2,loc2);

  typS1 = S1->DynamicType();
  typS2 = S2->DynamicType();

  if (typS1 == STANDARD_TYPE(Geom_RectangularTrimmedSurface)) {
    S1 =  (*((Handle(Geom_RectangularTrimmedSurface)*)&S1))->BasisSurface();
    typS1 = S1->DynamicType();
  }

  if (typS2 == STANDARD_TYPE(Geom_RectangularTrimmedSurface)) {
    S2 =  (*((Handle(Geom_RectangularTrimmedSurface)*)&S2))->BasisSurface();
    typS2 = S2->DynamicType();
  }

  if (typS1 != typS2) {
    return Standard_False;
  }


  Standard_Boolean ValRet = Standard_False;
  if (typS1 == STANDARD_TYPE(Geom_Plane)) {
    S1 = BRep_Tool::Surface(F1);  // to apply the location.
    S2 = BRep_Tool::Surface(F2);
    gp_Pln pl1( (*((Handle(Geom_Plane)*)&S1))->Pln());
    gp_Pln pl2( (*((Handle(Geom_Plane)*)&S2))->Pln());

    if (pl1.Position().IsCoplanar(pl2.Position(),tollin,tolang)) {
      ValRet = Standard_True;
    }
  }

  return ValRet;
}










