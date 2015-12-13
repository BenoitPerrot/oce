// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_SphericalSurface_HeaderFile
#define _StepGeom_SphericalSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_SphericalSurface.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepGeom_Axis2Placement3d.hxx>
class TCollection_HAsciiString;
class StepGeom_Axis2Placement3d;



class StepGeom_SphericalSurface : public StepGeom_ElementarySurface
{

public:

  
  //! Returns a SphericalSurface
  Standard_EXPORT StepGeom_SphericalSurface();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Axis2Placement3d)& aPosition) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Axis2Placement3d)& aPosition, const Standard_Real aRadius) ;
  
  Standard_EXPORT   void SetRadius (const Standard_Real aRadius) ;
  
  Standard_EXPORT   Standard_Real Radius()  const;




  DEFINE_STANDARD_RTTI(StepGeom_SphericalSurface)

protected:




private: 


  Standard_Real radius;


};







#endif // _StepGeom_SphericalSurface_HeaderFile
