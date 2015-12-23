// Created on: 1993-12-23
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

#include <TopOpeBRepDS_DataStructure.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SurfData.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Spine.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData.hxx>

#include <Foundation/Standard/Standard_NotImplemented.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Precision.hxx>
#include <Mathematics/Primitives/gp.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Lin.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <Mathematics/Primitives/gp_Ax3.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <Mathematics/Primitives/gp_Cylinder.hxx>
#include <ElCLib.hxx>
#include <ElSLib.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Geometry/Geom2d/Geom2d_Line.hxx>
#include <Geometry/Geom2d/Geom2d_Circle.hxx>
#include <Geometry/Geom2d/Geom2d_BSplineCurve.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <Geometry/Geom/Geom_Circle.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <Geometry/Geom/Geom_Plane.hxx>
#include <Geometry/Geom/Geom_CylindricalSurface.hxx>
#include <Geometry/Geom/Geom_ToroidalSurface.hxx>
#include <Geometry/Geom/Geom_ConicalSurface.hxx>
#include <Geometry/Geom/Geom_SphericalSurface.hxx>
#include <GeomAbs_CurveType.hxx>
#include <GeomAbs_SurfaceType.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_Curve.hxx>
#include <Geometry/Geom2dAdaptor/Geom2dAdaptor_Curve.hxx>
//#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve2d.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HSurface.hxx>
#include <IntSurf_Transition.hxx>
#include <IntSurf_TypeTrans.hxx>
#include <ModelingAlgorithms/IntRes2d/IntRes2d_Transition.hxx>
#include <ModelingAlgorithms/IntRes2d/IntRes2d_TypeTrans.hxx>
#include <ModelingAlgorithms/IntRes2d/IntRes2d_Position.hxx>
#include <ModelingAlgorithms/IntRes2d/IntRes2d_IntersectionPoint.hxx>
#include <Geometry/IntAna/IntAna_QuadQuadGeo.hxx>
#include <ModelingAlgorithms/Geom2dInt/Geom2dInt_GInter.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
//#include <ModelingData/BRepAdaptor/BRepAdaptor_HCurve2d.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_FilSpine.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_ChamfSpine.hxx>

#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_Surface.hxx>

#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_Fcts.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_ChPlnPln.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_ChPlnCyl.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_ChPlnCon.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_ChAsymPlnPln.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_ChAsymPlnCyl.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_ChAsymPlnCon.hxx> 
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_FilPlnCon.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_FilPlnCyl.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_FilPlnPln.hxx>


#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_CS.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_Rotule.hxx>
#include <ModelingAlgorithms/ChFiKPart/ChFiKPart_ComputeData_Sphere.hxx>

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================
 Standard_Boolean ChFiKPart_ComputeData::Compute
 (TopOpeBRepDS_DataStructure&    DStr, 
  Handle(ChFiDS_SurfData)&       Data, 
  const Handle(Adaptor3d_HSurface)& S1, 
  const Handle(Adaptor3d_HSurface)& S2, 
  const TopAbs_Orientation       Or1, 
  const TopAbs_Orientation       Or2, 
  const Handle(ChFiDS_Spine)&    Sp, 
  const Standard_Integer         Iedge)
{
  Standard_Real Wref = 0.;

  Handle(ChFiDS_FilSpine)   Spine  = Handle(ChFiDS_FilSpine)::DownCast(Sp);
  Handle(ChFiDS_ChamfSpine) CSpine = Handle(ChFiDS_ChamfSpine)::DownCast(Sp);
  Standard_Boolean surfok = Standard_False;
  GeomAbs_SurfaceType typ1 = S1->GetType();
  GeomAbs_SurfaceType typ2 = S2->GetType();
  GeomAbs_CurveType   ctyp;

  if (!Spine.IsNull())
    ctyp = Spine->CurrentElementarySpine(Iedge).GetType();
  else 
    ctyp = CSpine->CurrentElementarySpine(Iedge).GetType();

  // Return orientations.
  TopAbs_Orientation OrFace1 = TopAbs_FORWARD, OrFace2 = TopAbs_FORWARD;
  Handle(BRepAdaptor_HSurface) HS = Handle(BRepAdaptor_HSurface)::DownCast(S1);
  if (!HS.IsNull()) OrFace1 = HS->ChangeSurface().Face().Orientation();
  HS = Handle(BRepAdaptor_HSurface)::DownCast(S2);
  if (!HS.IsNull()) OrFace2 = HS->ChangeSurface().Face().Orientation();
  
  if(!Spine.IsNull()){
    Standard_Real Radius = Spine->Radius(Iedge);
    if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Plane ){
      surfok = ChFiKPart_MakeFillet(DStr,Data,S1->Plane(),S2->Plane(), 
				    Or1,Or2,Radius,Spine->Line(),
				    Wref,OrFace1);
    }
    else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cylinder ){
      if (ctyp == GeomAbs_Line) 
	surfok = ChFiKPart_MakeFillet(DStr,Data,S1->Plane(),S2->Cylinder(),
				      S2->FirstUParameter(),S2->LastUParameter(),
				      Or1,Or2,Radius,Spine->Line(),
				      Wref,OrFace1,Standard_True);
	else
	  surfok = ChFiKPart_MakeFillet(DStr,Data,S1->Plane(),S2->Cylinder(),
					S2->FirstUParameter(),S2->LastUParameter(),
					Or1,Or2,Radius,Spine->Circle(),
					Wref,OrFace1,Standard_True);
    }
    else if ( typ1 == GeomAbs_Cylinder && typ2 == GeomAbs_Plane ){
      if (ctyp == GeomAbs_Line) 
	surfok = ChFiKPart_MakeFillet(DStr,Data,S2->Plane(),S1->Cylinder(), 
				      S1->FirstUParameter(),S1->LastUParameter(),
				      Or2,Or1,Radius,Spine->Line(),
				      Wref,OrFace2,Standard_False);
      else 
	surfok = ChFiKPart_MakeFillet(DStr,Data,S2->Plane(),S1->Cylinder(), 
				      S1->FirstUParameter(),S1->LastUParameter(),
				      Or2,Or1,Radius,Spine->Circle(),
				      Wref,OrFace2,Standard_False);
    }
    else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cone ){
      surfok =  ChFiKPart_MakeFillet(DStr,Data,S1->Plane(),S2->Cone(), 
				     S2->FirstUParameter(),S2->LastUParameter(),
				     Or1,Or2,Radius,Spine->Circle(),
				     Wref,OrFace1,Standard_True);
    }
    else if ( typ1 == GeomAbs_Cone && typ2 == GeomAbs_Plane ){
      surfok = ChFiKPart_MakeFillet(DStr,Data,S2->Plane(),S1->Cone(), 
				    S1->FirstUParameter(),S1->LastUParameter(),
				    Or2,Or1,Radius,Spine->Circle(),
				    Wref,OrFace2,Standard_False);
    }
    else{
      Standard_NotImplemented::Raise("particular case not written");
    }
  }
  else if(!CSpine.IsNull()){
    if (CSpine->IsChamfer() == ChFiDS_Sym) {
      Standard_Real dis;
      CSpine->GetDist(dis);
      if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Plane ){
	surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Plane(), 
				      Or1,Or2,dis, dis,CSpine->Line(),
				      Wref,OrFace1);
      }
      else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cylinder ){
	if (ctyp == GeomAbs_Circle)
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Cylinder(),
					 S2->FirstUParameter(),S2->LastUParameter(),
					 Or1,Or2,dis,dis ,CSpine->Circle(),
					 Wref,OrFace1,Standard_True);
	else
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Cylinder(),
					 S2->FirstUParameter(),S2->LastUParameter(),
					 Or1,Or2,dis,dis,CSpine->Line(),
					 Wref,OrFace1,Standard_True);
      }
      else if ( typ1 == GeomAbs_Cylinder && typ2 == GeomAbs_Plane ){
	if (ctyp == GeomAbs_Circle)
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S2->Plane(),S1->Cylinder(), 
					 S1->FirstUParameter(),S1->LastUParameter(),
					 Or2,Or1,dis,dis,CSpine->Circle(),
					 Wref,OrFace2,Standard_False);
	else
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S2->Plane(),S1->Cylinder(), 
					 S1->FirstUParameter(),S1->LastUParameter(),
					 Or2,Or1,dis,dis,CSpine->Line(),
					 Wref,OrFace2,Standard_False);
      }
      else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cone ){
	surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Cone(), 
				       S2->FirstUParameter(),S2->LastUParameter(),
				       Or1,Or2,dis,dis,CSpine->Circle(),
				       Wref,OrFace1,Standard_True);
      }
      else if ( typ1 == GeomAbs_Cone && typ2 == GeomAbs_Plane ){
	surfok = ChFiKPart_MakeChamfer(DStr,Data,S2->Plane(),S1->Cone(), 
				       S1->FirstUParameter(),S1->LastUParameter(),
				       Or2,Or1,dis,dis,CSpine->Circle(),
				       Wref,OrFace2,Standard_False); 
      }
      else{
	Standard_NotImplemented::Raise("particular case not written");
      }
    }
    else if (CSpine->IsChamfer() == ChFiDS_TwoDist) {    
      Standard_Real dis1,dis2;
      CSpine->Dists(dis1,dis2);
      if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Plane ){
	surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Plane(), 
				      Or1,Or2,dis1,dis2,CSpine->Line(),
				      Wref,OrFace1);
      }
      else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cylinder ){
	if (ctyp == GeomAbs_Circle)
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Cylinder(),
					 S2->FirstUParameter(),S2->LastUParameter(),
					 Or1,Or2,dis1,dis2,CSpine->Circle(),
					 Wref,OrFace1,Standard_True);
	else
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Cylinder(),
					 S2->FirstUParameter(),S2->LastUParameter(),
					 Or1,Or2,dis1,dis2,CSpine->Line(),
					 Wref,OrFace1,Standard_True);
      }
      else if ( typ1 == GeomAbs_Cylinder && typ2 == GeomAbs_Plane ){
	if (ctyp == GeomAbs_Circle)
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S2->Plane(),S1->Cylinder(), 
					 S1->FirstUParameter(),S1->LastUParameter(),
					 Or2,Or1,dis2,dis1,CSpine->Circle(),
					 Wref,OrFace2,Standard_False);
	else
	  surfok = ChFiKPart_MakeChamfer(DStr,Data,S2->Plane(),S1->Cylinder(), 
					 S1->FirstUParameter(),S1->LastUParameter(),
					 Or2,Or1,dis2,dis1,CSpine->Line(),
					 Wref,OrFace2,Standard_False);
      }
      else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cone ){
	surfok = ChFiKPart_MakeChamfer(DStr,Data,S1->Plane(),S2->Cone(), 
				       S2->FirstUParameter(),S2->LastUParameter(),
				       Or1,Or2,dis1,dis2,CSpine->Circle(),
				       Wref,OrFace1,Standard_True);
      }
      else if ( typ1 == GeomAbs_Cone && typ2 == GeomAbs_Plane ){
	surfok = ChFiKPart_MakeChamfer(DStr,Data,S2->Plane(),S1->Cone(), 
				       S1->FirstUParameter(),S1->LastUParameter(),
				       Or2,Or1,dis2,dis1,CSpine->Circle(),
				       Wref,OrFace2,Standard_False); 
      }
      else{
	Standard_NotImplemented::Raise("particular case not written");
      }
    }
    else {
      Standard_Real dis, Angle;
      Standard_Boolean DisOnP;
      CSpine->GetDistAngle(dis, Angle, DisOnP);
      if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Plane ){
	surfok = ChFiKPart_MakeChAsym(DStr,Data,S1->Plane(),S2->Plane(), 
				      Or1,Or2, dis, Angle, CSpine->Line(),
				      Wref,OrFace1, DisOnP);
      }
      else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cylinder ){
	if (ctyp == GeomAbs_Circle)
	  surfok = ChFiKPart_MakeChAsym(DStr,Data,S1->Plane(),S2->Cylinder(),
					S2->FirstUParameter(),S2->LastUParameter(),
					Or1,Or2,dis, Angle, CSpine->Circle(),
					Wref,OrFace1,Standard_True, DisOnP);
	else
	  surfok = ChFiKPart_MakeChAsym(DStr,Data,S1->Plane(),S2->Cylinder(),
					S2->FirstUParameter(),S2->LastUParameter(),
					Or1,Or2, dis, Angle, CSpine->Line(),
					Wref,OrFace1,Standard_True, DisOnP);
      }
      else if ( typ1 == GeomAbs_Cylinder && typ2 == GeomAbs_Plane ){
	if (ctyp == GeomAbs_Circle)
	  surfok = ChFiKPart_MakeChAsym(DStr,Data,S2->Plane(),S1->Cylinder(), 
					S1->FirstUParameter(),S1->LastUParameter(),
					Or2,Or1,dis, Angle, CSpine->Circle(),
					Wref,OrFace2,Standard_False, DisOnP);
	else
	  surfok = ChFiKPart_MakeChAsym(DStr,Data,S2->Plane(),S1->Cylinder(), 
					S1->FirstUParameter(),S1->LastUParameter(),
					Or2,Or1,dis, Angle, CSpine->Line(),
					Wref,OrFace2,Standard_False, DisOnP);
      }
      else if ( typ1 == GeomAbs_Plane && typ2 == GeomAbs_Cone ){
	surfok = ChFiKPart_MakeChAsym(DStr,Data,S1->Plane(),S2->Cone(), 
				      S2->FirstUParameter(),S2->LastUParameter(),
				      Or1,Or2, dis, Angle, CSpine->Circle(),
				      Wref,OrFace1,Standard_True, DisOnP);
      }
      else if ( typ1 == GeomAbs_Cone && typ2 == GeomAbs_Plane ){
	surfok = ChFiKPart_MakeChAsym(DStr,Data,S2->Plane(),S1->Cone(), 
				      S1->FirstUParameter(),S1->LastUParameter(),
				      Or2,Or1, dis, Angle, CSpine->Circle(),
				      Wref,OrFace2,Standard_False, DisOnP); 
      }
      else{
	Standard_NotImplemented::Raise("particular case not written");
      }
    }
  }
  return surfok; 
}

//=======================================================================
//function : ComputeCorner
//purpose  : 
//=======================================================================

Standard_Boolean ChFiKPart_ComputeData::ComputeCorner
  (TopOpeBRepDS_DataStructure& DStr,
   const Handle(ChFiDS_SurfData)& Data, 
   const Handle(Adaptor3d_HSurface)& S1, 
   const Handle(Adaptor3d_HSurface)& S2,
   const TopAbs_Orientation OrFace1,
   const TopAbs_Orientation,
   const TopAbs_Orientation Or1,
   const TopAbs_Orientation Or2,
   const Standard_Real minRad, 
   const Standard_Real majRad, 
   const gp_Pnt2d& P1S1,
   const gp_Pnt2d& P2S1,
   const gp_Pnt2d& P1S2,
   const gp_Pnt2d& P2S2)
{
  Standard_Boolean surfok;
  GeomAbs_SurfaceType typ1 = S1->GetType();
  GeomAbs_SurfaceType typ2 = S2->GetType();
  if ( typ1 != GeomAbs_Plane ){
    Standard_ConstructionError::Raise
      ("la face du conge torique doit etre plane");
  }
  // The guideline is the circle corresponding 
  // to the section of S2, and other construction elements.

  gp_Cylinder cyl;
  gp_Circ circ;
  Standard_Real First,Last,fu,lu;
  ChFiKPart_CornerSpine(S1,S2,P1S1,P2S1,P1S2,P2S2,majRad,cyl,circ,First,Last);
  if ( typ2 == GeomAbs_Cylinder ){
    cyl = S2->Cylinder();
    fu = P1S2.X();
    lu = P2S2.X();
  }
  else{
    fu = First;
    lu = Last;
  }
  surfok = ChFiKPart_MakeFillet(DStr,Data,S1->Plane(),cyl, 
			       fu,lu,Or1,Or2,minRad,circ,
			       First,OrFace1,Standard_True);
  if(surfok){
    if ( typ2 != GeomAbs_Cylinder ){
      Data->ChangeInterferenceOnS2().ChangePCurveOnFace() = 
	ChFiKPart_PCurve(P1S2,P2S2,First,Last);
    }
    Data->ChangeVertexFirstOnS1().SetPoint(S1->Value(P1S1.X(),P1S1.Y()));
    Data->ChangeVertexLastOnS1().SetPoint(S1->Value(P2S1.X(),P2S1.Y()));
    Data->ChangeVertexFirstOnS2().SetPoint(S2->Value(P1S2.X(),P1S2.Y()));
    Data->ChangeVertexLastOnS2().SetPoint(S2->Value(P2S2.X(),P2S2.Y()));
    Data->ChangeInterferenceOnS1().SetFirstParameter(First);
    Data->ChangeInterferenceOnS1().SetLastParameter(Last);
    Data->ChangeInterferenceOnS2().SetFirstParameter(First);
    Data->ChangeInterferenceOnS2().SetLastParameter(Last);
    return Standard_True;
  }
  return Standard_False;
}


//=======================================================================
//function : ComputeCorner
//purpose  : 
//=======================================================================

Standard_Boolean ChFiKPart_ComputeData::ComputeCorner
  (TopOpeBRepDS_DataStructure& DStr,
   const Handle(ChFiDS_SurfData)& Data, 
   const Handle(Adaptor3d_HSurface)& S1, 
   const Handle(Adaptor3d_HSurface)& S2,
   const TopAbs_Orientation OrFace1,
   const TopAbs_Orientation OrFace2,
   const TopAbs_Orientation Or1,
   const TopAbs_Orientation Or2,
   const Standard_Real Rad, 
   const gp_Pnt2d& PS1,
   const gp_Pnt2d& P1S2,
   const gp_Pnt2d& P2S2)
{
  return ChFiKPart_Sphere(DStr,Data,S1,S2,OrFace1,OrFace2,Or1,Or2,Rad,PS1,P1S2,P2S2);
}

//=======================================================================
//function : ComputeCorner
//purpose  : 
//=======================================================================

Standard_Boolean ChFiKPart_ComputeData::ComputeCorner
  (TopOpeBRepDS_DataStructure& DStr,
   const Handle(ChFiDS_SurfData)& Data, 
   const Handle(Adaptor3d_HSurface)& S, 
   const Handle(Adaptor3d_HSurface)& S1, 
   const Handle(Adaptor3d_HSurface)& S2,
   const TopAbs_Orientation OfS,
   const TopAbs_Orientation OS,
   const TopAbs_Orientation OS1,
   const TopAbs_Orientation OS2,
   const Standard_Real Radius)
{
  GeomAbs_SurfaceType typ = S->GetType();
  GeomAbs_SurfaceType typ1 = S1->GetType();
  GeomAbs_SurfaceType typ2 = S2->GetType();
  if (typ != GeomAbs_Plane ||
      typ1 != GeomAbs_Plane ||
      typ2 != GeomAbs_Plane){
    Standard_ConstructionError::Raise
      ("torus joint only between the planes");
  }
  return ChFiKPart_MakeRotule(DStr,Data,S->Plane(),S1->Plane(),
			      S2->Plane(),OS,OS1,OS2,Radius,OfS);
}
