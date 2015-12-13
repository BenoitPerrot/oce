// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_CalendarDate_HeaderFile
#define _StepBasic_CalendarDate_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_CalendarDate.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <StepBasic_Date.hxx>



class StepBasic_CalendarDate : public StepBasic_Date
{

public:

  
  //! Returns a CalendarDate
  Standard_EXPORT StepBasic_CalendarDate();
  
  Standard_EXPORT virtual   void Init (const Standard_Integer aYearComponent) ;
  
  Standard_EXPORT virtual   void Init (const Standard_Integer aYearComponent, const Standard_Integer aDayComponent, const Standard_Integer aMonthComponent) ;
  
  Standard_EXPORT   void SetDayComponent (const Standard_Integer aDayComponent) ;
  
  Standard_EXPORT   Standard_Integer DayComponent()  const;
  
  Standard_EXPORT   void SetMonthComponent (const Standard_Integer aMonthComponent) ;
  
  Standard_EXPORT   Standard_Integer MonthComponent()  const;




  DEFINE_STANDARD_RTTI(StepBasic_CalendarDate)

protected:




private: 


  Standard_Integer dayComponent;
  Standard_Integer monthComponent;


};







#endif // _StepBasic_CalendarDate_HeaderFile
