// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignActualDateAssignment_HeaderFile
#define _StepAP214_AutoDesignActualDateAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepAP214/Handle_StepAP214_AutoDesignActualDateAssignment.hxx>

#include <DataExchange/StepAP214/Handle_StepAP214_HArray1OfAutoDesignDatedItem.hxx>
#include <DataExchange/StepBasic/StepBasic_DateAssignment.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Date.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_DateRole.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepAP214_HArray1OfAutoDesignDatedItem;
class StepBasic_Date;
class StepBasic_DateRole;
class StepAP214_AutoDesignDatedItem;



class StepAP214_AutoDesignActualDateAssignment : public StepBasic_DateAssignment
{

public:

  
  //! Returns a AutoDesignActualDateAssignment
  Standard_EXPORT StepAP214_AutoDesignActualDateAssignment();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Date)& aAssignedDate, const Handle(StepBasic_DateRole)& aRole) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Date)& aAssignedDate, const Handle(StepBasic_DateRole)& aRole, const Handle(StepAP214_HArray1OfAutoDesignDatedItem)& aItems) ;
  
  Standard_EXPORT   void SetItems (const Handle(StepAP214_HArray1OfAutoDesignDatedItem)& aItems) ;
  
  Standard_EXPORT   Handle(StepAP214_HArray1OfAutoDesignDatedItem) Items()  const;
  
  Standard_EXPORT   StepAP214_AutoDesignDatedItem ItemsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbItems()  const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignActualDateAssignment)

protected:




private: 


  Handle(StepAP214_HArray1OfAutoDesignDatedItem) items;


};







#endif // _StepAP214_AutoDesignActualDateAssignment_HeaderFile
