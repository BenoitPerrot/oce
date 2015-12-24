// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeBSplineCurveWithKnots_HeaderFile
#define _GeomToStep_MakeBSplineCurveWithKnots_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepGeom/Handle_StepGeom_BSplineCurveWithKnots.hxx>
#include <DataExchange/GeomToStep/GeomToStep_Root.hxx>
#include <Geometry/Geom/Handle_Geom_BSplineCurve.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_BSplineCurve.hxx>
class StepGeom_BSplineCurveWithKnots;
class StdFail_NotDone;
class Geom_BSplineCurve;
class Geom2d_BSplineCurve;


//! This class implements the mapping between classes
//! BSplineCurve from Geom, Geom2d and the class
//! BSplineCurveWithKnots from StepGeom
//! which describes a bspline_curve_with_knots from
//! Prostep
class GeomToStep_MakeBSplineCurveWithKnots  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeBSplineCurveWithKnots(const Handle(Geom_BSplineCurve)& Bsplin);
  
  Standard_EXPORT GeomToStep_MakeBSplineCurveWithKnots(const Handle(Geom2d_BSplineCurve)& Bsplin);
  
  Standard_EXPORT  const  Handle(StepGeom_BSplineCurveWithKnots)& Value()  const;




protected:





private:



  Handle(StepGeom_BSplineCurveWithKnots) theBSplineCurveWithKnots;


};







#endif // _GeomToStep_MakeBSplineCurveWithKnots_HeaderFile
