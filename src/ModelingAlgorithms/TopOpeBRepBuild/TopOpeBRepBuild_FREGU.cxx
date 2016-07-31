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

#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_WireToFace.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Foundation/Standard/Standard_ProgramError.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_define.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean TopOpeBRepBuild_GetcontextNOREGUFA();
extern Standard_Boolean TopOpeBRepBuild_GetcontextREGUXPU();
extern Standard_Boolean TopOpeBRepBuild_GettraceSAVFREGU();
void debregufa(const Standard_Integer /*iF*/) {}
#endif

#ifdef DRAW
#include <Viewer/DBRep/DBRep.hxx>
#endif

#define M_FORWARD(O)  (O == TopAbs_FORWARD)
#define M_REVERSED(O) (O == TopAbs_REVERSED)

//=======================================================================
//function : RegularizeFaces
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::RegularizeFaces
(const TopoDS_Shape& FF,const TopTools_ListOfShape& lnewFace,TopTools_ListOfShape& LOF)
{
  LOF.clear();
  myMemoSplit.Clear();

  for (const TopoDS_Shape& newFace : lnewFace) {
    TopTools_ListOfShape newFaceLOF;
    RegularizeFace(FF,newFace,newFaceLOF);
#ifdef OCCT_DEBUG
//    Standard_Integer nnewFaceLOF = newFaceLOF.Extent(); // DEB
#endif
    LOF.insert(end(LOF), begin(newFaceLOF), end(newFaceLOF));
  }
#ifdef OCCT_DEBUG
//  Standard_Integer nLOF = LOF.Extent(); // DEB
#endif

  Standard_Integer nr = myMemoSplit.Extent();
  if (nr == 0 ) return;

  // lfsdFF = faces SameDomain de FF
  TopTools_ListOfShape lfsdFF,lfsdFF1,lfsdFF2;
  GFindSamDom(FF,lfsdFF1,lfsdFF2);
  lfsdFF.insert(end(lfsdFF), begin(lfsdFF1), end(lfsdFF1));
  lfsdFF.insert(end(lfsdFF), begin(lfsdFF2), end(lfsdFF2));
  
  for (const TopoDS_Shape& fsdFF : lfsdFF) {
    // au moins une arete de FF dont le Split() est lui meme Split()
    TopExp_Explorer x;
    for (x.Init(fsdFF,TopAbs_EDGE);x.More();x.Next()) {
//    for (TopExp_Explorer x(fsdFF,TopAbs_EDGE);x.More();x.Next()) {
      const TopoDS_Shape& e = x.Current();
#ifdef OCCT_DEBUG
//      Standard_Integer ie = myDataStructure->Shape(e); //DEB
//      Standard_Boolean issect = myDataStructure->DS().IsSectionEdge(TopoDS::Edge(e));
#endif

      Standard_Integer ranke = GShapeRank(e);
      TopAbs_State staeope = (ranke==1) ? myState1 : myState2;
      
      for (Standard_Integer iiista = 1; iiista <= 2; iiista++ ) {
	
	TopAbs_State stae = staeope;
	if (iiista == 2) stae = TopAbs_ON;
	
	Standard_Boolean issplite = IsSplit(e,stae);
	if (!issplite) continue;
	
	TopTools_ListOfShape& lspe = ChangeSplit(e,stae);
#ifdef OCCT_DEBUG
//	Standard_Integer nlspe = lspe.Extent(); // DEB
#endif
	TopTools_ListOfShape newlspe;
	for (const TopoDS_Shape& esp : lspe) {
	  Standard_Boolean espmemo = myMemoSplit.Contains(esp);
	  if (!espmemo) newlspe.push_back(esp);
	  else {
	    const TopTools_ListOfShape& lspesp = Splits(esp,stae);
	    GCopyList(lspesp,newlspe);
	  }
	}	
	lspe.clear();
	GCopyList(newlspe,lspe);

      } // iiista
    } // explorer (fsdFF,TopAbs_EDGE)
  }
} // RegularizeFaces

/*static void FUN_setInternal(TopoDS_Face& F)
{
  TopExp_Explorer ex(F,TopAbs_EDGE);
  TopTools_MapOfShape meF,meR,meI;
  for (; ex.More(); ex.Next()){
    const TopoDS_Edge& E = TopoDS::Edge(ex.Current());
    TopAbs_Orientation oE = E.Orientation();
    Standard_Boolean isclo = BRep_Tool::IsClosed(E,F); // E has 2d rep on F
    if (isclo) continue; 
    Standard_Boolean isb = Standard_False; // the edge is FOR + REV in F
    if      (M_FORWARD(oE))  {meF.Add(E); isb = meR.Contains(E);}
    else if (M_REVERSED(oE)) {meR.Add(E); isb = meF.Contains(E);}
    if (isb) meI.Add(E.Oriented(TopAbs_INTERNAL));
  }  

  BRep_Builder BB;
  TopTools_MapIteratorOfMapOfShape it(meI);
  for (; it.More(); it.Next()){
    const TopoDS_Edge& E = TopoDS::Edge(it.Key());
    BB.Remove(F,E.Oriented(TopAbs_FORWARD));
    BB.Remove(F,E.Oriented(TopAbs_REVERSED));
    BB.Add(F,E);
  }
}*/

//=======================================================================
//function : RegularizeFace
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::RegularizeFace
(const TopoDS_Shape& FF,const TopoDS_Shape& anewFace,TopTools_ListOfShape& LOF)
{
  LOF.clear();
  const TopoDS_Face& newFace = TopoDS::Face(anewFace);
  Standard_Boolean toregu = Standard_True;
  Standard_Boolean usewtof = Standard_True;
  
#ifdef OCCT_DEBUG
  Standard_Integer iF;Standard_Boolean tSPSFF=GtraceSPS(FF,iF);
//  Standard_Boolean savfregu = TopOpeBRepBuild_GettraceSAVFREGU();
  if (TopOpeBRepBuild_GetcontextNOREGUFA()) toregu = Standard_False;
  if (TopOpeBRepBuild_GetcontextREGUXPU()) usewtof = Standard_False;
  if (tSPSFF) debregufa(iF);
#endif

  // If the same edge appears FOR+REV in the resulting face and
  // whereas it's not a closing edge, set it as INTERNAL instead.
  // FRA60275(iF=4) + PRO16297 
//  FUN_setInternal(newFace);

  if (!toregu) {
    LOF.push_back(newFace);
    return;
  }
  
  TopTools_DataMapOfShapeListOfShape ownw; // OldWires --> NewWires;
  Standard_Boolean rw = Standard_False;
  Standard_Boolean rf = Standard_False;
  myESplits.Clear();
  
  rw = TopOpeBRepTool::RegularizeWires(newFace,ownw,myESplits);
  
  if ( !rw ) {
    LOF.push_back(newFace);
    return;
  }      
  
  TopTools_ListOfShape newfaces;
  if (usewtof) {
    TopOpeBRepBuild_WireToFace wtof;
    TopTools_DataMapIteratorOfDataMapOfShapeListOfShape itownw(ownw);
    for (; itownw.More(); itownw.Next()) {
      const TopTools_ListOfShape& lw = itownw.Value();

      // xpu200798 : cto902D4 f14ou
      // recall ownw = {(ow = old wire, lnw = {list of new wires descendant of old wire}}
      // if lnw is empty, then ow is kept unchanged.
      Standard_Boolean kept = lw.empty();
      if (kept) {
	const TopoDS_Wire& ow = TopoDS::Wire(itownw.Key());
	wtof.AddWire(ow);
      }
      for (auto sw : lw) {
	const TopoDS_Wire& w = TopoDS::Wire(sw);
	wtof.AddWire(w);
      }
    }
    wtof.MakeFaces(newFace,newfaces);
#ifdef OCCT_DEBUG
//    Standard_Integer nnewfaces = newfaces.Extent(); // DEB
#endif
    rf = (newfaces.size() != 0);
  }
  else {
    rf = TopOpeBRepTool::RegularizeFace(newFace,ownw,newfaces);
  }
  
  if (!rf) {
    LOF.push_back(newFace);
    return;
  }
  
#ifdef OCCT_DEBUG
  if (tSPSFF) { cout<<"RegularizeFace "<<iF<<endl; debregufa(iF); }
#endif
  
  // LOF = nouvelles faces regularisees de newFace
  for (auto newS : newfaces)
    LOF.push_back(TopoDS::Face(newS));
  
  // mise a jour des aretes decoupees
  // Edge(FF) = {E}, E-->Split(E) = {E'}, E'-->myESplits(E') = {E''}

  TopTools_MapOfShape menf; // menf = aretes de newFace
  TopExp_Explorer x;
  for (x.Init(newFace,TopAbs_EDGE);x.More();x.Next()) {
    const TopoDS_Shape& E = x.Current();
    menf.Add(E);
  }
  
  // lfsdFF = faces SameDomain de FF
  TopTools_ListOfShape lfsdFF,lfsdFF1,lfsdFF2;
  GFindSamDom(FF,lfsdFF1,lfsdFF2);
  lfsdFF.insert(end(lfsdFF), begin(lfsdFF1), end(lfsdFF1));
  lfsdFF.insert(end(lfsdFF), begin(lfsdFF2), end(lfsdFF2));
  
  for (const TopoDS_Shape& fsdFF : lfsdFF) {

#ifdef OCCT_DEBUG
    Standard_Integer ifsdFF=0;Standard_Boolean tSPSfsdFF=GtraceSPS(fsdFF,ifsdFF);
    if (tSPSfsdFF) debregufa(ifsdFF);
#endif    

    Standard_Integer rankfsdFF = GShapeRank(fsdFF);
    TopAbs_State stafsdFF = (rankfsdFF == 1) ? myState1 : myState2;
#ifdef OCCT_DEBUG
//    Standard_Boolean issplitfsdFF = IsSplit(fsdFF,stafsdFF);
#endif

/*#ifdef OCCT_DEBUG
    const TopTools_ListOfShape& lspfsdFF = Splits(fsdFF,stafsdFF);
    Standard_Integer nlspfsdFF = lspfsdFF.Extent();
#endif*/
    
    // iteration sur les aretes de fsdFF
    for (x.Init(fsdFF,TopAbs_EDGE);x.More();x.Next()) {

      //fsdFFe : 1 edge de fsdFF = 1 face SameDomain de FF
      const TopoDS_Shape& fsdFFe = x.Current(); 

#ifdef OCCT_DEBUG
      Standard_Integer ifsdFFe = 0;Standard_Boolean tSPSfsdFFe=GtraceSPS(fsdFFe,ifsdFFe);
      if (tSPSfsdFFe) debregufa(ifsdFFe);
#endif    
      
      // a priori, on ne peut avoir plus de deux etats splites
      // sur l'arete , soit (IN + ON) , soit (OUT + ON) 
      for (Standard_Integer iiista = 1; iiista <= 2; iiista++ ) {
	TopAbs_State stafsdFFe = stafsdFF;
	if (iiista == 2) stafsdFFe = TopAbs_ON;
	
	TopTools_ListOfShape& lspfsdFFe = ChangeSplit(fsdFFe,stafsdFFe);
#ifdef OCCT_DEBUG
//	Standard_Boolean issplitfsdFFe = IsSplit(fsdFFe,stafsdFFe);
//	Standard_Integer nlspfsdFFe = lspfsdFFe.Extent();
#endif    
	  
	for (const TopoDS_Shape& espfsdFFe : lspfsdFFe) {
	  
	  // fsdFFe (Cf supra E) a ete splittee, espfdsFFe = arete splittee de fsdFFe
	  
	  Standard_Boolean inmenf = menf.Contains(espfsdFFe);
	  if (!inmenf) continue;
	  
	  // fsdFFe (Cf supra E) a ete splittee, espfdsFFe = arete splittee de fsdFFe
	  // espfsdFFe est une arete de Split(fsdFFe) ET figure dans newFace (Cf supra E')
	  
	  Standard_Boolean resplitloc = myESplits.IsBound(espfsdFFe);
	  if (resplitloc) {
	    
	    // fsdFFe (Cf supra E) a ete splittee, espfdsFFe = arete splittee de fsdFFe
	    // espfsdFFe est une arete de Split(fsdFFe) ET figure dans newFace (Cf supra E')
	    // espfsdFFe de newFace a ete redecoupee par RegularizeWires
	    
	    // son decoupage lresplit est stocke dans la DS du Builder
	    const TopTools_ListOfShape& lresplit = myESplits.Find(espfsdFFe); //Cf supra E''
	    
	    // on memorise que espfsdFFe est redecoupee ...
	    myMemoSplit.Add(espfsdFFe);
	    
	    // on stocke le nouveau decoupage de espfsdFFe dans la DS du builder ...
	    TopTools_ListOfShape& lsp = ChangeSplit(espfsdFFe,stafsdFFe);  
	    GCopyList(lresplit,lsp);
	  }
	} // it.More
      } // iiista
    } // explore(fsdFF,TopAbs_EDGE)
  }

#ifdef DRAW
  if (tSPSFF) debregufa(iF);
  if (tSPSFF && savfregu) {
    TCollection_AsciiString str("fregu"); str = str + iF;
    DBRep::Set(str.ToCString(),newFace);
    cout<<"newFace "<<str<<" built on face "<<iF<<" saved"<<endl;
  }
#endif
  
} // RegularizeFace
