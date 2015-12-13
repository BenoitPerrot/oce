// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_ECDescr_HeaderFile
#define _StepData_ECDescr_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepData_ECDescr.hxx>

#include <Foundation/TColStd/TColStd_SequenceOfTransient.hxx>
#include <StepData_EDescr.hxx>
#include <Handle_StepData_ESDescr.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_StepData_Described.hxx>
class StepData_ESDescr;
class TColStd_HSequenceOfAsciiString;
class StepData_Described;


//! Describes a Complex Entity (Plex) as a list of Simple ones
class StepData_ECDescr : public StepData_EDescr
{

public:

  
  //! Creates an ECDescr, empty
  Standard_EXPORT StepData_ECDescr();
  
  //! Adds a member
  //! Warning : members are added in alphabetic order
  Standard_EXPORT   void Add (const Handle(StepData_ESDescr)& member) ;
  
  //! Returns the count of members
  Standard_EXPORT   Standard_Integer NbMembers()  const;
  
  //! Returns a Member from its rank
  Standard_EXPORT   Handle(StepData_ESDescr) Member (const Standard_Integer num)  const;
  
  //! Returns the ordered list of types
  Standard_EXPORT   Handle(TColStd_HSequenceOfAsciiString) TypeList()  const;
  
  //! Tells if a ESDescr matches a step type : exact or super type
  Standard_EXPORT   Standard_Boolean Matches (const Standard_CString steptype)  const;
  
  //! Returns True
  Standard_EXPORT   Standard_Boolean IsComplex()  const;
  
  //! Creates a described entity (i.e. a complex one, made of one
  //! simple entity per member)
  Standard_EXPORT   Handle(StepData_Described) NewEntity()  const;




  DEFINE_STANDARD_RTTI(StepData_ECDescr)

protected:




private: 


  TColStd_SequenceOfTransient thelist;


};







#endif // _StepData_ECDescr_HeaderFile
