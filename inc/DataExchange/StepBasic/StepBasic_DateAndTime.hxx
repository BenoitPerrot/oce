// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DateAndTime_HeaderFile
#define _StepBasic_DateAndTime_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_DateAndTime.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_Date.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_LocalTime.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_Date;
class StepBasic_LocalTime;



class StepBasic_DateAndTime : public MMgt_TShared
{

public:

  
  //! Returns a DateAndTime
  Standard_EXPORT StepBasic_DateAndTime();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Date)& aDateComponent, const Handle(StepBasic_LocalTime)& aTimeComponent) ;
  
  Standard_EXPORT   void SetDateComponent (const Handle(StepBasic_Date)& aDateComponent) ;
  
  Standard_EXPORT   Handle(StepBasic_Date) DateComponent()  const;
  
  Standard_EXPORT   void SetTimeComponent (const Handle(StepBasic_LocalTime)& aTimeComponent) ;
  
  Standard_EXPORT   Handle(StepBasic_LocalTime) TimeComponent()  const;




  DEFINE_STANDARD_RTTI(StepBasic_DateAndTime)

protected:




private: 


  Handle(StepBasic_Date) dateComponent;
  Handle(StepBasic_LocalTime) timeComponent;


};







#endif // _StepBasic_DateAndTime_HeaderFile
