// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_Curve3dElementDescriptor_HeaderFile
#define _StepElement_Curve3dElementDescriptor_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepElement/Handle_StepElement_Curve3dElementDescriptor.hxx>

#include <DataExchange/StepElement/Handle_StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx>
#include <DataExchange/StepElement/StepElement_ElementDescriptor.hxx>
#include <DataExchange/StepElement/StepElement_ElementOrder.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
class StepElement_HArray1OfHSequenceOfCurveElementPurposeMember;
class TCollection_HAsciiString;


//! Representation of STEP entity Curve3dElementDescriptor
class StepElement_Curve3dElementDescriptor : public StepElement_ElementDescriptor
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepElement_Curve3dElementDescriptor();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepElement_ElementOrder aElementDescriptor_TopologyOrder, const Handle(TCollection_HAsciiString)& aElementDescriptor_Description, const Handle(StepElement_HArray1OfHSequenceOfCurveElementPurposeMember)& aPurpose) ;
  
  //! Returns field Purpose
  Standard_EXPORT   Handle(StepElement_HArray1OfHSequenceOfCurveElementPurposeMember) Purpose()  const;
  
  //! Set field Purpose
  Standard_EXPORT   void SetPurpose (const Handle(StepElement_HArray1OfHSequenceOfCurveElementPurposeMember)& Purpose) ;




  DEFINE_STANDARD_RTTI(StepElement_Curve3dElementDescriptor)

protected:




private: 


  Handle(StepElement_HArray1OfHSequenceOfCurveElementPurposeMember) thePurpose;


};







#endif // _StepElement_Curve3dElementDescriptor_HeaderFile
