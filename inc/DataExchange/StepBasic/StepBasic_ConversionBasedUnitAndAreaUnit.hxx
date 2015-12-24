// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnitAndAreaUnit_HeaderFile
#define _StepBasic_ConversionBasedUnitAndAreaUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ConversionBasedUnitAndAreaUnit.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_AreaUnit.hxx>
#include <DataExchange/StepBasic/StepBasic_ConversionBasedUnit.hxx>
class StepBasic_AreaUnit;



class StepBasic_ConversionBasedUnitAndAreaUnit : public StepBasic_ConversionBasedUnit
{

public:

  
  //! Returns a ConversionBasedUnitAndAreaUnit
  Standard_EXPORT StepBasic_ConversionBasedUnitAndAreaUnit();
  
  Standard_EXPORT   void SetAreaUnit (const Handle(StepBasic_AreaUnit)& anAreaUnit) ;
  
  Standard_EXPORT   Handle(StepBasic_AreaUnit) AreaUnit()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndAreaUnit)

protected:




private: 


  Handle(StepBasic_AreaUnit) areaUnit;


};







#endif // _StepBasic_ConversionBasedUnitAndAreaUnit_HeaderFile
