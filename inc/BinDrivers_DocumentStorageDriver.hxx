// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinDrivers_DocumentStorageDriver_HeaderFile
#define _BinDrivers_DocumentStorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BinDrivers_DocumentStorageDriver.hxx>

#include <BinLDrivers_DocumentStorageDriver.hxx>
#include <Handle_BinMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinLDrivers_DocumentSection;


//! persistent implemention of storage a document in a binary file
class BinDrivers_DocumentStorageDriver : public BinLDrivers_DocumentStorageDriver
{

public:

  
  //! Constructor
  Standard_EXPORT BinDrivers_DocumentStorageDriver();
  
  Standard_EXPORT virtual   Handle(BinMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  //! implements the procedure of writing a shape section to file
  Standard_EXPORT virtual   void WriteShapeSection (BinLDrivers_DocumentSection& theDocSection, Standard_OStream& theOS) ;




  DEFINE_STANDARD_RTTI(BinDrivers_DocumentStorageDriver)

protected:




private: 




};







#endif // _BinDrivers_DocumentStorageDriver_HeaderFile
