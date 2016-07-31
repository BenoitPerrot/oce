// Created on: 2001-01-16
// Created by: Michael SAZONOV
// Copyright (c) 2001-2014 OPEN CASCADE SAS
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

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <Viewer/QANewModTopOpe/QANewModTopOpe_Glue.hxx>
#include <Mathematics/Precision/Precision.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/GeomProjLib/GeomProjLib.hxx>
#include <ModelingAlgorithms/GeomAPI/GeomAPI_ProjectPointOnSurf.hxx>
#include <ModelingAlgorithms/GeomAPI/GeomAPI_ProjectPointOnCurve.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Iterator.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <ModelingAlgorithms/BRepExtrema/BRepExtrema_DistShapeShape.hxx>
//#include <ModelingAlgorithms/BRepClass/BRepClass_FaceClassifier.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_EdgeConnector.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeWire.hxx>
#include <ModelingData/TopoDS/TopoDS_Iterator.hxx>
#include <ModelingAlgorithms/BRepTopAdaptor/BRepTopAdaptor_FClass2d.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <ModelingAlgorithms/BRepIntCurveSurface/BRepIntCurveSurface_Inter.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_Curve.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <Foundation/TColStd/TColStd_Array2OfInteger.hxx>
#include <ModelingData/TopTools/TopTools_Array2OfShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_TOOL.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>

//=======================================================================
//function : IsOnSurface
//purpose  : static
//=======================================================================

static Standard_Boolean
IsOnSurface (const TopoDS_Edge& theEdge, const TopoDS_Face& theFace)
{
  Standard_Real aParF, aParL, aTolEdge;
  Handle(Geom_Curve) aCurve = BRep_Tool::Curve(theEdge, aParF, aParL);
  if (aCurve.IsNull()) return Standard_False;
  aTolEdge = BRep_Tool::Tolerance(theEdge);
  Handle(Geom_Surface) aSurf = BRep_Tool::Surface(theFace);

  // define check points
  Standard_Real aParams[4];
  Standard_Real aDeltaRange = aParL - aParF;
  aParams[0] = aParF;
  aParams[1] = aParF + aDeltaRange * 0.382;
  aParams[2] = aParF + aDeltaRange * 0.618;
  aParams[3] = aParL;
  gp_Pnt   aPnt;

  // check distance to the surface
  Standard_Real aTol = aTolEdge + BRep_Tool::Tolerance(theFace);
  Standard_Integer i;
  for (i=0; i < 4; i++) {
    aPnt = aCurve->Value(aParams[i]);
    GeomAPI_ProjectPointOnSurf aProjector(aPnt, aSurf);
    if (!aProjector.IsDone() || aProjector.LowerDistance() > aTol)
      return Standard_False;
  }

  return Standard_True;
}

//=======================================================================
//function : ProcessEdgeFaceInterference
//purpose  : static
//=======================================================================

static void
ProcessEdgeFaceInterference (const TopoDS_Edge& theEdge, const TopoDS_Face& theFace,
			     TopoDS_Shape& theNewFace,
			     TopTools_ListOfShape& theListE,
			     TColgp_SequenceOfPnt& thePoints1,
			     TColgp_SequenceOfPnt& thePoints2,
			     TColStd_SequenceOfInteger& theEdgeOnSurface,
			     TopTools_DataMapOfShapeListOfShape& theMapSubst,
			     TopTools_DataMapOfShapeListOfShape& theMapGener)
{
  BRep_Builder aBld;


  Standard_Boolean anIsOnSurface = IsOnSurface(theEdge, theFace);
  TColgp_SequenceOfPnt aPntOfInter;
  TColStd_SequenceOfReal aW;
  TopTools_ListOfShape aListOfIntVert;
  if(!anIsOnSurface) {
    //check intersection points
    BRepIntCurveSurface_Inter anInter;
    Standard_Real f, l;
    const TopoDS_Edge& anE = TopoDS::Edge(theEdge.Oriented(TopAbs_FORWARD));
    Handle(Geom_Curve) aC = 
      BRep_Tool::Curve(anE, f, l);
    GeomAdaptor_Curve anAdC(aC, f, l);
    anInter.Init(theFace, anAdC, Precision::PConfusion());
    for(; anInter.More(); anInter.Next()) {
      if(anInter.State() == TopAbs_ON) { continue;}
      aPntOfInter.Append(anInter.Pnt());
      aW.Append(anInter.W());
    }
    // check vertices
    

    TopoDS_Vertex aV1, aV2;
    TopExp::Vertices(anE, aV1, aV2);
    TopoDS_Shape aCmp;
    aBld.MakeCompound(TopoDS::Compound(aCmp));
    aBld.Add(aCmp, aV1); 
    if(!aV1.IsSame(aV2)) aBld.Add(aCmp, aV2);

    TopoDS_Iterator anItV(theEdge);
    for(; anItV.More(); anItV.Next()) {
      if(anItV.Value().Orientation() == TopAbs_INTERNAL)
	aBld.Add(aCmp, anItV.Value());
    }

    BRepExtrema_DistShapeShape aExtrema (theFace, aCmp);
    if (aExtrema.IsDone()) {
      Standard_Integer nbSol = aExtrema.NbSolution(), i, j;
      Standard_Real aDist = aExtrema.Value(), aTol;
      Standard_Integer n = aPntOfInter.Length();
      for (i=1; i <= nbSol; i++) {
	if(aExtrema.SupportTypeShape1(i) != BRepExtrema_IsInFace) continue; 
	TopoDS_Shape aS2 = aExtrema.SupportOnShape2(i);
	aTol = BRep_Tool::Tolerance(TopoDS::Vertex(aS2));
	if(aDist > aTol) continue;
	aListOfIntVert.push_back(aS2);
	//check intersection points on coincidence with vertex
	gp_Pnt aP =  BRep_Tool::Pnt(TopoDS::Vertex(aS2));
	for(j=1; j <= n;  j++) {
	  if(aP.Distance(aPntOfInter(j)) > aTol) continue;
	  aPntOfInter.Remove(j);
	  aW.Remove(j);
	  j--;
	  n--;
	}
      }
    }
  }      
    

  TopExp_Explorer aExp (theFace.Oriented(TopAbs_FORWARD), TopAbs_EDGE);
  Standard_Boolean IsNotInternal = Standard_True;
  Standard_Boolean InsertVertexInBoundary = Standard_True;
  Standard_Integer aN = thePoints1.Length();
  for (; aExp.More(); aExp.Next()) {
    const TopoDS_Edge& aE = TopoDS::Edge (aExp.Current());
    IsNotInternal = Standard_True;
    InsertVertexInBoundary = Standard_True;
    if(aE.Orientation() == TopAbs_EXTERNAL) continue;
    if(aE.Orientation() == TopAbs_INTERNAL) IsNotInternal = Standard_False;
//    if (aE.Orientation() != TopAbs_FORWARD &&
//	aE.Orientation() != TopAbs_REVERSED) continue;

    BRepExtrema_DistShapeShape aExtrema (aE.Oriented(TopAbs_FORWARD),
					 theEdge.Oriented(TopAbs_FORWARD));
    if (!aExtrema.IsDone()) continue;
    Standard_Integer nbSol = aExtrema.NbSolution(), i;
    Standard_Real aDist = aExtrema.Value();
    for (i=1; i <= nbSol; i++) {
      TopoDS_Shape aS1 = aExtrema.SupportOnShape1(i);
      TopoDS_Shape aS2 = aExtrema.SupportOnShape2(i);

      // check distance against tolerances
      Standard_Real aTol1, aTol2;
      if (aS1.ShapeType() == TopAbs_VERTEX)
	aTol1 = BRep_Tool::Tolerance (TopoDS::Vertex(aS1));
      else
	aTol1 = BRep_Tool::Tolerance (TopoDS::Edge(aS1));
      if (aS2.ShapeType() == TopAbs_VERTEX)
	aTol2 = BRep_Tool::Tolerance (TopoDS::Vertex(aS2));
      else
	aTol2 = BRep_Tool::Tolerance (TopoDS::Edge(aS2));
      if (aDist > aTol1 + aTol2) continue;

      // avoid to process the same points twice
      gp_Pnt aPnt1 = aExtrema.PointOnShape1(i);
      gp_Pnt aPnt2 = aExtrema.PointOnShape2(i);
      Standard_Integer j;
      for (j=1; j<=thePoints1.Length(); j++) {
	if (aPnt1.IsEqual(thePoints1(j),Precision::Confusion()) &&
	    aPnt2.IsEqual(thePoints2(j),Precision::Confusion())) {
//	  if(anIsOnSurface && (theEdgeOnSurface(j) == 1))  break;
//	  if(!anIsOnSurface && (theEdgeOnSurface(j) == 0))  break;
	  break;
	}
      }
      if (j > aN && j <= thePoints1.Length()) continue;
      if (j <= aN) {
	thePoints1.Remove(j);
	thePoints2.Remove(j);
	theEdgeOnSurface.Remove(j);
	InsertVertexInBoundary = Standard_False;
	aN--;
      }
      thePoints1.Append (aPnt1);
      thePoints2.Append (aPnt2);
      theEdgeOnSurface.Append(anIsOnSurface ? 1 : 0);
      // find or make the intersection vertex
      TopoDS_Vertex aVerInt;
      if (aS2.ShapeType() == TopAbs_VERTEX)
	aVerInt = TopoDS::Vertex (aS2);
      else if (aS1.ShapeType() == TopAbs_VERTEX)
	aVerInt = TopoDS::Vertex (aS1);
      else {
	// make new vertex
	Standard_Real aTol = Max (aTol1+aDist, aTol2);
	aBld.MakeVertex (aVerInt, aPnt2, aTol);
      }

      if (aS1.ShapeType() == TopAbs_VERTEX) {
	if (!aS1.IsSame(aVerInt) && !theMapSubst.IsBound(aS1)) {
	  // replace vertex from Face with vertex from Edge
	  const TopoDS_Vertex& aVer1 = TopoDS::Vertex(aS1);
	  // update intersection vertex
	  aTol2 = Max (aTol2, aTol1 + aDist);
//	  Standard_Real aPar = BRep_Tool::Parameter (aVer1, aE);
	  gp_Pnt aP = BRep_Tool::Pnt(aVerInt);
//	  aBld.UpdateVertex (aVerInt, aPar, aE, aTol2);
	  aBld.UpdateVertex (aVerInt, aP, aTol2);
	  // do substitution
	  TopTools_ListOfShape aList;
	  aList.push_back (aVerInt);
	  theMapSubst.Bind (aVer1, aList);
	}
      }

      else {	// aS1 is the same edge as aE
	// insert intersection vertex in edge from Shell as internal
	Standard_Real aPar;
	aExtrema.ParOnEdgeS1(i, aPar);

	if (!theMapSubst.IsBound(aS1)) {
	  // for Mandrake-10 - mkv,02.06.06 - theMapSubst.Bind (aE, TopTools_ListOfShape());
          TopTools_ListOfShape aListOfShape1;
	  theMapSubst.Bind (aE, aListOfShape1);
        }
	TopTools_ListOfShape& aListSubst = theMapSubst(aS1);
	TopoDS_Edge aEdge;
	Standard_Boolean aListWasEmpty = Standard_False;
	if (aListSubst.empty()) {
	  aListWasEmpty = Standard_True;
	  aEdge = TopoDS::Edge (aS1);
	}
	else {
	  // find split by parameter
#warning remove_if
	  TopTools_ListOfShape::iterator aIt;
	  for (aIt = begin(aListSubst); aIt != end(aListSubst); ++aIt) {
	    Standard_Real aParF, aParL;
	    const TopoDS_Edge& aE1 = TopoDS::Edge(*aIt);
	    BRep_Tool::Range (aE1, aParF, aParL);
	    if (aParF < aPar && aPar < aParL) {
	      aEdge = aE1;
	      break;
	    }
	  }
	  if (aIt != end(aListSubst)) {
	    aIt = aListSubst.erase(aIt);
	  }
	  else
	    // unusual, needed split not found, skip to next extrema solution
	    continue;
	}

	if(InsertVertexInBoundary) {
//	  TopoDS_Edge aNewEdge;
//	  QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aVerInt, aPar, aNewEdge);
	  TopTools_ListOfShape aListE;
	  QANewModTopOpe_Glue::SplitEdgeByVertex (aEdge, aVerInt, aPar, aListE);
//	  aListSubst.Append (aNewEdge);
	  aListSubst.splice(end(aListSubst), aListE);
	  if (!theMapGener.IsBound(aS1)) {
	    // for Mandrake-10 - mkv,02.06.06 - theMapGener.Bind(aS1, TopTools_ListOfShape());
            TopTools_ListOfShape aListOfShape2;
	    theMapGener.Bind(aS1, aListOfShape2);
	  }
	  theMapGener(aS1).push_back (aVerInt);
	}
	else {
	  if(!aListWasEmpty) aListSubst.push_back(aEdge);
	}
      }

      Standard_Boolean isS2InternalVertex =
	(aS2.ShapeType() == TopAbs_VERTEX && aS2.Orientation() == TopAbs_INTERNAL);

      if (aS2.ShapeType() == TopAbs_EDGE || isS2InternalVertex) {
	// split theEdge
	Standard_Real aPar;
	if (isS2InternalVertex)
	  aPar = BRep_Tool::Parameter (aVerInt, theEdge);
	else
	  aExtrema.ParOnEdgeS2(i, aPar);

	TopoDS_Edge aEdge;
	if (theListE.empty()) {
	  aEdge = theEdge;
	}
	else {
	  // find split by parameter
	  TopTools_ListOfShape::iterator aIt;
#warning remove_if
	  for (aIt = begin(theListE); aIt != end(theListE); ++aIt) {
	    Standard_Real aParF, aParL;
	    const TopoDS_Edge& aE1 = TopoDS::Edge(*aIt);
	    BRep_Tool::Range (aE1, aParF, aParL);
	    if (aParF < aPar && aPar < aParL) {
	      aEdge = aE1;
	      break;
	    }
	  }
	  if (aIt != end(theListE))
	    aIt = theListE.erase(aIt);
	  else
	    // unusual, needed split not found, skip to next extrema solution
	    continue;
	}

	if(anIsOnSurface && IsNotInternal) {
	  // split aEdge
	  TopTools_ListOfShape aListE;
	  QANewModTopOpe_Glue::SplitEdgeByVertex (aEdge, aVerInt, aPar, aListE);
	  theListE.splice(end(theListE), aListE);
	}
	else {
	  //insert internal vertex in aEdge
	  if(!isS2InternalVertex) {
	    TopoDS_Edge aNewEdge;
//	    QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aVerInt, aPar, aNewEdge);
	    TopTools_ListOfShape aListE;
	    QANewModTopOpe_Glue::SplitEdgeByVertex (aEdge, aVerInt, aPar, aListE);
//	    theListE.Append(aNewEdge);
	    theListE.splice(end(theListE), aListE);
	    if (!theMapGener.IsBound(aS2)) {
	      // for Mandrake-10 - mkv,02.06.06 - theMapGener.Bind(aS2, TopTools_ListOfShape());
              TopTools_ListOfShape aListOfShape3;
	      theMapGener.Bind(aS2, aListOfShape3);
            }
	    theMapGener(aS2).push_back (aVerInt);
	  }
	} 
	  
      }
    }
    
  }

  // treatmen intersection points
  //   insert internal vertices in face 
  gp_Pnt aP;
  Standard_Real aTol;
  theNewFace = theFace;
  for (auto S : aListOfIntVert) {
    aP =  BRep_Tool::Pnt(TopoDS::Vertex(S));
    aTol = BRep_Tool::Tolerance(TopoDS::Vertex(S));
    Standard_Integer j;
    for (j=1; j<=thePoints1.Length(); j++) {
      if (aP.IsEqual(thePoints1(j),aTol))  break;
    }
    if (j <= thePoints1.Length()) continue;
    thePoints1.Append (aP);
    thePoints2.Append (aP);
    theEdgeOnSurface.Append(anIsOnSurface ? 1 : 0);

    // insert internal vertex in face;
    QANewModTopOpe_Glue aFVGluing(theNewFace, S);
    theNewFace = aFVGluing.Shape();
  }
  // insert intersection vertices in face and in edge
  Standard_Integer k;
  for(k = 1; k <= aPntOfInter.Length(); k++) {
    Standard_Integer j;
    for (j=1; j<=thePoints1.Length(); j++) {
      if (aPntOfInter(k).IsEqual(thePoints1(j),Precision::Confusion()))  break;
    }
    if (j <= thePoints1.Length()) continue;
    
    thePoints1.Append (aPntOfInter(k));
    thePoints2.Append (aPntOfInter(k));
    theEdgeOnSurface.Append(anIsOnSurface ? 1 : 0);

    Standard_Real aPar = aW(k); 
    TopoDS_Vertex aV;
    aBld.MakeVertex (aV, aPntOfInter(k), Precision::Confusion());
    
    QANewModTopOpe_Glue aFVGluing(theNewFace, aV);
    theNewFace = aFVGluing.Shape();
    if (!theMapGener.IsBound(theFace)) {
      // for Mandrake-10 - mkv,02.06.06 - theMapGener.Bind(theFace, TopTools_ListOfShape());
      TopTools_ListOfShape aListOfShape4;
      theMapGener.Bind(theFace, aListOfShape4);
    }
    theMapGener(theFace).push_back (aV);
    
    TopoDS_Edge aEdge;
    if (theListE.empty())
      aEdge = theEdge;
    else {
      // find split by parameter
      TopTools_ListOfShape::iterator aIt;
      for (aIt = begin(theListE); aIt != end(theListE); ++aIt) {
	Standard_Real aParF, aParL;
	const TopoDS_Edge& aE1 = TopoDS::Edge (*aIt);
	BRep_Tool::Range (aE1, aParF, aParL);
	if (aParF < aPar && aPar < aParL) {
	  aEdge = aE1;
	  break;
	}
      }
      if (aIt != end(theListE))
	aIt = theListE.erase(aIt);
      else
	// unusual, needed split not found, skip to next intersection solution
	continue;
    }
    
//    TopoDS_Edge aNewEdge;
//    QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aV, aPar, aNewEdge);
//    theListE.Append(aNewEdge);
    TopTools_ListOfShape aListE;
    QANewModTopOpe_Glue::SplitEdgeByVertex (aEdge, aV, aPar, aListE);
    theListE.splice(end(theListE), aListE);
    if (!theMapGener.IsBound(theEdge)) {
      // for Mandrake-10 - mkv,02.06.06 - theMapGener.Bind(theEdge, TopTools_ListOfShape());
      TopTools_ListOfShape aListOfShape5;
      theMapGener.Bind(theEdge, aListOfShape5);
    }
    theMapGener(theEdge).push_back (aV);
    
  }
  
  
  
  if (theListE.empty())
    theListE.push_back (theEdge);
}


//=======================================================================
//function : ClassifyEdgeFace
//purpose  : static
//=======================================================================

static TopAbs_State
ClassifyEdgeFace (const TopoDS_Edge& theEdge, const TopoDS_Face& theFace,
		  TopoDS_Edge& theEdgeOn,
		  const TopTools_DataMapOfShapeListOfShape& theMapSubst)
{
  Standard_Real aParF, aParL, aTolEdge;
  Handle(Geom_Curve) aCurve = BRep_Tool::Curve(theEdge, aParF, aParL);
  if (aCurve.IsNull()) return TopAbs_OUT;
  aTolEdge = BRep_Tool::Tolerance(theEdge);
  Handle(Geom_Surface) aSurf = BRep_Tool::Surface(theFace);

  // define check points
  Standard_Real aParams[4];
  Standard_Real aDeltaRange = aParL - aParF;
  aParams[0] = aParF;
  aParams[1] = aParF + aDeltaRange * 0.382;
  aParams[2] = aParF + aDeltaRange * 0.618;
  aParams[3] = aParL;
  gp_Pnt   aPnts[4];
  gp_Pnt2d aPnts2d[4];

  // check distance to the surface
  Standard_Real aTol = aTolEdge + BRep_Tool::Tolerance(theFace);
  Standard_Integer i;
  for (i=0; i < 4; i++) {
    aPnts[i] = aCurve->Value(aParams[i]);
    GeomAPI_ProjectPointOnSurf aProjector(aPnts[i], aSurf);
    if (!aProjector.IsDone() || aProjector.LowerDistance() > aTol)
      return TopAbs_OUT;
    Standard_Real u,v;
    aProjector.LowerDistanceParameters(u,v);
    aPnts2d[i].SetCoord(u,v);
  }

  // check distance to edges
  TopExp_Explorer aExp (theFace, TopAbs_EDGE);
  for (; aExp.More(); aExp.Next()) {
    const TopoDS_Shape& aE = aExp.Current();
//    if (aE.Orientation() == TopAbs_FORWARD || aE.Orientation() == TopAbs_REVERSED) {
    if (aE.Orientation() != TopAbs_EXTERNAL) {
      TopTools_ListOfShape aListSingle;
      if (!theMapSubst.IsBound(aE)) {
	aListSingle.push_back (aE);
      }

      for (auto S : aListSingle.empty() ? theMapSubst(aE) : aListSingle) {	// for each split
	const TopoDS_Edge& aE1 = TopoDS::Edge(S);
	Standard_Real aPF, aPL;
	Handle(Geom_Curve) aCrv = BRep_Tool::Curve(aE1, aPF, aPL);
	if (aCrv.IsNull()) continue;
	Standard_Real aTol1 = aTolEdge + BRep_Tool::Tolerance(aE1);

	for (i=0; i < 4; i++) {
	  GeomAPI_ProjectPointOnCurve aProjector(aPnts[i], aCrv, aPF, aPL);
	  if (aProjector.NbPoints() == 0 || aProjector.LowerDistance() > aTol1)
	    break;
	}
	if (i == 4) {	// all points are on an edge
	  theEdgeOn = aE1;
	  return TopAbs_ON;
	}
      }
    }
  }

  // use 2d face classifier
//  BRepClass_FaceClassifier aClf;
  BRepTopAdaptor_FClass2d aClf(theFace, Precision::PConfusion());
  for (i=0; i < 4; i++) {
    if (aClf.Perform (aPnts2d[i]) == TopAbs_OUT)
      return TopAbs_OUT;
  }

  return TopAbs_IN;
}

//=======================================================================
//function : UpdateEdgeOnFace
//purpose  : static
//=======================================================================

static Standard_Boolean
UpdateEdgeOnFace (const TopoDS_Edge& theEdge, const TopoDS_Face& theFace)
{
  BRep_Builder aBld;
  Standard_Real aPF, aPL, aTolEdge;
  Handle(Geom_Curve) aCurve = BRep_Tool::Curve(theEdge, aPF, aPL);
  if (aCurve.IsNull()) return Standard_False;
  Handle(Geom_Surface) aSurf = BRep_Tool::Surface(theFace);
  if (aSurf.IsNull()) return Standard_False;
  aTolEdge = BRep_Tool::Tolerance(theEdge);

  Standard_Real aTolApprox = Max (aTolEdge, BRep_Tool::Tolerance(theFace));
  Handle(Geom2d_Curve) aCrv2d =  GeomProjLib::Curve2d (aCurve, aPF, aPL, aSurf,
						       aTolApprox);
  if (!aCrv2d.IsNull()) {
    aTolEdge = Max (aTolEdge, aTolApprox);
    aBld.UpdateEdge (theEdge, aCrv2d, theFace, aTolEdge);
    return Standard_True;
  }
  return Standard_False;
}

//=======================================================================
//function : PerformShellWire
//purpose  : 
//=======================================================================

void
QANewModTopOpe_Glue::PerformShellWire() 
{
  Standard_Boolean anOnlyOneFace = Standard_False;
  BRep_Builder aBld;
  if(myS1.ShapeType() == TopAbs_FACE) {
    TopoDS_Shape aShell;
    aBld.MakeShell(TopoDS::Shell(aShell));
    aBld.Add(aShell, myS1);
    myS1 =  aShell;
    anOnlyOneFace = Standard_True;
  }

  if(myS2.ShapeType() == TopAbs_EDGE) {
    myS2 = BRepLib_MakeWire(TopoDS::Edge(myS2));
  }

  TopoDS_Shape aS1F = myS1.Oriented(TopAbs_FORWARD);
  TopoDS_Shape aS2F = myS2.Oriented(TopAbs_FORWARD);
  BRepExtrema_DistShapeShape aExtrema (aS1F, aS2F);
  if (!aExtrema.IsDone())
    return;

  TopTools_IndexedDataMapOfShapeListOfShape aMapAnc1;
  TopExp::MapShapesAndAncestors (aS1F, TopAbs_VERTEX, TopAbs_EDGE, aMapAnc1);
  TopExp::MapShapesAndAncestors (aS1F, TopAbs_VERTEX, TopAbs_FACE, aMapAnc1);
  TopExp::MapShapesAndAncestors (aS1F, TopAbs_EDGE, TopAbs_FACE, aMapAnc1);
  TopTools_IndexedDataMapOfShapeListOfShape aMapAnc2;
  TopExp::MapShapesAndAncestors (aS2F, TopAbs_VERTEX, TopAbs_EDGE, aMapAnc2);
  TopExp::MapShapesAndAncestors (aS2F, TopAbs_EDGE, TopAbs_WIRE, aMapAnc2);
  TopTools_IndexedDataMapOfShapeListOfShape aMapFE;

  // process extrema points
  Standard_Boolean anIsCoincided = Standard_False;
  Standard_Integer nbSol = aExtrema.NbSolution(), i;
  Standard_Real aDist = aExtrema.Value();
  for (i=1; i <= nbSol; i++) {
    TopoDS_Shape aS1 = aExtrema.SupportOnShape1(i);
    TopoDS_Shape aS2 = aExtrema.SupportOnShape2(i);

    // check distance against tolerances
    Standard_Real aTol1, aTol2;
    if (aS1.ShapeType() == TopAbs_VERTEX)
      aTol1 = BRep_Tool::Tolerance (TopoDS::Vertex(aS1));
    else if (aS1.ShapeType() == TopAbs_EDGE)
      aTol1 = BRep_Tool::Tolerance (TopoDS::Edge(aS1));
    else
      aTol1 = BRep_Tool::Tolerance (TopoDS::Face(aS1));
    if (aS2.ShapeType() == TopAbs_VERTEX)
      aTol2 = BRep_Tool::Tolerance (TopoDS::Vertex(aS2));
    else
      aTol2 = BRep_Tool::Tolerance (TopoDS::Edge(aS2));
    if (aDist > aTol1 + aTol2) continue;

    anIsCoincided = Standard_True;

    // determine contacted faces from Shell and edges from Wire
    // and remember them in the map
    TopTools_ListOfShape aListF, aListE;
    if (aS1.ShapeType() == TopAbs_FACE) {
      aListF.push_back (aS1);
    }
    else {
#warning copy_if?
      for (auto S : aMapAnc1.FindFromKey(aS1))
	if (S.ShapeType() == TopAbs_FACE)
	  aListF.push_back (S);
    }
    if (aS2.ShapeType() == TopAbs_EDGE) {
      aListE.push_back (aS2);
    }
    else {
      auto &l = aMapAnc2.FindFromKey(aS2);
      aListE.insert(end(aListE), begin(l), end(l));
    }
    for (auto S : aListF) {
      if (!aMapFE.Contains (S)) {
	// for Mandrake-10 - mkv,02.06.06 - aMapFE.Add (aItF.Value(), TopTools_ListOfShape());
        TopTools_ListOfShape aListOfShape1;
	aMapFE.Add (S, aListOfShape1);
      }
      TopTools_ListOfShape& aLE = aMapFE.ChangeFromKey(S);
      TopTools_MapOfShape aMapE;
      for (auto S2 : aLE)
	aMapE.Add(S2);
#warning copy_if?
      for (auto S2 : aListE)
	if (!aMapE.Contains (S2))
	  aLE.push_back(S2);
    }
  }


  if(!anIsCoincided) return;

  // for each touched face make wire and add it in face as internal

  TopTools_MapOfShape aMapUsedEdges;
  TColgp_SequenceOfPnt aPoints1;
  TColgp_SequenceOfPnt aPoints2;
  TColStd_SequenceOfInteger aEdgeOnSurface;
  TopTools_DataMapOfShapeListOfShape aMapSubst;
  for (i=1; i <= aMapFE.Extent(); i++) {
    const TopoDS_Face& aFace = TopoDS::Face (aMapFE.FindKey(i));
    TopoDS_Shape aNewFace;

    // form the new wire:
    //   get all edges contacting the face, split them by the face boundary,
    //   get those splits which are inside the face.
    Standard_Boolean isWireMade = Standard_False;
    TopoDS_Shape aWire;
    aBld.MakeWire (TopoDS::Wire (aWire));
    for (const TopoDS_Shape& aEdge : aMapFE(i)) {	// for each edge contacting the face
      if (aMapUsedEdges.Contains(aEdge)) continue;

      TopTools_ListOfShape aListSingle;
      aListSingle.push_back (aEdge);
      TopTools_ListOfShape& aListRef = (aMapSubst.IsBound(aEdge)
					? aMapSubst(aEdge)
					: aListSingle);
      TopTools_ListIteratorOfListOfShape aIt1 = begin(aListRef);
      while (aIt1 != end(aListRef)) {	// for each old split
	const TopoDS_Edge& aE1 = TopoDS::Edge(*aIt1);
	if (!aMapUsedEdges.Contains(aE1)) {
	  TopTools_ListOfShape aListE;
	  ProcessEdgeFaceInterference (aE1, aFace, aNewFace, aListE, aPoints1, aPoints2,
				       aEdgeOnSurface, aMapSubst, myMapGener);
	  for (auto S2 : aListE) {
	    const TopoDS_Edge& aE2 = TopoDS::Edge(S2);
	    TopoDS_Edge aEon;
	    TopAbs_State aState = ClassifyEdgeFace (aE2, aFace, aEon, aMapSubst);
	    if (aState == TopAbs_IN ) {
	      if (UpdateEdgeOnFace (aE2, aFace)) {
		isWireMade = Standard_True;
		aBld.Add (aWire, aE2);
		aMapUsedEdges.Add (aE2);
		if (!myMapGener.IsBound(aFace)) {
		  // for Mandrake-10 - mkv,02.06.06 - myMapGener.Bind(aFace, TopTools_ListOfShape());
                  TopTools_ListOfShape aListOfShape2;
		  myMapGener.Bind(aFace, aListOfShape2);
                }
		myMapGener(aFace).push_back (aE2);
	      }
	    }
	    else if(aState == TopAbs_ON) {
	      aMapUsedEdges.Add (aE2);
	    }
	  }
	  Standard_Boolean IsTheSame = Standard_False;
	  if(aListE.size() == 1) {
	    IsTheSame = aE1.IsSame(aListE.front());
	  }
	  if (aListE.size() > 1 || !IsTheSame) {
	    // replace old split with new splits
	    if (aMapSubst.IsBound(aEdge)) {
	      aListRef.insert(aIt1, begin(aListE), end(aListE));
	      aIt1 = aListRef.erase(aIt1);
	      continue;
	    }
	    else aMapSubst.Bind (aEdge, aListE);
	  }
	}
	++aIt1;
      }
    }

    if(!aNewFace.IsSame(aFace) && !aNewFace.IsNull()) {
      if(!aMapSubst.IsBound(aFace)) {
        // for Mandrake-10 - mkv,02.06.06 - aMapSubst.Bind (aFace, TopTools_ListOfShape());
        TopTools_ListOfShape aListOfShape3;
        aMapSubst.Bind (aFace, aListOfShape3);
      }
      aMapSubst(aFace).push_back(aNewFace);
    }
  
    if (isWireMade) {
      // add new wire to face
      TopoDS_Shape aDummy = aNewFace.EmptyCopied().Oriented(TopAbs_FORWARD);
      TopoDS_Face aNewFace1 = TopoDS::Face (aDummy);
      aBld.NaturalRestriction (aNewFace1, BRep_Tool::NaturalRestriction(aFace));
      TopoDS_Iterator aIterF (aNewFace, Standard_False);
      for (; aIterF.More(); aIterF.Next()) {
	aBld.Add (aNewFace1, aIterF.Value());
      }
      aWire = FindWireOrUpdateMap (aWire, aMapAnc2);
      aBld.Add (aNewFace1, aWire.Oriented(TopAbs_INTERNAL));
      // do substitution
      TopTools_ListOfShape aList;
      aList.push_back (aNewFace1.Oriented(aFace.Orientation()));
      if(aMapSubst.IsBound(aFace)) aMapSubst.UnBind(aFace);
      aMapSubst.Bind (aFace, aList);
    }
  }

  // make wires from the left edges

//  if (!aMapUsedEdges.IsEmpty()) {
    Handle(BRepAlgo_EdgeConnector) aConnector = new BRepAlgo_EdgeConnector;
//    TopoDS_Iterator aIterW (myS2, Standard_False);
    TopExp_Explorer anExpW (myS2, TopAbs_EDGE);
    for (; anExpW.More(); anExpW.Next()) {
      const TopoDS_Edge& aEdge = TopoDS::Edge (anExpW.Current());
      if (aMapUsedEdges.Contains(aEdge)) continue;

      if (aMapSubst.IsBound(aEdge)) {
	for (auto S : aMapSubst(aEdge)) {	// for each old split
	  if (aMapUsedEdges.Contains(S)) continue;
	  aConnector->Add (TopoDS::Edge(S));
	  aConnector->AddStart (TopoDS::Edge(S));
	}
      }
      else {
	aConnector->Add (aEdge);
	aConnector->AddStart (aEdge);
      }
    }

    // for Mandrake-10 - mkv,02.06.06 - myMapModif.Bind (myS2, TopTools_ListOfShape());
    TopTools_ListOfShape aListOfShape4;
    myMapModif.Bind (myS2, aListOfShape4);
    TopTools_ListOfShape& aListW = aConnector->MakeBlock();
    if (aConnector->IsDone()) {
//      TopAbs_Orientation aOri = myS2.Orientation();
//      TopTools_ListIteratorOfListOfShape aIt (aListW);
//      for (; aIt.More(); aIt.Next()) aIt.Value().Orientation(aOri);
      auto &l = myMapModif(myS2);
      l.insert(end(l), begin(aListW), end(aListW));
    }
//  }

  // construct the result

  TopTools_DataMapIteratorOfDataMapOfShapeListOfShape aIterM(aMapSubst);

  for (; aIterM.More(); aIterM.Next()) {
    TopAbs_Orientation aOri = TopAbs_FORWARD;
    for (auto &S : aIterM.ChangeValue())
      S.Orientation(aOri);
    if(!aIterM.Value().empty()) mySubst.Substitute (aIterM.Key(), aIterM.Value());
    aOri = aIterM.Key().Orientation();
    for (auto &S : aIterM.ChangeValue())
      S.Orientation(aOri);
    if(!aIterM.Value().empty()) myMapModif.Bind (aIterM.Key(), aIterM.Value());
  }

  if(anIsCoincided) {
    TopoDS_Shape aNewS1 = myS1;
    mySubst.Build(myS1);
    if (mySubst.IsCopied(myS1)) {
      aNewS1 = mySubst.Copy(myS1).front();
      if(aNewS1.ShapeType() == TopAbs_SHELL && anOnlyOneFace) {
	TopoDS_Iterator anIter(aNewS1);
	aNewS1 = anIter.Value();
      }
      aNewS1.Orientation(myS1.Orientation());
    }

    if (myMapModif.IsBound (myS2) && myMapModif(myS2).empty()) {
      // all wire is on shell
      myShape = aNewS1;
      myMapModif.UnBind (myS2);
    }
    else {
      // all wire or part of wire is out of shell
      aBld.MakeCompound (TopoDS::Compound(myShape));
      aBld.Add(myShape, aNewS1);
      if (myMapModif.IsBound (myS2)) {
	for (auto S : myMapModif(myS2)) {
	  // check if wire contains only one edge
	  TopoDS_Iterator aTDIt(S);
	  TopoDS_Shape anE = aTDIt.Value();
	  aTDIt.Next();
	  if(aTDIt.More()) aBld.Add (myShape, S);
	  else aBld.Add (myShape, anE);
	}
      }
      else aBld.Add (myShape, myS2);
    }

    Done();
  }
}

//=======================================================================
//function : IsOverlapped
//purpose  : Checks if theEdge2 lies on theEdge1. It is known that the
//           boundary vertices of theEdge2 lie on theEdge1.
//=======================================================================

static Standard_Boolean IsOverlapped(const TopoDS_Edge &theEdge1,
				     const TopoDS_Edge &theEdge2)
{
  Standard_Real      aParF1, aParL1;
  Standard_Real      aParF2, aParL2;
  Handle(Geom_Curve) aC1 = BRep_Tool::Curve(theEdge1, aParF1, aParL1);
  Handle(Geom_Curve) aC2 = BRep_Tool::Curve(theEdge2, aParF2, aParL2);

  if (aC1.IsNull() || aC2.IsNull())
    return Standard_False;

  GeomAdaptor_Curve aGAC1(aC1, aParF1, aParL1);
  GeomAdaptor_Curve aGAC2(aC2, aParF2, aParL2);
  Extrema_ExtPC     anExtPC;
  Standard_Integer  aNbPoints = 5;
  Standard_Real     aDelta    = (aParL2 - aParF2)/(aNbPoints + 1.);
  Standard_Real     aCurPar   = aParF2 + aDelta;
  Standard_Integer  i;
  Standard_Real     aMaxDist  = Max(BRep_Tool::Tolerance(theEdge1),
				    BRep_Tool::Tolerance(theEdge2));

  anExtPC.Initialize(aGAC1, aParF1, aParL1);

  for (i = 1; i <= aNbPoints; i++) {
    gp_Pnt aPnt = aGAC2.Value(aCurPar);

    anExtPC.Perform(aPnt);

    if (!anExtPC.IsDone())
      return Standard_False;

    Standard_Integer j;
    Standard_Integer aNbExt = anExtPC.NbExt();
    Standard_Boolean isPOnC1 = Standard_False;

    for (j = 1; j <= aNbExt && !isPOnC1; j++) {
      if (anExtPC.IsMin(j)) {
	gp_Pnt anExtP = anExtPC.Point(j).Value();

	isPOnC1 = (aPnt.Distance(anExtP) <= aMaxDist);
      }
    }
    if (!isPOnC1)
      return Standard_False;

    aCurPar += aDelta;
  }

  return Standard_True;
}

//=======================================================================
//function : SplitEdge
//purpose  : This function splits the edge into subedges by two given vertices.
//=======================================================================

static void SplitEdge(const TopoDS_Edge                &theEdge,
                      const TopTools_IndexedMapOfShape &theVertices,
                            TopTools_ListOfShape       &theSplits)
{
  //const TopoDS_Edge   aNewEdge;
  TopoDS_Vertex aV1;
  TopoDS_Vertex aV2;
  BRep_Builder  aBuilder;

  TopoDS_Edge aNewEdge = TopoDS::Edge(theEdge.Oriented(TopAbs_FORWARD).EmptyCopied());
  TopExp::Vertices(theEdge, aV1, aV2);
  aBuilder.Add(aNewEdge, aV1);
  
// Construction of the copied edge with
// the internal vertices of the map theVertices.

  Standard_Integer i;

  for (i = 1; i <= theVertices.Extent(); i++) 
  {
    const TopoDS_Shape &theVtx = theVertices.FindKey(i);

    if (!aV1.IsSame(theVtx) && !aV2.IsSame(theVtx))
      aBuilder.Add(aNewEdge, theVtx.Oriented(TopAbs_INTERNAL));
  }

  aBuilder.Add(aNewEdge, aV2);

  theSplits.clear();

  // Splitting of the new edge.
  if (!TopOpeBRepTool_TOOL::SplitE(aNewEdge, theSplits)) {
    theSplits.clear();
    theSplits.push_back(theEdge);

    return;
  }

  // Addition of the other internal vertices into the corresponding splits.
  TopoDS_Iterator anIter(theEdge, Standard_False);

  for (; anIter.More(); anIter.Next()) 
  {
    TopoDS_Vertex aCurVtx = TopoDS::Vertex(anIter.Value());

    // for each vertex which is not the same as aV1, aV2, theIntV1 or theIntV2.
    if (!aCurVtx.IsSame(aV1) && !aCurVtx.IsSame(aV2) && !theVertices.Contains(aCurVtx)) 
    {
      Standard_Real aCurPar = BRep_Tool::Parameter(aCurVtx, theEdge);

      // Search for the split the current vertex belongs to.
      for (auto S : theSplits) 
      {
        TopoDS_Edge   anEdge = TopoDS::Edge(S);
        Standard_Real aFPar;
        Standard_Real aLPar;

        BRep_Tool::Range(anEdge, aFPar, aLPar);

        if (aCurPar > aFPar && aCurPar < aLPar) 
        {
          aBuilder.Add(anEdge, aCurVtx);
          break;
        }
      }
    }
  }

// Setting the orientation of each split equal to the orientation of theEdge.
  TopAbs_Orientation                 anOri = theEdge.Orientation();
  for (TopoDS_Shape &anEdge : theSplits)
  {
    anEdge.Orientation(anOri);
  }
}

//=======================================================================
//function : RemoveCommonPart
//purpose  : 
//=======================================================================

static void RemoveCommonPart
                        (const TopoDS_Edge                        &theE1,
			 const TopoDS_Edge                        &theE2,
			       TopTools_DataMapOfShapeListOfShape &theMapSubst)
{
  if (theMapSubst.IsBound(theE1)) {

// For each split in the list aLOfE1 recursively call this function.
    for (auto S : theMapSubst.Find(theE1)) {
      TopoDS_Edge anEdge1 = TopoDS::Edge(S);

      RemoveCommonPart(anEdge1, theE2, theMapSubst);
    }

    return;
  }

  if (theMapSubst.IsBound(theE2)) {

// For each split in the list aLOfE2 recursively call this function.
    for (auto S : theMapSubst.Find(theE2)) {
      TopoDS_Edge anEdge2 = TopoDS::Edge(S);

      RemoveCommonPart(theE1, anEdge2, theMapSubst);
    }

    return;
  }

  TopTools_IndexedMapOfShape aMapVtx;
  TopTools_IndexedMapOfShape aMapCommonVtx;

// Searching for common vertices:
  TopExp::MapShapes(theE1, aMapVtx);
  TopoDS_Iterator anIter(theE2, Standard_False);

  for (; anIter.More(); anIter.Next()) {
    TopoDS_Shape aVtx = anIter.Value();

    if (aMapVtx.Contains(aVtx)) {
      aMapCommonVtx.Add(aVtx);
    }
  }

// If there are at least two common vertices we can check overlapping:
  if (aMapCommonVtx.Extent() <= 1)
    return;

  TopTools_ListOfShape aSplits;

  SplitEdge(theE2, aMapCommonVtx, aSplits);

#warning remove_if
  Standard_Boolean isModified = Standard_False;
  TopTools_ListIteratorOfListOfShape aSplitIter = begin(aSplits);
  while (aSplitIter != end(aSplits)) {
    TopoDS_Edge aSplit = TopoDS::Edge(*aSplitIter);

    if (IsOverlapped(theE1, aSplit)) {
// Removal of overlapping split from the list of splits
      aSplitIter = aSplits.erase(aSplitIter);
      isModified = Standard_True;
    } else {
      ++aSplitIter;
    }
  }

// If we deleted some splits, we should save the splits
// of theE2 in order to use them in further overlapping checks.
  if (isModified)
    theMapSubst.Bind(theE2, aSplits);
}

//=======================================================================
//function : GetSplits
//purpose  : This function removes returns the splits build from theEdge.
//           If there are no ones the edge itself will be added to theSplits.
//=======================================================================

static void GetSplits(const TopoDS_Shape                       &theEdge,
		      const TopTools_DataMapOfShapeListOfShape &theMapSubst,
		            TopTools_ListOfShape               &theSplits)
{
  if (theMapSubst.IsBound(theEdge)) {
    for (const TopoDS_Shape &anEdge : theMapSubst.Find(theEdge)) {
      GetSplits(anEdge, theMapSubst, theSplits);
    }
  } else {
    theSplits.push_back(theEdge);
  }
}

//=======================================================================
//function : isWireModified
//purpose  : Checks if the given wire was modified.
//=======================================================================

static Standard_Boolean isWireModified
                        (const TopoDS_Shape                       &theWire,
			 const TopTools_DataMapOfShapeListOfShape &theMapSubst)
{
  TopExp_Explorer anExp(theWire, TopAbs_EDGE);

  for(; anExp.More(); anExp.Next()) {
    const TopoDS_Shape &anEdge = anExp.Current();

    if (theMapSubst.IsBound(anEdge))
      return Standard_True;
  }

  return Standard_False;
}

//=======================================================================
//function : RemoveOverlappedEdges
//purpose  : This function removes doubled common parts of edges from theS2.
//=======================================================================

static TopoDS_Shape RemoveOverlappedEdges
                    (const TopoDS_Shape                       &theS1, 
		     const TopoDS_Shape                       &theS2,
		           TopTools_DataMapOfShapeListOfShape &theMapModif)
{
  TopExp_Explorer                    anExp1(theS1, TopAbs_EDGE);
  TopTools_DataMapOfShapeListOfShape aMapModif;

// For each couple of edges we remove a common part if any.
  for(; anExp1.More(); anExp1.Next()) {
    TopoDS_Edge     anEdge1 = TopoDS::Edge(anExp1.Current());
    TopExp_Explorer anExp2(theS2, TopAbs_EDGE);

    for(; anExp2.More(); anExp2.Next()) {
      TopoDS_Edge anEdge2 = TopoDS::Edge(anExp2.Current());

      RemoveCommonPart(anEdge1, anEdge2, aMapModif);
    }
  }

// Searching for built splits for every edge.
  TopoDS_Shape    aNewS;
  TopoDS_Shape    aNewS2;
  BRep_Builder    aBuilder;

  aBuilder.MakeCompound(TopoDS::Compound(aNewS));
  aBuilder.MakeCompound(TopoDS::Compound(aNewS2));
  aBuilder.Add(aNewS, theS1);

  TopExp_Explorer anExpWire(theS2, TopAbs_WIRE);

  for(; anExpWire.More(); anExpWire.Next()) {
    const TopoDS_Shape &aWire = anExpWire.Current();

    if (isWireModified(aWire, aMapModif)) {
      TopExp_Explorer anExpEdge(aWire, TopAbs_EDGE);
      TopoDS_Shape    aNewComp;

      aBuilder.MakeCompound(TopoDS::Compound(aNewComp));

      for(; anExpEdge.More(); anExpEdge.Next()) {
	const TopoDS_Shape   &anEdge = anExpEdge.Current();
	TopTools_ListOfShape  aSplits;

	GetSplits(anEdge, aMapModif, aSplits);

	if (!aSplits.empty() && !anEdge.IsSame(aSplits.front())) {
	  if (!theMapModif.IsBound(anEdge))
	    theMapModif.Bind(anEdge, aSplits);
	} else if (aSplits.empty()) {
	    theMapModif.Bind(anEdge, aSplits);
	}

	for (const TopoDS_Shape &aSplit : aSplits) {
	  aBuilder.Add(aNewComp, aSplit);
	}
      }

// Addition of new compound if it is not empty
      TopoDS_Iterator aSubShIter(aNewComp);

      if (aSubShIter.More())
	aBuilder.Add(aNewS2, aNewComp);
    } else {
      aBuilder.Add(aNewS2, aWire);
    }
  }

// Addition of new shape if it is not empty
  TopoDS_Iterator aSubShIter(aNewS2);

  if (aSubShIter.More())
    aBuilder.Add(aNewS, aNewS2);

  return aNewS;
}

//=======================================================================
//function : FillMapModif
//purpose  : This function fills the map of modified sub-shapes of theShape
//=======================================================================

static void FillMapModif(const BRepTools_Substitution       &theSubst,
			 const TopoDS_Shape                 &theShape,
			 TopTools_DataMapOfShapeListOfShape &theMapModif)
{
  TopAbs_ShapeEnum aType = theShape.ShapeType();

  if (aType == TopAbs_EDGE || aType == TopAbs_VERTEX) {
    if (theSubst.IsCopied(theShape)) {
      const TopTools_ListOfShape &aModifShapes = theSubst.Copy(theShape);

      if (!theMapModif.IsBound(theShape))
	theMapModif.Bind(theShape, aModifShapes);
    }
  }

  TopoDS_Iterator     anIter(theShape, Standard_False);
  TopTools_MapOfShape aUsedShapes;

  for (; anIter.More(); anIter.Next()) {
    const TopoDS_Shape &aSubShape = anIter.Value();

    if (!aUsedShapes.Add(aSubShape))
      continue;

    FillMapModif(theSubst, aSubShape, theMapModif);
  }
}

//=======================================================================
//function : PerformWires
//purpose  : gluing two wires
//=======================================================================

void
QANewModTopOpe_Glue::PerformWires() 
{
  Standard_Boolean S1IsEdge = Standard_False, S2IsEdge = Standard_False;
  if(myS1.ShapeType() == TopAbs_EDGE) {
    myS1 = BRepLib_MakeWire(TopoDS::Edge(myS1));
    S1IsEdge = Standard_True;
  }
  if(myS2.ShapeType() == TopAbs_EDGE) {
    myS2 = BRepLib_MakeWire(TopoDS::Edge(myS2));
    S2IsEdge = Standard_True;
  }

  TopoDS_Shape aS1F = myS1.Oriented(TopAbs_FORWARD);
  TopoDS_Shape aS2F = myS2.Oriented(TopAbs_FORWARD);
  BRepExtrema_DistShapeShape aExtrema (aS1F, aS2F);
  if (!aExtrema.IsDone())
    return;

  // process extrema points

  TColStd_SequenceOfInteger VVInt;
  TColStd_SequenceOfInteger VEInt;
  TColStd_SequenceOfInteger EEInt;
  

  Standard_Boolean anIsCoincided = Standard_False;
  Standard_Boolean S1IsVert = Standard_True;
  Standard_Boolean S2IsVert = Standard_True;
  Standard_Real aTol1, aTol2;
  Standard_Integer nbSol = aExtrema.NbSolution(), i, j, k;
  Standard_Real aDist = aExtrema.Value();
  for (i=1; i <= nbSol; i++) {
    TopoDS_Shape aS1 = aExtrema.SupportOnShape1(i);
    TopoDS_Shape aS2 = aExtrema.SupportOnShape2(i);
    S1IsVert = Standard_True;
    S2IsVert = Standard_True;
    // check distance against tolerances
     if (aS1.ShapeType() == TopAbs_VERTEX)
      aTol1 = BRep_Tool::Tolerance (TopoDS::Vertex(aS1));
    else {
      aTol1 = BRep_Tool::Tolerance (TopoDS::Edge(aS1));
      S1IsVert = Standard_False;
    }

    if (aS2.ShapeType() == TopAbs_VERTEX)
      aTol2 = BRep_Tool::Tolerance (TopoDS::Vertex(aS2));
    else {
      aTol2 = BRep_Tool::Tolerance (TopoDS::Edge(aS2));
      S2IsVert = Standard_False;
    }

    if (aDist > aTol1 + aTol2) continue;

    anIsCoincided = Standard_True;

    if(S1IsVert && S2IsVert) {
      if(!aS1.IsSame(aS2)) VVInt.Append(i);
    }
    else if(S1IsVert || S2IsVert)
      VEInt.Append(i);
    else 
      EEInt.Append(i);
  }

  if(!anIsCoincided) return;

  BRep_Builder aBld;
  TColgp_SequenceOfPnt aPoints1;
  TColgp_SequenceOfPnt aPoints2;
  TopTools_DataMapOfShapeListOfShape aMapSubst;

  for(k = 1; k <= VVInt.Length(); k++) {
    // avoid to process the same points twice
    i = VVInt(k);
    gp_Pnt aPnt1 = aExtrema.PointOnShape1(i);
    gp_Pnt aPnt2 = aExtrema.PointOnShape2(i);
    for (j=1; j<=aPoints1.Length(); j++) {
      if (aPnt1.IsEqual(aPoints1(j),Precision::Confusion()) &&
	  aPnt2.IsEqual(aPoints2(j),Precision::Confusion())) {
	break;
      }
    }
    if (j <= aPoints1.Length()) continue;
    aPoints1.Append (aPnt1);
    aPoints2.Append (aPnt2);

    const TopoDS_Vertex& aVer1 = TopoDS::Vertex(aExtrema.SupportOnShape1(i));
    const TopoDS_Vertex& aVer2 = TopoDS::Vertex(aExtrema.SupportOnShape2(i));
    aTol1 = BRep_Tool::Tolerance(aVer1);
    aTol2 = BRep_Tool::Tolerance(aVer2);
    aTol1 = Max(aTol1, aTol2 + aDist);
    gp_Pnt aP = BRep_Tool::Pnt(aVer1);
    aBld.UpdateVertex (aVer1, aP, aTol1);
    TopTools_ListOfShape aList;
    aList.push_back (aVer1);
    aMapSubst.Bind (aVer2, aList);
    
  }

  for(k = 1; k <= VEInt.Length(); k++) {
    // avoid to process the same points twice
    i = VEInt(k);
    gp_Pnt aPnt1 = aExtrema.PointOnShape1(i);
    gp_Pnt aPnt2 = aExtrema.PointOnShape2(i);
    for (j=1; j<=aPoints1.Length(); j++) {
      if (aPnt1.IsEqual(aPoints1(j),Precision::Confusion()) &&
	  aPnt2.IsEqual(aPoints2(j),Precision::Confusion())) {
	break;
      }
    }
    if (j <= aPoints1.Length()) continue;
    aPoints1.Append (aPnt1);
    aPoints2.Append (aPnt2);

    TopoDS_Shape aS1 = aExtrema.SupportOnShape1(i);
    TopoDS_Shape aS2 = aExtrema.SupportOnShape2(i);

    if(aS1.ShapeType() == TopAbs_VERTEX) {
      TopoDS_Vertex& aVer1 = TopoDS::Vertex(aS1);
      const TopoDS_Edge& aE2 = TopoDS::Edge(aS2);
      aTol1 = BRep_Tool::Tolerance(aVer1);
      aTol2 = BRep_Tool::Tolerance(aE2);
      aTol1 = Max(aTol1, aTol2 + aDist);
      gp_Pnt aP = BRep_Tool::Pnt(aVer1);
      aBld.UpdateVertex (aVer1, aP, aTol1);
      Standard_Real aPar;
      aExtrema.ParOnEdgeS2(i, aPar);
      if (!aMapSubst.IsBound(aE2)) {
	// for Mandrake-10 - mkv,02.06.06 - aMapSubst.Bind (aE2, TopTools_ListOfShape());
        TopTools_ListOfShape aListOfShape1;
	aMapSubst.Bind (aE2, aListOfShape1);
      }
      TopTools_ListOfShape& aListSubst = aMapSubst(aE2);
      TopoDS_Edge aEdge;
      if (aListSubst.empty()) {
	aEdge = aE2;
      }
      else {
	aEdge = TopoDS::Edge(aListSubst.front());
	aListSubst.clear();
      }

      TopoDS_Edge aNewEdge;
      QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aVer1, aPar, aNewEdge);
      aListSubst.push_back (aNewEdge);
    }
    else {
      TopoDS_Vertex& aVer1 = TopoDS::Vertex(aS2);
      const TopoDS_Edge& aE2 = TopoDS::Edge(aS1);
      aTol1 = BRep_Tool::Tolerance(aVer1);
      aTol2 = BRep_Tool::Tolerance(aE2);
      aTol1 = Max(aTol1, aTol2 + aDist);
      gp_Pnt aP = BRep_Tool::Pnt(aVer1);
      aBld.UpdateVertex (aVer1, aP, aTol1);
      Standard_Real aPar;
      aExtrema.ParOnEdgeS1(i, aPar);
      if (!aMapSubst.IsBound(aE2)) {
	// for Mandrake-10 - mkv,02.06.06 - aMapSubst.Bind (aE2, TopTools_ListOfShape());
        TopTools_ListOfShape aListOfShape2;
	aMapSubst.Bind (aE2, aListOfShape2);
      }
      TopTools_ListOfShape& aListSubst = aMapSubst(aE2);
      TopoDS_Edge aEdge;
      if (aListSubst.empty()) {
	aEdge = aE2;
      }
      else {
	aEdge = TopoDS::Edge(aListSubst.front());
	aListSubst.clear();
      }

      TopoDS_Edge aNewEdge;
      QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aVer1, aPar, aNewEdge);
      aListSubst.push_back (aNewEdge);
    }
  }

  for(k = 1; k <= EEInt.Length(); k++) {
    // avoid to process the same points twice
    i = EEInt(k);
    gp_Pnt aPnt1 = aExtrema.PointOnShape1(i);
    gp_Pnt aPnt2 = aExtrema.PointOnShape2(i);
    for (j=1; j<=aPoints1.Length(); j++) {
      if (aPnt1.IsEqual(aPoints1(j),Precision::Confusion()) &&
	  aPnt2.IsEqual(aPoints2(j),Precision::Confusion())) {
	break;
      }
    }
    if (j <= aPoints1.Length()) continue;
    aPoints1.Append (aPnt1);
    aPoints2.Append (aPnt2);

    const TopoDS_Edge& aE1 = TopoDS::Edge(aExtrema.SupportOnShape1(i));
    const TopoDS_Edge& aE2 = TopoDS::Edge(aExtrema.SupportOnShape2(i));
    
    aTol1 = BRep_Tool::Tolerance(aE1);
    aTol2 = BRep_Tool::Tolerance(aE2);
    gp_Pnt aP((aPnt1.X() + aPnt2.X())*.5, (aPnt1.Y() + aPnt2.Y())*.5, (aPnt1.Z() + aPnt2.Z())*.5);
    aTol1 = Max(aTol1+.5*aDist, aTol2+.5*aDist);
    aTol1 = Max(aTol1, Precision::Confusion());

    TopoDS_Vertex aVer;
    aBld.MakeVertex(aVer, aP, aTol1);

    Standard_Real aPar;
    aExtrema.ParOnEdgeS1(i, aPar);
    if (!aMapSubst.IsBound(aE1)) {
      // for Mandrake-10 - mkv,02.06.06 - aMapSubst.Bind (aE1, TopTools_ListOfShape());
      TopTools_ListOfShape aListOfShape3;
      aMapSubst.Bind (aE1, aListOfShape3);
    }
    TopTools_ListOfShape& aListSubst1 = aMapSubst(aE1);
    TopoDS_Edge aEdge;
    if (aListSubst1.empty()) {
      aEdge = aE1;
    }
    else {
      aEdge = TopoDS::Edge(aListSubst1.front());
      aListSubst1.clear();
    }

    TopoDS_Edge aNewEdge;
    QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aVer, aPar, aNewEdge);
    aListSubst1.push_back (aNewEdge);

    if(!myMapGener.IsBound(aE1)) {
      // for Mandrake-10 - mkv,02.06.06 - myMapGener.Bind(aE1, TopTools_ListOfShape());
      TopTools_ListOfShape aListOfShape4;
      myMapGener.Bind(aE1, aListOfShape4);
    }
    myMapGener(aE1).push_back(aVer);

    aExtrema.ParOnEdgeS2(i, aPar);
    if (!aMapSubst.IsBound(aE2)) {
      // for Mandrake-10 - mkv,02.06.06 - aMapSubst.Bind (aE2, TopTools_ListOfShape());
      TopTools_ListOfShape aListOfShape5;
      aMapSubst.Bind (aE2, aListOfShape5);
    }
    TopTools_ListOfShape& aListSubst2 = aMapSubst(aE2);
    if (aListSubst2.empty()) {
      aEdge = aE2;
    }
    else {
      aEdge = TopoDS::Edge(aListSubst2.front());
      aListSubst2.clear();
    }

    QANewModTopOpe_Glue::InsertVertexInEdge (aEdge, aVer, aPar, aNewEdge);
    aListSubst2.push_back (aNewEdge);

    if(!myMapGener.IsBound(aE2)) {
      // for Mandrake-10 - mkv,02.06.06 - myMapGener.Bind(aE2, TopTools_ListOfShape());
      TopTools_ListOfShape aListOfShape6;
      myMapGener.Bind(aE2, aListOfShape6);
    }
    myMapGener(aE2).push_back(aVer);

  }

  aBld.MakeCompound (TopoDS::Compound(myShape));
  aBld.Add(myShape, myS1);
  aBld.Add(myShape, myS2);

  TopTools_DataMapIteratorOfDataMapOfShapeListOfShape aIterM(aMapSubst);
  for (; aIterM.More(); aIterM.Next()) {
    TopAbs_Orientation aOri = TopAbs_FORWARD;
    for (auto &S : aIterM.ChangeValue())
      S.Orientation(aOri);
    if(aIterM.Key().ShapeType() == TopAbs_EDGE) {
      TopoDS_Edge aEdge = TopoDS::Edge(aIterM.Value().front());
      TopTools_ListOfShape& aListSubst = aMapSubst(aIterM.Key());
      aListSubst.clear();
      if(!TopOpeBRepTool_TOOL::SplitE(aEdge, aListSubst)) {
	aListSubst.push_back(aEdge);
      }
    }
    mySubst.Substitute (aIterM.Key(), aIterM.Value());
//     aOri = aIterM.Key().Orientation();
//     aIt.Initialize (aIterM.Value());
//     for (; aIt.More(); aIt.Next()) aIt.Value().Orientation(aOri);
//     myMapModif.Bind (aIterM.Key(), aIterM.Value());
  }

  mySubst.Build(myShape);

  FillMapModif(mySubst, myS1, myMapModif);
  FillMapModif(mySubst, myS2, myMapModif);

  if (mySubst.IsCopied(myS1) || mySubst.IsCopied(myS2)) {
    TopoDS_Shape aNewS1;
    TopoDS_Shape aNewS2;

    if (mySubst.IsCopied(myS1))
      aNewS1 = mySubst.Copy(myS1).front();
    else
      aNewS1 = myS1;

    if(S1IsEdge) {
      TopoDS_Iterator aTDIt(aNewS1);
      TopoDS_Shape aE = aTDIt.Value();
      aTDIt.Next();
      if(!aTDIt.More()) aNewS1 = aE;
    }

    if (mySubst.IsCopied(myS2))
      aNewS2 = mySubst.Copy(myS2).front();
    else
      aNewS2 = myS2;

    if(S2IsEdge) {
      TopoDS_Iterator aTDIt(aNewS2);
      TopoDS_Shape aE = aTDIt.Value();
      aTDIt.Next();
      if(!aTDIt.More()) aNewS2 = aE;
    }

    myShape = RemoveOverlappedEdges(aNewS1, aNewS2, myMapModif);
  }

  Done();
}
