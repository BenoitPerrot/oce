// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ExtrudedAreaSolid_HeaderFile
#define _StepShape_ExtrudedAreaSolid_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_ExtrudedAreaSolid.hxx>

#include <Handle_StepGeom_Direction.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepGeom_CurveBoundedSurface.hxx>
class StepGeom_Direction;
class TCollection_HAsciiString;
class StepGeom_CurveBoundedSurface;



class StepShape_ExtrudedAreaSolid : public StepShape_SweptAreaSolid
{

public:

  
  //! Returns a ExtrudedAreaSolid
  Standard_EXPORT StepShape_ExtrudedAreaSolid();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CurveBoundedSurface)& aSweptArea) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CurveBoundedSurface)& aSweptArea, const Handle(StepGeom_Direction)& aExtrudedDirection, const Standard_Real aDepth) ;
  
  Standard_EXPORT   void SetExtrudedDirection (const Handle(StepGeom_Direction)& aExtrudedDirection) ;
  
  Standard_EXPORT   Handle(StepGeom_Direction) ExtrudedDirection()  const;
  
  Standard_EXPORT   void SetDepth (const Standard_Real aDepth) ;
  
  Standard_EXPORT   Standard_Real Depth()  const;




  DEFINE_STANDARD_RTTI(StepShape_ExtrudedAreaSolid)

protected:




private: 


  Handle(StepGeom_Direction) extrudedDirection;
  Standard_Real depth;


};







#endif // _StepShape_ExtrudedAreaSolid_HeaderFile
