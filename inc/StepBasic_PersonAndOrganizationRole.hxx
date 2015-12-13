// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_PersonAndOrganizationRole_HeaderFile
#define _StepBasic_PersonAndOrganizationRole_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_PersonAndOrganizationRole.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;



class StepBasic_PersonAndOrganizationRole : public MMgt_TShared
{

public:

  
  //! Returns a PersonAndOrganizationRole
  Standard_EXPORT StepBasic_PersonAndOrganizationRole();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;




  DEFINE_STANDARD_RTTI(StepBasic_PersonAndOrganizationRole)

protected:




private: 


  Handle(TCollection_HAsciiString) name;


};







#endif // _StepBasic_PersonAndOrganizationRole_HeaderFile
