// Created on: 2000-02-01
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

#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_HBuilder.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_BuildTool.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_HDataStructure.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_GTopo.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ShellFaceSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_WireEdgeSet.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapOfShapeState.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_PaveSet.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_SequenceOfShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_Builder1.hxx>

#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>

#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>

#include <ModelingData/BRep/BRep_Builder.hxx>

#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_CurveExplorer.hxx>

//=======================================================================
//function : TopOpeBRepBuild_Builder1::CorrectResult2d
//purpose  : Change the Result (after CorrectFace2d)
//=======================================================================  
Standard_Integer TopOpeBRepBuild_Builder1::CorrectResult2d(TopoDS_Shape& aResult)
							     
{
  Standard_Integer aNb=myMapOfCorrect2dEdges.Extent();
  if(!aNb)
    return 0;

  if (aResult.ShapeType()!=TopAbs_SOLID) 
    return 0;

  //
  // 1. Map Of sources' subshapes .
  //    The map (aSourceShapeMap) is to prevent unnecessary coping 
  TopTools_IndexedMapOfShape aSourceShapeMap;
  TopExp::MapShapes(myShape1, TopAbs_EDGE, aSourceShapeMap);
  TopExp::MapShapes(myShape2, TopAbs_EDGE, aSourceShapeMap);

  TopTools_IndexedDataMapOfShapeShape EdMap;
  BRep_Builder BB;
  TopoDS_Shape aLocalShape = aResult.EmptyCopied();
  TopoDS_Solid aSolid=TopoDS::Solid(aLocalShape);
  //  TopoDS_Solid aSolid=TopoDS::Solid(aResult.EmptyCopied());

  TopExp_Explorer anExpShells(aResult, TopAbs_SHELL);
  for (; anExpShells.More(); anExpShells.Next()) {
    const TopoDS_Shell& S=TopoDS::Shell(anExpShells.Current());
    aLocalShape = S.EmptyCopied();
    TopoDS_Shell aShell=TopoDS::Shell(aLocalShape);
    //    TopoDS_Shell aShell=TopoDS::Shell(S.EmptyCopied());
  
    TopExp_Explorer anExpFaces(S, TopAbs_FACE);
    for (; anExpFaces.More(); anExpFaces.Next()) {
      TopoDS_Face F=TopoDS::Face(anExpFaces.Current());
      //modified by NIZHNY-MZV  Mon Mar 27 09:51:59 2000
      TopAbs_Orientation Fori = F.Orientation();
      //we should explore FORWARD face
//      F.Orientation(TopAbs_FORWARD);
      aLocalShape = F.EmptyCopied();
      TopoDS_Face aFace=TopoDS::Face(aLocalShape);
      //      TopoDS_Face aFace=TopoDS::Face(F.EmptyCopied());
      
      TopExp_Explorer anExpWires(F, TopAbs_WIRE);
      for (; anExpWires.More(); anExpWires.Next()) {
	TopoDS_Wire W=TopoDS::Wire(anExpWires.Current());
	//modified by NIZHNY-MZV  Mon Mar 27 09:51:59 2000
	TopAbs_Orientation Wori = W.Orientation();

	//we should explore FORWARD wire
//	W.Orientation(TopAbs_FORWARD);
	aLocalShape = W.EmptyCopied();
	TopoDS_Wire aWire = TopoDS::Wire(aLocalShape);
	//	TopoDS_Wire aWire = TopoDS::Wire(W.EmptyCopied());
	
	TopExp_Explorer anExpEdges(W, TopAbs_EDGE);
	for (; anExpEdges.More(); anExpEdges.Next()) {
	  TopoDS_Edge E = TopoDS::Edge(anExpEdges.Current());
	  
	  if (EdMap.Contains(E)) {
	    TopoDS_Shape anEdge = EdMap.ChangeFromKey(E);
	    
	    anEdge.Orientation(E.Orientation());
	    BB.Add (aWire, anEdge); 
	    continue;
	  }


	  if (myMapOfCorrect2dEdges.Contains(E)) {
	    TopoDS_Shape anEdge=myMapOfCorrect2dEdges.ChangeFromKey(E);

	    anEdge.Orientation(E.Orientation());
	    BB.Add (aWire, anEdge);
	    EdMap.Add(E, anEdge);
	    continue;
	  }

	  // add edges
	  TopoDS_Edge anEdge;
	  //we copy edge in order to not change it in source shapes
	  if(aSourceShapeMap.Contains(E)) {
	    TopoDS_Shape aLocalShape1 = E.EmptyCopied();
	    anEdge = TopoDS::Edge(aLocalShape1);
	    //	    anEdge = TopoDS::Edge(E.EmptyCopied());

	    EdMap.Add(E, anEdge);

	    TopExp_Explorer anExpVertices(E, TopAbs_VERTEX);
	    Standard_Boolean free = anEdge.Free();
	    anEdge.Free(Standard_True);
	    for(; anExpVertices.More();  anExpVertices.Next())
	      BB.Add(anEdge, anExpVertices.Current());
	    
	    anEdge.Free(free);
	  }
	  else
	    anEdge = E;

	  anEdge.Orientation(E.Orientation());
	  BB.Add (aWire, anEdge);
	}
	// Add wires
	aWire.Orientation(Wori);
        aWire.Closed (BRep_Tool::IsClosed (aWire));
	BB.Add (aFace, aWire);
      }
      
      aFace.Orientation(Fori);
      BB.Add (aShell, aFace);
    }

    aShell.Orientation(S.Orientation());
    aShell.Closed (BRep_Tool::IsClosed(aShell));
    BB.Add (aSolid, aShell);
  }
  aSolid.Closed (BRep_Tool::IsClosed(aSolid));
  aResult=aSolid;

  //update section curves 
  TopOpeBRepDS_CurveExplorer cex(myDataStructure->DS());
  for (; cex.More(); cex.Next()) {
    Standard_Integer ic = cex.Index();
    TopTools_ListOfShape& LSE = ChangeNewEdges(ic);
    TopTools_ListOfShape corrLSE;
    for (const TopoDS_Shape& E : LSE) {
      if(EdMap.Contains(E)) {
	const TopoDS_Shape& newE = EdMap.FindFromKey(E);
	corrLSE.push_back(newE);
      }
      else
	corrLSE.push_back(E);
    }
    LSE.clear();
    LSE.insert(end(LSE), begin(corrLSE), end(corrLSE));
  }


  //update section edges
  const TopOpeBRepDS_DataStructure& BDS = myDataStructure->DS();
  Standard_Integer i,nes = BDS.NbSectionEdges();

  for(i = 1; i <= nes; i++) {
    const TopoDS_Shape& es = BDS.SectionEdge(i);
    if(es.IsNull()) 
      continue;

    for(Standard_Integer j = 0; j <= 2; j++) {
      TopAbs_State staspl = TopAbs_State(j); // 0 - IN, 1 - OUT, 2 - ON
      TopTools_ListOfShape& LSE = ChangeSplit(es,staspl);
      TopTools_ListOfShape corrLSE;
      for (const TopoDS_Shape& E : LSE) {
	if(EdMap.Contains(E)) {
	  const TopoDS_Shape& newE = EdMap.FindFromKey(E);
	  corrLSE.push_back(newE);
	}
	else
	  corrLSE.push_back(E);
      }
      LSE.clear();
      LSE.insert(end(LSE), begin(corrLSE), end(corrLSE));
    }
  }
  return 1;
} 
