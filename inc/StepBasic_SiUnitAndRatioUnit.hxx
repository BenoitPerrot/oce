// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SiUnitAndRatioUnit_HeaderFile
#define _StepBasic_SiUnitAndRatioUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_SiUnitAndRatioUnit.hxx>

#include <Handle_StepBasic_RatioUnit.hxx>
#include <StepBasic_SiUnit.hxx>
#include <Handle_StepBasic_DimensionalExponents.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <StepBasic_SiPrefix.hxx>
#include <StepBasic_SiUnitName.hxx>
class StepBasic_RatioUnit;
class StepBasic_DimensionalExponents;



class StepBasic_SiUnitAndRatioUnit : public StepBasic_SiUnit
{

public:

  
  //! Returns a SiUnitAndRatioUnit
  Standard_EXPORT StepBasic_SiUnitAndRatioUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void Init (const Standard_Boolean hasAprefix, const StepBasic_SiPrefix aPrefix, const StepBasic_SiUnitName aName) ;
  
  Standard_EXPORT   void SetRatioUnit (const Handle(StepBasic_RatioUnit)& aRatioUnit) ;
  
  Standard_EXPORT   Handle(StepBasic_RatioUnit) RatioUnit()  const;




  DEFINE_STANDARD_RTTI(StepBasic_SiUnitAndRatioUnit)

protected:




private: 


  Handle(StepBasic_RatioUnit) ratioUnit;


};







#endif // _StepBasic_SiUnitAndRatioUnit_HeaderFile
