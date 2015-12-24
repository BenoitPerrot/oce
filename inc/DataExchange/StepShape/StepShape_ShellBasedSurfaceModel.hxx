// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ShellBasedSurfaceModel_HeaderFile
#define _StepShape_ShellBasedSurfaceModel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepShape/Handle_StepShape_ShellBasedSurfaceModel.hxx>

#include <DataExchange/StepShape/Handle_StepShape_HArray1OfShell.hxx>
#include <DataExchange/StepGeom/StepGeom_GeometricRepresentationItem.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepShape_HArray1OfShell;
class TCollection_HAsciiString;
class StepShape_Shell;



class StepShape_ShellBasedSurfaceModel : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a ShellBasedSurfaceModel
  Standard_EXPORT StepShape_ShellBasedSurfaceModel();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_HArray1OfShell)& aSbsmBoundary) ;
  
  Standard_EXPORT   void SetSbsmBoundary (const Handle(StepShape_HArray1OfShell)& aSbsmBoundary) ;
  
  Standard_EXPORT   Handle(StepShape_HArray1OfShell) SbsmBoundary()  const;
  
  Standard_EXPORT   StepShape_Shell SbsmBoundaryValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbSbsmBoundary()  const;




  DEFINE_STANDARD_RTTI(StepShape_ShellBasedSurfaceModel)

protected:




private: 


  Handle(StepShape_HArray1OfShell) sbsmBoundary;


};







#endif // _StepShape_ShellBasedSurfaceModel_HeaderFile
