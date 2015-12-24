// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ValueQualifier_HeaderFile
#define _StepShape_ValueQualifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepShape/Handle_StepShape_PrecisionQualifier.hxx>
#include <DataExchange/StepShape/Handle_StepShape_TypeQualifier.hxx>
class Standard_Transient;
class StepShape_PrecisionQualifier;
class StepShape_TypeQualifier;


//! Added for Dimensional Tolerances
class StepShape_ValueQualifier  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepShape_ValueQualifier();
  
  //! Recognizes a kind of ValueQualifier Select Type :
  //! 1 -> PrecisionQualifier from StepShape
  //! 2 -> TypeQualifier from StepShape
  //! 3 -> UnceraintyQualifier .. not yet implemented
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as PrecisionQualifier
  Standard_EXPORT   Handle(StepShape_PrecisionQualifier) PrecisionQualifier()  const;
  
  //! Returns Value as TypeQualifier
  Standard_EXPORT   Handle(StepShape_TypeQualifier) TypeQualifier()  const;




protected:





private:





};







#endif // _StepShape_ValueQualifier_HeaderFile
