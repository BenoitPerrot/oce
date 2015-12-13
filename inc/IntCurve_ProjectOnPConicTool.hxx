// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurve_ProjectOnPConicTool_HeaderFile
#define _IntCurve_ProjectOnPConicTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
class IntCurve_PConic;
class gp_Pnt2d;


//! This class provides a tool which computes the parameter
//! of a point near a parametric conic.
class IntCurve_ProjectOnPConicTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns  the parameter V  of the  point   on the
  //! parametric  curve corresponding to  the  Point  Pnt.   The
  //! Correspondance between  Pnt  and the  point   P(V) on  the
  //! parametric    curve  must  be  coherent with    the way of
  //! determination  of the signed  distance between a point and
  //! the implicit curve.  Tol is the tolerance on  the distance
  //! between a point and the parametrised curve.  In that case,
  //! no bounds are given.  The research  of the rigth parameter
  //! has to  be  made  on the natural  parametric domain of the
  //! curve.
  Standard_EXPORT static   Standard_Real FindParameter (const IntCurve_PConic& C, const gp_Pnt2d& Pnt, const Standard_Real Tol) ;
  
  //! Returns the  parameter  V of the   point  on the
  //! parametric  curve corresponding  to  the   Point Pnt.  The
  //! Correspondance  between Pnt and  the   point  P(V) on  the
  //! parametric  curve  must  be  coherent   with the  way   of
  //! determination of the  signed distance between  a point and
  //! the implicit curve.  Tol  is the tolerance on the distance
  //! between a point and the  parametrised curve.  LowParameter
  //! and HighParameter give the  boundaries of the interval  in
  //! wich the parameter  certainly  lies.  These parameters are
  //! given to implement a  more efficient  algoritm. So,  it is
  //! not necessary to check   that the returned value  verifies
  //! LowParameter <= Value <= HighParameter.
  Standard_EXPORT static   Standard_Real FindParameter (const IntCurve_PConic& C, const gp_Pnt2d& Pnt, const Standard_Real LowParameter, const Standard_Real HighParameter, const Standard_Real Tol) ;




protected:





private:





};







#endif // _IntCurve_ProjectOnPConicTool_HeaderFile
