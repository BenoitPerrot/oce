// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ElementGeometricRelationship_HeaderFile
#define _StepFEA_ElementGeometricRelationship_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepFEA_ElementGeometricRelationship.hxx>

#include <StepFEA_ElementOrElementGroup.hxx>
#include <Handle_StepElement_AnalysisItemWithinRepresentation.hxx>
#include <DataExchange/StepElement/StepElement_ElementAspect.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepElement_AnalysisItemWithinRepresentation;
class StepFEA_ElementOrElementGroup;
class StepElement_ElementAspect;


//! Representation of STEP entity ElementGeometricRelationship
class StepFEA_ElementGeometricRelationship : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_ElementGeometricRelationship();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepFEA_ElementOrElementGroup& aElementRef, const Handle(StepElement_AnalysisItemWithinRepresentation)& aItem, const StepElement_ElementAspect& aAspect) ;
  
  //! Returns field ElementRef
  Standard_EXPORT   StepFEA_ElementOrElementGroup ElementRef()  const;
  
  //! Set field ElementRef
  Standard_EXPORT   void SetElementRef (const StepFEA_ElementOrElementGroup& ElementRef) ;
  
  //! Returns field Item
  Standard_EXPORT   Handle(StepElement_AnalysisItemWithinRepresentation) Item()  const;
  
  //! Set field Item
  Standard_EXPORT   void SetItem (const Handle(StepElement_AnalysisItemWithinRepresentation)& Item) ;
  
  //! Returns field Aspect
  Standard_EXPORT   StepElement_ElementAspect Aspect()  const;
  
  //! Set field Aspect
  Standard_EXPORT   void SetAspect (const StepElement_ElementAspect& Aspect) ;




  DEFINE_STANDARD_RTTI(StepFEA_ElementGeometricRelationship)

protected:




private: 


  StepFEA_ElementOrElementGroup theElementRef;
  Handle(StepElement_AnalysisItemWithinRepresentation) theItem;
  StepElement_ElementAspect theAspect;


};







#endif // _StepFEA_ElementGeometricRelationship_HeaderFile
