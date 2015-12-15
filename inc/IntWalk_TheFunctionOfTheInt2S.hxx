// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntWalk_TheFunctionOfTheInt2S_HeaderFile
#define _IntWalk_TheFunctionOfTheInt2S_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <IntImp_ConstIsoparametric.hxx>
#include <Mathematics/Optimization/math_FunctionSetWithDerivatives.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
class StdFail_UndefinedDerivative;
class Standard_ConstructionError;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class math_Matrix;
class TColStd_Array1OfReal;



class IntWalk_TheFunctionOfTheInt2S  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntWalk_TheFunctionOfTheInt2S();
  
  Standard_EXPORT IntWalk_TheFunctionOfTheInt2S(const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor3d_HSurface)& S2);
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
  Standard_EXPORT   void ComputeParameters (const IntImp_ConstIsoparametric ChoixIso, const TColStd_Array1OfReal& Param, math_Vector& UVap, math_Vector& BornInf, math_Vector& BornSup, math_Vector& Tolerance) ;
  
      Standard_Real Root()  const;
  
      gp_Pnt Point()  const;
  
  Standard_EXPORT   Standard_Boolean IsTangent (const math_Vector& UVap, TColStd_Array1OfReal& Param, IntImp_ConstIsoparametric& BestChoix) ;
  
      gp_Dir Direction()  const;
  
      gp_Dir2d DirectionOnS1()  const;
  
      gp_Dir2d DirectionOnS2()  const;
  
     const  Handle(Adaptor3d_HSurface)& AuxillarSurface1()  const;
  
     const  Handle(Adaptor3d_HSurface)& AuxillarSurface2()  const;




protected:





private:



  Standard_Address surf1;
  Standard_Address surf2;
  gp_Pnt pntsol1;
  gp_Pnt pntsol2;
  Standard_Real f[3];
  Standard_Boolean compute;
  Standard_Boolean tangent;
  Standard_Real tgduv[4];
  gp_Vec dpuv[4];
  IntImp_ConstIsoparametric chxIso;
  Standard_Real paramConst;
  Standard_Real ua0;
  Standard_Real va0;
  Standard_Real ua1;
  Standard_Real va1;
  Standard_Real ub0;
  Standard_Real vb0;
  Standard_Real ub1;
  Standard_Real vb1;
  Standard_Real ures1;
  Standard_Real ures2;
  Standard_Real vres1;
  Standard_Real vres2;


};

#define ThePSurface Handle(Adaptor3d_HSurface)
#define ThePSurface_hxx <Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define IntImp_ZerParFunc IntWalk_TheFunctionOfTheInt2S
#define IntImp_ZerParFunc_hxx <IntWalk_TheFunctionOfTheInt2S.hxx>

#include <IntImp_ZerParFunc.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef IntImp_ZerParFunc
#undef IntImp_ZerParFunc_hxx




#endif // _IntWalk_TheFunctionOfTheInt2S_HeaderFile
