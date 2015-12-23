// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_BSplineCurveWithKnots_HeaderFile
#define _StepGeom_BSplineCurveWithKnots_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_BSplineCurveWithKnots.hxx>

#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <StepGeom_KnotType.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_StepGeom_HArray1OfCartesianPoint.hxx>
#include <StepGeom_BSplineCurveForm.hxx>
#include <DataExchange/StepData/StepData_Logical.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;
class StepGeom_HArray1OfCartesianPoint;



class StepGeom_BSplineCurveWithKnots : public StepGeom_BSplineCurve
{

public:

  
  //! Returns a BSplineCurveWithKnots
  Standard_EXPORT StepGeom_BSplineCurveWithKnots();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect, const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities, const Handle(TColStd_HArray1OfReal)& aKnots, const StepGeom_KnotType aKnotSpec) ;
  
  Standard_EXPORT   void SetKnotMultiplicities (const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) KnotMultiplicities()  const;
  
  Standard_EXPORT   Standard_Integer KnotMultiplicitiesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbKnotMultiplicities()  const;
  
  Standard_EXPORT   void SetKnots (const Handle(TColStd_HArray1OfReal)& aKnots) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) Knots()  const;
  
  Standard_EXPORT   Standard_Real KnotsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbKnots()  const;
  
  Standard_EXPORT   void SetKnotSpec (const StepGeom_KnotType aKnotSpec) ;
  
  Standard_EXPORT   StepGeom_KnotType KnotSpec()  const;




  DEFINE_STANDARD_RTTI(StepGeom_BSplineCurveWithKnots)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) knotMultiplicities;
  Handle(TColStd_HArray1OfReal) knots;
  StepGeom_KnotType knotSpec;


};







#endif // _StepGeom_BSplineCurveWithKnots_HeaderFile
