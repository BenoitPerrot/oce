// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_UniformCurveAndRationalBSplineCurve_HeaderFile
#define _StepGeom_UniformCurveAndRationalBSplineCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_UniformCurveAndRationalBSplineCurve.hxx>

#include <Handle_StepGeom_UniformCurve.hxx>
#include <Handle_StepGeom_RationalBSplineCurve.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_StepGeom_HArray1OfCartesianPoint.hxx>
#include <StepGeom_BSplineCurveForm.hxx>
#include <StepData_Logical.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class StepGeom_UniformCurve;
class StepGeom_RationalBSplineCurve;
class TCollection_HAsciiString;
class StepGeom_HArray1OfCartesianPoint;
class TColStd_HArray1OfReal;



class StepGeom_UniformCurveAndRationalBSplineCurve : public StepGeom_BSplineCurve
{

public:

  
  //! Returns a UniformCurveAndRationalBSplineCurve
  Standard_EXPORT StepGeom_UniformCurveAndRationalBSplineCurve();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect, const Handle(StepGeom_UniformCurve)& aUniformCurve, const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect, const Handle(TColStd_HArray1OfReal)& aWeightsData) ;
  
  Standard_EXPORT   void SetUniformCurve (const Handle(StepGeom_UniformCurve)& aUniformCurve) ;
  
  Standard_EXPORT   Handle(StepGeom_UniformCurve) UniformCurve()  const;
  
  Standard_EXPORT   void SetRationalBSplineCurve (const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve) ;
  
  Standard_EXPORT   Handle(StepGeom_RationalBSplineCurve) RationalBSplineCurve()  const;
  
  Standard_EXPORT   void SetWeightsData (const Handle(TColStd_HArray1OfReal)& aWeightsData) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) WeightsData()  const;
  
  Standard_EXPORT   Standard_Real WeightsDataValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbWeightsData()  const;




  DEFINE_STANDARD_RTTI(StepGeom_UniformCurveAndRationalBSplineCurve)

protected:




private: 


  Handle(StepGeom_UniformCurve) uniformCurve;
  Handle(StepGeom_RationalBSplineCurve) rationalBSplineCurve;


};







#endif // _StepGeom_UniformCurveAndRationalBSplineCurve_HeaderFile
