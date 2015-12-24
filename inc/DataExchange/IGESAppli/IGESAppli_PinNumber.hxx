// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_PinNumber_HeaderFile
#define _IGESAppli_PinNumber_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESAppli/Handle_IGESAppli_PinNumber.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;


//! defines PinNumber, Type <406> Form <8>
//! in package IGESAppli
//! Used to attach a text string representing a component
//! pin number to an entity being used to represent an
//! electrical component's pin
class IGESAppli_PinNumber : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_PinNumber();
  
  //! This method is used to set the fields of the class
  //! PinNumber
  //! - nbPropVal : Number of property values (always = 1)
  //! - aValue    : Pin Number value
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Handle(TCollection_HAsciiString)& aValue) ;
  
  //! returns the number of property values
  //! is always 1
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the pin number value
  Standard_EXPORT   Handle(TCollection_HAsciiString) PinNumberVal()  const;




  DEFINE_STANDARD_RTTI(IGESAppli_PinNumber)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Handle(TCollection_HAsciiString) thePinNumber;


};







#endif // _IGESAppli_PinNumber_HeaderFile
