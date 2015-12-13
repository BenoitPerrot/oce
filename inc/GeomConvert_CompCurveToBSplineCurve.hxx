// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomConvert_CompCurveToBSplineCurve_HeaderFile
#define _GeomConvert_CompCurveToBSplineCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Geom_BSplineCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Convert_ParameterisationType.hxx>
#include <Handle_Geom_BoundedCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Geom_BSplineCurve;
class Geom_BoundedCurve;


//! Algorithm converts and concat several curve in an BSplineCurve
class GeomConvert_CompCurveToBSplineCurve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Initialize the algorithme
  //! - Parameterisation is used to convert
  Standard_EXPORT GeomConvert_CompCurveToBSplineCurve(const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2);
  
  //! Initialize the algorithme with one curve
  //! - Parameterisation is used to convert
  Standard_EXPORT GeomConvert_CompCurveToBSplineCurve(const Handle(Geom_BoundedCurve)& BasisCurve, const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2);
  
  //! Append a curve in  the BSpline Return False if the
  //! curve is not G0  with the BSplineCurve.  Tolerance
  //! is   used to   check   continuity  and decrease
  //! Multiplicity at the common Knot until MinM
  //! if MinM = 0, the common Knot can be removed
  Standard_EXPORT   Standard_Boolean Add (const Handle(Geom_BoundedCurve)& NewCurve, const Standard_Real Tolerance, const Standard_Boolean After = Standard_False, const Standard_Boolean WithRatio = Standard_True, const Standard_Integer MinM = 0) ;
  
  Standard_EXPORT   Handle(Geom_BSplineCurve) BSplineCurve()  const;
  
  //! Clear a result curve
  Standard_EXPORT   void Clear() ;




protected:





private:

  
  //! Concat two BSplineCurves.
  Standard_EXPORT   void Add (Handle(Geom_BSplineCurve)& FirstCurve, Handle(Geom_BSplineCurve)& SecondCurve, const Standard_Boolean After, const Standard_Boolean WithRatio, const Standard_Integer MinM) ;


  Handle(Geom_BSplineCurve) myCurve;
  Standard_Real myTol;
  Convert_ParameterisationType myType;


};







#endif // _GeomConvert_CompCurveToBSplineCurve_HeaderFile
