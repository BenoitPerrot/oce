// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinXCAFDrivers_DocumentStorageDriver_HeaderFile
#define _BinXCAFDrivers_DocumentStorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/BinXCAFDrivers/Handle_BinXCAFDrivers_DocumentStorageDriver.hxx>

#include <OCAF/BinDrivers/BinDrivers_DocumentStorageDriver.hxx>
#include <OCAF/BinMDF/Handle_BinMDF_ADriverTable.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
class BinMDF_ADriverTable;
class CDM_MessageDriver;



class BinXCAFDrivers_DocumentStorageDriver : public BinDrivers_DocumentStorageDriver
{

public:

  
  //! Constructor
  Standard_EXPORT BinXCAFDrivers_DocumentStorageDriver();
  
  Standard_EXPORT virtual   Handle(BinMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(BinXCAFDrivers_DocumentStorageDriver)

protected:




private: 




};







#endif // _BinXCAFDrivers_DocumentStorageDriver_HeaderFile
