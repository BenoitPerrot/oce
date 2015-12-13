// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_NamedUnit_HeaderFile
#define _StepBasic_NamedUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_NamedUnit.hxx>

#include <Handle_StepBasic_DimensionalExponents.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_DimensionalExponents;



class StepBasic_NamedUnit : public MMgt_TShared
{

public:

  
  //! Returns a NamedUnit
  Standard_EXPORT StepBasic_NamedUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void SetDimensions (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   Handle(StepBasic_DimensionalExponents) Dimensions()  const;




  DEFINE_STANDARD_RTTI(StepBasic_NamedUnit)

protected:




private: 


  Handle(StepBasic_DimensionalExponents) dimensions;


};







#endif // _StepBasic_NamedUnit_HeaderFile
