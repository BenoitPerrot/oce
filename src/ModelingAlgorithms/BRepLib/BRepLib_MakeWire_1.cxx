// Created on: 1998-05-20
// Created by: Didier PIFFAULT
// Copyright (c) 1998-1999 Matra Datavision
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
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeWire.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfOrientedShape.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfOrientedShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Compound.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>


//=======================================================================
//function : Add
//purpose  : Add the list of edges to the current wire
//=======================================================================

void  BRepLib_MakeWire::Add(const TopTools_ListOfShape& L)
{
  myError = BRepLib_WireDone;
  if (!myShape.IsNull()) myShape.Closed(Standard_False);

  if (!L.empty()) {
    NotDone();
    TopTools_MapOfShape mapLocale;
    mapLocale.Assign(myVertices);
    TopTools_DataMapOfShapeShape toCopy;
    TopTools_ListOfShape toAdd, nlist, rlist;
    BRep_Builder BB;

    TopExp_Explorer exv;
    TopTools_MapIteratorOfMapOfShape itMS;
    for (auto S : L) {
      const TopoDS_Edge& curEd=TopoDS::Edge(S);
      if (!curEd.IsNull()) {
	rlist.clear();
	nlist.clear();
	Standard_Boolean copEd=Standard_False;
	if (myEdge.IsNull()) {
	  Add(curEd);
	  if (!VF.IsNull()) mapLocale.Add(VF);
	  if (!VL.IsNull()) mapLocale.Add(VL);
	  NotDone();
	  continue;
	}
	for (exv.Init(curEd, TopAbs_VERTEX); exv.More(); exv.Next()) {
	  const TopoDS_Vertex& edVer=TopoDS::Vertex(exv.Current());
	  rlist.push_front(edVer);
	  nlist.push_front(edVer);
	  if (!mapLocale.Contains(edVer)) {
	    Standard_Boolean notYetFound = Standard_True;
	    Standard_Real gap=BRep_Tool::Tolerance(edVer);
	    gp_Pnt pVer=BRep_Tool::Pnt(edVer);
	    for (itMS.Initialize(mapLocale); itMS.More(); itMS.Next()) {
	      notYetFound=Standard_True;
	      const TopoDS_Vertex& refVer=TopoDS::Vertex(itMS.Key());
	      gap +=BRep_Tool::Tolerance(refVer);
	      if (pVer.Distance(BRep_Tool::Pnt(TopoDS::Vertex(refVer))) <= gap) {
		nlist.pop_front();
		nlist.push_front(refVer.Oriented(edVer.Orientation()));
		copEd=Standard_True;
		notYetFound=Standard_False;
		break;
	      }
	    }
	    if (notYetFound) mapLocale.Add(edVer);
	  }
	}
	if (copEd) {
	  TopoDS_Shape aLocalShape = curEd.EmptyCopied();
	  TopoDS_Edge newEd=TopoDS::Edge(aLocalShape);
//	  TopoDS_Edge newEd=TopoDS::Edge(curEd.EmptyCopied());
	  BB.Transfert(curEd, newEd);
	  newEd.Closed(curEd.Closed());
	  for (auto NS : nlist) {
	    BB.Add(newEd, NS);
	    BB.Transfert(curEd, newEd, TopoDS::Vertex(rlist.front()), TopoDS::Vertex(NS));
	    rlist.pop_front();
	  }
	  toAdd.push_back(newEd);
	}
	else {
	  toAdd.push_back(curEd);
	}
      }
    }
    if (!toAdd.empty()) {
      TopoDS_Compound comp;
      BB.MakeCompound(comp);
      TopTools_MapIteratorOfMapOfOrientedShape itMOS;
      TopTools_MapOfOrientedShape theEdges;
      for (auto S : toAdd) {
	BB.Add(comp, S);
	theEdges.Add(S);
      }
      TopTools_IndexedDataMapOfShapeListOfShape lesMeres;
      TopExp::MapShapesAndAncestors(comp, TopAbs_VERTEX, TopAbs_EDGE, lesMeres);
      TopoDS_Vertex vf, vl;
      TopoDS_Shape theKey;
      Standard_Boolean usedVertex;
      Standard_Boolean closedEdge = Standard_False;
      Standard_Integer vvInd, lastInd;
      do {
	if (!VL.IsNull() && lesMeres.Contains(VL)) {
	  if (!VF.IsNull()) closedEdge=VF.IsSame(VL);
	  usedVertex=Standard_True;
	  for (auto S : lesMeres.FindFromKey(VL)) {
	    if (theEdges.Contains(S)) {
	      usedVertex=Standard_False;
	      theEdges.Remove(S);
	      TopExp::Vertices(TopoDS::Edge(S), vf,vl);
	      if (vf.IsSame(VL)) {
		BB.Add(myShape, S);
		myVertices.Add(vl);
		VL=vl;
	      }
	      else {
		if (closedEdge) {
		  BB.Add(myShape, S);
		  VF=vf;
		}
		else {
		  BB.Add(myShape, S.Reversed());
		  vf.Reverse();
		  VL=vf;
		}
		myVertices.Add(vf);
	      }
	    }
	  }
	  if (usedVertex) {
	    lastInd=lesMeres.Extent();
	    vvInd=lesMeres.FindIndex(VL);
	    if (vvInd != lastInd) {
	      theKey=lesMeres.FindKey(lastInd);
	      nlist=lesMeres.FindFromIndex(lastInd);
	    }
	    lesMeres.RemoveLast();
	    if (vvInd != lastInd) {
	      lesMeres.Substitute(vvInd, theKey, nlist);
	    }
	  }
	}
	else if (!VF.IsNull() && lesMeres.Contains(VF)) {
	  usedVertex=Standard_True;
	  for (auto S : lesMeres.FindFromKey(VF)) {
	    if (theEdges.Contains(S)) {
	      usedVertex=Standard_False;
	      theEdges.Remove(S);
	      TopExp::Vertices(TopoDS::Edge(S), vf,vl);
	      if (vl.IsSame(VF)) {
		BB.Add(myShape, S);
		myVertices.Add(vf);
		VF=vf;
	      }
	      else {
		BB.Add(myShape, S.Reversed());
		vl.Reverse();
		myVertices.Add(vl);
		VF=vl;
	      }
	    }
	  }
	  if (usedVertex) {
	    lastInd=lesMeres.Extent();
	    vvInd=lesMeres.FindIndex(VF);
	    if (vvInd != lastInd) {
	      theKey=lesMeres.FindKey(lastInd);
	      nlist=lesMeres.FindFromIndex(lastInd);
	    }
	    lesMeres.RemoveLast();
	    if (vvInd != lastInd) {
	      lesMeres.Substitute(vvInd, theKey, nlist);
	    }
	  }
	}
	else {
	  if (theEdges.Extent()>0) {
	    Standard_Boolean noCandidat=Standard_True;
	    for (itMOS.Initialize(theEdges); itMOS.More(); itMOS.Next()) {
	      TopExp::Vertices(TopoDS::Edge(itMOS.Key()), vf,vl);
	      if (myVertices.Contains(vl)) {
		if (myError==BRepLib_WireDone)  myError = BRepLib_NonManifoldWire;
		BB.Add(myShape, itMOS.Key());
		myVertices.Add(vf);
		VF=vf;
		noCandidat=Standard_False;
		break;
	      }
	      else if (myVertices.Contains(vf)) {
		if (myError==BRepLib_WireDone)  myError = BRepLib_NonManifoldWire;
		BB.Add(myShape, itMOS.Key());
		myVertices.Add(vl);
		VL=vl;
		noCandidat=Standard_False;
		break;
	      }
	    }
	    if (noCandidat) {
	      theEdges.Clear();
// Some Edges are not connected to first edge and the diagnosis is as follows
// but the "Maker" is Done() because otherwise it is not possible to return the constructed connected part...
	      myError=BRepLib_DisconnectedWire;
	    }
	    else theEdges.Remove(itMOS.Key());
	  }
	}
      } while (theEdges.Extent()>0);
    }
  }

  if (!VF.IsNull() && !VL.IsNull() && VF.IsSame(VL))
    myShape.Closed(Standard_True);  
  Done();
}
