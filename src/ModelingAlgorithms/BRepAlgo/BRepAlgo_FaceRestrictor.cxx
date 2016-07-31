// Created on: 1995-09-01
// Created by: Yves FRICAUD
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

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_FaceRestrictor.hxx>

#include <ModelingAlgorithms/BRepTopAdaptor/BRepTopAdaptor_FClass2d.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_WireToFace.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Geometry/GeomProjLib/GeomProjLib.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>

#include <Mathematics/Precision/Precision.hxx>

//=======================================================================
//function : BRepAlgo_FaceRestrictor
//purpose  : 
//=======================================================================

BRepAlgo_FaceRestrictor::BRepAlgo_FaceRestrictor()
{}

//=======================================================================
//function : 
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Init(const TopoDS_Face&     F,
                                   const Standard_Boolean Proj,
                                   const Standard_Boolean CorrectionOrientation)
{
  myFace = F; modeProj = Proj;  myCorrection = CorrectionOrientation;
}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Add(TopoDS_Wire& W)
{
  wires.push_back(W);
}


//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Clear()
{
  wires.clear();
  faces.clear();
}

//=======================================================================
//function : ChangePcurve
//purpose  : 
//=======================================================================

static Standard_Boolean  ChangePCurve (TopoDS_Edge&          E,
                                       const Handle(Geom_Surface)& S,
                                       TopLoc_Location&      L)
{
  BRep_Builder         BB;
  Handle(Geom_Surface) SE;
  Handle(Geom2d_Curve) C2;
  TopLoc_Location      LE;
  Standard_Real        f,l;

  BRep_Tool::CurveOnSurface (E,C2,SE,LE,f,l,1);
  if (!C2.IsNull()) 
    BB.UpdateEdge(E,C2,S,L,Precision::Confusion());
  return (C2.IsNull());
}

//=======================================================================
//function : ProjCurve3d
//purpose  : 
//=======================================================================

static void ProjCurve3d (TopoDS_Edge&          E,
                         const Handle(Geom_Surface)& S,
                         TopLoc_Location&      L)
{
  BRep_Builder              BB;
  TopLoc_Location           LE;
  Standard_Real             f,l;
  Handle(Geom_Curve)        C  = BRep_Tool::Curve(E,LE,f,l);
  Handle(Geom_TrimmedCurve) CT = new Geom_TrimmedCurve(C,f,l);
  
  TopLoc_Location LL = L.Inverted().Multiplied(LE);
  CT->Transform(LL.Transformation());
  
  Handle(Geom2d_Curve) C2 = GeomProjLib::Curve2d (CT,S);
  BB.UpdateEdge(E,C2,S,L,Precision::Confusion());
}

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Perform()
{

  if (myCorrection) {
    PerformWithCorrection();
    return;
  }

  myDone = Standard_False;

  //--------------------------------------------------------------------
  // return geometry of the reference face.
  //--------------------------------------------------------------------
  TopLoc_Location L;
  const Handle(Geom_Surface)& S = BRep_Tool::Surface(myFace,L);

  //-----------------------------------------------------------------------
  // test if edges are on S. otherwise  add S to the first pcurve.
  // or projection of the edge on F.
  //---------------------------------------------------------------------- 
  TopExp_Explorer Exp;
//  BRep_Builder    BB;
  Standard_Real   f,l;

  TopOpeBRepBuild_WireToFace WTF;

  for (auto Swire : wires) {
    // update the surface on edges.
    const TopoDS_Wire& W = TopoDS::Wire(Swire);

    for (Exp.Init(W,TopAbs_EDGE); Exp.More(); Exp.Next()) {

      TopoDS_Edge E = TopoDS::Edge(Exp.Current());
      Handle(Geom2d_Curve) C2 = BRep_Tool::CurveOnSurface(E,S,L,f,l);
      
      if (C2.IsNull()) {
        // no pcurve on the reference surface.
        if (modeProj) {
          // Projection of the 3D curve on surface.
          ProjCurve3d ( E, S, L);
        }
        else {
          // return the first pcurve glued on <S>
          Standard_Boolean YaPCurve = ChangePCurve (E, S, L);
          if (!YaPCurve) {
            ProjCurve3d (E, S, L);
          }
        }
      }
    }
    WTF.AddWire(W);
  }

  WTF.MakeFaces(myFace,faces);

  myDone = Standard_True;
}


//=======================================================================
//function : IsDone
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_FaceRestrictor::IsDone() const 
{
  return myDone;
}


//=======================================================================
//function : More
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_FaceRestrictor::More() const 
{
  return (!faces.empty());
}


//=======================================================================
//function : Next
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::Next()
{
  faces.pop_front();
}


//=======================================================================
//function : Current
//purpose  : 
//=======================================================================

TopoDS_Face BRepAlgo_FaceRestrictor::Current() const 
{
  return (TopoDS::Face(faces.front()));
}

//=======================================================================
//function : Standard_Boolean
//purpose  : 
//=======================================================================

static Standard_Boolean IsClosed (const TopoDS_Wire& W)
     
{
  if (W.Closed()) return 1;
  TopoDS_Vertex V1,V2;
  TopExp::Vertices (W, V1,V2);
  return (V1.IsSame(V2));
}


//=======================================================================
//function : IsInside
//purpose  : 
//=======================================================================

static Standard_Boolean IsInside(const TopoDS_Wire&       wir,
                                 const TopoDS_Face&       F,
                                 BRepTopAdaptor_FClass2d& /*FClass2d*/)
{
  TopExp_Explorer exp;
  exp.Init(wir,TopAbs_EDGE);
  if (exp.More()) {
    const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
    Standard_Real f,l;
    Handle(Geom2d_Curve) C2d = BRep_Tool::CurveOnSurface(edg,F,f,l);
    Standard_Real prm;

    if (!Precision::IsNegativeInfinite(f) && !Precision::IsPositiveInfinite(l)) {
      prm = (f+l)/2.;
    }
    else {
      if (Precision::IsNegativeInfinite(f) && Precision::IsPositiveInfinite(l)){
        prm = 0.;
      }
      else if (Precision::IsNegativeInfinite(f)) {
        prm = l-1.;
      }
      else {
        prm = f+1.;
      }
    }

    gp_Pnt2d pt2d(C2d->Value(prm));
    BRepTopAdaptor_FClass2d FClass2d(F,Precision::PConfusion());
    TopAbs_State st2=FClass2d.Perform(pt2d,Standard_False);
    return(st2 == TopAbs_IN);     
  }
  return Standard_False;
}
//=======================================================================
//function : Store
//purpose  : 
//=======================================================================

static void Store (const TopoDS_Wire& W2,
                   const TopoDS_Wire& W1,
                   TopTools_DataMapOfShapeListOfShape& keyIsIn,
                   TopTools_DataMapOfShapeListOfShape& keyContains)
{
  if (!keyIsIn.IsBound(W2)) {
    TopTools_ListOfShape empty;
    keyIsIn.Bind(W2,empty);
  }
  keyIsIn(W2).push_back(W1);
  if (!keyContains.IsBound(W1)) {
    TopTools_ListOfShape empty;
    keyContains.Bind(W1,empty);
  }
  keyContains(W1).push_back(W2);
}
//=======================================================================
//function : BuildFaceIn
//purpose  : 
//=======================================================================

static void BuildFaceIn(  TopoDS_Face& F, 
                          const TopoDS_Wire& W, 
                          TopTools_DataMapOfShapeListOfShape& KeyContains, 
                          TopTools_DataMapOfShapeListOfShape& KeyIsIn,
                          TopAbs_Orientation                  Orientation,
                          TopTools_ListOfShape&               Faces)
{
  BRep_Builder B;
  
  if (!KeyContains.IsBound(W) || KeyContains(W).empty()) return;

// Removal of W in KeyIsIn.
//  for (TopTools_ListIteratorOfListOfShape it(KeyContains(W)); it.More(); it.Next()) {

  TopTools_ListIteratorOfListOfShape it;
  for (auto SI : KeyContains(W)) {
    const TopoDS_Wire&    WI = TopoDS::Wire(SI);
    TopTools_ListOfShape& L2 = KeyIsIn(WI);
#warning C++ify
    for (TopTools_ListIteratorOfListOfShape it2 = begin(L2); it2 != end(L2); ++it2) {
      if (it2->IsSame(W)) {
        it2 = L2.erase(it2);
        break;
      }
    }
  }

  TopTools_ListOfShape WireExt;

  for (auto S : KeyContains(W)) {
    const TopoDS_Wire&    WI = TopoDS::Wire(S);
    TopTools_ListOfShape& L2 = KeyIsIn(WI);
   
    if (L2.empty()) {
      WireExt.push_back(WI);
    }
  }
  
  for (auto S : WireExt) {
    const TopoDS_Wire&    WI = TopoDS::Wire(S);
    TopTools_ListOfShape& L2 = KeyIsIn(WI);
    if (L2.empty()) {
      if (Orientation == TopAbs_FORWARD) {
        TopoDS_Wire NWI(WI);
        NWI.Reverse();
        // TopoDS_Wire NWI = TopoDS::Wire(WI.Reversed());
        B.Add(F,NWI);
        BuildFaceIn (F,WI,KeyContains, KeyIsIn,TopAbs_REVERSED,Faces);
      }
      else {
        TopoDS_Shape aLocalShape  = Faces.front().EmptyCopied();
        TopoDS_Face NF = TopoDS::Face(aLocalShape);
        // TopoDS_Face NF = TopoDS::Face(Faces.First().EmptyCopied());;
        B.Add        (NF,WI);
        Faces.push_back (NF);
        BuildFaceIn (NF, WI, KeyContains, KeyIsIn, TopAbs_FORWARD,Faces);
      }
    }
  }
}

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

void BRepAlgo_FaceRestrictor::PerformWithCorrection()
{
  BRep_Builder B;

  myDone = Standard_False;
  //---------------------------------------------------------
  // Reorientation of all closed wires to the left.
  //---------------------------------------------------------
  for (auto S : wires) {
    TopoDS_Wire& W  = TopoDS::Wire(S);
    TopoDS_Shape aLocalShape = myFace.EmptyCopied();
    TopoDS_Face  NF = TopoDS::Face(aLocalShape);
//    TopoDS_Face  NF = TopoDS::Face(myFace.EmptyCopied());
    NF.Orientation(TopAbs_FORWARD);
    B.Add(NF,W);
    
    if (IsClosed(W)) {  
      BRepTopAdaptor_FClass2d FClass2d(NF,Precision::PConfusion());
      if(FClass2d.PerformInfinitePoint() != TopAbs_OUT) { 
        W.Reverse();
      }
    }
  }
  //---------------------------------------------------------
  // Classification of wires ones compared to the others.
  //---------------------------------------------------------
  Standard_Integer j,i = 1;

  for (auto S1 : wires) {
    TopoDS_Wire& W1  = TopoDS::Wire(S1);
    j = 1;    

    if (IsClosed(W1)) {
      TopoDS_Shape aLocalShape = myFace.EmptyCopied();
      TopoDS_Face  NF = TopoDS::Face(aLocalShape);
//      TopoDS_Face  NF = TopoDS::Face(myFace.EmptyCopied());
      NF.Orientation(TopAbs_FORWARD);
      B.Add(NF,W1);
      
      BRepTopAdaptor_FClass2d FClass2d(NF,Precision::PConfusion());
      for (auto S2 : wires) {
        const TopoDS_Wire& W2 = TopoDS::Wire(S2);
        if (!W1.IsSame(W2) && IsInside (W2,NF,FClass2d)) {
          Store (W2,W1,keyIsIn,keyContains);
        } 
        j++;
      }
    }
    i++;
  }
  TopTools_ListOfShape WireExt;
  
  for (auto S : wires) {
    const TopoDS_Wire& W = TopoDS::Wire(S);
    if (!keyIsIn.IsBound(W) || keyIsIn(W).empty()) {
      WireExt.push_back(W);
    }
  }
  
  for (auto S : WireExt) {
    const TopoDS_Wire& W = TopoDS::Wire(S);
    if (!keyIsIn.IsBound(W) || keyIsIn(W).empty()) {
      TopoDS_Shape aLocalShape = myFace.EmptyCopied();
      TopoDS_Face NewFace = TopoDS::Face(aLocalShape);
//      TopoDS_Face NewFace = TopoDS::Face(myFace.EmptyCopied());
      NewFace.Orientation(TopAbs_FORWARD);
      B.Add     (NewFace,W);
      faces.push_back(NewFace); 
      //--------------------------------------------
      // Construction of a face by exterior wire.
      //--------------------------------------------
      BuildFaceIn(NewFace,W, keyContains, keyIsIn, TopAbs_FORWARD, faces);
    }
  }
  myDone = Standard_True;
}










