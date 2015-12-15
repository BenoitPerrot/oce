// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntWalk_TheInt2S_HeaderFile
#define _IntWalk_TheInt2S_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <IntWalk_TheFunctionOfTheInt2S.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <IntImp_ConstIsoparametric.hxx>
class StdFail_NotDone;
class Standard_DomainError;
class Standard_ConstructionError;
class StdFail_UndefinedDerivative;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class IntWalk_TheFunctionOfTheInt2S;
class TColStd_Array1OfReal;
class math_FunctionSetRoot;
class IntSurf_PntOn2S;
class gp_Dir;
class gp_Dir2d;



class IntWalk_TheInt2S 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntWalk_TheInt2S();
  
  Standard_EXPORT IntWalk_TheInt2S(const TColStd_Array1OfReal& Param, const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor3d_HSurface)& S2, const Standard_Real TolTangency);
  
  Standard_EXPORT IntWalk_TheInt2S(const Handle(Adaptor3d_HSurface)& S1, const Handle(Adaptor3d_HSurface)& S2, const Standard_Real TolTangency);
  
  Standard_EXPORT   IntImp_ConstIsoparametric Perform (const TColStd_Array1OfReal& Param, math_FunctionSetRoot& Rsnld) ;
  
  Standard_EXPORT   IntImp_ConstIsoparametric Perform (const TColStd_Array1OfReal& Param, math_FunctionSetRoot& Rsnld, const IntImp_ConstIsoparametric ChoixIso) ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Boolean IsEmpty()  const;
  
     const  IntSurf_PntOn2S& Point()  const;
  
      Standard_Boolean IsTangent()  const;
  
     const  gp_Dir& Direction()  const;
  
     const  gp_Dir2d& DirectionOnS1()  const;
  
     const  gp_Dir2d& DirectionOnS2()  const;
  
      IntWalk_TheFunctionOfTheInt2S& Function() ;




protected:





private:



  Standard_Boolean done;
  Standard_Boolean empty;
  IntSurf_PntOn2S pint;
  Standard_Boolean tangent;
  gp_Dir d3d;
  gp_Dir2d d2d1;
  gp_Dir2d d2d2;
  IntWalk_TheFunctionOfTheInt2S myZerParFunc;
  Standard_Real tol;
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
#define ThePSurface_hxx <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#define IntImp_TheFunction IntWalk_TheFunctionOfTheInt2S
#define IntImp_TheFunction_hxx <IntWalk_TheFunctionOfTheInt2S.hxx>
#define IntImp_Int2S IntWalk_TheInt2S
#define IntImp_Int2S_hxx <IntWalk_TheInt2S.hxx>

#include <IntImp_Int2S.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef IntImp_TheFunction
#undef IntImp_TheFunction_hxx
#undef IntImp_Int2S
#undef IntImp_Int2S_hxx




#endif // _IntWalk_TheInt2S_HeaderFile
