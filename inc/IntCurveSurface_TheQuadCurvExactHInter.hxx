// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_TheQuadCurvExactHInter_HeaderFile
#define _IntCurveSurface_TheQuadCurvExactHInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class Adaptor3d_HCurve;
class IntCurveSurface_TheHCurveTool;
class IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter;



class IntCurveSurface_TheQuadCurvExactHInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntCurveSurface_TheQuadCurvExactHInter(const Handle(Adaptor3d_HSurface)& S, const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Integer NbRoots()  const;
  
  Standard_EXPORT   Standard_Real Root (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Integer NbIntervals()  const;
  
  Standard_EXPORT   void Intervals (const Standard_Integer Index, Standard_Real& U1, Standard_Real& U2)  const;




protected:





private:



  Standard_Integer nbpnts;
  TColStd_SequenceOfReal pnts;
  Standard_Integer nbintv;
  TColStd_SequenceOfReal intv;


};







#endif // _IntCurveSurface_TheQuadCurvExactHInter_HeaderFile
