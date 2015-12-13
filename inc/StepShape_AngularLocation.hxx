// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_AngularLocation_HeaderFile
#define _StepShape_AngularLocation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_AngularLocation.hxx>

#include <StepShape_AngleRelator.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepRepr_ShapeAspect.hxx>
class TCollection_HAsciiString;
class StepRepr_ShapeAspect;


//! Representation of STEP entity AngularLocation
class StepShape_AngularLocation : public StepShape_DimensionalLocation
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepShape_AngularLocation();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aShapeAspectRelationship_Name, const Standard_Boolean hasShapeAspectRelationship_Description, const Handle(TCollection_HAsciiString)& aShapeAspectRelationship_Description, const Handle(StepRepr_ShapeAspect)& aShapeAspectRelationship_RelatingShapeAspect, const Handle(StepRepr_ShapeAspect)& aShapeAspectRelationship_RelatedShapeAspect, const StepShape_AngleRelator aAngleSelection) ;
  
  //! Returns field AngleSelection
  Standard_EXPORT   StepShape_AngleRelator AngleSelection()  const;
  
  //! Set field AngleSelection
  Standard_EXPORT   void SetAngleSelection (const StepShape_AngleRelator AngleSelection) ;




  DEFINE_STANDARD_RTTI(StepShape_AngularLocation)

protected:




private: 


  StepShape_AngleRelator theAngleSelection;


};







#endif // _StepShape_AngularLocation_HeaderFile
