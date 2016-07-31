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
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_define.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean TopOpeBRepBuild_GetcontextSPEON();
#endif

//=======================================================================
//function : GToSplit
//purpose  : 
//=======================================================================
Standard_Boolean TopOpeBRepBuild_Builder::GToSplit(const TopoDS_Shape& S,const TopAbs_State TB) const 
{
  Standard_Boolean issplit = IsSplit(S,TB);
  Standard_Boolean facshap = myDataStructure->HasShape(S) && (S.ShapeType() == TopAbs_FACE);
  Standard_Boolean hasgeom = myDataStructure->HasGeometry(S);
  Standard_Boolean hassame = myDataStructure->HasSameDomain(S);
  Standard_Boolean tosplit = (!issplit) && (facshap || hasgeom || hassame);

#ifdef OCCT_DEBUG
  Standard_Integer iS; Standard_Boolean tSPS = GtraceSPS(S,iS);
  if (tSPS) { 
    cout<<"GToSplit ";GdumpSHA(S);cout<<" ";TopAbs::Print(TB,cout);
    cout<<" "<<tosplit<<" : "<<"!issplit "<<(!issplit);
    cout<<" && (facshap || hasgeom || hassame) ";
    cout<<"("<<facshap<<" || "<<hasgeom<<" || "<<hassame<<")"<<endl;
    cout.flush();
  }
#endif
  
#ifdef OCCT_DEBUG
  if (TopOpeBRepBuild_GetcontextSPEON()) { //CONTEXT
    tSPS = Standard_True; //CONTEXT
    Standard_Boolean hasON = Standard_False; //CONTEXT
    Standard_Boolean isE = (S.ShapeType() == TopAbs_EDGE); //CONTEXT
    if (isE) { //CONTEXT
      const TopoDS_Edge& E = TopoDS::Edge(S); //CONTEXT
      Standard_Boolean issE = myDataStructure->DS().IsSectionEdge(E); //CONTEXT
      if (issE) { //CONTEXT
	Standard_Boolean issplitON = IsSplit(E,TopAbs_ON); //CONTEXT
	if (issplitON) { //CONTEXT
	  Standard_Integer n = Splits(E,TopAbs_ON).Extent(); //CONTEXT
	  hasON = (n>0); //CONTEXT
	} //CONTEXT
      } //CONTEXT
    } //CONTEXT
    Standard_Boolean tosplitH = tosplit || hasON; //CONTEXT
    if(tSPS){cout<<"GToSplit context SPEON";} //CONTEXT
    if(tSPS){cout<<" "<<tosplitH<<" : "<<"tosplit "<<tosplit;} //CONTEXT
    if(tSPS){cout<<" || hasON "<<hasON<<endl;} //CONTEXT
  } //CONTEXT
#endif
  
  return tosplit;
} // GToSplit


//=======================================================================
//function : GToMerge
//purpose  : 
//=======================================================================
Standard_Boolean TopOpeBRepBuild_Builder::GToMerge(const TopoDS_Shape& S) const 
{
  TopAbs_State TB = TopAbs_IN;
  
  Standard_Boolean ismerged = IsMerged(S,TB);
  Standard_Boolean hassame = myDataStructure->HasSameDomain(S);
  Standard_Boolean tomerge = (!ismerged && hassame);
  
#ifdef OCCT_DEBUG
  Standard_Integer iS; Standard_Boolean tSPS = GtraceSPS(S,iS);
  if(tSPS){cout<<"GToMerge ";GdumpSHA(S);cout<<" ";TopAbs::Print(TB,cout);}
  if(tSPS){cout<<" "<<tomerge<<" : !ismerged "<<(!ismerged)<<" && hassame "<<hassame<<endl;}
#endif
  
  return tomerge;
} // GToMerge

//=======================================================================
//function : GTakeCommonOfSame
//purpose  : 
//=======================================================================
Standard_Boolean TopOpeBRepBuild_Builder::GTakeCommonOfSame(const TopOpeBRepBuild_GTopo& G)
{
  TopAbs_State t1,t2; G.StatesON(t1,t2);
  Standard_Boolean sam = Standard_False;
  if      (t1 == TopAbs_OUT && t2 == TopAbs_OUT) sam = Standard_True;
  else if (t1 == TopAbs_OUT && t2 == TopAbs_IN ) sam = Standard_False;
  else if (t1 == TopAbs_IN  && t2 == TopAbs_OUT) sam = Standard_False;
  else if (t1 == TopAbs_IN  && t2 == TopAbs_IN ) sam = Standard_True;

  return sam;
}

//=======================================================================
//function : GTakeCommonOfDiff
//purpose  : 
//=======================================================================
Standard_Boolean TopOpeBRepBuild_Builder::GTakeCommonOfDiff(const TopOpeBRepBuild_GTopo& G)
{
  TopAbs_State t1,t2; G.StatesON(t1,t2);
  Standard_Boolean dif = Standard_False;
  if      (t1 == TopAbs_OUT && t2 == TopAbs_OUT) dif = Standard_False;
  else if (t1 == TopAbs_OUT && t2 == TopAbs_IN ) dif = Standard_True;
  else if (t1 == TopAbs_IN  && t2 == TopAbs_OUT) dif = Standard_True;
  else if (t1 == TopAbs_IN  && t2 == TopAbs_IN ) dif = Standard_False;

  return dif;
}

//=======================================================================
//function : GFindSamDom
//purpose  : complete the lists L1,L2 with the shapes of the DS
//           having same domain
//=======================================================================
void TopOpeBRepBuild_Builder::GFindSamDom(const TopoDS_Shape& S,TopTools_ListOfShape& L1,TopTools_ListOfShape& L2) const 
{
  L1.clear(); L2.clear();
  L1.push_back(S);
  GFindSamDom(L1,L2);
}

//=======================================================================
//function : GFindSamDom
//purpose  : complete the lists L1,L2 with the shapes of the DS
//           having same domain
//=======================================================================
void TopOpeBRepBuild_Builder::GFindSamDom(TopTools_ListOfShape& L1,TopTools_ListOfShape& L2) const 
{
  Standard_Integer i;
  Standard_Integer nl1 = L1.size(), nl2 = L2.size();
  
  while ( nl1 > 0 || nl2 > 0 )  {
    
    i = 1;
    for (const TopoDS_Shape& S1 : L1) {
      if (nl1 < i)
	break;
#ifdef OCCT_DEBUG
//      Standard_Integer iS1 = myDataStructure->Shape(S1);
#endif
      for (const TopoDS_Shape& S2: myDataStructure->SameDomain(S1)) {
#ifdef OCCT_DEBUG
//	Standard_Integer iS2 = myDataStructure->Shape(S2);
#endif
	Standard_Boolean found = GContains(S2,L2);
	if ( ! found ) {
	  L2.push_front(S2);
	  nl2++;
	}
      }
      ++i;
    }
    nl1 = 0;

    i = 1;
    for (const TopoDS_Shape& S2 : L2) {
      if (nl2 < i)
	break;
#ifdef OCCT_DEBUG
//      Standard_Integer iS2 = myDataStructure->Shape(S2);
#endif
      for (const TopoDS_Shape& S1 : myDataStructure->SameDomain(S2)) {
#ifdef OCCT_DEBUG
//	Standard_Integer iS1 = myDataStructure->Shape(S1);
#endif
	Standard_Boolean found = GContains(S1,L1);
	if ( ! found ) {
	  L1.push_front(S1);
	  nl1++;
	}
      }
      ++i;
    }
    nl2 = 0;
    
  }
  
}

//=======================================================================
//function : GFindSamDomSODO
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GFindSamDomSODO(const TopoDS_Shape& S,TopTools_ListOfShape& LSO,TopTools_ListOfShape& LDO) const 
{
  LSO.clear();
  LDO.clear();
  LSO.push_back(S);
  GFindSamDomSODO(LSO,LDO);
}

//=======================================================================
//function : GFindSamDomSODO
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GFindSamDomSODO(TopTools_ListOfShape& LSO,TopTools_ListOfShape& LDO) const 
{
  if (LSO.empty()) return;
  const TopoDS_Shape& sref = LSO.front();
#ifdef OCCT_DEBUG
//  Standard_Integer  iref = myDataStructure->SameDomainReference(sref);
#endif
  TopOpeBRepDS_Config oref = myDataStructure->SameDomainOrientation(sref);
  
  GFindSamDom(LSO,LDO);
  
#ifdef OCCT_DEBUG
  Standard_Integer iS; Standard_Boolean tSPS = GtraceSPS(sref,iS);
  if(tSPS) {
    TCollection_AsciiString ss("GFindSamDom result on ");  
    GdumpSHA(sref,(Standard_Address)ss.ToCString());cout<<endl;
    GdumpSAMDOM(LSO, (char *) "L1 : ");
    GdumpSAMDOM(LDO, (char *) "L2 : ");
  }
#endif
  
  TopTools_ListOfShape LLSO,LLDO;
  
  for (const TopoDS_Shape& s : LSO) {
    TopOpeBRepDS_Config o = myDataStructure->SameDomainOrientation(s);
#ifdef OCCT_DEBUG
//    Standard_Integer iS = myDataStructure->Shape(s);
#endif
    if      ( o == oref && !GContains(s,LLSO) ) LLSO.push_back(s);
    else if ( o != oref && !GContains(s,LLDO) ) LLDO.push_back(s);
  }
  
  for (const TopoDS_Shape& s : LDO) {
    TopOpeBRepDS_Config o = myDataStructure->SameDomainOrientation(s);
#ifdef OCCT_DEBUG
//    Standard_Integer iS = myDataStructure->Shape(s);
#endif
    if      ( o == oref && !GContains(s,LLSO) ) LLSO.push_back(s);
    else if ( o != oref && !GContains(s,LLDO) ) LLDO.push_back(s);
  }
  
  LSO = LLSO;
  LDO = LLDO;
}

//=======================================================================
//function : GMapShapes
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GMapShapes(const TopoDS_Shape& S1,const TopoDS_Shape& S2)
{
  Standard_Boolean S1null = S1.IsNull();
  Standard_Boolean S2null = S2.IsNull();
  GClearMaps();
  if ( ! S1null ) TopExp::MapShapes(S1,myMAP1);
  if ( ! S2null ) TopExp::MapShapes(S2,myMAP2);
}

//=======================================================================
//function : GClearMaps
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GClearMaps()
{
  myMAP1.Clear();
  myMAP2.Clear(); 
}

//=======================================================================
//function : GFindSameRank
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::GFindSameRank
(const TopTools_ListOfShape& L1,const Standard_Integer Rank,TopTools_ListOfShape& L2) const 
{
  for (const TopoDS_Shape& s : L1) {
#ifdef OCCT_DEBUG
//    Standard_Integer iS = myDataStructure->Shape(s);
#endif
    Standard_Integer r = GShapeRank(s);
    if ( r == Rank && !GContains(s,L2) ) {
      L2.push_back(s);
    }
  }
}

//=======================================================================
//function : GShapeRank
//purpose  : 
//=======================================================================
Standard_Integer TopOpeBRepBuild_Builder::GShapeRank(const TopoDS_Shape& S) const 
{
  Standard_Boolean isof1 = GIsShapeOf(S,1);
  Standard_Boolean isof2 = GIsShapeOf(S,2);
  Standard_Integer ancetre = (isof1 || isof2) ? ((isof1) ? 1 : 2) : 0;
  return ancetre;
}

//=======================================================================
//function : GIsShapeOf
//purpose  : 
//=======================================================================
Standard_Boolean TopOpeBRepBuild_Builder::GIsShapeOf(const TopoDS_Shape& S,const Standard_Integer I) const 
{
  if (S.IsNull()) return Standard_False;
  Standard_Boolean b = Standard_False;
  if      (I == 1) b = myMAP1.Contains(S);
  else if (I == 2) b = myMAP2.Contains(S);
  return b;
}

//=======================================================================
//function : GContains
//purpose  : returns True if S is in the list L.
//=======================================================================
Standard_Boolean TopOpeBRepBuild_Builder::GContains(const TopoDS_Shape& S,const TopTools_ListOfShape& L)
{
  for (const TopoDS_Shape& SL : L) {
    Standard_Boolean issame = SL.IsSame(S);
    if ( issame ) return Standard_True;
  }
  return Standard_False;
}


//=======================================================================
//function : GCopyList
//purpose  : 
// copy des elements [i1..i2] de Lin dans Lou. 1er element de Lin = index 1 
//=======================================================================
void TopOpeBRepBuild_Builder::GCopyList(const TopTools_ListOfShape& Lin,const Standard_Integer I1,const Standard_Integer I2,TopTools_ListOfShape& Lou)
{
  Standard_Integer nadd = 0;
  Standard_Integer i = 1;
  for (const TopoDS_Shape& EL : Lin) {
    if ( i >= I1 && i <= I2 ) {
      Lou.push_back(EL);
      nadd++;
    }
    i++;
  }
}


//=======================================================================
//function : GCopyList
//purpose  : 
// copy de Lin dans Lou
//=======================================================================
void TopOpeBRepBuild_Builder::GCopyList(const TopTools_ListOfShape& Lin,TopTools_ListOfShape& Lou)
{
  const Standard_Integer I1 = 1;
  const Standard_Integer I2 = Lin.size();
  GCopyList(Lin,I1,I2,Lou);
}
