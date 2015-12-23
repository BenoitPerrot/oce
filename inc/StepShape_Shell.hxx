// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Shell_HeaderFile
#define _StepShape_Shell_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepData/StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepShape_OpenShell.hxx>
#include <Handle_StepShape_ClosedShell.hxx>
class Standard_Transient;
class StepShape_OpenShell;
class StepShape_ClosedShell;



class StepShape_Shell  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a Shell SelectType
  Standard_EXPORT StepShape_Shell();
  
  //! Recognizes a Shell Kind Entity that is :
  //! 1 -> OpenShell
  //! 2 -> ClosedShell
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a OpenShell (Null if another type)
  Standard_EXPORT   Handle(StepShape_OpenShell) OpenShell()  const;
  
  //! returns Value as a ClosedShell (Null if another type)
  Standard_EXPORT   Handle(StepShape_ClosedShell) ClosedShell()  const;




protected:





private:





};







#endif // _StepShape_Shell_HeaderFile
