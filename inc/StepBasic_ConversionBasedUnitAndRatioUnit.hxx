// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnitAndRatioUnit_HeaderFile
#define _StepBasic_ConversionBasedUnitAndRatioUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ConversionBasedUnitAndRatioUnit.hxx>

#include <Handle_StepBasic_RatioUnit.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <Handle_StepBasic_DimensionalExponents.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_MeasureWithUnit.hxx>
class StepBasic_RatioUnit;
class StepBasic_DimensionalExponents;
class TCollection_HAsciiString;
class StepBasic_MeasureWithUnit;



class StepBasic_ConversionBasedUnitAndRatioUnit : public StepBasic_ConversionBasedUnit
{

public:

  
  //! Returns a ConversionBasedUnitAndRatioUnit
  Standard_EXPORT StepBasic_ConversionBasedUnitAndRatioUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions, const Handle(TCollection_HAsciiString)& aName, const Handle(StepBasic_MeasureWithUnit)& aConversionFactor) ;
  
  Standard_EXPORT   void SetRatioUnit (const Handle(StepBasic_RatioUnit)& aRatioUnit) ;
  
  Standard_EXPORT   Handle(StepBasic_RatioUnit) RatioUnit()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndRatioUnit)

protected:




private: 


  Handle(StepBasic_RatioUnit) ratioUnit;


};







#endif // _StepBasic_ConversionBasedUnitAndRatioUnit_HeaderFile
