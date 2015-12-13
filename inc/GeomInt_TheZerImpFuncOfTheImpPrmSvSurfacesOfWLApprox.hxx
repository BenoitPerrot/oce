// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox_HeaderFile
#define _GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir2d.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <math_Vector.hxx>
class StdFail_UndefinedDerivative;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class IntSurf_Quadric;
class IntSurf_QuadricTool;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Dir2d;



class GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox();
  
  Standard_EXPORT GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox(const Handle(Adaptor3d_HSurface)& PS, const IntSurf_Quadric& IS);
  
  Standard_EXPORT GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox(const IntSurf_Quadric& IS);
  
      void Set (const Handle(Adaptor3d_HSurface)& PS) ;
  
      void SetImplicitSurface (const IntSurf_Quadric& IS) ;
  
      void Set (const Standard_Real Tolerance) ;
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;
  
      Standard_Real Root()  const;
  
      Standard_Real Tolerance()  const;
  
     const  gp_Pnt& Point()  const;
  
  Standard_EXPORT   Standard_Boolean IsTangent() ;
  
     const  gp_Vec& Direction3d() ;
  
     const  gp_Dir2d& Direction2d() ;
  
     const  Handle(Adaptor3d_HSurface)& PSurface()  const;
  
     const  IntSurf_Quadric& ISurface()  const;




protected:





private:



  Standard_Address surf;
  Standard_Address func;
  Standard_Real u;
  Standard_Real v;
  Standard_Real tol;
  gp_Pnt pntsol;
  Standard_Real valf;
  Standard_Boolean computed;
  Standard_Boolean tangent;
  Standard_Real tgdu;
  Standard_Real tgdv;
  gp_Vec gradient;
  Standard_Boolean derived;
  gp_Vec d1u;
  gp_Vec d1v;
  gp_Vec d3d;
  gp_Dir2d d2d;


};

#define ThePSurface Handle(Adaptor3d_HSurface)
#define ThePSurface_hxx <Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define TheISurface IntSurf_Quadric
#define TheISurface_hxx <IntSurf_Quadric.hxx>
#define TheISurfaceTool IntSurf_QuadricTool
#define TheISurfaceTool_hxx <IntSurf_QuadricTool.hxx>
#define IntImp_ZerImpFunc GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox
#define IntImp_ZerImpFunc_hxx <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>

#include <IntImp_ZerImpFunc.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef TheISurface
#undef TheISurface_hxx
#undef TheISurfaceTool
#undef TheISurfaceTool_hxx
#undef IntImp_ZerImpFunc
#undef IntImp_ZerImpFunc_hxx




#endif // _GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox_HeaderFile
