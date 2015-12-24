// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlXCAFDrivers_DocumentStorageDriver_HeaderFile
#define _XmlXCAFDrivers_DocumentStorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/XmlXCAFDrivers/Handle_XmlXCAFDrivers_DocumentStorageDriver.hxx>

#include <OCAF/XmlDrivers/XmlDrivers_DocumentStorageDriver.hxx>
#include <OCAF/XmlMDF/Handle_XmlMDF_ADriverTable.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
class TCollection_ExtendedString;
class XmlMDF_ADriverTable;
class CDM_MessageDriver;


//! storage driver of a  XS document
class XmlXCAFDrivers_DocumentStorageDriver : public XmlDrivers_DocumentStorageDriver
{

public:

  
  Standard_EXPORT XmlXCAFDrivers_DocumentStorageDriver(const TCollection_ExtendedString& theCopyright);
  
  Standard_EXPORT virtual   Handle(XmlMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(XmlXCAFDrivers_DocumentStorageDriver)

protected:




private: 




};







#endif // _XmlXCAFDrivers_DocumentStorageDriver_HeaderFile
