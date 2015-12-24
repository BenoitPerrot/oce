// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_SplitCurve3d_HeaderFile
#define _ShapeUpgrade_SplitCurve3d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/ShapeUpgrade/Handle_ShapeUpgrade_SplitCurve3d.hxx>

#include <Geometry/Geom/Handle_Geom_Curve.hxx>
#include <Geometry/TColGeom/Handle_TColGeom_HArray1OfCurve.hxx>
#include <ModelingAlgorithms/ShapeUpgrade/ShapeUpgrade_SplitCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Geom_Curve;
class TColGeom_HArray1OfCurve;


//! Splits a 3d curve with a criterion.
class ShapeUpgrade_SplitCurve3d : public ShapeUpgrade_SplitCurve
{

public:

  
  //! Empty constructor.
  Standard_EXPORT ShapeUpgrade_SplitCurve3d();
  
  //! Initializes with curve with its first and last parameters.
  Standard_EXPORT   void Init (const Handle(Geom_Curve)& C) ;
  
  //! Initializes with curve with its parameters.
  Standard_EXPORT   void Init (const Handle(Geom_Curve)& C, const Standard_Real First, const Standard_Real Last) ;
  
  //! If Segment is True, the result is composed with
  //! segments of the curve bounded by the SplitValues.  If
  //! Segment is False, the result is composed with trimmed
  //! Curves all based on the same complete curve.
  Standard_EXPORT virtual   void Build (const Standard_Boolean Segment) ;
  
  Standard_EXPORT  const  Handle(TColGeom_HArray1OfCurve)& GetCurves()  const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_SplitCurve3d)

protected:


  Handle(Geom_Curve) myCurve;
  Handle(TColGeom_HArray1OfCurve) myResultingCurves;


private: 




};







#endif // _ShapeUpgrade_SplitCurve3d_HeaderFile
