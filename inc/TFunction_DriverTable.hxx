// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DriverTable_HeaderFile
#define _TFunction_DriverTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TFunction_DriverTable.hxx>

#include <TFunction_DataMapOfGUIDDriver.hxx>
#include <Handle_TFunction_HArray1OfDataMapOfGUIDDriver.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_TFunction_Driver.hxx>
#include <Standard_Integer.hxx>
#include <Standard_OStream.hxx>
class TFunction_HArray1OfDataMapOfGUIDDriver;
class Standard_GUID;
class TFunction_Driver;


//! A container for instances of drivers.
//! You create a new instance of TFunction_Driver
//! and use the method AddDriver to load it into the driver table.
class TFunction_DriverTable : public MMgt_TShared
{

public:

  
  //! Returns the driver table. If a driver does not exist, creates it.
  Standard_EXPORT static   Handle(TFunction_DriverTable) Get() ;
  
  //! Default constructor
  Standard_EXPORT TFunction_DriverTable();
  
  //! Returns true if the driver has been added successfully to the driver table.
  Standard_EXPORT   Standard_Boolean AddDriver (const Standard_GUID& guid, const Handle(TFunction_Driver)& driver, const Standard_Integer thread = 0) ;
  
  //! Returns true if the driver exists in the driver table.
  Standard_EXPORT   Standard_Boolean HasDriver (const Standard_GUID& guid, const Standard_Integer thread = 0)  const;
  
  //! Returns true if the driver was found.
  Standard_EXPORT   Standard_Boolean FindDriver (const Standard_GUID& guid, Handle(TFunction_Driver)& driver, const Standard_Integer thread = 0)  const;
  
  Standard_EXPORT   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  Standard_OStream& operator << (Standard_OStream& anOS)  const
{
  return Dump(anOS);
}
  
  //! Removes a driver with the given GUID.
  //! Returns true if the driver has been removed successfully.
  Standard_EXPORT   Standard_Boolean RemoveDriver (const Standard_GUID& guid, const Standard_Integer thread = 0) ;
  
  //! Removes all drivers. Returns true if the driver has been removed successfully.
  Standard_EXPORT   void Clear() ;




  DEFINE_STANDARD_RTTI(TFunction_DriverTable)

protected:




private: 


  TFunction_DataMapOfGUIDDriver myDrivers;
  Handle(TFunction_HArray1OfDataMapOfGUIDDriver) myThreadDrivers;


};







#endif // _TFunction_DriverTable_HeaderFile
