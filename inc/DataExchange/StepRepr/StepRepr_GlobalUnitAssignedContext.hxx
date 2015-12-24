// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_GlobalUnitAssignedContext_HeaderFile
#define _StepRepr_GlobalUnitAssignedContext_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_GlobalUnitAssignedContext.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_HArray1OfNamedUnit.hxx>
#include <DataExchange/StepRepr/StepRepr_RepresentationContext.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_NamedUnit.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepBasic_HArray1OfNamedUnit;
class TCollection_HAsciiString;
class StepBasic_NamedUnit;



class StepRepr_GlobalUnitAssignedContext : public StepRepr_RepresentationContext
{

public:

  
  //! Returns a GlobalUnitAssignedContext
  Standard_EXPORT StepRepr_GlobalUnitAssignedContext();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType, const Handle(StepBasic_HArray1OfNamedUnit)& aUnits) ;
  
  Standard_EXPORT   void SetUnits (const Handle(StepBasic_HArray1OfNamedUnit)& aUnits) ;
  
  Standard_EXPORT   Handle(StepBasic_HArray1OfNamedUnit) Units()  const;
  
  Standard_EXPORT   Handle(StepBasic_NamedUnit) UnitsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbUnits()  const;




  DEFINE_STANDARD_RTTI(StepRepr_GlobalUnitAssignedContext)

protected:




private: 


  Handle(StepBasic_HArray1OfNamedUnit) units;


};







#endif // _StepRepr_GlobalUnitAssignedContext_HeaderFile
