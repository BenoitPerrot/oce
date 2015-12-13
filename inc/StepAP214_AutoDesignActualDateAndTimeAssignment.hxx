// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignActualDateAndTimeAssignment_HeaderFile
#define _StepAP214_AutoDesignActualDateAndTimeAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>

#include <Handle_StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx>
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <Handle_StepBasic_DateAndTime.hxx>
#include <Handle_StepBasic_DateTimeRole.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepAP214_HArray1OfAutoDesignDateAndTimeItem;
class StepBasic_DateAndTime;
class StepBasic_DateTimeRole;
class StepAP214_AutoDesignDateAndTimeItem;



class StepAP214_AutoDesignActualDateAndTimeAssignment : public StepBasic_DateAndTimeAssignment
{

public:

  
  //! Returns a AutoDesignActualDateAndTimeAssignment
  Standard_EXPORT StepAP214_AutoDesignActualDateAndTimeAssignment();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DateAndTime)& aAssignedDateAndTime, const Handle(StepBasic_DateTimeRole)& aRole) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DateAndTime)& aAssignedDateAndTime, const Handle(StepBasic_DateTimeRole)& aRole, const Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem)& aItems) ;
  
  Standard_EXPORT   void SetItems (const Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem)& aItems) ;
  
  Standard_EXPORT   Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem) Items()  const;
  
  Standard_EXPORT   StepAP214_AutoDesignDateAndTimeItem ItemsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbItems()  const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignActualDateAndTimeAssignment)

protected:




private: 


  Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem) items;


};







#endif // _StepAP214_AutoDesignActualDateAndTimeAssignment_HeaderFile
