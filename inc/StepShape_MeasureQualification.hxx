// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_MeasureQualification_HeaderFile
#define _StepShape_MeasureQualification_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_MeasureQualification.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_MeasureWithUnit.hxx>
#include <Handle_StepShape_HArray1OfValueQualifier.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class TCollection_HAsciiString;
class StepBasic_MeasureWithUnit;
class StepShape_HArray1OfValueQualifier;
class StepShape_ValueQualifier;


//! Added for Dimensional Tolerances
class StepShape_MeasureQualification : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepShape_MeasureQualification();
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& name, const Handle(TCollection_HAsciiString)& description, const Handle(StepBasic_MeasureWithUnit)& qualified_measure, const Handle(StepShape_HArray1OfValueQualifier)& qualifiers) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& name) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& description) ;
  
  Standard_EXPORT   Handle(StepBasic_MeasureWithUnit) QualifiedMeasure()  const;
  
  Standard_EXPORT   void SetQualifiedMeasure (const Handle(StepBasic_MeasureWithUnit)& qualified_measure) ;
  
  Standard_EXPORT   Handle(StepShape_HArray1OfValueQualifier) Qualifiers()  const;
  
  Standard_EXPORT   Standard_Integer NbQualifiers()  const;
  
  Standard_EXPORT   void SetQualifiers (const Handle(StepShape_HArray1OfValueQualifier)& qualifiers) ;
  
  Standard_EXPORT   StepShape_ValueQualifier QualifiersValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   void SetQualifiersValue (const Standard_Integer num, const StepShape_ValueQualifier& aqualifier) ;




  DEFINE_STANDARD_RTTI(StepShape_MeasureQualification)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepBasic_MeasureWithUnit) theQualifiedMeasure;
  Handle(StepShape_HArray1OfValueQualifier) theQualifiers;


};







#endif // _StepShape_MeasureQualification_HeaderFile
