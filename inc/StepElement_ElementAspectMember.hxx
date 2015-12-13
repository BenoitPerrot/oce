// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_ElementAspectMember_HeaderFile
#define _StepElement_ElementAspectMember_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepElement_ElementAspectMember.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <StepData_SelectNamed.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>


//! Representation of member for  STEP SELECT type ElementAspect
class StepElement_ElementAspectMember : public StepData_SelectNamed
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepElement_ElementAspectMember();
  
  //! Returns True if has name
  Standard_EXPORT virtual   Standard_Boolean HasName()  const;
  
  //! Returns set name
  Standard_EXPORT virtual   Standard_CString Name()  const;
  
  //! Set name
  Standard_EXPORT virtual   Standard_Boolean SetName (const Standard_CString name) ;
  
  //! Tells if the name of a SelectMember matches a given one;
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_CString name)  const;




  DEFINE_STANDARD_RTTI(StepElement_ElementAspectMember)

protected:




private: 


  Standard_Integer mycase;


};







#endif // _StepElement_ElementAspectMember_HeaderFile
