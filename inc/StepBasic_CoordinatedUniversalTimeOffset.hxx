// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_CoordinatedUniversalTimeOffset_HeaderFile
#define _StepBasic_CoordinatedUniversalTimeOffset_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_CoordinatedUniversalTimeOffset.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <StepBasic_AheadOrBehind.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>



class StepBasic_CoordinatedUniversalTimeOffset : public MMgt_TShared
{

public:

  
  //! Returns a CoordinatedUniversalTimeOffset
  Standard_EXPORT StepBasic_CoordinatedUniversalTimeOffset();
  
  Standard_EXPORT virtual   void Init (const Standard_Integer aHourOffset, const Standard_Boolean hasAminuteOffset, const Standard_Integer aMinuteOffset, const StepBasic_AheadOrBehind aSense) ;
  
  Standard_EXPORT   void SetHourOffset (const Standard_Integer aHourOffset) ;
  
  Standard_EXPORT   Standard_Integer HourOffset()  const;
  
  Standard_EXPORT   void SetMinuteOffset (const Standard_Integer aMinuteOffset) ;
  
  Standard_EXPORT   void UnSetMinuteOffset() ;
  
  Standard_EXPORT   Standard_Integer MinuteOffset()  const;
  
  Standard_EXPORT   Standard_Boolean HasMinuteOffset()  const;
  
  Standard_EXPORT   void SetSense (const StepBasic_AheadOrBehind aSense) ;
  
  Standard_EXPORT   StepBasic_AheadOrBehind Sense()  const;




  DEFINE_STANDARD_RTTI(StepBasic_CoordinatedUniversalTimeOffset)

protected:




private: 


  Standard_Integer hourOffset;
  Standard_Integer minuteOffset;
  StepBasic_AheadOrBehind sense;
  Standard_Boolean hasMinuteOffset;


};







#endif // _StepBasic_CoordinatedUniversalTimeOffset_HeaderFile
