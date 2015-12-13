// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PresentationLayerUsage_HeaderFile
#define _StepVisual_PresentationLayerUsage_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_PresentationLayerUsage.hxx>

#include <Handle_StepVisual_PresentationLayerAssignment.hxx>
#include <Handle_StepVisual_PresentationRepresentation.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepVisual_PresentationLayerAssignment;
class StepVisual_PresentationRepresentation;


//! Added from StepVisual Rev2 to Rev4
class StepVisual_PresentationLayerUsage : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepVisual_PresentationLayerUsage();
  
  Standard_EXPORT   void Init (const Handle(StepVisual_PresentationLayerAssignment)& aAssignment, const Handle(StepVisual_PresentationRepresentation)& aPresentation) ;
  
  Standard_EXPORT   void SetAssignment (const Handle(StepVisual_PresentationLayerAssignment)& aAssignment) ;
  
  Standard_EXPORT   Handle(StepVisual_PresentationLayerAssignment) Assignment()  const;
  
  Standard_EXPORT   void SetPresentation (const Handle(StepVisual_PresentationRepresentation)& aPresentation) ;
  
  Standard_EXPORT   Handle(StepVisual_PresentationRepresentation) Presentation()  const;




  DEFINE_STANDARD_RTTI(StepVisual_PresentationLayerUsage)

protected:




private: 


  Handle(StepVisual_PresentationLayerAssignment) theAssignment;
  Handle(StepVisual_PresentationRepresentation) thePresentation;


};







#endif // _StepVisual_PresentationLayerUsage_HeaderFile
