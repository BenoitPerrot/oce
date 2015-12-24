// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_ReparametrisedCompositeCurveSegment_HeaderFile
#define _StepGeom_ReparametrisedCompositeCurveSegment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_ReparametrisedCompositeCurveSegment.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <DataExchange/StepGeom/StepGeom_CompositeCurveSegment.hxx>
#include <DataExchange/StepGeom/StepGeom_TransitionCode.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_Curve.hxx>
class StepGeom_Curve;



class StepGeom_ReparametrisedCompositeCurveSegment : public StepGeom_CompositeCurveSegment
{

public:

  
  //! Returns a ReparametrisedCompositeCurveSegment
  Standard_EXPORT StepGeom_ReparametrisedCompositeCurveSegment();
  
  Standard_EXPORT virtual   void Init (const StepGeom_TransitionCode aTransition, const Standard_Boolean aSameSense, const Handle(StepGeom_Curve)& aParentCurve) ;
  
  Standard_EXPORT virtual   void Init (const StepGeom_TransitionCode aTransition, const Standard_Boolean aSameSense, const Handle(StepGeom_Curve)& aParentCurve, const Standard_Real aParamLength) ;
  
  Standard_EXPORT   void SetParamLength (const Standard_Real aParamLength) ;
  
  Standard_EXPORT   Standard_Real ParamLength()  const;




  DEFINE_STANDARD_RTTI(StepGeom_ReparametrisedCompositeCurveSegment)

protected:




private: 


  Standard_Real paramLength;


};







#endif // _StepGeom_ReparametrisedCompositeCurveSegment_HeaderFile
