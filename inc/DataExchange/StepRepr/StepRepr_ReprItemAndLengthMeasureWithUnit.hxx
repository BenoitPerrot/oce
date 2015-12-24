// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ReprItemAndLengthMeasureWithUnit_HeaderFile
#define _StepRepr_ReprItemAndLengthMeasureWithUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_LengthMeasureWithUnit.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_MeasureRepresentationItem.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_MeasureWithUnit.hxx>
#include <DataExchange/StepRepr/StepRepr_RepresentationItem.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_RepresentationItem.hxx>
class StepBasic_LengthMeasureWithUnit;
class StepRepr_MeasureRepresentationItem;
class StepBasic_MeasureWithUnit;
class StepRepr_RepresentationItem;



class StepRepr_ReprItemAndLengthMeasureWithUnit : public StepRepr_RepresentationItem
{

public:

  
  Standard_EXPORT StepRepr_ReprItemAndLengthMeasureWithUnit();
  
  Standard_EXPORT   void Init (const Handle(StepBasic_MeasureWithUnit)& aMWU, const Handle(StepRepr_RepresentationItem)& aRI) ;
  
  Standard_EXPORT   void SetLengthMeasureWithUnit (const Handle(StepBasic_LengthMeasureWithUnit)& aLMWU) ;
  
  Standard_EXPORT   Handle(StepBasic_LengthMeasureWithUnit) GetLengthMeasureWithUnit()  const;
  
  Standard_EXPORT   Handle(StepRepr_MeasureRepresentationItem) GetMeasureRepresentationItem()  const;
  
  Standard_EXPORT   void SetMeasureWithUnit (const Handle(StepBasic_MeasureWithUnit)& aMWU) ;
  
  Standard_EXPORT   Handle(StepBasic_MeasureWithUnit) GetMeasureWithUnit()  const;
  
  Standard_EXPORT   Handle(StepRepr_RepresentationItem) GetRepresentationItem()  const;




  DEFINE_STANDARD_RTTI(StepRepr_ReprItemAndLengthMeasureWithUnit)

protected:




private: 


  Handle(StepBasic_LengthMeasureWithUnit) myLengthMeasureWithUnit;
  Handle(StepRepr_MeasureRepresentationItem) myMeasureRepresentationItem;
  Handle(StepBasic_MeasureWithUnit) myMeasureWithUnit;


};







#endif // _StepRepr_ReprItemAndLengthMeasureWithUnit_HeaderFile
