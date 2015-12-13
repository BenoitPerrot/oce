// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_EulerAngles_HeaderFile
#define _StepBasic_EulerAngles_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_EulerAngles.hxx>

#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TColStd_HArray1OfReal;


//! Representation of STEP entity EulerAngles
class StepBasic_EulerAngles : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_EulerAngles();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TColStd_HArray1OfReal)& aAngles) ;
  
  //! Returns field Angles
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) Angles()  const;
  
  //! Set field Angles
  Standard_EXPORT   void SetAngles (const Handle(TColStd_HArray1OfReal)& Angles) ;




  DEFINE_STANDARD_RTTI(StepBasic_EulerAngles)

protected:




private: 


  Handle(TColStd_HArray1OfReal) theAngles;


};







#endif // _StepBasic_EulerAngles_HeaderFile
