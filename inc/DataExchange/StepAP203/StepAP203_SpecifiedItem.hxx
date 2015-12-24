// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_SpecifiedItem_HeaderFile
#define _StepAP203_SpecifiedItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinition.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ShapeAspect.hxx>
class Standard_Transient;
class StepBasic_ProductDefinition;
class StepRepr_ShapeAspect;


//! Representation of STEP SELECT type SpecifiedItem
class StepAP203_SpecifiedItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepAP203_SpecifiedItem();
  
  //! Recognizes a kind of SpecifiedItem select type
  //! 1 -> ProductDefinition from StepBasic
  //! 2 -> ShapeAspect from StepRepr
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as ProductDefinition (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  //! Returns Value as ShapeAspect (or Null if another type)
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) ShapeAspect()  const;




protected:





private:





};







#endif // _StepAP203_SpecifiedItem_HeaderFile
