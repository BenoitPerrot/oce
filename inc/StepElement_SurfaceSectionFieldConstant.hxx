// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SurfaceSectionFieldConstant_HeaderFile
#define _StepElement_SurfaceSectionFieldConstant_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepElement_SurfaceSectionFieldConstant.hxx>

#include <Handle_StepElement_SurfaceSection.hxx>
#include <StepElement_SurfaceSectionField.hxx>
class StepElement_SurfaceSection;


//! Representation of STEP entity SurfaceSectionFieldConstant
class StepElement_SurfaceSectionFieldConstant : public StepElement_SurfaceSectionField
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepElement_SurfaceSectionFieldConstant();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepElement_SurfaceSection)& aDefinition) ;
  
  //! Returns field Definition
  Standard_EXPORT   Handle(StepElement_SurfaceSection) Definition()  const;
  
  //! Set field Definition
  Standard_EXPORT   void SetDefinition (const Handle(StepElement_SurfaceSection)& Definition) ;




  DEFINE_STANDARD_RTTI(StepElement_SurfaceSectionFieldConstant)

protected:




private: 


  Handle(StepElement_SurfaceSection) theDefinition;


};







#endif // _StepElement_SurfaceSectionFieldConstant_HeaderFile
