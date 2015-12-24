// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Ellipse_HeaderFile
#define _StepGeom_Ellipse_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_Ellipse.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <DataExchange/StepGeom/StepGeom_Conic.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;
class StepGeom_Axis2Placement;



class StepGeom_Ellipse : public StepGeom_Conic
{

public:

  
  //! Returns a Ellipse
  Standard_EXPORT StepGeom_Ellipse();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const StepGeom_Axis2Placement& aPosition, const Standard_Real aSemiAxis1, const Standard_Real aSemiAxis2) ;
  
  Standard_EXPORT   void SetSemiAxis1 (const Standard_Real aSemiAxis1) ;
  
  Standard_EXPORT   Standard_Real SemiAxis1()  const;
  
  Standard_EXPORT   void SetSemiAxis2 (const Standard_Real aSemiAxis2) ;
  
  Standard_EXPORT   Standard_Real SemiAxis2()  const;




  DEFINE_STANDARD_RTTI(StepGeom_Ellipse)

protected:




private: 


  Standard_Real semiAxis1;
  Standard_Real semiAxis2;


};







#endif // _StepGeom_Ellipse_HeaderFile
