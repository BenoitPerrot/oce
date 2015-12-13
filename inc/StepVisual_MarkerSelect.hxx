// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_MarkerSelect_HeaderFile
#define _StepVisual_MarkerSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepData_SelectMember.hxx>
#include <Handle_StepVisual_MarkerMember.hxx>
class Standard_Transient;
class StepData_SelectMember;
class StepVisual_MarkerMember;



class StepVisual_MarkerSelect  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a MarkerSelect SelectType
  Standard_EXPORT StepVisual_MarkerSelect();
  
  //! Recognizes a MarkerSelect Kind Entity that is :
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns a new MarkerMember
  Standard_EXPORT virtual   Handle(StepData_SelectMember) NewMember()  const;
  
  //! Returns 1 for a SelectMember enum, named MARKER_TYPE
  Standard_EXPORT virtual   Standard_Integer CaseMem (const Handle(StepData_SelectMember)& sm)  const;
  
  //! Gives access to the MarkerMember in order to get/set its value
  Standard_EXPORT   Handle(StepVisual_MarkerMember) MarkerMember()  const;




protected:





private:





};







#endif // _StepVisual_MarkerSelect_HeaderFile
