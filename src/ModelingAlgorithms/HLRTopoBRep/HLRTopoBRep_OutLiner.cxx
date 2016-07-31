// Created on: 1994-08-04
// Created by: Christophe MARION
// Copyright (c) 1994-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_Data.hxx>
#include <ModelingAlgorithms/HLRAlgo/HLRAlgo_Projector.hxx>
#include <ModelingAlgorithms/BRepTopAdaptor/BRepTopAdaptor_MapOfShapeTool.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_OutLiner.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(HLRTopoBRep_OutLiner)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(HLRTopoBRep_OutLiner)
IMPLEMENT_DOWNCAST(HLRTopoBRep_OutLiner,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(HLRTopoBRep_OutLiner)
#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_DSFiller.hxx>
#include <ModelingAlgorithms/Contap/Contap_Contour.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve.hxx>
#include <Geometry/Extrema/Extrema_ExtPC.hxx>

//=======================================================================
//function : OutLiner
//purpose  : 
//=======================================================================

HLRTopoBRep_OutLiner::HLRTopoBRep_OutLiner ()
{}

//=======================================================================
//function : OutLiner
//purpose  : 
//=======================================================================

HLRTopoBRep_OutLiner::HLRTopoBRep_OutLiner(const TopoDS_Shape& OriS) :
  myOriginalShape(OriS)
{}

//=======================================================================
//function : OutLiner
//purpose  : 
//=======================================================================

HLRTopoBRep_OutLiner::HLRTopoBRep_OutLiner(const TopoDS_Shape& OriS,
					   const TopoDS_Shape& OutS) :
  myOriginalShape(OriS),
  myOutLinedShape(OutS)
{}

//=======================================================================
//function : Fill
//purpose  : 
//=======================================================================

void HLRTopoBRep_OutLiner::Fill(const HLRAlgo_Projector& P,
				BRepTopAdaptor_MapOfShapeTool& MST,
				const Standard_Integer nbIso)
{
  if (!myOriginalShape.IsNull()) {
    if (myOutLinedShape.IsNull()) {
      gp_Vec Vecz (0., 0., 1.);
      gp_Trsf Tr (P.Transformation ());
      Tr.Invert ();
      Vecz.Transform (Tr);
      Contap_Contour FO;
      if (P.Perspective ()) {
	gp_Pnt Eye;
	Eye.SetXYZ (P.Focus ()*Vecz.XYZ ());
	FO.Init(Eye);
      }
      else {
	gp_Dir DirZ(Vecz);
	FO.Init(DirZ);
      }
      HLRTopoBRep_DSFiller::Insert(myOriginalShape,FO,myDS,MST,nbIso);
      BuildShape(MST);
    }
  }
}

//=======================================================================
// Function : ProcessFace
// Purpose  : Build a Face using myDS and add the new face to a shell
//=======================================================================

void HLRTopoBRep_OutLiner::ProcessFace(const TopoDS_Face& F,
				       TopoDS_Shape& S,
				       BRepTopAdaptor_MapOfShapeTool& MST)
{
  BRep_Builder B;
  TopExp_Explorer exE, exW;
  //Standard_Boolean splitted = Standard_False;

  TopTools_IndexedDataMapOfShapeListOfShape aVEMap;
  TopExp::MapShapesAndAncestors(F, TopAbs_VERTEX, TopAbs_EDGE, aVEMap);

  TopoDS_Shape NF;// = F;
  //NF.Free(Standard_True);

  //for (exE.Init(F,TopAbs_EDGE); exE.More(); exE.Next()) {
    //if (myDS.EdgeHasSplE(TopoDS::Edge(exE.Current()))) {
      //splitted = Standard_True;
      //break;
    //}
  //}

  //if (splitted) { // the face contains a splitted edge :
                  // Make a copy with the new Edges
    NF = F.EmptyCopied ();
    
    
    for (exW.Init(F,TopAbs_WIRE); exW.More(); exW.Next()) {
      TopoDS_Wire W;
      B.MakeWire(W);
      
      for (exE.Init(exW.Current(),TopAbs_EDGE); exE.More(); exE.Next()) {
	TopoDS_Edge E = TopoDS::Edge(exE.Current());
	if (myDS.EdgeHasSplE(E)) {
	  
	  for (auto NewS : myDS.EdgeSplE(E)) {
	    TopoDS_Edge newE = TopoDS::Edge(NewS);
	    newE.Orientation(E.Orientation());
	    myDS.AddOldS(newE,E);
	    B.Add(W,newE);
	  }
	}
	else {
	  B.Add(W,E);
	}
      }
      B.Add(NF,W); // add the new wire in the new face.
    }
  //}
  myDS.AddIntL(F);
  TopTools_ListOfShape& OutL = myDS.AddOutL(F);

  if (myDS.FaceHasIntL(F)) { // get the InternalOutLines on face F
    TopoDS_Wire W;
    
    for(auto SInt : myDS.FaceIntL(F)) {
      TopoDS_Edge E = TopoDS::Edge(SInt);
      E.Orientation(TopAbs_INTERNAL);
      //Check, if outline edge coincides real edge

      BRepAdaptor_Curve C(E);
      Standard_Real par = 0.34*C.FirstParameter() + 0.66*C.LastParameter();
      gp_Pnt P = C.Value(par);
      TopoDS_Vertex V1, V2, aV1, aV2;
      TopExp::Vertices(E, V1, V2);

      Standard_Boolean SameEdge = Standard_False;
      if(!V1.IsNull() && aVEMap.Contains(V1)) {
	const TopTools_ListOfShape& aEList = aVEMap.FindFromKey(V1);
	for (auto S2 : aEList) {
	  const TopoDS_Edge& aE = TopoDS::Edge(S2);
	  TopExp::Vertices(aE, aV1, aV2);

	  if((V1.IsSame(aV1) && V2.IsSame(aV2)) || (V1.IsSame(aV2) && V2.IsSame(aV1))) {
	    BRepAdaptor_Curve aC(aE);
	    if((C.GetType() == GeomAbs_Line) &&
	       (aC.GetType() == GeomAbs_Line)) {
	      SameEdge = Standard_True;
	      break;
	    }
	    else {
	      //Try to project one point
	      Extrema_ExtPC anExt(P, aC);
	      if(anExt.IsDone()) {
		Standard_Integer aNe = anExt.NbExt();
		if(aNe > 0) {
		  Standard_Real dist = RealLast();
		  Standard_Integer ec;
		  for(ec = 1; ec <= aNe; ++ec) {
//		    dist = Min(dist, anExt.Value(ec));
		    dist = Min(dist, anExt.SquareDistance(ec));
		  }

//		  if(dist <= 1.e-7) {
		  if(dist <= 1.e-14) {
		    SameEdge = Standard_True;
		    break;
		  }
		}
	      }
	    }
	  }
	}
      }

      if(SameEdge) {
	OutL.push_back(E);
	continue;
      }
	      
      if (myDS.EdgeHasSplE(E)) { 
	
	for (auto newE : myDS.EdgeSplE(E)) {
	  newE.Orientation(TopAbs_INTERNAL);
	  if (W.IsNull()) B.MakeWire(W);
	  myDS.AddOldS(newE,F);
	  B.Add(W,newE);
	}
      }
      else {
	if (W.IsNull()) B.MakeWire(W);
	myDS.AddOldS(E,F);
	B.Add(W,E);
      }
    }
    if (!W.IsNull()) B.Add(NF,W); // add the new wire in the new face.
  }
  
  if (myDS.FaceHasIsoL(F)) { // get the IsoLines on face F
    TopoDS_Wire W;
    
    for(auto SIso : myDS.FaceIsoL(F)) {
      TopoDS_Edge E = TopoDS::Edge(SIso);
      E.Orientation(TopAbs_INTERNAL);
      if (myDS.EdgeHasSplE(E)) { // normaly IsoLines are never splitted.
	
	for (auto S2 : myDS.EdgeSplE(E)) {
	  TopoDS_Shape newE = S2;
	  newE.Orientation(TopAbs_INTERNAL);
	  if (W.IsNull()) B.MakeWire(W);
	  myDS.AddOldS(newE,F);
	  B.Add(W,newE);
	}
      }
      else {
	if (W.IsNull()) B.MakeWire(W);
	myDS.AddOldS(E,F);
	B.Add(W,E);
      }
    }
    if (!W.IsNull()) B.Add(NF,W); // add the new wire in the new face.
  }
  myDS.AddOldS(NF,F);
  MST.Bind(NF, MST.ChangeFind(F));
  //
  B.Add(S,NF); // add the face in the shell.
}

//=======================================================================
//function : BuildShape
//purpose  : Build the OutLinedShape
//=======================================================================

void HLRTopoBRep_OutLiner::BuildShape (BRepTopAdaptor_MapOfShapeTool& MST)
{
  TopExp_Explorer exshell, exface, exedge;
  BRep_Builder B;
  B.MakeCompound(TopoDS::Compound(myOutLinedShape));
  TopTools_MapOfShape ShapeMap;

  for (exshell.Init (myOriginalShape, TopAbs_SHELL);
       exshell.More (); 
       exshell.Next ()) {             // faces in a shell (open or close)
    TopoDS_Shell theShell;
    B.MakeShell(theShell);
    theShell.Closed(exshell.Current().Closed ());

    for (exface.Init(exshell.Current(), TopAbs_FACE);
	 exface.More(); 
	 exface.Next()) {
      if (ShapeMap.Add(exface.Current()))
	ProcessFace(TopoDS::Face(exface.Current()),theShell,MST);
    }
    B.Add(myOutLinedShape,theShell);
  }
  
  for (exface.Init(myOriginalShape, TopAbs_FACE, TopAbs_SHELL);
       exface.More(); 
       exface.Next()) {                           // faces not in a shell
    if (ShapeMap.Add(exface.Current()))
      ProcessFace (TopoDS::Face(exface.Current()),myOutLinedShape,MST);
  }
  
  for (exedge.Init(myOriginalShape, TopAbs_EDGE, TopAbs_FACE);
       exedge.More();
       exedge.Next())                              // edges not in a face
    B.Add(myOutLinedShape,exedge.Current());
}

