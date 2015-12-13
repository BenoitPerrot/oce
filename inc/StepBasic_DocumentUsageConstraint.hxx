// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DocumentUsageConstraint_HeaderFile
#define _StepBasic_DocumentUsageConstraint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_DocumentUsageConstraint.hxx>

#include <Handle_StepBasic_Document.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_Document;
class TCollection_HAsciiString;



class StepBasic_DocumentUsageConstraint : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepBasic_DocumentUsageConstraint();
  
  Standard_EXPORT   void Init (const Handle(StepBasic_Document)& aSource, const Handle(TCollection_HAsciiString)& ase, const Handle(TCollection_HAsciiString)& asev) ;
  
  Standard_EXPORT   Handle(StepBasic_Document) Source()  const;
  
  Standard_EXPORT   void SetSource (const Handle(StepBasic_Document)& aSource) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) SubjectElement()  const;
  
  Standard_EXPORT   void SetSubjectElement (const Handle(TCollection_HAsciiString)& ase) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) SubjectElementValue()  const;
  
  Standard_EXPORT   void SetSubjectElementValue (const Handle(TCollection_HAsciiString)& asev) ;




  DEFINE_STANDARD_RTTI(StepBasic_DocumentUsageConstraint)

protected:




private: 


  Handle(StepBasic_Document) theSource;
  Handle(TCollection_HAsciiString) theSE;
  Handle(TCollection_HAsciiString) theSEV;


};







#endif // _StepBasic_DocumentUsageConstraint_HeaderFile
