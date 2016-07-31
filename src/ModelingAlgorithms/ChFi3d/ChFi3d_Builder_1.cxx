// Created on: 1993-12-15
// Created by: Isabelle GRIGNON
// Copyright (c) 1993-1999 Matra Datavision
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
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_HBuilder.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Spine.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SurfData.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_HElSpine.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HCurve2d.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_Line.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <ModelingAlgorithms/Blend/Blend_Function.hxx>
#include <ModelingAlgorithms/Blend/Blend_FuncInv.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#include <ModelingAlgorithms/Blend/Blend_SurfRstFunction.hxx>
#include <ModelingAlgorithms/Blend/Blend_SurfPointFuncInv.hxx>
#include <ModelingAlgorithms/Blend/Blend_SurfCurvFuncInv.hxx>
#include <ModelingAlgorithms/Blend/Blend_RstRstFunction.hxx>
#include <ModelingAlgorithms/Blend/Blend_CurvPointFuncInv.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Stripe.hxx>
#include <ModelingAlgorithms/BRepTopAdaptor/BRepTopAdaptor_TopolTool.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SequenceOfSurfData.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_ListOfStripe.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_CommonPoint.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingAlgorithms/AppBlend/AppBlend_Approx.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <ModelingAlgorithms/ChFi3d/ChFi3d_Builder.hxx>

#include <Mathematics/Precision/Precision.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>

#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>

#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#include <ModelingData/BRepLProp/BRepLProp_SLProps.hxx>

#include <ModelingData/TopAbs/TopAbs.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>

#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_Surface.hxx>

#include <ModelingAlgorithms/ChFiDS/ChFiDS_ErrorStatus.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_State.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Spine.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_FilSpine.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_HData.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SurfData.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Regul.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_ListIteratorOfRegularities.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_ListIteratorOfListOfStripe.hxx>

#include <ModelingAlgorithms/ChFi3d/ChFi3d.hxx>
#include <ModelingAlgorithms/ChFi3d/ChFi3d_Builder_0.hxx>

#include <ModelingAlgorithms/LocalAnalysis/LocalAnalysis_SurfaceContinuity.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_TOOL.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean ChFi3d_GetcontextFORCEBLEND(); 
#endif

static TopOpeBRepDS_BuildTool mkbuildtool()
{
  TopOpeBRepTool_GeomTool GT2(TopOpeBRepTool_BSPLINE1,
			      Standard_True,
			      Standard_False,
			      Standard_False);
  TopOpeBRepDS_BuildTool BT(GT2);
  BT.OverWrite(Standard_False);
  BT.Translate(Standard_False);
  return BT;
}

//  Modified by Sergey KHROMOV - Tue Dec 18 18:02:55 2001 Begin
Standard_Boolean isTangentFaces(const TopoDS_Edge &theEdge,
				const TopoDS_Face &theFace1,
				const TopoDS_Face &theFace2)
{
  if (BRep_Tool::Continuity( theEdge, theFace1, theFace2 ) != GeomAbs_C0)
    return Standard_True;

  Standard_Real aFirst;
  Standard_Real aLast;
    
// Obtaining of pcurves of edge on two faces.
  const Handle(Geom2d_Curve) aC2d1 = BRep_Tool::CurveOnSurface
                                                (theEdge, theFace1, aFirst, aLast);
  const Handle(Geom2d_Curve) aC2d2 = BRep_Tool::CurveOnSurface
                                                (theEdge, theFace2, aFirst, aLast);
  if (aC2d1.IsNull() || aC2d2.IsNull())
    return Standard_False;

// Obtaining of two surfaces from adjacent faces.
  Handle(Geom_Surface) aSurf1 = BRep_Tool::Surface(theFace1);
  Handle(Geom_Surface) aSurf2 = BRep_Tool::Surface(theFace2);

  if (aSurf1.IsNull() || aSurf2.IsNull())
    return Standard_False;

// Computation of the number of samples on the edge.
  BRepAdaptor_Surface              aBAS1(theFace1);
  BRepAdaptor_Surface              aBAS2(theFace2);
  Handle(BRepAdaptor_HSurface)     aBAHS1      = new BRepAdaptor_HSurface(aBAS1);
  Handle(BRepAdaptor_HSurface)     aBAHS2      = new BRepAdaptor_HSurface(aBAS2);
  Handle(BRepTopAdaptor_TopolTool) aTool1      = new BRepTopAdaptor_TopolTool(aBAHS1);
  Handle(BRepTopAdaptor_TopolTool) aTool2      = new BRepTopAdaptor_TopolTool(aBAHS2);
  Standard_Integer                 aNbSamples1 =     aTool1->NbSamples();
  Standard_Integer                 aNbSamples2 =     aTool2->NbSamples();
  Standard_Integer                 aNbSamples  =     Max(aNbSamples1, aNbSamples2);


// Computation of the continuity.
  Standard_Real    aPar;
  Standard_Real    aDelta = (aLast - aFirst)/(aNbSamples - 1);
  Standard_Integer i, nbNotDone = 0;

  for (i = 1, aPar = aFirst; i <= aNbSamples; i++, aPar += aDelta) {
    if (i == aNbSamples) aPar = aLast;

    LocalAnalysis_SurfaceContinuity aCont(aC2d1,  aC2d2,  aPar,
					  aSurf1, aSurf2, GeomAbs_G1,
					  0.001, 0.001, 0.1, 0.1, 0.1);
    if (!aCont.IsDone())
      {
	nbNotDone++;
	continue;
      }
    if (!aCont.IsG1())
      return Standard_False;
  }
  
  if (nbNotDone == aNbSamples)
    return Standard_False;

  //Compare normals of tangent faces in the middle point
  Standard_Real MidPar = (aFirst + aLast)/2.;
  gp_Pnt2d uv1 = aC2d1->Value(MidPar);
  gp_Pnt2d uv2 = aC2d2->Value(MidPar);
  gp_Dir normal1, normal2;
  TopOpeBRepTool_TOOL::Nt( uv1, theFace1, normal1 );
  TopOpeBRepTool_TOOL::Nt( uv2, theFace2, normal2 );
  Standard_Real dot = normal1.Dot(normal2);
  if (dot < 0.)
    return Standard_False;
  return Standard_True;
}
//  Modified by Sergey KHROMOV - Tue Dec 18 18:02:56 2001 End

//=======================================================================
//function : ChFi3d_Builder
//purpose  : 
//=======================================================================
ChFi3d_Builder::ChFi3d_Builder(const TopoDS_Shape& S,
			       const Standard_Real Ta) :  
   done(Standard_False), myShape(S)
{
  myDS = new TopOpeBRepDS_HDataStructure();
  myCoup = new TopOpeBRepBuild_HBuilder(mkbuildtool());
  myEFMap.Fill(S,TopAbs_EDGE,TopAbs_FACE);
  myESoMap.Fill(S,TopAbs_EDGE,TopAbs_SOLID);
  myEShMap.Fill(S,TopAbs_EDGE,TopAbs_SHELL);
  myVFMap.Fill(S,TopAbs_VERTEX,TopAbs_FACE);
  myVEMap.Fill(S,TopAbs_VERTEX,TopAbs_EDGE);
  SetParams(Ta,1.e-4,1.e-5,1.e-4,1.e-5,1.e-3);
  SetContinuity(GeomAbs_C1, Ta);
}

//=======================================================================
//function : SetParams
//purpose  : 
//=======================================================================

void ChFi3d_Builder::SetParams(const Standard_Real Tang, 
			       const Standard_Real Tesp, 
			       const Standard_Real T2d, 
			       const Standard_Real TApp3d, 
			       const Standard_Real TolApp2d, 
			       const Standard_Real Fleche)
{
  angular = Tang;
  tolesp = Tesp;
  tol2d =  T2d;
  tolapp3d = TApp3d;
  tolapp2d = TolApp2d;
  fleche = Fleche;
}

//=======================================================================
//function : SetContinuity
//purpose  : 
//=======================================================================

void ChFi3d_Builder::SetContinuity(const GeomAbs_Shape InternalContinuity,
				   const Standard_Real AngularTolerance)
{
  myConti = InternalContinuity;
  tolappangle = AngularTolerance;
}

//=======================================================================
//function : IsDone
//purpose  : 
//=======================================================================

Standard_Boolean ChFi3d_Builder::IsDone() const 
{
  return done;
}

//=======================================================================
//function : Shape
//purpose  : 
//=======================================================================

TopoDS_Shape ChFi3d_Builder::Shape()const
{
  Standard_NoSuchObject_Raise_if(!done,"");  
  return myShapeResult;
}

//=======================================================================
//function : NbFaultyContours
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::NbFaultyContours() const
{
  return badstripes.size();
}

//=======================================================================
//function : FaultyContour
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::FaultyContour(const Standard_Integer I) const
{
  Standard_Integer k = 0;
  Handle(ChFiDS_Stripe) st;
  for (ChFiDS_ListOfStripe::const_iterator itel(badstripes.begin());itel != badstripes.end(); ++itel) {
    k += 1;
    if(k == I) {
      st = *itel;
      break;
    }
  }
  if(st.IsNull()) return 0;
  k = 0;
  for (auto S : myListStripe) {
    k += 1;
    if(st == S) return k;
  }
  return 0;
}

//=======================================================================
//function : NbComputedSurfaces
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::NbComputedSurfaces(const Standard_Integer IC) const
{
  Standard_Integer k = 0;
  Handle(ChFiDS_Stripe) st;
  for (ChFiDS_ListOfStripe::const_iterator itel(myListStripe.begin());itel != myListStripe.end(); ++itel) {
    k += 1;
    if(k == IC) {
      st = *itel;
      break;
    }
  }
  if(st.IsNull()) return 0;
  if(st->Spine().IsNull()) return 0;
  Handle(ChFiDS_HData) hd = st->SetOfSurfData();
  if(hd.IsNull()) return 0;
  return hd->Length();
}

//=======================================================================
//function : ComputedSurface
//purpose  : 
//=======================================================================

Handle(Geom_Surface) ChFi3d_Builder::ComputedSurface(const Standard_Integer IC,
						     const Standard_Integer IS) const
{
  Standard_Integer k = 0;
  Handle(ChFiDS_Stripe) st;
  for (ChFiDS_ListOfStripe::const_iterator itel(myListStripe.begin());itel != myListStripe.end(); ++itel) {
    k += 1;
    if(k == IC) {
      st = *itel;
      break;
    }
  }
  Handle(ChFiDS_HData) hd = st->SetOfSurfData();
  Standard_Integer isurf=hd->Value(IS)->Surf();
  return  myDS->Surface(isurf).Surface();
}

//=======================================================================
//function : NbFaultyVertices
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::NbFaultyVertices() const
{
  return badvertices.size();
}

//=======================================================================
//function : FaultyVertex
//purpose  : 
//=======================================================================

TopoDS_Vertex ChFi3d_Builder::FaultyVertex(const Standard_Integer IV) const
{
  TopoDS_Vertex V;
  Standard_Integer k = 0;
  for (auto S : badvertices) {
    k += 1;
    if(k == IV) {
      V = TopoDS::Vertex(S);
      break;
    }
  }
  return V;
}

//=======================================================================
//function : HasResult
//purpose  : 
//=======================================================================

Standard_Boolean ChFi3d_Builder::HasResult() const 
{
  return hasresult;
}

//=======================================================================
//function : BadShape
//purpose  : 
//=======================================================================

TopoDS_Shape ChFi3d_Builder::BadShape()const
{
  Standard_NoSuchObject_Raise_if(!hasresult,"");  
  return badShape;
}

//=======================================================================
//function : StripeStatus
//purpose  : 
//=======================================================================

ChFiDS_ErrorStatus ChFi3d_Builder::StripeStatus(const Standard_Integer IC)const
{  
  Standard_Integer k =0;
  Handle(ChFiDS_Stripe) st;
  for (ChFiDS_ListOfStripe::const_iterator itel(myListStripe.begin());itel != myListStripe.end(); ++itel) {
    k += 1;
    if(k == IC) {
      st = *itel;
      break;
    }
  }
  ChFiDS_ErrorStatus stat=st->Spine()->ErrorStatus();
  return stat;
}

//=======================================================================
//function : Builder
//purpose  : 
//=======================================================================

Handle(TopOpeBRepBuild_HBuilder) ChFi3d_Builder::Builder()const
{
  return myCoup;
}

//=======================================================================
//function : ChFi3d_FaceTangency
//purpose  : determine if the faces opposing to edges are tangent
//           to go from opposing faces on e0 to opposing faces 
//           on e1, consider all faces starting at a common top.
//=======================================================================

Standard_Boolean ChFi3d_Builder::FaceTangency(const TopoDS_Edge& E0,
					      const TopoDS_Edge& E1,
					      const TopoDS_Vertex& V) const
{
  TopoDS_Edge Ec;
  Standard_Integer Nbf;
  TopoDS_Face F[2];

  //It is checked if the connection is not on a regular edge.
  Nbf = 0;
  for (auto S1 : myEFMap(E1)) {
#warning simplify!
    if (Nbf>1) 
      Standard_ConstructionError::Raise("ChFi3d_Builder:only 2 faces");
    F[Nbf] = TopoDS::Face(S1);
    Nbf++;
  }      
  if(Nbf < 2) return Standard_False;
//  Modified by Sergey KHROMOV - Fri Dec 21 17:44:19 2001 Begin
//if (BRep_Tool::Continuity(E1,F[0],F[1]) != GeomAbs_C0) {
  if (isTangentFaces(E1,F[0],F[1])) {
//  Modified by Sergey KHROMOV - Fri Dec 21 17:44:21 2001 End
    return Standard_False;
  }

  for (auto S : myVEMap(V)) {
    Ec = TopoDS::Edge(S);
    if (!Ec.IsSame(E0) && !Ec.IsSame(E1) && 
	Ec.Orientation() != TopAbs_INTERNAL && 
	Ec.Orientation() != TopAbs_EXTERNAL &&
	!BRep_Tool::Degenerated(Ec)) {
#warning simplify/factor!
      Nbf = 0;
      for (auto Sc : myEFMap(Ec)) {
	if (Nbf>1) 
	  Standard_ConstructionError::Raise("ChFi3d_Builder:only 2 faces");
	F[Nbf] = TopoDS::Face(S);
	Nbf++;
      }      
      if(Nbf < 2) return Standard_False;
//  Modified by Sergey KHROMOV - Tue Dec 18 18:10:40 2001 Begin
//    if (BRep_Tool::Continuity(Ec,F[0],F[1]) < GeomAbs_G1) {
      if (!isTangentFaces(Ec,F[0],F[1])) {
//  Modified by Sergey KHROMOV - Tue Dec 18 18:10:41 2001 End
	return Standard_False;
      }
    }
  }
  return Standard_True;
  
}


//=======================================================================
//function : TangentExtremity
//purpose  : Test if 2 faces are tangent at the end of an edge
//=======================================================================
static Standard_Boolean TangentExtremity(const TopoDS_Vertex&                V,
					 const TopoDS_Edge&                  E,
					 const Handle(BRepAdaptor_HSurface)& hs1,
					 const Handle(BRepAdaptor_HSurface)& hs2,
//					 const Standard_Real                 t3d,
					 const Standard_Real                 tang)
{
  TopoDS_Face f1 = hs1->ChangeSurface().Face();
  TopAbs_Orientation O1 = f1.Orientation();
  f1.Orientation(TopAbs_FORWARD);
  TopoDS_Face f2 = hs2->ChangeSurface().Face();
  TopAbs_Orientation O2 = f2.Orientation();
  f2.Orientation(TopAbs_FORWARD);
  TopoDS_Edge e1 = E, e2 = E;
  e1.Orientation(TopAbs_FORWARD);
  e2.Orientation(TopAbs_FORWARD);
  if(f1.IsSame(f2) && BRep_Tool::IsClosed(e1,f1))
    e2.Orientation(TopAbs_REVERSED);
  Standard_Real p1 = BRep_Tool::Parameter(V,e1,f1);
  Standard_Real p2 = BRep_Tool::Parameter(V,e2,f2);
  Standard_Real u,v,f,l, Eps = 1.e-9;
  gp_Vec n1, n2;//   gp_Pnt pt1,pt2;
  Handle(Geom2d_Curve) pc1 = BRep_Tool::CurveOnSurface(e1,f1,f,l);
  pc1->Value(p1).Coord(u,v);
  BRepLProp_SLProps theProp1(hs1->ChangeSurface(), u, v, 1, Eps);
  if  (theProp1.IsNormalDefined()) {
    n1.SetXYZ(theProp1.Normal().XYZ());
    if (O1 == TopAbs_REVERSED) n1.Reverse();
  }
  else return Standard_False; // It is not known...

 
  Handle(Geom2d_Curve) pc2 = BRep_Tool::CurveOnSurface(e2,f2,f,l);
  pc2->Value(p2).Coord(u,v);
  BRepLProp_SLProps theProp2(hs2->ChangeSurface(), u, v, 1, Eps);
  if  (theProp2.IsNormalDefined()) {
    n2.SetXYZ(theProp2.Normal().XYZ());
    if(O2 == TopAbs_REVERSED) n2.Reverse();
  }
  else return Standard_False; //  It is not known...

  return (n1.Angle(n2) < tang);
}

//=======================================================================
//function : TangentOnVertex
//purpose  : Test if support faces of an edge are tangent at end.
//=======================================================================
static Standard_Boolean TangentOnVertex(const TopoDS_Vertex&    V,
					const TopoDS_Edge&      E,
					const ChFiDS_Map&       EFMap,
					const Standard_Real     tang)
{
  TopoDS_Face ff1,ff2;
  ChFi3d_conexfaces(E,ff1,ff2,EFMap);
  if(ff1.IsNull() || ff2.IsNull()) return 0;
  Handle(BRepAdaptor_HSurface) S1 = new (BRepAdaptor_HSurface)(ff1);
  Handle(BRepAdaptor_HSurface) S2 = new (BRepAdaptor_HSurface)(ff2);
  return TangentExtremity(V, E, S1, S2, tang);
}

//=======================================================================
//function : PerformExtremity
//purpose  : In case if PerformElement returned BreakPoint at one or  
//           another extremity, it is attempted to refine 
//           depending on concavities between neighbour faces of the top.
//=======================================================================

void ChFi3d_Builder::PerformExtremity (const Handle(ChFiDS_Spine)& Spine) 
{
  for(Standard_Integer ii = 1; ii <= 2; ii++){
    TopoDS_Edge E[3],Ec;
    TopoDS_Vertex V;
    ChFiDS_State sst;
    Standard_Integer iedge;
    Handle(BRepAdaptor_HSurface) hs1,hs2;
    if(ii == 1){
      sst = Spine->FirstStatus();
      iedge = 1;
      V = Spine->FirstVertex();
    }
    else{
      sst = Spine->LastStatus(); 
      iedge = Spine->NbEdges();
      E[0] = Spine->Edges(iedge);
      V = Spine->LastVertex();
    }
    //Before all it is checked if the tangency is not dead.
    E[0] = Spine->Edges(iedge);
    ConexFaces (Spine,iedge,0,hs1,hs2);
    if(TangentExtremity(V,E[0],hs1,hs2,angular)){
      Spine->SetTangencyExtremity(Standard_True, (ii == 1));
    }

    if(sst == ChFiDS_BreakPoint){
      Standard_Integer i = 0, j;
      Standard_Boolean sommetpourri = Standard_False;
      for (auto S : myVEMap(V)) {
	Ec = TopoDS::Edge(S);
	Standard_Boolean bonedge = !BRep_Tool::Degenerated(Ec);
	if(bonedge){
	  TopoDS_Vertex v1,v2;
	  TopExp::Vertices(Ec,v1,v2);
	  Standard_Boolean eclosed = v1.IsSame(v2);
	  Standard_Integer nboc = 0;
	  for(j = 0; j <= i && bonedge; j++){ 
	    if(!eclosed) bonedge = !Ec.IsSame(E[j]); 
	    else if(Ec.IsSame(E[j])){
	      nboc++;
	      bonedge = nboc<2;
	    }
	  }
	}
	if(bonedge){
	  if( i < 2 ){
	    i++;
	    E[i] = Ec;
	  }
	  else{
#ifdef OCCT_DEBUG
	    cout<<"top has more than 3 edges"<<endl;
#endif
	    sommetpourri = Standard_True;
	    break;
	  }
	}
      }
      if(i != 2) sommetpourri = Standard_True;
      if(!sommetpourri){
	sst = ChFi3d_EdgeState(E,myEFMap);
      }
      if(ii==1)Spine->SetFirstStatus(sst);
      else Spine->SetLastStatus(sst);
    }
  }
  
  if (!Spine->IsPeriodic()) {
    TopTools_ListIteratorOfListOfShape Jt;
    Standard_Integer nbf = 0, jf = 0;
    for (const TopoDS_Shape& cur : myVFMap(Spine->FirstVertex())) {
      jf++;
      Standard_Integer kf = 1;
      for (auto S : myVFMap(Spine->FirstVertex())) {
	if (jf <= kf) break;
	if(cur.IsSame(S)) break;
	kf++;
      }
      if(kf == jf) nbf++;
    }
    if(nbf>3) {
      Spine->SetFirstStatus(ChFiDS_BreakPoint);
#ifdef OCCT_DEBUG
      cout<<"top has : "<<nbf<<" faces."<<endl;
#endif
    }
    nbf = 0, jf = 0;
    for (const TopoDS_Shape& cur : myVFMap(Spine->LastVertex())) {
      jf++;
      Standard_Integer kf = 1;
      for (auto S : myVFMap(Spine->LastVertex())) {
	if (jf <= kf) break;
	if(cur.IsSame(S)) break;
	kf++;
      }
      if(kf == jf) nbf++;
    }
    if(nbf>3) {
      Spine->SetLastStatus(ChFiDS_BreakPoint);
#ifdef OCCT_DEBUG
      cout<<"top has : "<<nbf<<" faces."<<endl;
#endif
    }
  }
}

//=======================================================================
//function : PerformElement
//purpose  :  find all mutually tangent edges ;
// Each edge has 2 opposing faces. For 2 adjacent tangent edges it is required that 
// the opposing faces were tangent.
//=======================================================================

Standard_Boolean ChFi3d_Builder::PerformElement(const Handle(ChFiDS_Spine)& Spine) 
{
  Standard_Real ta = angular;
  TopTools_ListIteratorOfListOfShape It;
  Standard_Integer Nbface;
  TopTools_ListIteratorOfListOfShape Jt;
  Standard_Real Wl,Wf;
  Standard_Boolean degeneOnEc;
  gp_Pnt P2;
  gp_Vec V1,V2;
  TopoDS_Vertex Ve1,VStart,FVEc,LVEc,FVEv,LVEv;
  TopoDS_Edge Ev,Ec(Spine->Edges(1));
  if(BRep_Tool::Degenerated(Ec)) return 0;
  //it is checked if the edge is a cut edge
  TopoDS_Face ff1,ff2;
  ChFi3d_conexfaces(Ec,ff1,ff2,myEFMap);
  if(ff1.IsNull() || ff2.IsNull()) return 0;
//  Modified by Sergey KHROMOV - Fri Dec 21 17:46:22 2001 End
//if(BRep_Tool::Continuity(Ec,ff1,ff2) != GeomAbs_C0) return 0;
  if (isTangentFaces(Ec,ff1,ff2)) return 0;
//  Modified by Sergey KHROMOV - Fri Dec 21 17:46:24 2001 Begin
  
  BRepAdaptor_Curve CEc,CEv;
  TopAbs_Orientation curor = Ec.Orientation();
  TopExp::Vertices(Ec,VStart,LVEc);


  Standard_Boolean Fini = Standard_False;
  Standard_Integer Nb;
  ChFiDS_State CurSt = ChFiDS_Closed;
  if (VStart.IsSame(LVEc)) {//case if only one edge is closed
    CEc.Initialize(Ec);
    Wl = BRep_Tool::Parameter(VStart,Ec);
    CEc.D1(Wl,P2,V1);
    Wl = BRep_Tool::Parameter(LVEc,Ec);
    CEc.D1(Wl,P2,V2);
    if (V1.IsParallel(V2,ta)) {
      if (FaceTangency(Ec,Ec,VStart)) {
	CurSt = ChFiDS_Closed; 
      }
      else {
	CurSt = ChFiDS_BreakPoint; 
      }	
    }
    else {
      CurSt = ChFiDS_BreakPoint; 
    }
    Spine->SetLastStatus(CurSt);
    Spine->SetFirstStatus(CurSt);
  }
  else { // Downstream progression
    FVEc = VStart;
    TopAbs_Orientation Or1;
    while (!Fini) {
      CurSt = ChFiDS_FreeBoundary;
      Wl = BRep_Tool::Parameter(LVEc,Ec);
      degeneOnEc = TangentOnVertex(LVEc, Ec, myEFMap, ta);
      CEc.Initialize(Ec);
      CEc.D1(Wl,P2,V1);
      Nb = Spine->NbEdges();

      for (auto S : myVEMap(LVEc)) {
	Ev = TopoDS::Edge(S);
	if (!Ev.IsSame(Ec) && !BRep_Tool::Degenerated(Ev)){
	  TopExp::Vertices(Ev,FVEv,LVEv);
	  if (LVEc.IsSame(LVEv)) {
	    Ve1 = FVEv;
	    FVEv = LVEv;
	    LVEv = Ve1;
	    Or1 = TopAbs_REVERSED;
	  }
	  else Or1 = TopAbs_FORWARD;

	  Wf = BRep_Tool::Parameter(FVEv,Ev);
	  CEv.Initialize(Ev);
	  CEv.D1(Wf,P2,V2);   
	  Standard_Real av1v2 = V1.Angle(V2);
	  Standard_Boolean rev = (Or1 != curor);    
	  Standard_Boolean OnAjoute = Standard_False;
	  if (FaceTangency(Ec,Ev,FVEv)) {
	    // there is no need of tolerance
	    // to make a decision (PRO9486) the regularity is enough.
            // However, the abcense of turn-back is checked (PRO9810)
	    OnAjoute = ((!rev && av1v2 < M_PI/2) 
			||(rev && av1v2 > M_PI/2));
            // mate attention to the single case (cf CTS21610_1)
            if (OnAjoute && (degeneOnEc || 
                TangentOnVertex(LVEc, Ev,myEFMap, ta)) )
	      OnAjoute=((!rev && av1v2 < ta) || (rev && (M_PI - av1v2) < ta));
	  }
	  if (OnAjoute) {
	    Fini = Standard_False; // If this can be useful (Cf PRO14713)
	    Ec = Ev; 
//	    Ec = TopoDS::Edge(Ev); 
	    Ec.Orientation(Or1);
	    Wl = Wf; LVEc = LVEv; 
	    Spine->SetEdges(Ec);
	    curor = Or1;
	    if (VStart.IsSame(LVEv)) {
	      if (FaceTangency(Ev,Spine->Edges(1),LVEv)) {
		CurSt = ChFiDS_Closed; Fini = Standard_True;
	      }
	      else {
		CurSt = ChFiDS_BreakPoint;Fini = Standard_True;
	      }
	    }
	    break;
	  }
	  else {
	    Nbface = myEFMap(Ev).size();
	    if (Nbface> 1) CurSt = ChFiDS_BreakPoint;
	    Fini = ((!rev && av1v2 < ta) || (rev && (M_PI - av1v2) < ta)); 
	  }
	} 
      } 
      Fini = Fini || (Nb == Spine->NbEdges());
    }
    Spine->SetLastStatus(CurSt);
    if (CurSt == ChFiDS_Closed) {
      Spine->SetFirstStatus(CurSt);
    }
    else {// Upstream progression
      Fini = Standard_False;
      Ec = Spine->Edges(1);
      curor = Ec.Orientation();
      FVEc = VStart;
      while (!Fini) {
	CurSt = ChFiDS_FreeBoundary;
	Wl = BRep_Tool::Parameter(FVEc,Ec);
	degeneOnEc = TangentOnVertex(FVEc, Ec, myEFMap, ta);
	CEc.Initialize(Ec);
	CEc.D1(Wl,P2,V1);
	Nb = Spine->NbEdges();

	for (auto S : myVEMap(FVEc)) {
	  Ev = TopoDS::Edge(S);
	  if (!Ev.IsSame(Ec) && !BRep_Tool::Degenerated(Ev)) {
	    TopExp::Vertices(Ev,FVEv,LVEv);
	    if (FVEc.IsSame(FVEv)) {
	      Ve1 = FVEv;
	      FVEv = LVEv;
	      LVEv = Ve1;
	      Or1 = TopAbs_REVERSED;
	    }
	    else {
	      Or1 = TopAbs_FORWARD;
	    }
	    Wf = BRep_Tool::Parameter(LVEv,Ev);
	    CEv.Initialize(Ev);
	    CEv.D1(Wf,P2,V2);
	    Standard_Real av1v2 = V1.Angle(V2);
	    Standard_Boolean rev = (Or1 != curor);
            Standard_Boolean OnAjoute =  Standard_False;
	    if (FaceTangency(Ec,Ev,LVEv)) {
	      OnAjoute = ((!rev && av1v2 < M_PI/2) 
			||(rev && av1v2 > M_PI/2));
            if (OnAjoute && (degeneOnEc || 
                TangentOnVertex(FVEc, Ev,myEFMap, ta)) )
	      OnAjoute=((!rev && av1v2 < ta) || (rev && (M_PI-av1v2) < ta));
	    }
	    if  (OnAjoute) {
	      Ec = Ev; 
//	      Ec = TopoDS::Edge(Ev); 
	      Ec.Orientation(Or1);
	      Wl = Wf; FVEc = FVEv; 
	      Spine->PutInFirst(Ec);
	      curor = Or1;
	      break;
	    }
	    else {
	      Nbface = myEFMap(Ev).size();
	      if (Nbface> 1) CurSt = ChFiDS_BreakPoint;
	      Fini = ((!rev && av1v2 < ta) || (rev && (M_PI - av1v2) < ta));
	    }
	  } 
	} 
	Fini = Fini || (Nb == Spine->NbEdges());
      }
      Spine->SetFirstStatus(CurSt);
    }
  }
  return 1;
}

//=======================================================================
//function : Remove
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::Remove(const TopoDS_Edge& E)
{
  for (ChFiDS_ListIteratorOfListOfStripe itel(myListStripe.begin()); itel != myListStripe.end(); ++itel) {
    const Handle(ChFiDS_Spine)& sp = (*itel)->Spine();
    for (Standard_Integer j = 1; j <= sp->NbEdges(); j++){
      if (E.IsSame(sp->Edges(j))){
	myListStripe.erase(itel);
	return;
      }
    }
  }
}


//=======================================================================
//function : Value
//purpose  : 
//=======================================================================

Handle(ChFiDS_Spine) ChFi3d_Builder::Value
(const Standard_Integer I)const 
{
  ChFiDS_ListOfStripe::const_iterator itel(myListStripe.begin());
  for (Standard_Integer ic = 1; ic < I; ic++) {++itel;}
  return (*itel)->Spine();
}

//=======================================================================
//function : NbElements
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::NbElements()const 
{
  Standard_Integer i = 0;
  for (auto Stripe : myListStripe) {
    const Handle(ChFiDS_Spine)& sp = Stripe->Spine();
    if(sp.IsNull()) break;
    i++;
  }
  return i;
}

//=======================================================================
//function : Contains
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::Contains(const TopoDS_Edge& E)const
{
  Standard_Integer i = 1,j;
  for (auto Stripe : myListStripe){
    const Handle(ChFiDS_Spine)& sp = Stripe->Spine();
    if(sp.IsNull()) break;
    for (j = 1; j <= sp->NbEdges(); j++){
      if(E.IsSame(sp->Edges(j))) return i;
    }
    ++i;
  }
  return 0;
}

//=======================================================================
//function : Contains
//purpose  : 
//=======================================================================

Standard_Integer ChFi3d_Builder::Contains(const TopoDS_Edge& E,
					  Standard_Integer&  IndexInSpine)const
{
  Standard_Integer i = 1,j;
  IndexInSpine = 0;
  for (auto Stripe : myListStripe){
    const Handle(ChFiDS_Spine)& sp = Stripe->Spine();
    if(sp.IsNull()) break;
    for (j = 1; j <= sp->NbEdges(); j++){
      if(E.IsSame(sp->Edges(j)))
	{
	  IndexInSpine = j;
	  return i;
	}
    }
    ++i;
  }
  return 0;
}

//=======================================================================
//function : Length
//purpose  : 
//=======================================================================

Standard_Real ChFi3d_Builder::Length(const Standard_Integer IC)const
{
  if(IC <= NbElements()){
    const Handle(ChFiDS_Spine)& sp = Value(IC);
    return sp->LastParameter(sp->NbEdges());
  }
  return -1;
}


//=======================================================================
//function : FirstVertex
//purpose  : 
//=======================================================================

TopoDS_Vertex ChFi3d_Builder::FirstVertex(const Standard_Integer IC) const
{
  if(IC <= NbElements()){
    return Value(IC)->FirstVertex();
  }
  return TopoDS_Vertex();
}

//=======================================================================
//function : LastVertex
//purpose  : 
//=======================================================================

TopoDS_Vertex ChFi3d_Builder::LastVertex(const Standard_Integer IC) const
{
  if(IC <= NbElements()){
    return Value(IC)->LastVertex();
  }
  return TopoDS_Vertex();
}

//=======================================================================
//function : Abscissa
//purpose  : 
//=======================================================================

Standard_Real ChFi3d_Builder::Abscissa(const Standard_Integer IC,
				       const TopoDS_Vertex& V) const
{
  if(IC <= NbElements()){
    return Value(IC)->Absc(V);
  }
  return -1;
}

//=======================================================================
//function : RelativeAbscissa
//purpose  : 
//=======================================================================

Standard_Real ChFi3d_Builder::RelativeAbscissa(const Standard_Integer IC,
					       const TopoDS_Vertex& V) const
{
  if(IC <= NbElements()){
    return Abscissa(IC,V)/Length(IC);
  }
  return -1;
}

//=======================================================================
//function : Closed
//purpose  : 
//=======================================================================

Standard_Boolean ChFi3d_Builder::Closed(const Standard_Integer IC)const
{
  if(IC <= NbElements()){
    return Value(IC)->IsClosed();
  }
  return Standard_False;
}

//=======================================================================
//function : ClosedAndTangent
//purpose  : 
//=======================================================================

Standard_Boolean ChFi3d_Builder::ClosedAndTangent
(const Standard_Integer IC)const
{
  if(IC <= NbElements()){
    return Value(IC)->IsPeriodic();
  }
  return Standard_False;
}

