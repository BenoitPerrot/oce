// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepApprox_ApproxLine_HeaderFile
#define _BRepApprox_ApproxLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepApprox_ApproxLine.hxx>

#include <Handle_Geom_BSplineCurve.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
#include <Handle_IntSurf_LineOn2S.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Geom_BSplineCurve;
class Geom2d_BSplineCurve;
class IntSurf_LineOn2S;
class IntSurf_PntOn2S;



class BRepApprox_ApproxLine : public MMgt_TShared
{

public:

  
  Standard_EXPORT BRepApprox_ApproxLine(const Handle(Geom_BSplineCurve)& CurveXYZ, const Handle(Geom2d_BSplineCurve)& CurveUV1, const Handle(Geom2d_BSplineCurve)& CurveUV2);
  
  Standard_EXPORT BRepApprox_ApproxLine(const Handle(IntSurf_LineOn2S)& lin, const Standard_Boolean Tang);
  
  Standard_EXPORT   Standard_Integer NbPnts()  const;
  
  Standard_EXPORT   IntSurf_PntOn2S Point (const Standard_Integer Index) ;




  DEFINE_STANDARD_RTTI(BRepApprox_ApproxLine)

protected:




private: 


  Handle(Geom_BSplineCurve) myCurveXYZ;
  Handle(Geom2d_BSplineCurve) myCurveUV1;
  Handle(Geom2d_BSplineCurve) myCurveUV2;
  Handle(IntSurf_LineOn2S) myLineOn2S;


};







#endif // _BRepApprox_ApproxLine_HeaderFile
