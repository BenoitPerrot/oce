// Created on: 1995-06-27
// Created by: Jacques GOUSSARD
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

#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe_SplitShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfOrientedShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeInteger.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfOrientedShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Iterator.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeFace.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeWire.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <ModelingData/BRepTools/BRepTools_WireExplorer.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>

#include <ModelingAlgorithms/BRepClass/BRepClass_FaceExplorer.hxx>
#include <ModelingAlgorithms/BRepTopAdaptor/BRepTopAdaptor_FClass2d.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>

#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <Mathematics/Precision/Precision.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <ModelingAlgorithms/LocOpe/LocOpe.hxx>
#include <Foundation/Standard/Standard_ErrorHandler.hxx>

static Standard_Boolean IsInside(const TopoDS_Face&,
                                 const TopoDS_Wire&,
                                 const TopoDS_Wire&);

static Standard_Boolean IsInside(const TopoDS_Face&,
                                 const TopoDS_Wire&);

static void GetDirection(const TopoDS_Edge&,
                         const TopoDS_Face&,
                         Standard_Real&,
                         gp_Pnt2d&,
                         gp_Vec2d&);

static void ChoixUV(const TopoDS_Edge&,
                    const TopoDS_Face&,
                    const TopTools_IndexedMapOfShape&,
                    TopoDS_Edge&,
                    gp_Pnt2d&,
                    gp_Vec2d&,
                    const Standard_Real tol);

static TopoDS_Shape ChooseDirection(const TopoDS_Shape&,
                                    const TopoDS_Vertex&,
                                    const TopoDS_Face&,
                                    const TopTools_ListOfShape&);

inline Standard_Boolean SameUV(const gp_Pnt2d& P1, const gp_Pnt2d& P2, 
                               const BRepAdaptor_Surface& theBAS)//const Standard_Real tol)
{
  //  Standard_Real tol = Precision::Confusion();
  //  return P1.SquareDistance(P2) < 10*tol;
  //gka
  Standard_Boolean isSame = Standard_True;
  if(theBAS.IsUPeriodic())
    isSame = (fabs(P1.X() - P2.X()) < theBAS.UPeriod() *0.5);
  if(theBAS.IsVPeriodic())
    isSame = (isSame && (fabs(P1.Y() - P2.Y()) < theBAS.VPeriod() *0.5));
  return isSame;
  //return P1.SquareDistance(P2) < tol * tol; //IFV
}



//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void LocOpe_SplitShape::Init(const TopoDS_Shape& S)
{
  myDone = Standard_False;
  myShape = S;
  myDblE.Clear();
  myMap.Clear();
  Put(myShape);
}


//=======================================================================
//function : CanSplit
//purpose  : 
//=======================================================================

Standard_Boolean LocOpe_SplitShape::CanSplit(const TopoDS_Edge& E) const
{
  if (myDone) {
    return Standard_False;
  }
  if (myMap.IsEmpty()) {
    return Standard_False;
  }

  if (!myMap.IsBound(E)) {
    return Standard_False;
  }

  // On verifie que l`edge n`appartient pas a un wire deja reconstruit
  TopExp_Explorer exp;  
  TopTools_DataMapIteratorOfDataMapOfShapeListOfShape itm(myMap);
  for (; itm.More(); itm.Next()) {
    if (itm.Key().ShapeType() == TopAbs_WIRE && !itm.Value().empty()) {
      for (exp.Init(itm.Key(),TopAbs_EDGE); exp.More(); exp.Next()) {
        if (exp.Current().IsSame(E)) {
          return Standard_False;
        }
      }
    }
  }
  return Standard_True;
}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void LocOpe_SplitShape::Add(const TopoDS_Vertex& V,
                            const Standard_Real P,
                            const TopoDS_Edge& E)
{
  if (!CanSplit(E)) {
    Standard_ConstructionError::Raise();
  }

  BRep_Builder B;
  TopTools_ListOfShape& le = myMap(E);
  if (le.empty()) {
    le.push_back(E);
  }
  Standard_Real f,l;

#warning find
  TopTools_ListIteratorOfListOfShape itl = begin(le);
  for (; itl != end(le); ++itl) {
    const TopoDS_Edge& edg = TopoDS::Edge(*itl);
    BRep_Tool::Range(edg,f,l);
    if (P>f && P <l) {
      break;
    }
  }
  if (itl == end(le)) {
    Standard_ConstructionError::Raise();
  }
  TopoDS_Edge edg = TopoDS::Edge(*itl);
  itl = le.erase(itl);
  if (V.Orientation() == TopAbs_FORWARD ||
    V.Orientation() == TopAbs_REVERSED) {

      TopoDS_Shape aLocalShape = edg.EmptyCopied();
      TopoDS_Edge E1 = TopoDS::Edge(aLocalShape);
      aLocalShape = edg.EmptyCopied();
      TopoDS_Edge E2 = TopoDS::Edge(aLocalShape);
      //    TopoDS_Edge E1 = TopoDS::Edge(edg.EmptyCopied());
      //    TopoDS_Edge E2 = TopoDS::Edge(edg.EmptyCopied());
      E1.Orientation(TopAbs_FORWARD);
      E2.Orientation(TopAbs_FORWARD);
      TopoDS_Vertex newVtx = V;
      newVtx.Orientation(TopAbs_REVERSED);
      B.Add(E1,newVtx);
      B.UpdateVertex(newVtx,P,E1,BRep_Tool::Tolerance(V));
      newVtx.Orientation(TopAbs_FORWARD);
      B.Add(E2,newVtx);
      B.UpdateVertex(newVtx,P,E2,BRep_Tool::Tolerance(V));
      edg.Orientation(TopAbs_FORWARD);
      TopExp_Explorer exp;
      for (exp.Init(edg,TopAbs_VERTEX); exp.More(); exp.Next()) {
        //    for (TopExp_Explorer exp(edg,TopAbs_VERTEX); exp.More(); exp.Next()) {
        const TopoDS_Vertex& vtx = TopoDS::Vertex(exp.Current());
        f = BRep_Tool::Parameter(vtx,edg);
        if (f < P) {
          B.Add(E1,vtx);
          B.UpdateVertex(vtx,f,E1,BRep_Tool::Tolerance(vtx));
        }
        else {
          B.Add(E2,vtx);
          B.UpdateVertex(vtx,f,E2,BRep_Tool::Tolerance(vtx));
        }
      }
      le.push_back(E1);
      le.push_back(E2);
  }
  else {
    TopoDS_Shape aLocalShape = edg.EmptyCopied();
    TopoDS_Edge E1 = TopoDS::Edge(aLocalShape);
    //    TopoDS_Edge E1 = TopoDS::Edge(edg.EmptyCopied());
    TopExp_Explorer exp;
    for (exp.Init(edg,TopAbs_VERTEX); exp.More(); exp.Next()) {
      //    for (TopExp_Explorer exp(edg,TopAbs_VERTEX); exp.More(); exp.Next()) {
      const TopoDS_Vertex& vtx = TopoDS::Vertex(exp.Current());
      f = BRep_Tool::Parameter(vtx,edg);
      B.Add(E1,vtx);
      B.UpdateVertex(vtx,f,E1,BRep_Tool::Tolerance(vtx));
    }
    B.Add(E1,V);
    B.UpdateVertex(V,P,E1,BRep_Tool::Tolerance(V));
    le.push_back(E1);
  }
}

//=======================================================================
//function : Add
//purpose  : adds the list of wires on the face <F>
//=======================================================================

void LocOpe_SplitShape::Add(const TopTools_ListOfShape& Lwires,
                            const TopoDS_Face& F)
{

  if (myDone) {
    Standard_ConstructionError::Raise();
  }

  TopTools_ListOfShape& lf = myMap(F);
  if (lf.empty()) {
    Rebuild(F);
  }

  // On cherche la face descendante de F qui continent le wire
  lf = myMap(F);
  TopoDS_Vertex Vfirst,Vlast;

  BRepTools::Update(F);

#warning find
  TopTools_ListIteratorOfListOfShape itl = begin(lf);
  for (; itl != end(lf); ++itl)
  {
    const TopoDS_Face& fac = TopoDS::Face(*itl);
    Standard_Boolean AllWiresInside = Standard_True;
    for (auto swire : Lwires)
    {
      const TopoDS_Wire& aWire = TopoDS::Wire(swire);
      if (!IsInside(fac, aWire))
      {
        AllWiresInside = Standard_False;
        break;
      }
    }
    if (AllWiresInside)
      break;
  }
  if (itl == end(lf)) {
    Standard_ConstructionError::Raise();
  }

  TopoDS_Face FaceRef = TopoDS::Face(*itl);
  FaceRef.Orientation(TopAbs_FORWARD);
  itl = lf.erase(itl);

  TopTools_ListOfShape NewWires;

  TopTools_DataMapOfShapeInteger SectionsTimes;
  for (auto S : Lwires)
    SectionsTimes.Bind(S, 2);
  
  TopTools_ListOfShape BreakVertices;
  TopTools_ListOfShape BreakOnWires;

  TopTools_DataMapOfShapeShape VerWireMap;
  Standard_Integer i;
  TopExp_Explorer ExploF, ExploW;
  for (auto S : Lwires) {
    const TopoDS_Wire& aSection = TopoDS::Wire(S);
    TopoDS_Vertex Ver [2];
    TopExp::Vertices(aSection, Ver[0], Ver[1]);
    for (i = 0; i < 2; i++)
    {
      if (VerWireMap.IsBound(Ver[i]))
        continue;
      for (ExploF.Init(FaceRef, TopAbs_WIRE); ExploF.More(); ExploF.Next())
      {
        const TopoDS_Shape& aWire = ExploF.Current();
        TopoDS_Shape aVer;
        for (ExploW.Init(aWire, TopAbs_VERTEX); ExploW.More(); ExploW.Next())
        {
          aVer = ExploW.Current();
          if (aVer.IsSame(Ver[i]))
            break;
        }
        if (aVer.IsSame(Ver[i]))
        {
          VerWireMap.Bind(aVer, aWire);
          break;
        }
      }
    }
  }  
  
  TopTools_DataMapOfShapeListOfShape VerSecMap;
  for (auto S : Lwires) {
    const TopoDS_Wire& aWire = TopoDS::Wire(S);
    TopoDS_Vertex V1, V2;
    TopExp::Vertices(aWire, V1, V2);
    TopTools_ListOfShape LW1, LW2;
    if (!VerSecMap.IsBound(V1))
      VerSecMap.Bind(V1, LW1);
    VerSecMap(V1).push_back(aWire);
    if (!VerSecMap.IsBound(V2))
      VerSecMap.Bind(V2, LW2);
    VerSecMap(V2).push_back(aWire);
  }

  //TopTools_IndexedDataMapOfShapeShape InnerTouchingWiresOnVertex;
  
  TopoDS_Wire outerW = BRepTools::OuterWire(FaceRef);
  TopoDS_Wire CurWire = outerW;
  BRepLib_MakeWire *MW;
  MW = new BRepLib_MakeWire();
  BRepTools_WireExplorer wexp(CurWire, FaceRef);
  for (;;)
  {
    TopoDS_Vertex theStartVertex = wexp.CurrentVertex(), CurVertex;
    TopoDS_Edge CurEdge = wexp.Current();
    TopoDS_Edge LastEdge = CurEdge;
    MW->Add(CurEdge);
    TopoDS_Wire aSectionWire;
    TopoDS_Vertex aBreakVertex;
    wexp.Next();
    if (!wexp.More())
      wexp.Init(CurWire, FaceRef);
    for (;;)
    {
      if (MW->Wire().Closed())
        break;
      CurVertex = wexp.CurrentVertex();
      if (VerSecMap.IsBound(CurVertex))
      {
        TopoDS_Shape aLocalWire = ChooseDirection(LastEdge, CurVertex, FaceRef, VerSecMap(CurVertex));
        aSectionWire = TopoDS::Wire(aLocalWire);
        break;
      }
      CurEdge = wexp.Current();
      MW->Add(CurEdge);
      LastEdge = CurEdge;
      wexp.Next();
      if (!wexp.More())
        wexp.Init(CurWire, FaceRef);
    }
    if (MW->Wire().Closed())
    {
      NewWires.push_back(MW->Wire());
      theStartVertex = TopoDS::Vertex(BreakVertices.front());
      BreakVertices.pop_front();
      CurWire = TopoDS::Wire(BreakOnWires.front());
      BreakOnWires.pop_front();
      wexp.Init(CurWire, FaceRef);
      while (!wexp.CurrentVertex().IsSame(theStartVertex))
        wexp.Next();
      MW = new BRepLib_MakeWire();
      continue;
    }
    aBreakVertex = CurVertex;
    BreakVertices.push_back(aBreakVertex);
    BreakOnWires.push_back(CurWire);
    for (;;)
    {
      MW->Add(aSectionWire);
      (SectionsTimes(aSectionWire))--;
      if (SectionsTimes(aSectionWire) == 0)
        SectionsTimes.UnBind(aSectionWire);
      if (MW->Wire().Closed())
      {
        NewWires.push_back(MW->Wire());
        if (SectionsTimes.IsEmpty())
          break;
        theStartVertex = TopoDS::Vertex(BreakVertices.front());
        BreakVertices.pop_front();
        CurWire = TopoDS::Wire(BreakOnWires.front());
        BreakOnWires.pop_front();
        wexp.Init(CurWire, FaceRef);
        while (!wexp.CurrentVertex().IsSame(theStartVertex))
          wexp.Next();
        MW = new BRepLib_MakeWire();
        break;
      }
      else
      {
        TopoDS_Vertex V1, V2, aStartVertex;
        TopExp::Vertices(aSectionWire, V1, V2);
        aStartVertex = (V1.IsSame(aBreakVertex))? V2 : V1;
        CurWire = TopoDS::Wire(VerWireMap(aStartVertex));
        
        wexp.Init(CurWire, FaceRef);
        while (!wexp.CurrentVertex().IsSame(aStartVertex))
          wexp.Next();
            
        const TopTools_ListOfShape& Lsections = VerSecMap(aStartVertex);
        if (Lsections.size() == 1)
          break;
        
        //else: choose the way
        TopoDS_Wire NextSectionWire =
          TopoDS::Wire((aSectionWire.IsSame(Lsections.front()))? Lsections.back() : Lsections.front());
        
        Standard_Integer Times = 0;
        TopTools_DataMapIteratorOfDataMapOfShapeShape itVW(VerWireMap);
        for (; itVW.More(); itVW.Next())
          if (itVW.Value().IsSame(CurWire))
            Times++;
        if (Times == 1) //it is inner touching wire
        {
          //InnerTouchingWiresOnVertex.Bind(aWire, aStartVertex);
        }
        else
          {
            //we have to choose the direction
            TopoDS_Edge aStartEdge = wexp.Current();
            TopTools_ListOfShape Ldirs;
            Ldirs.push_back(aStartEdge);
            Ldirs.push_back(NextSectionWire);
            TopoDS_Shape theDirection = ChooseDirection(aSectionWire, aStartVertex, FaceRef, Ldirs);
            if (theDirection.IsSame(aStartEdge))
              break;
          }
        aSectionWire = NextSectionWire;
        aBreakVertex = aStartVertex;
      } //end of else (MW is not closed)
    } //end of for (;;) (loop on section wires)
    if (SectionsTimes.IsEmpty())
      break;
  } //end of global for (;;)

  TopTools_ListOfShape NewFaces;
  BRep_Builder BB;
  for (auto S : NewWires)
  {
    TopoDS_Shape aLocalFace = FaceRef.EmptyCopied();
    TopoDS_Face aNewFace = TopoDS::Face(aLocalFace);
    aNewFace.Orientation(TopAbs_FORWARD);
    BB.Add(aNewFace, S);
    NewFaces.push_back(aNewFace);
  }

  //Inserting holes
  TopTools_ListOfShape Holes;
  for (ExploF.Init(FaceRef, TopAbs_WIRE); ExploF.More(); ExploF.Next())
  {
    const TopoDS_Shape& aWire = ExploF.Current();
    ExploW.Init(aWire, TopAbs_EDGE);
    TopoDS_Shape anEdge = ExploW.Current();
    Standard_Boolean found = Standard_False;
    for (const TopoDS_Shape& aNewWire : NewWires) {
      for (ExploW.Init(aNewWire, TopAbs_EDGE); ExploW.More(); ExploW.Next())
      {
        if (anEdge.IsSame(ExploW.Current()))
        {
          found = Standard_True;
          break;
        }
      }
      if (found)
        break;
    }
    if (!found)
      Holes.push_back(aWire);
  }

  for (auto sHole : Holes) {
    const TopoDS_Wire& aHole = TopoDS::Wire(sHole);
    for (auto sNew : NewFaces) {
      TopoDS_Face& aNewFace = TopoDS::Face(sNew);
      if (IsInside(aNewFace, aHole))
      {
        BB.Add(aNewFace, aHole);
        break;
      }
    }
  }

  //Update "myMap"
  lf.splice(end(lf), NewFaces);

  //Update of descendants of wires
  for (ExploF.Init(F, TopAbs_WIRE); ExploF.More(); ExploF.Next())
  {
    myMap(ExploF.Current()).clear();
  }
  ///////////////////
  
  // JAG 10.11.95 Codage des regularites
  for (auto S : Lwires)
    for (ExploW.Init(S, TopAbs_EDGE); ExploW.More(); ExploW.Next())
    {
      const TopoDS_Edge& edg = TopoDS::Edge(ExploW.Current());
      if (!BRep_Tool::HasContinuity(edg,F,F)) {
        BB.Continuity(edg,F,F,GeomAbs_CN);
      }
    }
}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void LocOpe_SplitShape::Add(const TopoDS_Wire& W,
                            const TopoDS_Face& F)
{

  if (myDone) {
    Standard_ConstructionError::Raise();
  }


  TopExp_Explorer exp;
  TopTools_ListOfShape& lf = myMap(F);
  if (lf.empty()) {
    Rebuild(F);
  }
  try {
    OCC_CATCH_SIGNALS
    if (!LocOpe::Closed(W,F)) {
      AddOpenWire(W,F);
    }
    else {
      AddClosedWire(W,F);
    }
  } catch (Standard_Failure ) {
#ifdef OCCT_DEBUG
    cout << "Warning: SpliShape internal problem detected, some faces may be lost. Check input edges/wires" <<endl;
#endif
    return;
  }
  // JAG 10.11.95 Codage des regularites
  BRep_Builder B;
  for (exp.Init(W,TopAbs_EDGE); exp.More(); exp.Next()) {
    const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
    if (!BRep_Tool::HasContinuity(edg,F,F)) {
      B.Continuity(edg,F,F,GeomAbs_CN);
    }
  }
}



//=======================================================================
//function : AddClosedWire
//purpose  : 
//=======================================================================

void LocOpe_SplitShape::AddClosedWire(const TopoDS_Wire& W,
                                      const TopoDS_Face& F)
{
  TopExp_Explorer exp;

  // On cherche la face descendante de F qui continent le wire
  TopTools_ListOfShape& lf = myMap(F);
  TopoDS_Wire outerW;
#warning find
  TopTools_ListIteratorOfListOfShape itl = begin(lf);
  for (; itl != end(lf); ++itl) {
    const TopoDS_Face& fac = TopoDS::Face(*itl);
    /*
    outerW = BRepTools::OuterWire(fac);
    if (IsInside(F,W,outerW)) {
    break;
    }
    */
    if (IsInside(fac,W)) {
      break;
    }

  }
  if (itl == end(lf)) {
    Standard_ConstructionError::Raise();
  }

  BRep_Builder B;

  TopAbs_Orientation orWire = W.Orientation();
  TopoDS_Shape aLocalFace = F.EmptyCopied();
  TopoDS_Face newFace = TopoDS::Face(aLocalFace);
  //  TopoDS_Face newFace = TopoDS::Face(F.EmptyCopied());
  newFace.Orientation(TopAbs_FORWARD);
  B.Add(newFace,W);
  //  GProp_GProps GP;
  //  BRepGProp::SurfaceProperties (newFace,GP);
  //  if (GP.Mass() < 0) {
  BRepTopAdaptor_FClass2d classif(newFace,Precision::PConfusion());
  if (classif.PerformInfinitePoint() == TopAbs_IN) {
    //le wire donne defini un trou
    aLocalFace = F.EmptyCopied();
    newFace = TopoDS::Face(aLocalFace);
    //    newFace = TopoDS::Face(F.EmptyCopied());
    newFace.Orientation(TopAbs_FORWARD);
    orWire = TopAbs::Reverse(orWire);
    B.Add(newFace,W.Oriented(orWire));
  }

  TopoDS_Face FaceRef = TopoDS::Face(*itl);
  FaceRef.Orientation(TopAbs_FORWARD);
  itl = lf.erase(itl);

  aLocalFace = FaceRef.EmptyCopied();
  TopoDS_Face newRef = TopoDS::Face(aLocalFace);
  //  TopoDS_Face newRef = TopoDS::Face(FaceRef.EmptyCopied());
  newRef.Orientation(TopAbs_FORWARD);

  // On suppose que les edges du wire ont des courbes 2d. 
  // Comme on ne change pas de surface de base, pas besoin d`UpdateEdge.

  for (exp.Init(FaceRef.Oriented(TopAbs_FORWARD),TopAbs_WIRE);
    exp.More(); exp.Next()) {
      const TopoDS_Wire& wir = TopoDS::Wire(exp.Current());
      if (IsInside(F,wir,W)) {
        B.Add(newFace,wir);
      }
      else {
        B.Add(newRef,wir);
      }
  }
  B.Add(newRef,W.Oriented(TopAbs::Reverse(orWire)));
  lf.push_back(newRef);
  lf.push_back(newFace);

}


//=======================================================================
//function : AddOpenWire
//purpose  : 
//=======================================================================

void LocOpe_SplitShape::AddOpenWire(const TopoDS_Wire& W,
                                    const TopoDS_Face& F)
{
  // On cherche la face descendante de F qui continent le wire
  TopTools_ListOfShape& lf = myMap(F);
  TopoDS_Vertex Vfirst,Vlast;

  BRepTools::Update(F);

  Standard_Real tolf, toll, tol1;

  TopoDS_Shape aLocalShape = W.Oriented(TopAbs_FORWARD);
  TopExp::Vertices(TopoDS::Wire(aLocalShape),Vfirst,Vlast);

  tolf = BRep_Tool::Tolerance(Vfirst);
  toll = BRep_Tool::Tolerance(Vlast);
  tol1 = Max(tolf, toll);


  TopExp_Explorer exp,exp2;  

  TopoDS_Wire wfirst,wlast;
#warning find
  TopTools_ListIteratorOfListOfShape itl = begin(lf);
  for (; itl != end(lf); ++itl) {
    TopoDS_Face fac = TopoDS::Face(*itl);
    if (!IsInside(fac,W)) {
      continue;
    }
    
    fac.Orientation(TopAbs_FORWARD);
    Standard_Boolean ffound = Standard_False;
    Standard_Boolean lfound = Standard_False;
    for (exp.Init(fac,TopAbs_WIRE); exp.More(); exp.Next()) {
      const TopoDS_Wire& wir = TopoDS::Wire(exp.Current());
      for (exp2.Init(wir,TopAbs_VERTEX); exp2.More(); exp2.Next()) {
        if (!ffound && exp2.Current().IsSame(Vfirst)) {
          ffound = Standard_True;
          wfirst = wir;
        }
        else if (!lfound && exp2.Current().IsSame(Vlast)) {
          lfound = Standard_True;
          wlast = wir;
        }
        if (ffound && lfound) {
          break;
        }
      }
      if (exp2.More()) {
        break;
      }
    }
    if (exp.More()) {
      break;
    }
  }
  if (itl == end(lf)) {
    Standard_ConstructionError::Raise();
  }

  TopoDS_Face FaceRef = TopoDS::Face(*itl);
  FaceRef.Orientation(TopAbs_FORWARD);
  itl = lf.erase(itl);
  BRep_Builder B;

  BRepAdaptor_Surface BAS(FaceRef, Standard_False);

  Standard_Boolean IsPeriodic = BAS.IsUPeriodic() || BAS.IsVPeriodic();

  tol1 = Max(BAS.UResolution(tol1), BAS.VResolution(tol1));

  if (wfirst.IsSame(wlast)) {
    // on cree 2 faces en remplacement de itl.Value()
    // Essai JAG
    TopTools_ListOfShape WiresFirst;
    for (exp.Init(wfirst,TopAbs_EDGE); exp.More(); exp.Next()) {
      if (BRep_Tool::IsClosed(TopoDS::Edge(exp.Current()),FaceRef)) {
        myDblE.Add(exp.Current());
      }
      WiresFirst.push_back(exp.Current());      
    }

    TopAbs_Orientation orient;
    TopoDS_Wire newW1,newW2;
    B.MakeWire(newW1);
    newW1.Orientation(TopAbs_FORWARD);
    B.MakeWire(newW2);
    newW2.Orientation(TopAbs_FORWARD);

    Standard_Integer nbE = 0;    
    for (exp.Init(W.Oriented(TopAbs_FORWARD),TopAbs_EDGE);
         exp.More(); exp.Next()) {
      nbE++;
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      orient = edg.Orientation();      
      WiresFirst.push_back(edg);
      WiresFirst.push_back(edg.Oriented(TopAbs::Reverse(orient)));
      myDblE.Add(edg);
    }    

    TopTools_IndexedMapOfShape PossE;
    TopTools_MapOfOrientedShape MapE;
    TopoDS_Vertex vdeb,vfin;
    Standard_Integer nbPoss;

    // On recherche l`edge contenant Vlast
    TopoDS_Edge LastEdge;
    gp_Pnt2d pfirst,plast;
    gp_Vec2d dlast;
    Handle(Geom2d_Curve) C2d;
    Standard_Real f,l;

    for (exp.Init(W.Oriented(TopAbs_FORWARD),TopAbs_EDGE); 
         exp.More(); exp.Next()) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      for (exp2.Init(edg,TopAbs_VERTEX); exp2.More(); exp2.Next()) {
        if (exp2.Current().IsSame(Vfirst)) {
          break;
        }
      }
      if (exp2.More()) {
        LastEdge = edg;
        LastEdge.Orientation(edg.Orientation());
        break;
      }
    }

    TopoDS_Shape aLocalFace = FaceRef.Oriented(wfirst.Orientation());
    C2d = BRep_Tool::CurveOnSurface(LastEdge, TopoDS::Face(aLocalFace), f, l);

    if (LastEdge.Orientation() == TopAbs_FORWARD) {
      pfirst = C2d->Value(f);
    }
    else {
      pfirst = C2d->Value(l);
    }

    for (exp.Init(W.Oriented(TopAbs_FORWARD),TopAbs_EDGE); 
         exp.More(); exp.Next()) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      if( nbE>1 && edg.IsSame(LastEdge) )
        continue;
      for (exp2.Init(edg,TopAbs_VERTEX); exp2.More(); exp2.Next()) {
        if (exp2.Current().IsSame(Vlast)) {
          break;
        }
      }
      if (exp2.More()) {
        LastEdge = edg;
        LastEdge.Orientation(edg.Orientation());
        break;
      }
    }
    aLocalFace  = FaceRef.Oriented(wfirst.Orientation());
    C2d = BRep_Tool::CurveOnSurface(LastEdge, TopoDS::Face(aLocalFace), f, l);
    Standard_Real dpar = (l - f)*0.01;
 
    if (LastEdge.Orientation() == TopAbs_FORWARD) {
      C2d->D1(l,plast,dlast);
      if (dlast.Magnitude() < gp::Resolution())
      {
        gp_Pnt2d PrevPnt = C2d->Value(l - dpar);
        dlast.SetXY(plast.XY() - PrevPnt.XY());
      }
    }
    else {
      C2d->D1(f,plast,dlast);
      if (dlast.Magnitude() < gp::Resolution())
      {
        gp_Pnt2d NextPnt = C2d->Value(f + dpar);
        dlast.SetXY(NextPnt.XY() - plast.XY());
      }
      dlast.Reverse();
    }

    Standard_Boolean cond;

    if(IsPeriodic) {

      cond = !(Vfirst.IsSame(Vlast) && SameUV(pfirst,plast,BAS));
    }
    else {
      cond = !(Vfirst.IsSame(Vlast));
    }
        
    while (cond) {      
      PossE.Clear();
      
      // On enchaine par la fin      
      for (auto sWireFirst : WiresFirst) {
        const TopoDS_Edge& edg = TopoDS::Edge(sWireFirst);

        orient = edg.Orientation();
        TopExp::Vertices(edg,vdeb,vfin);
        if (orient == TopAbs_FORWARD && Vlast.IsSame(vdeb)) {
          PossE.Add(edg.Oriented(orient));
        }
        else if (orient == TopAbs_REVERSED && Vlast.IsSame(vfin)) {
          PossE.Add(edg.Oriented(orient));
        }
      }
      nbPoss = PossE.Extent();
      if (nbPoss == 0)
      {
        break;
      }

      TopoDS_Edge aNextEdge;
      if (nbPoss == 1) {
        aNextEdge = TopoDS::Edge (PossE.FindKey (1));
        TopoDS_Shape aLocalFace  = FaceRef.Oriented(wfirst.Orientation());
        C2d = BRep_Tool::CurveOnSurface(aNextEdge,
                                        TopoDS::Face(aLocalFace), f, l);
        Standard_Real dpar = (l - f)*0.01;

        if (aNextEdge.Orientation() == TopAbs_FORWARD) {
          C2d->D1(l,plast,dlast);
          if (dlast.Magnitude() < gp::Resolution())
          {
            gp_Pnt2d PrevPnt = C2d->Value(l - dpar);
            dlast.SetXY(plast.XY() - PrevPnt.XY());
          }
        }
        else {
          C2d->D1(f,plast,dlast);
          if (dlast.Magnitude() < gp::Resolution())
          {
            gp_Pnt2d NextPnt = C2d->Value(f + dpar);
            dlast.SetXY(NextPnt.XY() - plast.XY());
          }
          dlast.Reverse();
        }
      }
      else if (nbPoss > 1) {
        // Faire choix en U,V...
        TopoDS_Shape aLocalFace  = FaceRef.Oriented(wfirst.Orientation());
        
        ChoixUV(LastEdge, TopoDS::Face(aLocalFace), PossE,
                aNextEdge, plast, dlast, toll);
      }

      if (nbPoss >= 1) {
        if (aNextEdge.IsNull())
        {
          // loop is not closed. Split is not possible
          Standard_ConstructionError::Raise("Split is not possible: split loop is not closed"); 
        }

        if (MapE.Contains(aNextEdge)) 
          break;
        B.Add(newW1, aNextEdge);
        MapE.Add(aNextEdge);        
        LastEdge = aNextEdge;
        
        if (LastEdge.Orientation() == TopAbs_FORWARD) {
          Vlast = TopExp::LastVertex(LastEdge);
        }
        else {
          Vlast = TopExp::FirstVertex(LastEdge);
        }
        
        toll = BRep_Tool::Tolerance(Vlast);
        tol1 = Max(tolf, toll);
        
      }
      //MODIFICATION PIERRE SMEYERS : si pas de possibilite, on sort avec erreur
      else{
        cout<<"erreur Spliter : pas de chainage du wire"<<endl;
        Standard_ConstructionError::Raise();        
      }
      //fin MODIF.
      
      tol1 = Max(BAS.UResolution(tol1), BAS.VResolution(tol1));
      
    }
    
    for (auto sWireFirst : WiresFirst) {    
      const TopoDS_Edge& edg = TopoDS::Edge(sWireFirst);
      if (!MapE.Contains(edg)) {
        B.Add(newW2,edg);
        MapE.Add(edg);
      }
    }        
   
    TopoDS_Face newF1,newF2;
    aLocalFace = FaceRef.EmptyCopied();
    newF1 = TopoDS::Face(aLocalFace);
    newF1.Orientation(TopAbs_FORWARD);
    aLocalFace = FaceRef.EmptyCopied();
    newF2 = TopoDS::Face(aLocalFace);
    newF2.Orientation(TopAbs_FORWARD);
    
    // modifs JAG 97.05.28

    TopAbs_Orientation orfila=TopAbs_FORWARD;

    for (exp.Init(FaceRef.Oriented(TopAbs_FORWARD),TopAbs_WIRE); 
         exp.More(); exp.Next()) {
      const TopoDS_Wire& wir = TopoDS::Wire(exp.Current());
      if (wir.IsSame(wfirst)) {
        orfila = exp.Current().Orientation();
        break;
      }
    }
    
    //newW1.Oriented(orfila);
    //newW2.Oriented(orfila);
    
    B.Add(newF1,newW1);
    //BRepTools::Write(newF1, "k:/queries/WrongBOP/NewF1.brep");
    B.Add(newF2,newW2);
    //BRepTools::Write(newF2, "k:/queries/WrongBOP/NewF2.brep");
    
    for (exp.ReInit(); exp.More(); exp.Next()) {
      const TopoDS_Wire& wir = TopoDS::Wire(exp.Current());
      if (!wir.IsSame(wfirst)) {
        if (IsInside(newF1, wir)) {
          B.Add(newF1,wir);
        }
        else if (IsInside(newF2, wir)) {
          B.Add(newF2,wir);
        }
        else {
          // Ce wire est ni dans newF2 ni dans newF1
          // Peut etre faut il construire une troisieme face
          cout << "WARNING: LocOpe_SPlitShape : Ce wire est ni dans newF2 ni dans newF1" << endl;
        }
      }
    }
    lf.push_back(newF1);
    lf.push_back(newF2);
    
    // Mise a jour des descendants des wires
    for (exp.Init(F,TopAbs_WIRE); exp.More(); exp.Next()) {
      TopTools_ListOfShape& ls = myMap(exp.Current());
#warning find
      itl = begin(ls);
      for (; itl != end(ls); ++itl) {
        if (itl->IsSame(wfirst)) {
          break;
        }
      }
      if (itl != end(ls)) { // on a trouve le wire
        itl = ls.erase(itl);
        ls.push_back(newW1);
        ls.push_back(newW2);
      }
    }
  }
  else {
    // on ne cree qu`une seule face
    TopoDS_Wire outerW = BRepTools::OuterWire(FaceRef);
    TopoDS_Wire newWire;
    TopoDS_Face newFace;
    B.MakeWire(newWire);
    newWire.Orientation(TopAbs_FORWARD);
    TopAbs_Orientation orient,orRelat;

    if (wfirst.Orientation() == wlast.Orientation()) {
      orRelat = TopAbs_FORWARD;
    }
    else {
      orRelat = TopAbs_REVERSED;
    }

    if (wlast.IsSame(outerW)) {
      wlast = wfirst;
      wfirst = outerW;
    }
    
    // Edges de wfirst
    for (exp.Init(wfirst.Oriented(TopAbs_FORWARD),TopAbs_EDGE);
         exp.More(); exp.Next()) {
      B.Add(newWire,TopoDS::Edge(exp.Current()));
    }

    // Edges de wlast
    for (exp.Init(wlast.Oriented(TopAbs_FORWARD),TopAbs_EDGE);
         exp.More(); exp.Next()) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      orient = TopAbs::Compose(edg.Orientation(),orRelat);
      B.Add(newWire,edg.Oriented(orient));
    }
    

    // Edges du wire ajoute, et dans les 2 sens
    for (exp.Init(W.Oriented(TopAbs_FORWARD),TopAbs_EDGE);
         exp.More(); exp.Next()) {
      const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
      orient = edg.Orientation();
      B.Add(newWire,edg.Oriented(orient));
      B.Add(newWire,edg.Oriented(TopAbs::Reverse(orient)));
      myDblE.Add(edg.Oriented(orient));
    }
    
    // on refait une face

    TopoDS_Shape aLocalFace = FaceRef.EmptyCopied();
    newFace = TopoDS::Face(aLocalFace);
    //    newFace = TopoDS::Face(FaceRef.EmptyCopied());
    FaceRef.Orientation(TopAbs_FORWARD);
    for (exp.Init(FaceRef.Oriented(TopAbs_FORWARD),TopAbs_WIRE); 
         exp.More(); exp.Next()) {
      const TopoDS_Wire& wir = TopoDS::Wire(exp.Current());
      if (wir.IsSame(wfirst)) {
        B.Add(newFace,newWire.Oriented(wir.Orientation()));
      }
      else if (!wir.IsSame(wlast)) {
        B.Add(newFace,wir);
      }
    }
    lf.push_back(newFace);
    
    // Mise a jour des descendants des wires
    for (exp.Init(F,TopAbs_WIRE); exp.More(); exp.Next()) {
      TopTools_ListOfShape& ls = myMap(exp.Current());
#warning remove_if
      itl = begin(ls);
      Standard_Boolean touch = Standard_False;
      while (itl != end(ls)) {
        if (itl->IsSame(wfirst) || itl->IsSame(wlast)) {
          itl = ls.erase(itl);
          touch = Standard_True;
        }
        else {
          ++itl;
        }
      }
      if (touch) {
        ls.push_back(newWire);
      }
      
    }
  }
}


//=======================================================================
//function : LeftOf
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& LocOpe_SplitShape::LeftOf(const TopoDS_Wire& W,
                                                      const TopoDS_Face& F)
{
  if (myShape.IsNull()) {
    Standard_NoSuchObject::Raise();
  }

  TopExp_Explorer exp,expw,expf;
  exp.Init(myShape,TopAbs_FACE);
  for (; exp.More(); exp.Next()) {
    if (exp.Current().IsSame(F)) {
      break;
    }
  }
  if (!exp.More()) {
    Standard_NoSuchObject::Raise();
  }
  myLeft.clear();

  const TopoDS_Face& theFace = TopoDS::Face(exp.Current());
  TopAbs_Orientation orFace = theFace.Orientation();

  for (expw.Init(W,TopAbs_EDGE); expw.More(); expw.Next()) {
    const TopoDS_Edge& edg = TopoDS::Edge(expw.Current());
    for (auto S : myMap(theFace)) {
      TopoDS_Face fac = TopoDS::Face(S);
      fac.Orientation(orFace);
      for (expf.Init(fac,TopAbs_EDGE); expf.More(); expf.Next()) {
        const TopoDS_Edge& edgbis = TopoDS::Edge(expf.Current());
        if (edgbis.IsSame(edg) && 
          edgbis.Orientation() == edg.Orientation()) {
#warning find
	  Standard_Boolean found = Standard_False;
	  for (auto S2 : myLeft) {
	    if (S2.IsSame(fac)) {
	      found = Standard_True;
	      break;
	    }
	  }
	  if (!found) { // la face n`est pas deja presente
	    myLeft.push_back(fac);
	  }
	  break;
        }
      }
      if (expf.More()) { // face found
        break;
      }
    }
  }
  return myLeft;
}


//=======================================================================
//function : DescendantShapes
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& LocOpe_SplitShape::DescendantShapes
(const TopoDS_Shape& S)
{
  if (!myDone) {
    Rebuild(myShape);
    myDone = Standard_True;
  }
#ifdef OCCT_DEBUG
  if (!myDblE.IsEmpty()) {
    cout << "Le shape comporte des faces invalides" << endl;
  }
#endif
  return myMap(S);
}



//=======================================================================
//function : Put
//purpose  : 
//=======================================================================

void LocOpe_SplitShape::Put(const TopoDS_Shape& S)
{
  if (!myMap.IsBound(S)) {
    TopTools_ListOfShape thelist;
    myMap.Bind(S, thelist);
    if (S.ShapeType() != TopAbs_VERTEX) {
      for(TopoDS_Iterator theIterator(S);theIterator.More();
        theIterator.Next()) {
          Put(theIterator.Value());
      }
    }
    else {
      myMap(S).push_back(S);
    }
  }
}


//=======================================================================
//function : Rebuild
//purpose  : 
//=======================================================================

Standard_Boolean LocOpe_SplitShape::Rebuild(const TopoDS_Shape& S)

{

  auto &l = myMap(S);
  if (!l.empty()) {
    if (l.front().IsSame(S)) {
      return Standard_False;
    }
    return Standard_True;
  }
  Standard_Boolean rebuild = Standard_False;
  TopoDS_Iterator it;
  for(it.Initialize(S); it.More(); it.Next()) {
    rebuild = Rebuild(it.Value()) || rebuild;
  }

  if (rebuild) {
    BRep_Builder B;
    TopoDS_Shape result = S.EmptyCopied();
    TopAbs_Orientation orient;
    for(it.Initialize(S); it.More(); it.Next()) {
      orient = it.Value().Orientation();
      for (auto r : myMap(it.Value())) {
        B.Add(result, r.Oriented(orient));
      }
    }
    result.Closed (BRep_Tool::IsClosed(result));
    myMap(S).push_back(result);
  }
  else {
    myMap(S).push_back(S);
  }
  return rebuild;
}



//=======================================================================
//function : IsInside
//purpose  : 
//=======================================================================

static Standard_Boolean IsInside(const TopoDS_Face& F,
                                 const TopoDS_Wire& W1,
                                 const TopoDS_Wire& W2)
{
  // Attention, c`est tres boeuf !!!!
  BRep_Builder B;
  TopoDS_Shape aLocalShape = F.EmptyCopied();
  TopoDS_Face newFace = TopoDS::Face(aLocalShape);
  //  TopoDS_Face newFace = TopoDS::Face(F.EmptyCopied());

  //TopAbs_Orientation orWire = W2.Orientation();
    
  newFace.Orientation(TopAbs_FORWARD);
  B.Add(newFace,W2);
  //  GProp_GProps GP;
  //  BRepGProp::SurfaceProperties(newFace,GP);
  //  if (GP.Mass() < 0) {
  BRepTopAdaptor_FClass2d classif(newFace,Precision::PConfusion());
  Standard_Boolean Reversed = Standard_False;
  if (classif.PerformInfinitePoint() == TopAbs_IN) {
    //le wire donne defini un trou
    //    newFace = TopoDS::Face(F.EmptyCopied());
    //    newFace.Orientation(TopAbs_FORWARD);
    //    orWire = TopAbs::Reverse(orWire);
    //    B.Add(newFace,W2.Oriented(orWire));
    Reversed = Standard_True;
  }

  //  Standard_Real U,V;
  TopExp_Explorer exp(W1,TopAbs_EDGE);
  const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
  TopExp_Explorer exp2(edg,TopAbs_VERTEX);
  const TopoDS_Vertex& vtx = TopoDS::Vertex(exp2.Current());
  Standard_Real prm = BRep_Tool::Parameter(vtx,edg);
  Standard_Real f,l;
  Handle(Geom2d_Curve) C2d = BRep_Tool::CurveOnSurface(edg,F,f,l);
  if(C2d.IsNull()) {
#ifdef OCCT_DEBUG
	  cout << "Edge is not on surface" <<endl;
#endif
      return Standard_False;
  }
  gp_Pnt2d pt2d(C2d->Value(prm));
  //  BRepClass_FaceClassifier classif(newFace,pt2d,Precision::PConfusion());
  //  return (classif.State() == TopAbs_IN);
  if (!Reversed) {
    return (classif.Perform(pt2d) == TopAbs_IN);
  }
  else {
    return (classif.Perform(pt2d) == TopAbs_OUT);
  }
}


//=======================================================================
//function : IsInside
//purpose  : 
//=======================================================================

static Standard_Boolean IsInside(const TopoDS_Face& F,
                                 const TopoDS_Wire& W)
{
  // Attention, c`est tres boeuf !!!!
  TopExp_Explorer exp(W,TopAbs_EDGE);
  for( ; exp.More(); exp.Next()) {
    const TopoDS_Edge& edg = TopoDS::Edge(exp.Current());
    //  TopExp_Explorer exp2(edg,TopAbs_VERTEX);
    //  const TopoDS_Vertex& vtx = TopoDS::Vertex(exp2.Current());
    //  Standard_Real prm = BRep_Tool::Parameter(vtx,edg);
    Standard_Real f,l,prm;
    Handle(Geom2d_Curve) C2d = BRep_Tool::CurveOnSurface(edg,F,f,l);
    if (!Precision::IsNegativeInfinite(f) && 
      !Precision::IsPositiveInfinite(l)) {
        prm = (f+l)/2.;
    }
    else {
      if (Precision::IsNegativeInfinite(f) && 
        Precision::IsPositiveInfinite(l)){
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
    //  BRepClass_FaceClassifier classif(F,pt2d,Precision::PConfusion());
    //  return (classif.State() != TopAbs_OUT);
    BRepTopAdaptor_FClass2d classif(F,Precision::PConfusion());
    TopAbs_State stat = classif.Perform(pt2d);
    //  return (classif.Perform(pt2d) != TopAbs_OUT);
    if(stat == TopAbs_OUT) return Standard_False;

    if(stat == TopAbs_ON) {
      Standard_Integer nbPnt =10;
      Standard_Integer nbOut =0,nbIn =0,nbOn=0;
      Standard_Integer j =1;
      for( ; j<= nbPnt ; j++)
      {
        //check neighbouring point
        //prm = .66 * prm + .34 * l;
        prm = f + (l-f)/nbPnt*(j-1);
        pt2d = C2d->Value(prm);
        stat = classif.Perform(pt2d);
        if(stat == TopAbs_OUT ) 
          nbOut++;
        else if(stat == TopAbs_IN)
          nbIn++;
        else
          nbOn++;
      }
      if(nbOut > nbIn + nbOn)
        return Standard_False;
    }
  }
  return Standard_True;
}

//=======================================================================
//function : GetDirection
//purpose  : 
//=======================================================================
static void GetDirection(const TopoDS_Edge& theEdge,
                         const TopoDS_Face& theFace,
                         Standard_Real& theTol,
                         gp_Pnt2d& thePnt,
                         gp_Vec2d& theDir)
{
  Standard_Real aFirst, aLast;
  Handle(Geom2d_Curve) aC2d = BRep_Tool::CurveOnSurface (theEdge, theFace, aFirst, aLast);

  TopAbs_Orientation anOr = theEdge.Orientation();
  TopoDS_Vertex aVtx;
  if (anOr == TopAbs_FORWARD)
  {
    aVtx = TopExp::FirstVertex (theEdge);
    aC2d->D0 (aFirst, thePnt);
  }
  else
  {
    aVtx = TopExp::LastVertex (theEdge);
    aC2d->D0 (aLast, thePnt);
  }

  BRepAdaptor_Surface aSurf (theFace, Standard_False);
  theTol = BRep_Tool::Tolerance (aVtx);
  Standard_Real aTol = Max (aSurf.UResolution (theTol), aSurf.VResolution (theTol));
  aTol = Min (aTol, (aLast - aFirst)*0.1);

  gp_Pnt2d aP2d;

  if (anOr == TopAbs_FORWARD)
  {
      aFirst += aTol;
      aC2d->D0 (aFirst, aP2d);
  }
  else
  {
      aLast -= aTol;
      aC2d->D0 (aLast, aP2d);
  }
  theDir = gp_Vec2d (thePnt, aP2d);
}

//=======================================================================
//function : ChoixUV
//purpose  : 
//=======================================================================

static void ChoixUV(const TopoDS_Edge& Last,
                    const TopoDS_Face& F,
                    const TopTools_IndexedMapOfShape& Poss,
                    TopoDS_Edge& theResEdge,
                    gp_Pnt2d& plst,
                    gp_Vec2d& dlst,
                    const Standard_Real toll)
{

  Standard_Real f,l;
  gp_Pnt2d p2d;
  gp_Vec2d v2d;
  gp_Pnt aPCur, aPlst;

  BRepAdaptor_Surface surf(F,Standard_False); // no restriction
  surf.D0 (plst.X(), plst.Y(), aPlst);

  Standard_Real tol;

  gp_Dir2d ref2d(dlst);

  Handle(Geom2d_Curve) C2d;
  Standard_Real dpar;

  Standard_Integer index = 0, imin=0;
  Standard_Real  angmax = -M_PI, dist, ang;


  for (index = 1; index <= Poss.Extent(); index++) {
    TopoDS_Edge anEdge = TopoDS::Edge (Poss.FindKey (index));
    GetDirection (anEdge, F, tol, p2d, v2d);

    surf.D0 (p2d.X(), p2d.Y(), aPCur);

    tol = Max(toll, tol); tol *= tol;

    dist = aPCur.SquareDistance(aPlst);

    if (!Last.IsSame(anEdge)) {
      ang = ref2d.Angle(gp_Dir2d(v2d));
    }
    else {
      ang = -M_PI;
    }

    if ((dist < tol)  && (ang > angmax)) {
      imin = index;
      angmax = ang;
    }
  }

  if (imin)
  {
    theResEdge = TopoDS::Edge (Poss.FindKey (imin));
    C2d = BRep_Tool::CurveOnSurface (theResEdge, F, f, l);
    dpar = (l - f)*0.01;
    if (theResEdge.Orientation() == TopAbs_FORWARD)
    {
      C2d->D1 (l, plst, dlst);
      if (dlst.Magnitude() < gp::Resolution())
      {
        gp_Pnt2d PrevPnt = C2d->Value(l - dpar);
        dlst.SetXY(plst.XY() - PrevPnt.XY());
      }
    }
    else
    {
      C2d->D1 (f, plst, dlst);
      if (dlst.Magnitude() < gp::Resolution())
      {
        gp_Pnt2d NextPnt = C2d->Value(f + dpar);
        dlst.SetXY(NextPnt.XY() - plst.XY());
      }
      dlst.Reverse();
    }
  }

}

//=======================================================================
//function : ChooseDirection
//purpose  : 
//=======================================================================

static TopoDS_Shape ChooseDirection(const TopoDS_Shape& RefDir,
                                    const TopoDS_Vertex& RefVertex,
                                    const TopoDS_Face& theFace,
                                    const TopTools_ListOfShape& Ldirs)
{
  TopExp_Explorer Explo(RefDir, TopAbs_EDGE);
  TopoDS_Edge RefEdge;
  TopoDS_Vertex V1, V2;
  TopAbs_Orientation anOr = TopAbs_FORWARD;
  for (; Explo.More(); Explo.Next())
  {
    RefEdge = TopoDS::Edge(Explo.Current());
    TopExp::Vertices(RefEdge, V1, V2);
    if (V1.IsSame(RefVertex))
    {
      anOr = TopAbs_REVERSED;
      break;
    }
    else if (V2.IsSame(RefVertex))
    {
      anOr = TopAbs_FORWARD;
      break;
    }
  }
  
  Standard_Real RefFirst, RefLast;
  Handle(Geom2d_Curve) RefCurve = BRep_Tool::CurveOnSurface(RefEdge, theFace, RefFirst, RefLast);
  gp_Pnt2d RefPnt;
  gp_Vec2d RefVec;

  //Standard_Real RefPar = (RefEdge.Orientation() == TopAbs_FORWARD)? RefLast : RefFirst;
  Standard_Real RefPar = (anOr == TopAbs_FORWARD)? RefLast : RefFirst;
  RefCurve->D1(RefPar, RefPnt, RefVec);
  if (anOr == TopAbs_FORWARD)
    RefVec.Reverse();

  Handle(Geom2d_Curve) aCurve;
  Standard_Real aFirst, aLast, aPar;
  gp_Vec2d aVec;
  Standard_Real MinAngle = RealLast(), anAngle;
  TopoDS_Shape TargetDir;
  for (const TopoDS_Shape& aShape : Ldirs) {
    TopoDS_Edge anEdge;
    for (Explo.Init(aShape, TopAbs_EDGE); Explo.More(); Explo.Next())
    {
      anEdge = TopoDS::Edge(Explo.Current());
      TopExp::Vertices(anEdge, V1, V2);
      if (V1.IsSame(RefVertex))
      {
        anOr = TopAbs_FORWARD;
        break;
      }
      else if (V2.IsSame(RefVertex))
      {
        anOr = TopAbs_REVERSED;
        break;
      }
    }
    aCurve = BRep_Tool::CurveOnSurface(anEdge, theFace, aFirst, aLast);
    aPar = (anOr == TopAbs_FORWARD)? aFirst : aLast;
    aCurve->D1(aPar, RefPnt, aVec);
    if (anOr == TopAbs_REVERSED)
      aVec.Reverse();
    anAngle = aVec.Angle(RefVec);
    if (anAngle < 0.)
      anAngle += 2.*M_PI;

    if (anAngle < MinAngle)
    {
      MinAngle = anAngle;
      TargetDir = aShape;
    }
  }

  return TargetDir;
}
