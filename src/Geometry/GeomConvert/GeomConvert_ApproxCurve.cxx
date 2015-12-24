// Created on: 1997-09-11
// Created by: Roman BORISOV
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

#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_BSplineCurve.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Geometry/GeomConvert/GeomConvert_ApproxCurve.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_HCurve.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <Geometry/AdvApprox/AdvApprox_PrefAndRec.hxx>
#include <Geometry/AdvApprox/AdvApprox_ApproxAFunction.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Mathematics/Precision/Precision.hxx>

//=======================================================================
//class : GeomConvert_ApproxCurve_Eval
//purpose: evaluator class for approximation
//=======================================================================

class GeomConvert_ApproxCurve_Eval : public AdvApprox_EvaluatorFunction
{
 public:
  GeomConvert_ApproxCurve_Eval (const Handle(Adaptor3d_HCurve)& theFunc, 
                                Standard_Real First, Standard_Real Last)
    : fonct(theFunc) { StartEndSav[0] = First; StartEndSav[1] = Last; }
  
  virtual void Evaluate (Standard_Integer *Dimension,
		         Standard_Real     StartEnd[2],
                         Standard_Real    *Parameter,
                         Standard_Integer *DerivativeRequest,
                         Standard_Real    *Result, // [Dimension]
                         Standard_Integer *ErrorCode);
  
 private:
  Handle(Adaptor3d_HCurve) fonct;
  Standard_Real StartEndSav[2];
};

void GeomConvert_ApproxCurve_Eval::Evaluate (Standard_Integer *Dimension,
                                             Standard_Real     StartEnd[2],
                                             Standard_Real    *Param, // Parameter at which evaluation
                                             Standard_Integer *Order, // Derivative Request
                                             Standard_Real    *Result,// [Dimension]
                                             Standard_Integer *ErrorCode)
{
  *ErrorCode = 0;
  Standard_Real par = *Param;

// Dimension is incorrect
  if (*Dimension!=3) {
    *ErrorCode = 1;
  }

  if(StartEnd[0] != StartEndSav[0] || StartEnd[1]!= StartEndSav[1]) 
    {
      fonct = fonct->Trim(StartEnd[0],StartEnd[1],Precision::PConfusion());
      StartEndSav[0]=StartEnd[0];
      StartEndSav[1]=StartEnd[1];
    }

  gp_Pnt pnt;
  gp_Vec v1, v2;

  switch (*Order) {
  case 0:
    pnt = fonct->Value(par);
    Result[0] = pnt.X();
    Result[1] = pnt.Y();
    Result[2] = pnt.Z();
    break;
  case 1:
    fonct->D1(par, pnt, v1);
    Result[0] = v1.X();
    Result[1] = v1.Y();
    Result[2] = v1.Z();
    break;
  case 2:
    fonct->D2(par, pnt, v1, v2);
    Result[0] = v2.X();
    Result[1] = v2.Y();
    Result[2] = v2.Z();
    break;
  default:
    Result[0] = Result[1] = Result[2] = 0.;
    *ErrorCode = 3;
    break;
  }
}

GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(const Handle(Geom_Curve)& Curve,const Standard_Real Tol3d,const GeomAbs_Shape Order,const Standard_Integer MaxSegments,const Standard_Integer MaxDegree)
{
  Handle(GeomAdaptor_HCurve) HCurve = new GeomAdaptor_HCurve (Curve);

  // Initialisation of input parameters of AdvApprox

  Standard_Integer Num1DSS=0, Num2DSS=0, Num3DSS=1;
  Handle(TColStd_HArray1OfReal) OneDTolNul, TwoDTolNul; 
  Handle(TColStd_HArray1OfReal) ThreeDTol  = 
    new TColStd_HArray1OfReal(1,Num3DSS);
  ThreeDTol->Init(Tol3d); 

  Standard_Real First = Curve->FirstParameter();
  Standard_Real Last  = Curve->LastParameter();

  Standard_Integer NbInterv_C2 = HCurve->NbIntervals(GeomAbs_C2);
  TColStd_Array1OfReal CutPnts_C2(1, NbInterv_C2+1);
  HCurve->Intervals(CutPnts_C2,GeomAbs_C2);
  Standard_Integer NbInterv_C3 = HCurve->NbIntervals(GeomAbs_C3);
  TColStd_Array1OfReal CutPnts_C3(1, NbInterv_C3+1);
  HCurve->Intervals(CutPnts_C3,GeomAbs_C3);
 
  AdvApprox_PrefAndRec CutTool(CutPnts_C2,CutPnts_C3);

  myMaxError = 0;

  GeomConvert_ApproxCurve_Eval ev (HCurve, First, Last);
  AdvApprox_ApproxAFunction aApprox (Num1DSS, Num2DSS, Num3DSS, 
				     OneDTolNul, TwoDTolNul, ThreeDTol,
				     First, Last, Order,
				     MaxDegree, MaxSegments,
				     ev, CutTool);

  myIsDone = aApprox.IsDone();
  myHasResult = aApprox.HasResult();

  if (myHasResult) {
    TColgp_Array1OfPnt Poles(1,aApprox.NbPoles());
    aApprox.Poles(1,Poles);
    Handle(TColStd_HArray1OfReal)    Knots = aApprox.Knots();
    Handle(TColStd_HArray1OfInteger) Mults = aApprox.Multiplicities();
    Standard_Integer Degree = aApprox.Degree();
    myBSplCurve = new Geom_BSplineCurve(Poles, Knots->Array1(), Mults->Array1(), Degree);
    myMaxError = aApprox.MaxError(3, 1);
  } 
}

 Handle(Geom_BSplineCurve) GeomConvert_ApproxCurve::Curve() const
{
  return myBSplCurve;
}

 Standard_Boolean GeomConvert_ApproxCurve::IsDone() const
{
  return myIsDone; 
}

 Standard_Boolean GeomConvert_ApproxCurve::HasResult() const
{
  return myHasResult; 
}

 Standard_Real GeomConvert_ApproxCurve::MaxError() const
{
  return myMaxError;
}

 void GeomConvert_ApproxCurve::Dump(Standard_OStream& o) const
{
  o << "******* Dump of ApproxCurve *******" << endl;
  o << "*******Error   " << MaxError() << endl;
}

