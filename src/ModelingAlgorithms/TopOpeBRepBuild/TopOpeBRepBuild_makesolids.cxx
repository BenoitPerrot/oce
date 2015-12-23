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
#include <TopOpeBRepTool_ShapeExplorer.hxx>
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

#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfOrientedShape.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Compound.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Foundation/Standard/Standard_ProgramError.hxx>
#include <TopOpeBRepTool.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_define.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean TopOpeBRepDS_GettraceSTRANGE();
Standard_EXPORT void debgsobu(const Standard_Integer /*iSO*/) {}
#endif

//=======================================================================
//function : GSFSMakeSolids
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GSFSMakeSolids      
(const TopoDS_Shape& SOF,TopOpeBRepBuild_ShellFaceSet& SFS,TopTools_ListOfShape& LOSO)
{
#ifdef OCCT_DEBUG
  Standard_Integer iSO; Standard_Boolean tSPS = GtraceSPS(SOF,iSO);
  if(tSPS){GdumpSHA(SOF, (char *) "#--- GSFSMakeSolids ");cout<<endl;}
#endif
  
  Standard_Boolean ForceClass = Standard_True;
  TopOpeBRepBuild_SolidBuilder SOBU;
  SOBU.InitSolidBuilder(SFS,ForceClass);
  GSOBUMakeSolids(SOF,SOBU,LOSO);
  
} // GSFSMakeSolids

//=======================================================================
//function : GSOBUMakeSolids
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GSOBUMakeSolids
(const TopoDS_Shape& SOF,TopOpeBRepBuild_SolidBuilder& SOBU,TopTools_ListOfShape& LOSO)
{
#ifdef OCCT_DEBUG
  Standard_Boolean trcso = TopOpeBRepDS_GettraceSTRANGE();
  Standard_Integer iSO; Standard_Boolean tSPS = GtraceSPS(SOF,iSO);
  if(tSPS){GdumpSHA(SOF, (char *) "#--- GSOBUMakeSolids ");cout<<endl;}
  if(tSPS){GdumpSOBU(SOBU);debgsobu(iSO);}
#endif
  
  TopoDS_Shape newSolid;
  TopoDS_Shape newShell;
  Standard_Integer nfa = 0;
  Standard_Integer nsh = 0;
  SOBU.InitSolid();
  for (; SOBU.MoreSolid(); SOBU.NextSolid()) {

    myBuildTool.MakeSolid(newSolid);
    nsh = SOBU.InitShell();
    for (; SOBU.MoreShell(); SOBU.NextShell()) {
      Standard_Boolean isold = SOBU.IsOldShell();
      if (isold) newShell = SOBU.OldShell();
      else {
	myBuildTool.MakeShell(newShell);
	nfa = SOBU.InitFace();
	for (; SOBU.MoreFace(); SOBU.NextFace()) {
	  TopoDS_Shape F = SOBU.Face();
	  myBuildTool.AddShellFace(newShell,F);
	}
      }
      
      // caractere closed du nouveau shell newShell
      if ( !isold ) {
	Standard_Boolean closed = Standard_True;	
	TopTools_IndexedDataMapOfShapeListOfShape edgemap;
	TopExp::MapShapesAndAncestors
	  (newShell,TopAbs_EDGE,TopAbs_FACE,edgemap);
	Standard_Integer iedge,nedge = edgemap.Extent(); 
	for (iedge = 1; iedge <= nedge; iedge++) {
	  const TopoDS_Shape& E = edgemap.FindKey(iedge);
	  TopAbs_Orientation oE = E.Orientation();
	  if (oE == TopAbs_INTERNAL || 
	      oE == TopAbs_EXTERNAL) continue;
	  const TopoDS_Edge& EE = TopoDS::Edge(E);
	  Standard_Boolean degen = BRep_Tool::Degenerated(EE);
	  if (degen) continue;
	  Standard_Integer nbf = edgemap(iedge).Extent();
	  if (nbf < 2) {
	    closed = Standard_False;
	    break;
	  }
	}
	myBuildTool.Closed(newShell,closed); 
      } // !isold

      myBuildTool.AddSolidShell(newSolid,newShell);

    }

    TopExp_Explorer ex(newSolid,TopAbs_VERTEX);
    Standard_Boolean isempty = ex.More();    
    if (!isempty) {
#ifdef OCCT_DEBUG
      if (trcso) cout <<"TopOpeBRepBuild_Builder::GSOBUMakeSolids ->EMPTY SOLID\n";
#endif
      continue;
    }

    Standard_Boolean newSolidOK = Standard_True;
    if (nsh == 1 && nfa == 1) {
      TopExp_Explorer exp(newSolid,TopAbs_EDGE);
      Standard_Boolean hasnondegenerated = Standard_False;
      for(;exp.More(); exp.Next()) {
	const TopoDS_Edge& e = TopoDS::Edge(exp.Current());
	if ( !BRep_Tool::Degenerated(e) ) {
	  hasnondegenerated = Standard_True;
	  break;
	}
      }
      newSolidOK = hasnondegenerated;
      if ( !newSolidOK ) continue;
    }

    TopTools_ListOfShape newSolidLOS;
    RegularizeSolid(SOF,newSolid,newSolidLOS);
    LOSO.Append(newSolidLOS);
//    LOSO.Append(newSolid);
  }
} // GSOBUMakeSolids
