// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_ElementarySurface_HeaderFile
#define _StepGeom_ElementarySurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_ElementarySurface.hxx>

#include <DataExchange/StepGeom/Handle_StepGeom_Axis2Placement3d.hxx>
#include <DataExchange/StepGeom/StepGeom_Surface.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
class StepGeom_Axis2Placement3d;
class TCollection_HAsciiString;



class StepGeom_ElementarySurface : public StepGeom_Surface
{

public:

  
  //! Returns a ElementarySurface
  Standard_EXPORT StepGeom_ElementarySurface();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Axis2Placement3d)& aPosition) ;
  
  Standard_EXPORT   void SetPosition (const Handle(StepGeom_Axis2Placement3d)& aPosition) ;
  
  Standard_EXPORT   Handle(StepGeom_Axis2Placement3d) Position()  const;




  DEFINE_STANDARD_RTTI(StepGeom_ElementarySurface)

protected:




private: 


  Handle(StepGeom_Axis2Placement3d) position;


};







#endif // _StepGeom_ElementarySurface_HeaderFile
