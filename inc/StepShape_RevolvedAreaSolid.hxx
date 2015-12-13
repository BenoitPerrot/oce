// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_RevolvedAreaSolid_HeaderFile
#define _StepShape_RevolvedAreaSolid_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_RevolvedAreaSolid.hxx>

#include <Handle_StepGeom_Axis1Placement.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepGeom_CurveBoundedSurface.hxx>
class StepGeom_Axis1Placement;
class TCollection_HAsciiString;
class StepGeom_CurveBoundedSurface;



class StepShape_RevolvedAreaSolid : public StepShape_SweptAreaSolid
{

public:

  
  //! Returns a RevolvedAreaSolid
  Standard_EXPORT StepShape_RevolvedAreaSolid();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CurveBoundedSurface)& aSweptArea) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CurveBoundedSurface)& aSweptArea, const Handle(StepGeom_Axis1Placement)& aAxis, const Standard_Real aAngle) ;
  
  Standard_EXPORT   void SetAxis (const Handle(StepGeom_Axis1Placement)& aAxis) ;
  
  Standard_EXPORT   Handle(StepGeom_Axis1Placement) Axis()  const;
  
  Standard_EXPORT   void SetAngle (const Standard_Real aAngle) ;
  
  Standard_EXPORT   Standard_Real Angle()  const;




  DEFINE_STANDARD_RTTI(StepShape_RevolvedAreaSolid)

protected:




private: 


  Handle(StepGeom_Axis1Placement) axis;
  Standard_Real angle;


};







#endif // _StepShape_RevolvedAreaSolid_HeaderFile
