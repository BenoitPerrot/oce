// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinDrivers_DocumentRetrievalDriver_HeaderFile
#define _BinDrivers_DocumentRetrievalDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BinDrivers_DocumentRetrievalDriver.hxx>

#include <BinLDrivers_DocumentRetrievalDriver.hxx>
#include <Handle_BinMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_IStream.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Storage/Storage_Position.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinLDrivers_DocumentSection;



class BinDrivers_DocumentRetrievalDriver : public BinLDrivers_DocumentRetrievalDriver
{

public:

  
  //! Constructor
  Standard_EXPORT BinDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT virtual   Handle(BinMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT virtual   void ReadShapeSection (BinLDrivers_DocumentSection& theSection, Standard_IStream& theIS, const Standard_Boolean isMess = Standard_False) ;
  
  Standard_EXPORT virtual   void CheckShapeSection (const Storage_Position& thePos, Standard_IStream& theIS) ;
  
  Standard_EXPORT virtual   void PropagateDocumentVersion (const Standard_Integer theVersion) ;




  DEFINE_STANDARD_RTTI(BinDrivers_DocumentRetrievalDriver)

protected:




private: 




};







#endif // _BinDrivers_DocumentRetrievalDriver_HeaderFile
