// Created on: 1997-10-21
// Created by: Jean Yves LEBEY
// Copyright (c) 1997-1999 Matra Datavision
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

#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ShellToSolid.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <Foundation/Standard/Standard_ProgramError.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_define.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean TopOpeBRepBuild_GetcontextNOREGUSO();
extern Standard_Boolean TopOpeBRepBuild_GetcontextREGUXPU();
extern Standard_Boolean TopOpeBRepBuild_GettraceSAVSREGU();
Standard_EXPORT void debreguso(const Standard_Integer iS) {cout<<"++ debreguso "<<iS<<endl;}
#endif

#ifdef DRAW
#include <Viewer/DBRep/DBRep.hxx>
#endif

//=======================================================================
//function : RegularizeSolids
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::RegularizeSolids
(const TopoDS_Shape& SO,const TopTools_ListOfShape& lnewSolid,TopTools_ListOfShape& LOSO)
{
  LOSO.clear();
  myMemoSplit.Clear();

  for (const TopoDS_Shape& newSolid : lnewSolid) {
    TopTools_ListOfShape newSolidLOSO;
    RegularizeSolid(SO,newSolid,newSolidLOSO);
#ifdef OCCT_DEBUG
//    Standard_Integer nnewSolidLOSO = newSolidLOSO.Extent(); // DEB
#endif
    LOSO.insert(end(LOSO), begin(newSolidLOSO), end(newSolidLOSO));
  }
#ifdef OCCT_DEBUG
//  Standard_Integer nLOSO = LOSO.Extent(); // DEB
#endif
  Standard_Integer nr = myMemoSplit.Extent();
  if (nr == 0 ) return;

  // lsosdSO = solids SameDomain de SO
  TopTools_ListOfShape lsosdSO,lsosdSO1,lsosdSO2;
  GFindSamDom(SO,lsosdSO1,lsosdSO2);
  lsosdSO.insert(end(lsosdSO), begin(lsosdSO1), end(lsosdSO1));
  lsosdSO.insert(end(lsosdSO), begin(lsosdSO2), end(lsosdSO2));
  
  for (const TopoDS_Shape& sosdSO : lsosdSO) {
    // au moins une arete de SO dont le Split() est lui meme Split()
    TopExp_Explorer x;
    for (x.Init(sosdSO,TopAbs_FACE);x.More();x.Next()) {
//    for (TopExp_Explorer x(sosdSO,TopAbs_FACE);x.More();x.Next()) {
      const TopoDS_Shape& f = x.Current();
      Standard_Integer rankf=GShapeRank(f);TopAbs_State staf=(rankf==1)?myState1:myState2;
      Standard_Boolean issplitf = IsSplit(f,staf);
      if (!issplitf) continue;
      
      TopTools_ListOfShape newlspf;
      TopTools_ListOfShape& lspf = ChangeSplit(f,staf);
#ifdef OCCT_DEBUG
//      Standard_Integer nlspf = lspf.Extent(); // DEB
#endif
      for (const TopoDS_Shape& fsp : lspf) {
	Standard_Boolean fspmemo = myMemoSplit.Contains(fsp);
	if (!fspmemo) newlspf.push_back(fsp);
	else {
	  TopTools_ListOfShape& lspfsp = ChangeSplit(fsp,staf);
	  GCopyList(lspfsp,newlspf);
	}
      }
      lspf.clear();
      GCopyList(newlspf,lspf);

      //      if (staf == TopAbs_IN) { 
      //	// IN Solide <=> ON ??? : M.A.J de Split(TopAbs_ON);
      //	Standard_Boolean issplitON = IsSplit(f,TopAbs_ON);
      //	TopTools_ListOfShape& lONf = ChangeSplit(f,TopAbs_ON);
      //	Standard_Integer nONf = lONf.Extent(); // DEB
      //	lONf.Clear();
      //	GCopyList(newlspf,lONf);
      //      } // TopAbs_IN

    } // (sosdSO,TopAbs_FACE)
  }
}

//=======================================================================
//function : RegularizeSolid
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::RegularizeSolid
(const TopoDS_Shape& SS,const TopoDS_Shape& anewSolid,TopTools_ListOfShape& LOSO)
{
  LOSO.clear();
  const TopoDS_Solid& newSolid = TopoDS::Solid(anewSolid);
  Standard_Boolean toregu = Standard_True;
  Standard_Boolean usestos = Standard_True;
  
#ifdef OCCT_DEBUG
  Standard_Integer iS;Standard_Boolean tSPS=GtraceSPS(SS,iS);
//  Standard_Boolean savsregu = TopOpeBRepBuild_GettraceSAVSREGU();
  if (TopOpeBRepBuild_GetcontextNOREGUSO()) toregu = Standard_False;
  if (TopOpeBRepBuild_GetcontextREGUXPU()) usestos = Standard_False;
  if (tSPS) debreguso(iS);
#endif
  
  if (!toregu) {
    LOSO.push_back(newSolid);
    return;
  }
  
  TopTools_DataMapOfShapeListOfShape osns; // OldShells --> NewShells;
  Standard_Boolean rw = Standard_False;
  Standard_Boolean rf = Standard_False;
  myFSplits.Clear();
  
  rw = TopOpeBRepTool::RegularizeShells(newSolid,osns,myFSplits);
  
  if ( !rw ) {
    LOSO.push_back(newSolid);
    return;
  }      
  
  TopTools_ListOfShape newSolids;
  if (usestos) {
    TopOpeBRepBuild_ShellToSolid stos;
    TopTools_DataMapIteratorOfDataMapOfShapeListOfShape itosns(osns);
    for (; itosns.More(); itosns.Next()) {
      
/* JYL 120499 : a mettre dans l'areabuilder du solidbuilder du shelltosolid
       
      // solution 1 : alerter le SolidClassifier utilise dans le SolidBuilder
      //              de ShellToSolid qu'il y a de des aretes mutilconnexes (2 faces)
      //              dans oldshe QU'IL NE FAUT PAS UTILISER pour tirer un point
      //              representatif du shell.

      // map des edges -> list of face de oldshe
      TopTools_IndexedDataMapOfShapeListOfShape maef;
      TopExp::MapShapesAndAncestors(oldshe,TopAbs_EDGE,TopAbs_FACE,maef);
      Standard_Integer ima=1,nma=maef.Extent();
      for(;ima<=nma;ima++) {
	const TopoDS_Edge& eevit = TopoDS::Edge(maef.FindKey(ima));
	const TopTools_ListOfShape& lfa = maef(ima);
	Standard_Integer nlfa = lfa.Extent();
	if (nlfa > 2) {
	}
      }
      // fin solution1
*/

      for (auto s : itosns.Value()) {
	stos.AddShell(TopoDS::Shell(s));
      }
    }
    stos.MakeSolids(newSolid,newSolids);
    rf = (newSolids.size() != 0);
  }
  else {
    rf = Standard_False;
//    rf = TopOpeBRepTool::RegularizeSolid(newSolid,osns,newSolids);
  }
  
  if (!rf) {
    LOSO.push_back(newSolid);
    return;
  }
  
#ifdef OCCT_DEBUG
  if (tSPS) {
    cout<<"RegularizeSolid "<<iS<<endl;
    debreguso(iS);
  }
#endif
  
  // LOSO = nouvelles Solids regularisees de newSolid
  for (auto s : newSolids)
    LOSO.push_back(TopoDS::Solid(s));
  
  // mise a jour des faces decoupees
  // Face(SS) = {E}, E-->Split(E) = {E'}, E'-->myFSplits(E') = {E''}
  // manc : E'-->E pour pouvoir relier
  // Split(manc(E')) = {myFSplits(E')}
  TopTools_MapOfShape mfns; // mfns = faces de newSolid
  TopExp_Explorer x;
  for (x.Init(newSolid,TopAbs_FACE);x.More();x.Next()) {
    const TopoDS_Shape& F = x.Current();
    mfns.Add(F);
  }
  
  // lssdSS = Solids SameDomain de SS
  TopTools_ListOfShape lssdSS,lssdSS1,lssdSS2;
  GFindSamDom(SS,lssdSS1,lssdSS2);
  lssdSS.insert(end(lssdSS), begin(lssdSS1), end(lssdSS1));
  lssdSS.insert(end(lssdSS), begin(lssdSS2), end(lssdSS2));
  
  TopTools_DataMapOfShapeShape manc;
  
  for (const TopoDS_Shape& ssdSS : lssdSS) {
#ifdef OCCT_DEBUG
//    Standard_Integer issdSS = myDataStructure->Shape(ssdSS); // DEB
#endif
    
    Standard_Integer rankssdSS = GShapeRank(ssdSS);
    TopAbs_State stassdSS = (rankssdSS == 1) ? myState1 : myState2;
#ifdef OCCT_DEBUG
//    Standard_Boolean issplitssdSS = IsSplit(ssdSS,stassdSS);
//    const TopTools_ListOfShape& lspssdSS = Splits(ssdSS,stassdSS);
//    Standard_Integer nlspssdSS = lspssdSS.Extent();
#endif
    
    // iteration sur les faces de ssdSS
    for (x.Init(ssdSS,TopAbs_FACE);x.More();x.Next()) {
      
      //ssdSSf : 1 face de ssdSS = 1 solid SameDomain de Ss
      const TopoDS_Shape& ssdSSf = x.Current();

#ifdef OCCT_DEBUG
      Standard_Integer issdSSf = 0;Standard_Boolean tSPSssdSSf=GtraceSPS(ssdSSf,issdSSf);
      if (tSPSssdSSf) debreguso(issdSSf);
#endif    
   
      TopAbs_State stassdSSf = stassdSS;
      
      TopTools_ListOfShape& lspssdSSf = ChangeSplit(ssdSSf,stassdSSf);
#ifdef OCCT_DEBUG
//      Standard_Boolean issplitssdSSf = IsSplit(ssdSSf,stassdSSf);
//      Standard_Integer nlspssdSSf = lspssdSSf.Extent();
#endif    

      TopTools_ListOfShape newlspssdSSf; // nouvel ensemble de faces splittees de ssdSSf

      for (const TopoDS_Shape& fspssdSSf : lspssdSSf) {
	
	Standard_Boolean inmfns = mfns.Contains(fspssdSSf);
	if (!inmfns) continue;

	// ssdSSf est une face de ssdSS (Cf supra E)
	// fspssdSSf de Split(ssdSSf) figure dans newSolid (Cf supra E')
	
	Standard_Boolean rfsplitloc = myFSplits.IsBound(fspssdSSf);
	if (rfsplitloc) {

	  // ssdSSf (Cf supra E) a ete splittee, fspssdSSf = arete splittee de ssdSSf
	  // fspssdSSf est une arete de Split(ssdSSf) ET figure dans newFace (Cf supra E')
	  // fspssdSSf de newFace a ete redecoupee par RegularizeWires

	  // son decoupage lrfsplit est stocke dans la DS du Builder
	  const TopTools_ListOfShape& lrfsplit = myFSplits.Find(fspssdSSf);//Cf supra E''

	  // on memorise que fspssdSSf est redecoupee ...
	  myMemoSplit.Add(fspssdSSf);
	  
	  // on stocke le nouveau decoupage de fspssdSSf dans la DS du builder ...
	  TopTools_ListOfShape& lsp = ChangeSplit(fspssdSSf,stassdSSf);  
	  GCopyList(lrfsplit,lsp);
	}	
      } // lspssdSSf.More()
    } // explore(ssdSS,TopAbs_FACE)
  } // itlssdSS.More()

#ifdef DRAW
  if (tSPS) debreguso(iS);
  if (tSPS && savsregu) {
    TCollection_AsciiString str("sregu"); str = str + iS;
    DBRep::Set(str.ToCString(),newSolid);
    cout<<"newSolid "<<str<<" built on Solid "<<iS<<" saved"<<endl;
  }
#endif
  
} // RegularizeSolid
