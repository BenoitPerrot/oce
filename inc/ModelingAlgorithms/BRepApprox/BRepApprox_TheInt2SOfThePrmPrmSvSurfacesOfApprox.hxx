// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox_HeaderFile
#define _BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <ModelingAlgorithms/BRepApprox/BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/IntImp/IntImp_ConstIsoparametric.hxx>
class StdFail_NotDone;
class Standard_DomainError;
class Standard_ConstructionError;
class StdFail_UndefinedDerivative;
class BRepAdaptor_Surface;
class BRepApprox_SurfaceTool;
class BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox;
class TColStd_Array1OfReal;
class math_FunctionSetRoot;
class IntSurf_PntOn2S;
class gp_Dir;
class gp_Dir2d;



class BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox();
  
  Standard_EXPORT BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox(const TColStd_Array1OfReal& Param, const BRepAdaptor_Surface& S1, const BRepAdaptor_Surface& S2, const Standard_Real TolTangency);
  
  Standard_EXPORT BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox(const BRepAdaptor_Surface& S1, const BRepAdaptor_Surface& S2, const Standard_Real TolTangency);
  
  Standard_EXPORT   IntImp_ConstIsoparametric Perform (const TColStd_Array1OfReal& Param, math_FunctionSetRoot& Rsnld) ;
  
  Standard_EXPORT   IntImp_ConstIsoparametric Perform (const TColStd_Array1OfReal& Param, math_FunctionSetRoot& Rsnld, const IntImp_ConstIsoparametric ChoixIso) ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Boolean IsEmpty()  const;
  
     const  IntSurf_PntOn2S& Point()  const;
  
      Standard_Boolean IsTangent()  const;
  
     const  gp_Dir& Direction()  const;
  
     const  gp_Dir2d& DirectionOnS1()  const;
  
     const  gp_Dir2d& DirectionOnS2()  const;
  
      BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox& Function() ;




protected:





private:



  Standard_Boolean done;
  Standard_Boolean empty;
  IntSurf_PntOn2S pint;
  Standard_Boolean tangent;
  gp_Dir d3d;
  gp_Dir2d d2d1;
  gp_Dir2d d2d2;
  BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox myZerParFunc;
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

#define ThePSurface BRepAdaptor_Surface
#define ThePSurface_hxx <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#define ThePSurfaceTool BRepApprox_SurfaceTool
#define ThePSurfaceTool_hxx <ModelingAlgorithms/BRepApprox/BRepApprox_SurfaceTool.hxx>
#define IntImp_TheFunction BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox
#define IntImp_TheFunction_hxx <ModelingAlgorithms/BRepApprox/BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#define IntImp_Int2S BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox
#define IntImp_Int2S_hxx <ModelingAlgorithms/BRepApprox/BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>

#include <ModelingAlgorithms/IntImp/IntImp_Int2S.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef IntImp_TheFunction
#undef IntImp_TheFunction_hxx
#undef IntImp_Int2S
#undef IntImp_Int2S_hxx




#endif // _BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox_HeaderFile
