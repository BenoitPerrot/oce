// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinXCAFDrivers_HeaderFile
#define _BinXCAFDrivers_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Handle_BinMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class Standard_Transient;
class Standard_GUID;
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinXCAFDrivers_DocumentStorageDriver;
class BinXCAFDrivers_DocumentRetrievalDriver;



class BinXCAFDrivers 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Handle(Standard_Transient) Factory (const Standard_GUID& theGUID) ;
  
  //! Creates the table of drivers of types supported
  Standard_EXPORT static   Handle(BinMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& MsgDrv) ;




protected:





private:




friend class BinXCAFDrivers_DocumentStorageDriver;
friend class BinXCAFDrivers_DocumentRetrievalDriver;

};







#endif // _BinXCAFDrivers_HeaderFile
