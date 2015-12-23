// Created on: 1996-03-07
// Created by: Jean Yves LEBEY
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

#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_HDataStructure.hxx>
#include <ModelingData/TopTools/TopTools_HArray1OfShape.hxx>
#include <ModelingData/TopTools/TopTools_HArray1OfListOfShape.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_HBuilder.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_BuildTool.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_ShapeExplorer.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ShapeSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_EdgeBuilder.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_FaceBuilder.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_SolidBuilder.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_WireEdgeSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_PointIterator.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_PaveSet.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfIntegerListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfIntegerShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_GTopo.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ShellFaceSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_SurfaceIterator.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfOrientedShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_CurveIterator.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeInteger.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_Builder.hxx>

#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_TOOL.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_EXPORT.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_define.hxx>

#ifdef OCCT_DEBUG
extern void debfillp(const Standard_Integer i);
extern void debedbu(const Standard_Integer i) {cout<<"++ debedbu "<<i<<endl;}
#endif

#ifdef DRAW
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_DRAW.hxx>
#endif

//=======================================================================
//function : GPVSMakeEdges
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GPVSMakeEdges
(const TopoDS_Shape& EF,TopOpeBRepBuild_PaveSet& PVS,TopTools_ListOfShape& LOE) const 
{
#ifdef OCCT_DEBUG
  Standard_Integer iE; Standard_Boolean tSPS = GtraceSPS(EF,iE);
  if (tSPS) debfillp(iE);
#endif
  
  TopOpeBRepBuild_PaveClassifier VCL(EF);
  Standard_Boolean equalpar = PVS.HasEqualParameters();
  if (equalpar) VCL.SetFirstParameter(PVS.EqualParameters());
  
  PVS.InitLoop();
  Standard_Boolean novertex = ( ! PVS.MoreLoop() );
#ifdef OCCT_DEBUG
  if(tSPS&&novertex)cout<<"#--- GPVSMakeEdges : no vertex from edge "<<iE<<endl;
#endif
  if (novertex) return;
  
  TopOpeBRepBuild_EdgeBuilder EDBU;
  Standard_Boolean ForceClass = Standard_False;
  EDBU.InitEdgeBuilder(PVS,VCL,ForceClass);
  GEDBUMakeEdges(EF,EDBU,LOE);
  
} // GPVSMakeEdges

//=======================================================================
//function : GEDBUMakeEdges
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GEDBUMakeEdges
(const TopoDS_Shape& EF,TopOpeBRepBuild_EdgeBuilder& EDBU,TopTools_ListOfShape& LOE) const
{
#ifdef OCCT_DEBUG
  Standard_Integer iE; Standard_Boolean tSPS = GtraceSPS(EF,iE);
  if(tSPS){cout<<endl;GdumpSHA(EF, (char *) "#--- GEDBUMakeEdges ");cout<<endl;}
  if(tSPS){GdumpEDBU(EDBU);}
  if(tSPS){debedbu(iE);}
#endif

  TopoDS_Shape newEdge;
  for (EDBU.InitEdge(); EDBU.MoreEdge(); EDBU.NextEdge()) {
    
    Standard_Integer nloop = 0;
    Standard_Boolean tosplit = Standard_False;
    for (EDBU.InitVertex(); EDBU.MoreVertex(); EDBU.NextVertex()) nloop++; 
    // 0 ou 1 vertex sur edge courante => suppression edge
    if ( nloop <= 1 ) continue;
    
    myBuildTool.CopyEdge(EF,newEdge);
    
    Standard_Integer nVF = 0, nVR = 0; // nb vertex FORWARD,REVERSED
    
    TopoDS_Shape VF,VR; // gestion du bit Closed
    VF.Nullify();
    VR.Nullify();
    
    for (EDBU.InitVertex(); EDBU.MoreVertex(); EDBU.NextVertex()) {
      TopoDS_Shape V = EDBU.Vertex();
      TopAbs_Orientation Vori = V.Orientation();
      
      Standard_Boolean hassd = myDataStructure->HasSameDomain(V);
      if (hassd) { // on prend le vertex reference de V
	Standard_Integer iref = myDataStructure->SameDomainReference(V);
	V = myDataStructure->Shape(iref);
	V.Orientation(Vori);
      }
      
      TopAbs_Orientation oriV = V.Orientation();
      if ( oriV == TopAbs_EXTERNAL ) continue;
      
      Standard_Boolean equafound = Standard_False;
      TopExp_Explorer exE(newEdge,TopAbs_VERTEX);
      for (; exE.More(); exE.Next() ) {
	const TopoDS_Shape& VE = exE.Current();
	TopAbs_Orientation oriVE = VE.Orientation();

	if ( V.IsEqual(VE) ) {
	  equafound = Standard_True;
	  break;
	}
	else if (oriVE == TopAbs_FORWARD || oriVE == TopAbs_REVERSED) {
	  if (oriV == oriVE) {
	    equafound = Standard_True;
	    break;
	  }
	}
	else if (oriVE == TopAbs_INTERNAL || oriVE == TopAbs_EXTERNAL) {
	  Standard_Real parV = EDBU.Parameter();
	  Standard_Real parVE = BRep_Tool::Parameter(TopoDS::Vertex(VE),TopoDS::Edge(newEdge));
	  if ( parV == parVE ) {
	    equafound = Standard_True;
	    break;
	  }
	}
      }
      if ( !equafound  ) {
	if (Vori == TopAbs_FORWARD)  {
	  nVF++;
	  if (nVF == 1) VF = V;
	} 
	if (Vori == TopAbs_REVERSED) {
	  nVR++;
	  if (nVR == 1) VR = V;
	}
	if (oriV == TopAbs_INTERNAL) tosplit = Standard_True;
	Standard_Real parV = EDBU.Parameter();
	myBuildTool.AddEdgeVertex(newEdge,V);
	myBuildTool.Parameter(newEdge,V,parV);
      } // !equafound
      
    } // EDBUloop.InitVertex :  on vertices of new edge newEdge
    
    Standard_Boolean addedge = (nVF == 1 && nVR == 1);
    Standard_Boolean bitclosed = Standard_False;
    if (nVF == 1 && nVR == 1) {
      bitclosed = VF.IsSame(VR);
      newEdge.Closed(bitclosed);
    }
    if (addedge) {
      if (tosplit) {
	TopTools_ListOfShape loe; Standard_Boolean ok = TopOpeBRepTool_TOOL::SplitE(TopoDS::Edge(newEdge),loe);
	if (!ok) tosplit = Standard_False;
	else     LOE.Append(loe);
      }
      if (!tosplit) LOE.Append(newEdge);
    }    
  } // EDBU.InitEdge : loop on EDBU edges
  
  
#ifdef DRAW
  if(tSPS) {
    TCollection_AsciiString str1; str1 = "e";
    TCollection_AsciiString str2; str2 = iE;
    FDRAW_DINLOE("",LOE,str1,str2);
  }
#endif
  
} // GEDBUMakeEdges
