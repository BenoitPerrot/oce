// Created on: 1998-02-14
// Created by: Jean Yves LEBEY
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

#include <TopOpeBRepDS_repvg.hxx>
#include <TopoDS.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/TopExp/TopExp.hxx>

#include <TopOpeBRepTool_EXPORT.hxx>
#include <TopOpeBRepTool_SC.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>

#include <TopOpeBRepDS_EdgeInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeVertexInterference.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_TKI.hxx>
#include <TopOpeBRepDS_ProcessInterferencesTool.hxx>
#include <TopOpeBRepDS_EXPORT.hxx>
#include <TopOpeBRepDS_define.hxx>
#include <Precision.hxx>

#include <TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx>
#define MDSdmoiloi TopOpeBRepDS_DataMapOfIntegerListOfInterference
#define MDSdmiodmoiloi TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference

#ifdef OCCT_DEBUG
#include <TopOpeBRepDS_reDEB.hxx>
extern Standard_Boolean TopOpeBRepDS_GetcontextMKTONREG();
#endif
  
//------------------------------------------------------
Standard_EXPORT void FDS_repvg2
(const TopOpeBRepDS_DataStructure& BDS,const Standard_Integer EIX,const TopOpeBRepDS_Kind GT,TopOpeBRepDS_ListOfInterference& LI,TopOpeBRepDS_ListOfInterference& RLI)
//------------------------------------------------------
{
#ifdef OCCT_DEBUG
  Standard_Boolean TRC=DSREDUEDGETRCE(EIX);
  TRC = Standard_False; //xpu170898
#endif
  const TopoDS_Edge& E = TopoDS::Edge(BDS.Shape(EIX));
  Standard_Boolean isEd = BRep_Tool::Degenerated(E);
  if (isEd) return;
  
#ifdef OCCT_DEBUG
  if (TRC) cout<<endl<<"repvg1 E"<<EIX<<" <- "<<LI.Extent()<<endl;
  if (TRC) debredpvg(EIX);
#endif

  Standard_Boolean ispoint  = (GT == TopOpeBRepDS_POINT);
  Standard_Boolean isvertex = (GT == TopOpeBRepDS_VERTEX);

  Standard_Integer nLI = LI.Extent();

  TopOpeBRepDS_ListIteratorOfListOfInterference it1(LI);
  while (it1.More()) {
    const Handle(TopOpeBRepDS_Interference)& I1 = it1.Value();
    TopOpeBRepDS_Kind GT1,ST1; Standard_Integer G1,S1; TopAbs_ShapeEnum tsb1,tsa1; Standard_Integer isb1,isa1; 
    FDS_Idata(I1,tsb1,isb1,tsa1,isa1,GT1,G1,ST1,S1);
    if (tsb1 != TopAbs_FACE) {it1.Next(); continue;}
    if (tsa1 != TopAbs_FACE) {it1.Next(); continue;}
    if (GT1 != GT) {it1.Next(); continue;}

    // xpu121198 : raise in PRO16303, if G1 is a vertex same domain, make sure 
    // rk(G1)= rk(E1)
    Standard_Integer rkG1 = BDS.AncestorRank(G1);
    Standard_Integer rkS1 = BDS.AncestorRank(S1);
    if (isvertex && (rkG1 != rkS1)) {
      TopoDS_Shape oovG; Standard_Boolean issd = FUN_ds_getoov(BDS.Shape(G1),BDS,oovG);
      if (!issd) {it1.Next(); continue;} //!!NYIRAISE
      G1 = BDS.Shape(oovG);
    }

    const TopoDS_Edge& E1 = TopoDS::Edge(BDS.Shape(S1));
    const TopoDS_Face& F1 = TopoDS::Face(BDS.Shape(isb1));
    TopOpeBRepDS_Point PDS; TopoDS_Shape VDS;
    if      (ispoint)  PDS = BDS.Point(G1);
    else if (isvertex) VDS = BDS.Shape(G1);
    else Standard_Failure::Raise("TopOpeBRepDS FDS_repvg2 1");

    Standard_Boolean isEd1 = BRep_Tool::Degenerated(E1); if (isEd1) {it1.Next(); continue;}
    TopOpeBRepDS_ListIteratorOfListOfInterference it2(it1); if (it2.More()) it2.Next(); else {it1.Next(); continue; }

    TopOpeBRepDS_EdgeInterferenceTool EITool;
    Standard_Boolean memeS = Standard_False; TopOpeBRepDS_Transition TrmemeS; Standard_Boolean isComplex = Standard_False;

    while ( it2.More() ) {
      const Handle(TopOpeBRepDS_Interference)& I2 = it2.Value();
      TopOpeBRepDS_Kind GT2,ST2; Standard_Integer G2,S2; TopAbs_ShapeEnum tsb2,tsa2; Standard_Integer isb2,isa2; 
      FDS_Idata(I2,tsb2,isb2,tsa2,isa2,GT2,G2,ST2,S2);
      if (tsb2 != TopAbs_FACE) {it2.Next(); continue;}
      if (tsa2 != TopAbs_FACE) {it2.Next(); continue;}

      Standard_Boolean cond = (G1 == G2); if (!cond) { it2.Next(); continue; }
  
#ifdef OCCT_DEBUG
      if (TRC && isvertex && DSREDUEDGETRCE(BDS.Shape(VDS))) debreducerEV(EIX,BDS.Shape(VDS));
#endif
      
      const TopoDS_Edge& E2 = TopoDS::Edge(BDS.Shape(S2));
      Standard_Boolean isEd2 = BRep_Tool::Degenerated(E2);
      if (isEd2) {it2.Next(); continue;}

      memeS = (S1 == S2);
      memeS = memeS && (nLI == 2);

      if (!isComplex && memeS) {
	Standard_Boolean mktone = Standard_False;
#ifdef OCCT_DEBUG
	// NYI XPU : corriger la sequence suivante (avec mkTonE) qui produit une
	// NYI transition (ON,ON) dans le cas cto 009 B4 pour l'arete 6* / face *21
	// NYI aux PDS 1 et 5, au lieu de (IN,IN).
	mktone = TopOpeBRepDS_GetcontextMKTONREG();
	if (mktone) {
	  const TopOpeBRepDS_ListOfInterference& LOI = BDS.ShapeInterferences(E);
	  Standard_Real pbef,paft; Standard_Boolean isonper; 
	  Standard_Real pE = FDS_Parameter(I1);
	  Standard_Boolean ok = FDS_LOIinfsup(BDS,E,pE,GT1,G1,LOI,pbef,paft,isonper); 
	  if (!ok) {it2.Next();continue;}
	  Standard_Real pE1;     ok = FUN_tool_parE(E,pE,E1,pE1);   if (!ok) {it2.Next();continue;}
	  gp_Pnt2d uv; ok = FUN_tool_paronEF(E,pE,F1,uv); if (!ok) {it2.Next();continue;}
	  Standard_Real factor = 0.789;
	  TopOpeBRepTool_makeTransition MKT; 
	  TopAbs_State stb = TopAbs_UNKNOWN,sta = TopAbs_UNKNOWN; 
	  ok = MKT.Initialize(E,pbef,paft,pE, F1,uv, factor);
	  if (ok) ok = MKT.SetRest(E1,pE1);
	  if (ok) ok = MKT.MkTonE(stb,sta);
	  if (!ok) {it2.Next();continue;}  
	  TrmemeS.Before(stb); TrmemeS.After(sta);
	}
#endif
	if (!mktone) {
	  Standard_Real pE = FDS_Parameter(I1);
	  Standard_Boolean ok = FDS_stateEwithF2d(BDS,E,pE,GT1,G1,F1,TrmemeS); if (!ok) {it2.Next();continue;}
	}

#ifdef OCCT_DEBUG
	if(TRC){cout<<"memeS result ";TrmemeS.Dump(cout);cout<<endl;}
#endif
	LI.Remove(it2);
      } // !isComplex && memeS

      if (!isComplex && !memeS) {
	isComplex = Standard_True;
	EITool.Init(E,I1);
	if      (ispoint)  EITool.Add(E,PDS,I1);
	else if (isvertex) EITool.Add(E1,VDS,I1);
#ifdef OCCT_DEBUG
	if (TRC){cout<<endl<<"complex T2d E"<<EIX<<endl;I1->Dump(cout);cout<<endl;}
	if (TRC){cout<<"init ";Handle(TopOpeBRepDS_Interference) IBID = new TopOpeBRepDS_Interference();
		 EITool.Transition(IBID);IBID->Transition().Dump(cout);cout<<endl;}
#endif
      } // !isComplex && !memeS
      
      if (isComplex && !memeS) {
#ifdef OCCT_DEBUG
	if(TRC) I2->Dump(cout,"add ","\n");
#endif      
	if      (ispoint)  EITool.Add(E,PDS,I2);      
	else if (isvertex) EITool.Add(E2,VDS,I2); 
	LI.Remove(it2);
#ifdef OCCT_DEBUG
	if(TRC){cout<<"result ";Handle(TopOpeBRepDS_Interference) IBID = new TopOpeBRepDS_Interference();
		EITool.Transition(IBID);IBID->Transition().Dump(cout);cout<<endl;}
#endif
      } // (isComplex && !memeS)

      if (isComplex && memeS) {
	it2.Next();
#ifdef OCCT_DEBUG
#endif      
      } // (isComplex && memeS)

    } // it2
    
    if      (!isComplex && memeS) {
      const TopOpeBRepDS_Transition& T1 = I1->Transition();
      TrmemeS.Index(T1.Index()); I1->ChangeTransition() = TrmemeS;
      RLI.Append(I1); LI.Remove(it1);
    }
    else if (isComplex && !memeS)  {
      EITool.Transition(I1);
      RLI.Append(I1); LI.Remove(it1);
    }
    else {
      it1.Next();
    }

  } // it1
  
#ifdef OCCT_DEBUG
  if (TRC) cout<<"repvg2 E"<<EIX<<" -> reste "<<LI.Extent()<<" + reduit "<<RLI.Extent()<<endl<<endl;
#endif
}  // FDS_repvg2

//------------------------------------------------------
Standard_EXPORT void FDS_repvg
(const TopOpeBRepDS_DataStructure& BDS,const Standard_Integer EIX,const TopOpeBRepDS_Kind GT,TopOpeBRepDS_ListOfInterference& LOI,TopOpeBRepDS_ListOfInterference& RLOI)
//------------------------------------------------------
{
  TopOpeBRepDS_TKI tki; tki.FillOnGeometry(LOI);
#ifdef OCCT_DEBUG
  Standard_Boolean TRC=DSREDUEDGETRCE(EIX);
  TRC = Standard_False; //xpu170898
  if (TRC) cout<<endl<<"repvg E"<<EIX<<" <- "<<LOI.Extent()<<endl;
  if (TRC) tki.DumpTKIIterator("","\n");
  if (TRC) debredpvg(EIX);
#endif

  // xpu211098 : cto904F6 (e10,FTRA1=f14,FTRA2=f17)
  MDSdmoiloi mapITRASHA;
  TopOpeBRepDS_ListIteratorOfListOfInterference it(LOI);
  while (it.More()) {
    const Handle(TopOpeBRepDS_Interference)& I = it.Value();
    Standard_Integer isa = I->Transition().Index();
    Standard_Boolean bound = mapITRASHA.IsBound(isa);
    if (!bound) {
      TopOpeBRepDS_ListOfInterference loi; loi.Append(I);
      mapITRASHA.Bind(isa,loi);
    }
    else mapITRASHA.ChangeFind(isa).Append(I);
    it.Next();
  }
  
  LOI.Clear();
  MDSdmiodmoiloi itm(mapITRASHA);
  for (; itm.More(); itm.Next()){
    Standard_Integer isa = itm.Key();
    TopOpeBRepDS_ListOfInterference& loi = mapITRASHA.ChangeFind(isa);
    Standard_Integer nloi = loi.Extent();
    if (nloi < 2) continue;
    TopOpeBRepDS_ListOfInterference rloi; FDS_repvg2(BDS,EIX,GT,loi,rloi);
    LOI.Append(loi); RLOI.Append(rloi);
  }  

  /*LOI.Clear();
  for (tki.Init(); tki.More(); tki.Next()) {
    TopOpeBRepDS_Kind K; Standard_Integer G; tki.Value(K,G);
#ifdef OCCT_DEBUG
    if (TRC) {tki.DumpTKI(K,G,"","\n");debredpvg(EIX);}
#endif
    TopOpeBRepDS_ListOfInterference& loi = tki.ChangeValue(K,G); TopOpeBRepDS_ListOfInterference Rloi;
    Standard_Integer nloi = loi.Extent();
    if      (nloi == 0) continue;
    else if (nloi == 1) LOI.Append(loi);
    else {
      FDS_repvg2(BDS,EIX,GT,loi,Rloi);  
      LOI.Append(loi); RLOI.Append(Rloi);
    }
  }*/

#ifdef OCCT_DEBUG
  if (TRC) cout<<"repvg E"<<EIX<<" -> reste "<<LOI.Extent()<<" + reduit "<<RLOI.Extent()<<endl<<endl;
#endif
}

