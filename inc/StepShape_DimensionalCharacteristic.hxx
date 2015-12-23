// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_DimensionalCharacteristic_HeaderFile
#define _StepShape_DimensionalCharacteristic_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepShape_DimensionalLocation.hxx>
#include <Handle_StepShape_DimensionalSize.hxx>
class Standard_Transient;
class StepShape_DimensionalLocation;
class StepShape_DimensionalSize;


//! Representation of STEP SELECT type DimensionalCharacteristic
class StepShape_DimensionalCharacteristic  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepShape_DimensionalCharacteristic();
  
  //! Recognizes a kind of DimensionalCharacteristic select type
  //! 1 -> DimensionalLocation from StepShape
  //! 2 -> DimensionalSize from StepShape
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as DimensionalLocation (or Null if another type)
  Standard_EXPORT   Handle(StepShape_DimensionalLocation) DimensionalLocation()  const;
  
  //! Returns Value as DimensionalSize (or Null if another type)
  Standard_EXPORT   Handle(StepShape_DimensionalSize) DimensionalSize()  const;




protected:





private:





};







#endif // _StepShape_DimensionalCharacteristic_HeaderFile
