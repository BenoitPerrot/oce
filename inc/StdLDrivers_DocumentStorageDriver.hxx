// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdLDrivers_DocumentStorageDriver_HeaderFile
#define _StdLDrivers_DocumentStorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StdLDrivers_DocumentStorageDriver.hxx>

#include <OCAF/MDocStd/MDocStd_DocumentStorageDriver.hxx>
#include <Handle_CDM_Document.hxx>
#include <Handle_MDF_ASDriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class CDM_Document;
class PCDM_SequenceOfDocument;
class MDF_ASDriverTable;
class CDM_MessageDriver;


//! storage driver of a  Part document
class StdLDrivers_DocumentStorageDriver : public MDocStd_DocumentStorageDriver
{

public:

  
  Standard_EXPORT StdLDrivers_DocumentStorageDriver();
  
  Standard_EXPORT virtual   void Make (const Handle(CDM_Document)& aDocument, PCDM_SequenceOfDocument& Documents) ;
  
  Standard_EXPORT virtual   Handle(MDF_ASDriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMessageDriver) ;




  DEFINE_STANDARD_RTTI(StdLDrivers_DocumentStorageDriver)

protected:




private: 




};







#endif // _StdLDrivers_DocumentStorageDriver_HeaderFile
