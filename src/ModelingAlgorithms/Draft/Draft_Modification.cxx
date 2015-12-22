// Created on: 1994-08-30
// Created by: Jacques GOUSSARD
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

#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Draft_Modification.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Draft_Modification)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BRepTools_Modification),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Draft_Modification)
IMPLEMENT_DOWNCAST(Draft_Modification,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Draft_Modification)

#include <BRep_Tool.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <TopExp_Explorer.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>

#include <Geometry/Geom/Geom_Surface.hxx>
#include <Geometry/Geom/Geom_RectangularTrimmedSurface.hxx>
#include <Geometry/Geom/Geom_CylindricalSurface.hxx>
#include <Geometry/Geom/Geom_SphericalSurface.hxx>
#include <Geometry/Geom/Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geometry/Geom/Geom_ConicalSurface.hxx>
#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>
#include <Geometry/Geom/Geom_Ellipse.hxx>

#include <Draft_DataMapIteratorOfDataMapOfFaceFaceInfo.hxx>
#include <Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_VertexInfo.hxx>

#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>

#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>

#include <TopoDS.hxx>
#include <TopExp.hxx>
#include <Geometry/GeomProjLib/GeomProjLib.hxx>

#include <Precision.hxx>

#include <BRep_Builder.hxx>
#include <BRepTools.hxx>

//=======================================================================
//function : Draft_Modification
//purpose  : 
//=======================================================================

Draft_Modification::Draft_Modification (const TopoDS_Shape& S) :
       myComp(Standard_False),myShape(S)
{
  TopExp::MapShapesAndAncestors(myShape,TopAbs_EDGE,TopAbs_FACE,myEFMap);
}



//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================

void Draft_Modification::Clear ()
{
  myComp = Standard_False;
  myFMap.Clear();
  myEMap.Clear();
  myVMap.Clear();
  myEFMap.Clear();
  badShape.Nullify();
  errStat = Draft_NoError;
}



//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void Draft_Modification::Init(const TopoDS_Shape& S)
{
  myShape = S;
  Clear();
  TopExp::MapShapesAndAncestors(myShape,TopAbs_EDGE,TopAbs_FACE,myEFMap);
}

//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::Add(const TopoDS_Face& F,
					 const gp_Dir& Direction,
					 const Standard_Real Angle,
					 const gp_Pln& NeutralPlane,
					 const Standard_Boolean Flag)
{
  if (!badShape.IsNull()) {
    Standard_ConstructionError::Raise();
  }

  if (myComp) {
    Clear();
  }
  curFace = F;
  return InternalAdd(F,Direction,Angle,NeutralPlane, Flag);
}


//=======================================================================
//function : Remove
//purpose  : 
//=======================================================================

void Draft_Modification::Remove(const TopoDS_Face& F)
{
  if (!myFMap.IsBound(F) || myComp) {
    Standard_NoSuchObject::Raise();
  }

  conneF.Clear();
  TopTools_ListIteratorOfListOfShape ltod;

  curFace = myFMap(F).RootFace();
  Draft_DataMapIteratorOfDataMapOfFaceFaceInfo itf(myFMap);
  while (itf.More()) {
    const TopoDS_Face& theF = itf.Key();
    if (myFMap(theF).RootFace().IsSame(curFace)) {
      conneF.Append(theF);
      if (theF.IsSame(badShape)) {
	badShape.Nullify();
      }
    }
    itf.Next();
  }

  ltod.Initialize(conneF);
  while (ltod.More()) {
    myFMap.UnBind(TopoDS::Face(ltod.Value()));
    ltod.Next();
  }

  conneF.Clear();
  Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo ite(myEMap);
  while (ite.More()) {
    const TopoDS_Edge& theE = ite.Key();
    if (myEMap(theE).RootFace().IsSame(curFace)) {
      conneF.Append(theE);
    }
    ite.Next();
  }
  ltod.Initialize(conneF);
  while (ltod.More()) {
    myEMap.UnBind(TopoDS::Edge(ltod.Value()));
    ltod.Next();
  }
}


//=======================================================================
//function : IsDone
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::IsDone() const
{
  return myComp && badShape.IsNull();
} 


//=======================================================================
//function : Error
//purpose  : 
//=======================================================================

Draft_ErrorStatus Draft_Modification::Error() const
{
  return errStat;
} 


//=======================================================================
//function : ProblematicShape
//purpose  : 
//=======================================================================

const TopoDS_Shape& Draft_Modification::ProblematicShape() const
{
  return badShape;
} 


//=======================================================================
//function : ConnectedFaces
//purpose  : 
//=======================================================================

const TopTools_ListOfShape & Draft_Modification::ConnectedFaces(const TopoDS_Face& F)
{
  if (!myFMap.IsBound(F)) {
    Standard_NoSuchObject::Raise();
  }
  if (!IsDone()) {
    StdFail_NotDone::Raise();
  }
  conneF.Clear();
  curFace = myFMap(F).RootFace();

  Draft_DataMapIteratorOfDataMapOfFaceFaceInfo itf(myFMap);
  while (itf.More()) {
    const TopoDS_Face& theF = itf.Key();
    if (myFMap(theF).RootFace().IsSame(curFace)) {
      conneF.Append(theF);
    }
    itf.Next();
  }

  return conneF;
  

}


//=======================================================================
//function : ModifiedFaces
//purpose  : 
//=======================================================================

const TopTools_ListOfShape & Draft_Modification::ModifiedFaces()
{
  if (!badShape.IsNull()) {
    StdFail_NotDone::Raise();
  }
  conneF.Clear();

  Draft_DataMapIteratorOfDataMapOfFaceFaceInfo itf(myFMap);
  while (itf.More()) {
    const TopoDS_Face& theF = itf.Key();
    if (!myFMap(theF).RootFace().IsNull()) {
      conneF.Append(theF);
    }
    itf.Next();
  }

  return conneF;
  

}


//=======================================================================
//function : NewSurface
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::NewSurface(const TopoDS_Face& F,
						Handle(Geom_Surface)& S,
						TopLoc_Location& L,
						Standard_Real& Tol,
						Standard_Boolean& RevWires,
						Standard_Boolean& RevFace)
{
  if (!IsDone()) {Standard_DomainError::Raise();}

  if (!myFMap.IsBound(F) || !myFMap(F).NewGeometry()) {
    return Standard_False;
  }

  RevWires = Standard_False;
  RevFace = Standard_False;
  Tol = BRep_Tool::Tolerance(F);

  S = BRep_Tool::Surface(F,L);

  L.Identity();

  S = myFMap(F).Geometry();

  return Standard_True;
}
						

//=======================================================================
//function : NewCurve
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::NewCurve(const TopoDS_Edge& E,
					      Handle(Geom_Curve)& C,
					      TopLoc_Location& L, 
					      Standard_Real& Tol)
{
  if (!IsDone()) {Standard_DomainError::Raise();}

  if (!myEMap.IsBound(E)) 
    return Standard_False;
  
  const Draft_EdgeInfo& Einf= myEMap(E);
  if (!myEMap(E).NewGeometry())
    return Standard_False;
  
  Tol = Einf.Tolerance();
  Tol = Max(Tol, BRep_Tool::Tolerance(E));
  L.Identity();
  C = myEMap(E).Geometry();

  return Standard_True;

}


//=======================================================================
//function : NewPoint
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::NewPoint(const TopoDS_Vertex& V,
					      gp_Pnt& P, 
					      Standard_Real& Tol)
{
  if (!IsDone()) {Standard_DomainError::Raise();};

  if (!myVMap.IsBound(V)) {
    return Standard_False;
  }

  Tol = BRep_Tool::Tolerance(V);
  P = myVMap(V).Geometry();
  return Standard_True;
}


//=======================================================================
//function : NewCurve2d
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::NewCurve2d(const TopoDS_Edge& E, 
						const TopoDS_Face& F, 
						const TopoDS_Edge& NewE, 
						const TopoDS_Face&, 
						Handle(Geom2d_Curve)& C,
						Standard_Real& Tol)
{
  
  if (!IsDone()) {Standard_DomainError::Raise();};

  if (!myEMap.IsBound(E)) {
    return Standard_False;
  }
  
  Standard_Real Fp,Lp;
  BRep_Tool::Range(NewE,Fp,Lp);
  
  Handle(Geom_Surface) SB = myFMap(F).Geometry();

  const Draft_EdgeInfo& Einf = myEMap(E);
  if ( Einf.FirstFace().IsSame(F) && !Einf.FirstPC().IsNull()) {
    C = Einf.FirstPC();
  }
  else if ( Einf.SecondFace().IsSame(F) && !Einf.SecondPC().IsNull()) {
    C = Einf.SecondPC();
  }
  else {
    
    if (!myEMap(E).NewGeometry()) {
      Standard_Real Fpi,Lpi;
      BRep_Tool::Range(E,Fpi,Lpi);
      if (Fpi <= Fp && Fp <= Lpi && Fpi <= Lp && Lp <= Lpi) {
	return Standard_False;
      }
    }
    
    Tol = BRep_Tool::Tolerance(E);
    
    //  if (!BRep_Tool::IsClosed(E,F)) {
    BRep_Tool::Range(NewE,Fp,Lp);
    Handle(Geom_TrimmedCurve) TC = new Geom_TrimmedCurve(myEMap(E).Geometry(),
							 Fp,Lp);
    Fp = TC->FirstParameter();
    Lp = TC->LastParameter();
    BRep_Builder B;
    B.Range( NewE, Fp, Lp );
    C = GeomProjLib::Curve2d(TC,Fp, Lp, SB, Tol);
  }

  Handle(Standard_Type) typs = SB->DynamicType();
  if (typs == STANDARD_TYPE(Geom_RectangularTrimmedSurface) ) {
    SB = Handle(Geom_RectangularTrimmedSurface)::DownCast(SB)->BasisSurface();
    typs = SB->DynamicType();
  }

  Standard_Boolean JeRecadre = Standard_False;
  if (typs == STANDARD_TYPE(Geom_SurfaceOfLinearExtrusion)) {
    Handle(Geom_Curve) aC = 
      Handle(Geom_SurfaceOfLinearExtrusion)::DownCast(SB)->BasisCurve();
    Handle(Standard_Type) typc = aC->DynamicType();
    if (typc == STANDARD_TYPE(Geom_Circle)) JeRecadre = Standard_True;
  }

  JeRecadre = JeRecadre || 
              (typs == STANDARD_TYPE(Geom_CylindricalSurface)) || 
              (typs == STANDARD_TYPE(Geom_SphericalSurface)) || 
	      (typs == STANDARD_TYPE(Geom_ConicalSurface));

  if ( JeRecadre) {
    Standard_Boolean bTranslate;
    Standard_Real aD2, aT1, aT2;
    gp_Pnt2d  PF, NewPF, aP2DT;
    gp_Vec2d aV2DT, vectra(2.*M_PI,0.);
    Handle(Geom2d_Curve) aC2DE;
    //
    aC2DE=BRep_Tool::CurveOnSurface(E, F, aT1, aT2);
    //
    PF=aC2DE->Value(0.5*(aT1+aT2));
    //
    NewPF=C->Value(0.5*(Fp+Lp));
    //
    aD2=NewPF.SquareDistance(PF);
    //
    bTranslate=Standard_False;
    if (NewPF.Translated(vectra).SquareDistance(PF) < aD2) {
      aV2DT=vectra;
      bTranslate=!bTranslate; //True
    }
    else if (NewPF.Translated(-vectra).SquareDistance(PF) < aD2) {
      aV2DT=-vectra;
      bTranslate=!bTranslate; //True
    }
    //
    if (bTranslate) {
      C->Translate(aV2DT);
    }
  }
  return Standard_True;
}


//=======================================================================
//function : NewParameter
//purpose  : 
//=======================================================================

Standard_Boolean Draft_Modification::NewParameter(const TopoDS_Vertex& V,
						  const TopoDS_Edge& E,
						  Standard_Real& P,
						  Standard_Real& Tol)
{

  if (!IsDone()) {Standard_DomainError::Raise();};

  if (!myVMap.IsBound(V)) {
    return Standard_False;
  }

  P = myVMap(V).Parameter(E);
  Handle(Geom_Curve) GC = myEMap(E).Geometry();
  Handle(Standard_Type) typc = GC->DynamicType();
  if (typc == STANDARD_TYPE(Geom_TrimmedCurve)) {
    GC = Handle(Geom_TrimmedCurve)::DownCast(GC);
    typc = GC->DynamicType();
  }

  if (GC->IsClosed()) {
    TopoDS_Vertex FV = TopExp::FirstVertex(E);
    Standard_Real paramf;
    if (myVMap.IsBound(FV)) {
      paramf = myVMap(FV).Parameter(E);
    }
    else {
      paramf = BRep_Tool::Parameter(FV,E);
    }

    //Patch
    Standard_Real FirstPar = GC->FirstParameter(), LastPar = GC->LastParameter();
    Standard_Real pconf = Precision::PConfusion();
    if (Abs( paramf - LastPar ) <= pconf)
      {
	paramf = FirstPar;
	FV.Orientation(E.Orientation());
	if (V.IsEqual( FV ))
	  P = paramf;
      }

    FV.Orientation(E.Orientation());
    if (!V.IsEqual(FV) && P <= paramf) {
      if (GC->IsPeriodic()) {
	P += GC->Period();
      }
      else {
	P = GC->LastParameter();
      }
    }
  }
  
  Tol = Max (BRep_Tool::Tolerance(V), BRep_Tool::Tolerance(E));
  return Standard_True;
}



//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape Draft_Modification::Continuity(const TopoDS_Edge& E,
					     const TopoDS_Face& F1,
					     const TopoDS_Face& F2,
					     const TopoDS_Edge&,
					     const TopoDS_Face&,
					     const TopoDS_Face&)
{
  return BRep_Tool::Continuity(E,F1,F2);
}
					     

