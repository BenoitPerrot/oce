// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bisector_Curve_HeaderFile
#define _Bisector_Curve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/Bisector/Handle_Bisector_Curve.hxx>

#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class gp_Pnt2d;



class Bisector_Curve : public Geom2d_Curve
{

public:

  
  Standard_EXPORT virtual   Standard_Real Parameter (const gp_Pnt2d& P)  const = 0;
  
  Standard_EXPORT virtual   Standard_Boolean IsExtendAtStart()  const = 0;
  
  Standard_EXPORT virtual   Standard_Boolean IsExtendAtEnd()  const = 0;
  
  //! If necessary,  breaks the  curve in  intervals  of
  //! continuity  <C1>.    And  returns   the number   of
  //! intervals.
  Standard_EXPORT virtual   Standard_Integer NbIntervals()  const = 0;
  
  //! Returns  the  first  parameter    of  the  current
  //! interval.
  Standard_EXPORT virtual   Standard_Real IntervalFirst (const Standard_Integer Index)  const = 0;
  
  //! Returns  the  last  parameter    of  the  current
  //! interval.
  Standard_EXPORT virtual   Standard_Real IntervalLast (const Standard_Integer Index)  const = 0;




  DEFINE_STANDARD_RTTI(Bisector_Curve)

protected:




private: 




};







#endif // _Bisector_Curve_HeaderFile
