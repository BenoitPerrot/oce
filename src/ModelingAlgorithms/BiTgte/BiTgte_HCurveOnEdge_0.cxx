// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/BiTgte/BiTgte_HCurveOnEdge.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <ModelingAlgorithms/BiTgte/BiTgte_CurveOnEdge.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_Curve.hxx>

 


IMPLEMENT_STANDARD_TYPE(BiTgte_HCurveOnEdge)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Adaptor3d_HCurve),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BiTgte_HCurveOnEdge)


IMPLEMENT_DOWNCAST(BiTgte_HCurveOnEdge,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BiTgte_HCurveOnEdge)


#define TheCurve BiTgte_CurveOnEdge
#define TheCurve_hxx <ModelingAlgorithms/BiTgte/BiTgte_CurveOnEdge.hxx>
#define Adaptor3d_GenHCurve BiTgte_HCurveOnEdge
#define Adaptor3d_GenHCurve_hxx <ModelingAlgorithms/BiTgte/BiTgte_HCurveOnEdge.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_BiTgte_HCurveOnEdge
#define Adaptor3d_GenHCurve_Type_() BiTgte_HCurveOnEdge_Type_()
#include <Geometry/Adaptor3d/Adaptor3d_GenHCurve.gxx>

