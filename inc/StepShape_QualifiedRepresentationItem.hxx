// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_QualifiedRepresentationItem_HeaderFile
#define _StepShape_QualifiedRepresentationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_QualifiedRepresentationItem.hxx>

#include <Handle_StepShape_HArray1OfValueQualifier.hxx>
#include <DataExchange/StepRepr/StepRepr_RepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepShape_HArray1OfValueQualifier;
class TCollection_HAsciiString;
class StepShape_ValueQualifier;


//! Added for Dimensional Tolerances
class StepShape_QualifiedRepresentationItem : public StepRepr_RepresentationItem
{

public:

  
  Standard_EXPORT StepShape_QualifiedRepresentationItem();
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_HArray1OfValueQualifier)& qualifiers) ;
  
  Standard_EXPORT   Handle(StepShape_HArray1OfValueQualifier) Qualifiers()  const;
  
  Standard_EXPORT   Standard_Integer NbQualifiers()  const;
  
  Standard_EXPORT   void SetQualifiers (const Handle(StepShape_HArray1OfValueQualifier)& qualifiers) ;
  
  Standard_EXPORT   StepShape_ValueQualifier QualifiersValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   void SetQualifiersValue (const Standard_Integer num, const StepShape_ValueQualifier& aqualifier) ;




  DEFINE_STANDARD_RTTI(StepShape_QualifiedRepresentationItem)

protected:




private: 


  Handle(StepShape_HArray1OfValueQualifier) theQualifiers;


};







#endif // _StepShape_QualifiedRepresentationItem_HeaderFile
