// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_RstRstLineBuilder_HeaderFile
#define _BRepBlend_RstRstLineBuilder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_BRepBlend_Line.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/Blend/Blend_Point.hxx>
#include <ModelingAlgorithms/Blend/Blend_DecrochStatus.hxx>
#include <Handle_Adaptor3d_HVertex.hxx>
#include <ModelingAlgorithms/Blend/Blend_Status.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
class BRepBlend_Line;
class Adaptor3d_HSurface;
class Adaptor3d_TopolTool;
class Adaptor2d_HCurve2d;
class Blend_RstRstFunction;
class Blend_SurfCurvFuncInv;
class Blend_CurvPointFuncInv;
class Adaptor3d_HVertex;
class IntSurf_Transition;
class BRepBlend_Extremity;
class Blend_Point;


//! This  class processes the  data  resulting from
//! Blend_CSWalking  but  it  takes  in  consideration the Surface
//! supporting  the  curve to detect the  breakpoint.
//!
//! As  a  result, the  criteria of distribution of
//! points on  the line become  more flexible  because  it
//! should  calculate values  approached
//! by an approximation of continued  functions based on the
//! Blend_RstRstFunction.
//!
//! Thus this pseudo path necessitates 3 criteria  of
//! regrouping :
//!
//! 1) exit of  the domain of  the  curve
//!
//! 2) exit of  the domain of  the surface
//!
//! 3) stall as there  is a solution of problem
//! surf/surf  within the domain  of the  surface
//! of support of the restriction.
//!
//! Construction of a BRepBlend_Line between two pcurves
//! from an approached starting solution. The output
//! entries of this builder are of the same nature
//! as of a traditional walking, but the requirements
//! to the Line are not the same. If the determination of validity range is always
//! guaranteed, the criteria of correct repartition of sections
//! before smoothing are not respected. The resulting Line
//! is f(t) oriented.
class BRepBlend_RstRstLineBuilder 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepBlend_RstRstLineBuilder(const Handle(Adaptor3d_HSurface)& Surf1, const Handle(Adaptor2d_HCurve2d)& Rst1, const Handle(Adaptor3d_TopolTool)& Domain1, const Handle(Adaptor3d_HSurface)& Surf2, const Handle(Adaptor2d_HCurve2d)& Rst2, const Handle(Adaptor3d_TopolTool)& Domain2);
  
  Standard_EXPORT   void Perform (Blend_RstRstFunction& Func, Blend_SurfCurvFuncInv& Finv1, Blend_CurvPointFuncInv& FinvP1, Blend_SurfCurvFuncInv& Finv2, Blend_CurvPointFuncInv& FinvP2, const Standard_Real Pdep, const Standard_Real Pmax, const Standard_Real MaxStep, const Standard_Real TolGuide, const math_Vector& Soldep, const Standard_Real Tolesp, const Standard_Real Fleche, const Standard_Boolean Appro = Standard_False) ;
  
  Standard_EXPORT   Standard_Boolean PerformFirstSection (Blend_RstRstFunction& Func, Blend_SurfCurvFuncInv& Finv1, Blend_CurvPointFuncInv& FinvP1, Blend_SurfCurvFuncInv& Finv2, Blend_CurvPointFuncInv& FinvP2, const Standard_Real Pdep, const Standard_Real Pmax, const math_Vector& Soldep, const Standard_Real Tolesp, const Standard_Real TolGuide, const Standard_Boolean RecRst1, const Standard_Boolean RecP1, const Standard_Boolean RecRst2, const Standard_Boolean RecP2, Standard_Real& Psol, math_Vector& ParSol) ;
  
  Standard_EXPORT   Standard_Boolean Complete (Blend_RstRstFunction& Func, Blend_SurfCurvFuncInv& Finv1, Blend_CurvPointFuncInv& FinvP1, Blend_SurfCurvFuncInv& Finv2, Blend_CurvPointFuncInv& FinvP2, const Standard_Real Pmin) ;
  
      Standard_Boolean IsDone()  const;
  
     const  Handle(BRepBlend_Line)& Line()  const;
  
      Standard_Boolean Decroch1Start()  const;
  
      Standard_Boolean Decroch1End()  const;
  
      Standard_Boolean Decroch2Start()  const;
  
      Standard_Boolean Decroch2End()  const;




protected:





private:

  
  Standard_EXPORT   void InternalPerform (Blend_RstRstFunction& Func, Blend_SurfCurvFuncInv& Finv1, Blend_CurvPointFuncInv& FinvP1, Blend_SurfCurvFuncInv& Finv2, Blend_CurvPointFuncInv& FinvP2, const Standard_Real Bound) ;
  
  Standard_EXPORT   Standard_Boolean Recadre1 (Blend_RstRstFunction& Func, Blend_SurfCurvFuncInv& Finv, math_Vector& Solinv, Standard_Boolean& IsVtx, Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   Standard_Boolean Recadre2 (Blend_RstRstFunction& Func, Blend_SurfCurvFuncInv& Finv, math_Vector& Solinv, Standard_Boolean& IsVtx, Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   Standard_Boolean Recadre1 (Blend_CurvPointFuncInv& FinvP, math_Vector& Solinv, Standard_Boolean& IsVtx, Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   Standard_Boolean Recadre2 (Blend_CurvPointFuncInv& FinvP, math_Vector& Solinv, Standard_Boolean& IsVtx, Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   void Transition (const Standard_Boolean OnFirst, const Handle(Adaptor2d_HCurve2d)& Arc, const Standard_Real Param, IntSurf_Transition& TLine, IntSurf_Transition& TArc) ;
  
  Standard_EXPORT   void MakeExtremity (BRepBlend_Extremity& Extrem, const Standard_Boolean OnFirst, const Handle(Adaptor2d_HCurve2d)& Arc, const Standard_Real Param, const Standard_Boolean IsVtx, const Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT   Blend_Status CheckDeflectionOnRst1 (const Blend_Point& CurPoint) ;
  
  Standard_EXPORT   Blend_Status CheckDeflectionOnRst2 (const Blend_Point& CurPoint) ;
  
  Standard_EXPORT   Blend_Status TestArret (Blend_RstRstFunction& Func, const Standard_Boolean TestDeflection, const Blend_Status State) ;
  
  Standard_EXPORT   Standard_Boolean CheckInside (Blend_RstRstFunction& Func, TopAbs_State& SituOnC1, TopAbs_State& SituOnC2, Blend_DecrochStatus& Decroch) ;


  Standard_Boolean done;
  Handle(BRepBlend_Line) line;
  math_Vector sol;
  Handle(Adaptor3d_HSurface) surf1;
  Handle(Adaptor3d_TopolTool) domain1;
  Handle(Adaptor3d_HSurface) surf2;
  Handle(Adaptor3d_TopolTool) domain2;
  Handle(Adaptor2d_HCurve2d) rst1;
  Handle(Adaptor2d_HCurve2d) rst2;
  Standard_Real tolesp;
  Standard_Real tolgui;
  Standard_Real pasmax;
  Standard_Real fleche;
  Standard_Real param;
  Blend_Point previousP;
  Standard_Boolean rebrou;
  Standard_Boolean iscomplete;
  Standard_Boolean comptra;
  Standard_Real sens;
  Blend_DecrochStatus decrochdeb;
  Blend_DecrochStatus decrochfin;


};


#include <BRepBlend_RstRstLineBuilder.lxx>





#endif // _BRepBlend_RstRstLineBuilder_HeaderFile
