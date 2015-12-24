// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepDimTol_ShapeToleranceSelect_HeaderFile
#define _StepDimTol_ShapeToleranceSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepDimTol/Handle_StepDimTol_GeometricTolerance.hxx>
#include <DataExchange/StepShape/Handle_StepShape_PlusMinusTolerance.hxx>
class Standard_Transient;
class StepDimTol_GeometricTolerance;
class StepShape_PlusMinusTolerance;


//! Representation of STEP SELECT type ShapeToleranceSelect
class StepDimTol_ShapeToleranceSelect  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepDimTol_ShapeToleranceSelect();
  
  //! Recognizes a kind of ShapeToleranceSelect select type
  //! 1 -> GeometricTolerance from StepDimTol
  //! 2 -> PlusMinusTolerance from StepShape
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as GeometricTolerance (or Null if another type)
  Standard_EXPORT   Handle(StepDimTol_GeometricTolerance) GeometricTolerance()  const;
  
  //! Returns Value as PlusMinusTolerance (or Null if another type)
  Standard_EXPORT   Handle(StepShape_PlusMinusTolerance) PlusMinusTolerance()  const;




protected:





private:





};







#endif // _StepDimTol_ShapeToleranceSelect_HeaderFile
