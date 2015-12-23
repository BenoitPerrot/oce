// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <StepSelect_FileModifier.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <DataExchange/StepData/StepData_StepWriter.hxx>
#include <DataExchange/IFSelect/IFSelect_ContextWrite.hxx>

 


IMPLEMENT_STANDARD_TYPE(StepSelect_FileModifier)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepSelect_FileModifier)


IMPLEMENT_DOWNCAST(StepSelect_FileModifier,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepSelect_FileModifier)


#define Writer StepData_StepWriter
#define Writer_hxx <DataExchange/StepData/StepData_StepWriter.hxx>
#define IFSelect_FileModifier StepSelect_FileModifier
#define IFSelect_FileModifier_hxx <StepSelect_FileModifier.hxx>
#define Handle_IFSelect_FileModifier Handle_StepSelect_FileModifier
#define IFSelect_FileModifier_Type_() StepSelect_FileModifier_Type_()
#include <DataExchange/IFSelect/IFSelect_FileModifier.gxx>

