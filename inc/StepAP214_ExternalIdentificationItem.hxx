// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_ExternalIdentificationItem_HeaderFile
#define _StepAP214_ExternalIdentificationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_DocumentFile.hxx>
#include <Handle_StepAP214_ExternallyDefinedClass.hxx>
#include <Handle_StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
class Standard_Transient;
class StepBasic_DocumentFile;
class StepAP214_ExternallyDefinedClass;
class StepAP214_ExternallyDefinedGeneralProperty;
class StepBasic_ProductDefinition;


//! Representation of STEP SELECT type ExternalIdentificationItem
class StepAP214_ExternalIdentificationItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepAP214_ExternalIdentificationItem();
  
  //! Recognizes a kind of ExternalIdentificationItem select type
  //! 1 -> DocumentFile from StepBasic
  //! 2 -> ExternallyDefinedClass from StepAP214
  //! 3 -> ExternallyDefinedGeneralProperty from StepAP214
  //! 4 -> ProductDefinition from StepBasic
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as DocumentFile (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_DocumentFile) DocumentFile()  const;
  
  //! Returns Value as ExternallyDefinedClass (or Null if another type)
  Standard_EXPORT   Handle(StepAP214_ExternallyDefinedClass) ExternallyDefinedClass()  const;
  
  //! Returns Value as ExternallyDefinedGeneralProperty (or Null if another type)
  Standard_EXPORT   Handle(StepAP214_ExternallyDefinedGeneralProperty) ExternallyDefinedGeneralProperty()  const;
  
  //! Returns Value as ProductDefinition (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;




protected:





private:





};







#endif // _StepAP214_ExternalIdentificationItem_HeaderFile
