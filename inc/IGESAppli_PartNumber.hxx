// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_PartNumber_HeaderFile
#define _IGESAppli_PartNumber_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_PartNumber.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;


//! defines PartNumber, Type <406> Form <9>
//! in package IGESAppli
//! Attaches a set of text strings that define the common
//! part numbers to an entity being used to represent a
//! physical component
class IGESAppli_PartNumber : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_PartNumber();
  
  //! This method is used to set the fields of the class
  //! PartNumber
  //! - nbPropVal : number of property values, always = 4
  //! - aGenName  : Generic part number or name
  //! - aMilName  : Military Standard (MIL-STD) part number
  //! - aVendName : Vendor part number or name
  //! - anIntName : Internal part number
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Handle(TCollection_HAsciiString)& aGenName, const Handle(TCollection_HAsciiString)& aMilName, const Handle(TCollection_HAsciiString)& aVendName, const Handle(TCollection_HAsciiString)& anIntName) ;
  
  //! returns number of property values, always = 4
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns Generic part number or name
  Standard_EXPORT   Handle(TCollection_HAsciiString) GenericNumber()  const;
  
  //! returns Military Standard (MIL-STD) part number
  Standard_EXPORT   Handle(TCollection_HAsciiString) MilitaryNumber()  const;
  
  //! returns Vendor part number or name
  Standard_EXPORT   Handle(TCollection_HAsciiString) VendorNumber()  const;
  
  //! returns Internal part number
  Standard_EXPORT   Handle(TCollection_HAsciiString) InternalNumber()  const;




  DEFINE_STANDARD_RTTI(IGESAppli_PartNumber)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Handle(TCollection_HAsciiString) theGenericNumber;
  Handle(TCollection_HAsciiString) theMilitaryNumber;
  Handle(TCollection_HAsciiString) theVendorNumber;
  Handle(TCollection_HAsciiString) theInternalNumber;


};







#endif // _IGESAppli_PartNumber_HeaderFile
