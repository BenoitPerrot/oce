// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Axis2Placement2d_HeaderFile
#define _StepGeom_Axis2Placement2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_Axis2Placement2d.hxx>

#include <Handle_StepGeom_Direction.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <StepGeom_Placement.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepGeom_CartesianPoint.hxx>
class StepGeom_Direction;
class TCollection_HAsciiString;
class StepGeom_CartesianPoint;



class StepGeom_Axis2Placement2d : public StepGeom_Placement
{

public:

  
  //! Returns a Axis2Placement2d
  Standard_EXPORT StepGeom_Axis2Placement2d();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CartesianPoint)& aLocation) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CartesianPoint)& aLocation, const Standard_Boolean hasArefDirection, const Handle(StepGeom_Direction)& aRefDirection) ;
  
  Standard_EXPORT   void SetRefDirection (const Handle(StepGeom_Direction)& aRefDirection) ;
  
  Standard_EXPORT   void UnSetRefDirection() ;
  
  Standard_EXPORT   Handle(StepGeom_Direction) RefDirection()  const;
  
  Standard_EXPORT   Standard_Boolean HasRefDirection()  const;




  DEFINE_STANDARD_RTTI(StepGeom_Axis2Placement2d)

protected:




private: 


  Handle(StepGeom_Direction) refDirection;
  Standard_Boolean hasRefDirection;


};







#endif // _StepGeom_Axis2Placement2d_HeaderFile
