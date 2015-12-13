// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SiUnit_HeaderFile
#define _StepBasic_SiUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_SiUnit.hxx>

#include <StepBasic_SiPrefix.hxx>
#include <StepBasic_SiUnitName.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <Handle_StepBasic_DimensionalExponents.hxx>
class StepBasic_DimensionalExponents;



class StepBasic_SiUnit : public StepBasic_NamedUnit
{

public:

  
  //! Returns a SiUnit
  Standard_EXPORT StepBasic_SiUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void Init (const Standard_Boolean hasAprefix, const StepBasic_SiPrefix aPrefix, const StepBasic_SiUnitName aName) ;
  
  Standard_EXPORT   void SetPrefix (const StepBasic_SiPrefix aPrefix) ;
  
  Standard_EXPORT   void UnSetPrefix() ;
  
  Standard_EXPORT   StepBasic_SiPrefix Prefix()  const;
  
  Standard_EXPORT   Standard_Boolean HasPrefix()  const;
  
  Standard_EXPORT   void SetName (const StepBasic_SiUnitName aName) ;
  
  Standard_EXPORT   StepBasic_SiUnitName Name()  const;
  
  Standard_EXPORT virtual   void SetDimensions (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   Handle(StepBasic_DimensionalExponents) Dimensions()  const;




  DEFINE_STANDARD_RTTI(StepBasic_SiUnit)

protected:




private: 


  StepBasic_SiPrefix prefix;
  StepBasic_SiUnitName name;
  Standard_Boolean hasPrefix;


};







#endif // _StepBasic_SiUnit_HeaderFile
