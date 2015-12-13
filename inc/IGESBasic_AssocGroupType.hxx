// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_AssocGroupType_HeaderFile
#define _IGESBasic_AssocGroupType_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_AssocGroupType.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;


//! defines AssocGroupType, Type <406> Form <23>
//! in package IGESBasic
//! Used to assign an unambiguous identification to a Group
//! Associativity.
class IGESBasic_AssocGroupType : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESBasic_AssocGroupType();
  
  //! This method is used to set the fields of the class
  //! AssocGroupType
  //! - nbDataFields : number of parameter data fields = 2
  //! - aType        : type of attached associativity
  //! - aName        : identifier of associativity of type AType
  Standard_EXPORT   void Init (const Standard_Integer nbDataFields, const Standard_Integer aType, const Handle(TCollection_HAsciiString)& aName) ;
  
  //! returns the number of parameter data fields, always = 2
  Standard_EXPORT   Standard_Integer NbData()  const;
  
  //! returns the type of attached associativity
  Standard_EXPORT   Standard_Integer AssocType()  const;
  
  //! returns identifier of instance of specified associativity
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;




  DEFINE_STANDARD_RTTI(IGESBasic_AssocGroupType)

protected:




private: 


  Standard_Integer theNbData;
  Standard_Integer theType;
  Handle(TCollection_HAsciiString) theName;


};







#endif // _IGESBasic_AssocGroupType_HeaderFile
