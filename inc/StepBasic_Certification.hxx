// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Certification_HeaderFile
#define _StepBasic_Certification_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_Certification.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_CertificationType.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_CertificationType;


//! Representation of STEP entity Certification
class StepBasic_Certification : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_Certification();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aPurpose, const Handle(StepBasic_CertificationType)& aKind) ;
  
  //! Returns field Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! Set field Name
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& Name) ;
  
  //! Returns field Purpose
  Standard_EXPORT   Handle(TCollection_HAsciiString) Purpose()  const;
  
  //! Set field Purpose
  Standard_EXPORT   void SetPurpose (const Handle(TCollection_HAsciiString)& Purpose) ;
  
  //! Returns field Kind
  Standard_EXPORT   Handle(StepBasic_CertificationType) Kind()  const;
  
  //! Set field Kind
  Standard_EXPORT   void SetKind (const Handle(StepBasic_CertificationType)& Kind) ;




  DEFINE_STANDARD_RTTI(StepBasic_Certification)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) thePurpose;
  Handle(StepBasic_CertificationType) theKind;


};







#endif // _StepBasic_Certification_HeaderFile
