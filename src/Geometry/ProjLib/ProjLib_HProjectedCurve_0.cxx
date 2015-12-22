// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Geometry/ProjLib/ProjLib_HProjectedCurve.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Geometry/ProjLib/ProjLib_ProjectedCurve.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_Curve2d.hxx>

 


IMPLEMENT_STANDARD_TYPE(ProjLib_HProjectedCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Adaptor2d_HCurve2d),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ProjLib_HProjectedCurve)


IMPLEMENT_DOWNCAST(ProjLib_HProjectedCurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ProjLib_HProjectedCurve)


#define TheCurve ProjLib_ProjectedCurve
#define TheCurve_hxx <Geometry/ProjLib/ProjLib_ProjectedCurve.hxx>
#define Adaptor2d_GenHCurve2d ProjLib_HProjectedCurve
#define Adaptor2d_GenHCurve2d_hxx <Geometry/ProjLib/ProjLib_HProjectedCurve.hxx>
#define Handle_Adaptor2d_GenHCurve2d Handle_ProjLib_HProjectedCurve
#define Adaptor2d_GenHCurve2d_Type_() ProjLib_HProjectedCurve_Type_()
#include <Geometry/Adaptor2d/Adaptor2d_GenHCurve2d.gxx>

