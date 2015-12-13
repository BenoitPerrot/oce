// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataStd_AsciiStringRetrievalDriver_HeaderFile
#define _MDataStd_AsciiStringRetrievalDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDataStd_AsciiStringRetrievalDriver.hxx>

#include <MDF_ARDriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_PDF_Attribute.hxx>
#include <Handle_MDF_RRelocationTable.hxx>
class CDM_MessageDriver;
class Standard_Type;
class TDF_Attribute;
class PDF_Attribute;
class MDF_RRelocationTable;


//! Retrieval driver of AsciiString attribute
class MDataStd_AsciiStringRetrievalDriver : public MDF_ARDriver
{

public:

  
  Standard_EXPORT MDataStd_AsciiStringRetrievalDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  //! Returns the version number from which the driver
  //! is available: 0.
  Standard_EXPORT   Standard_Integer VersionNumber()  const;
  
  //! Returns the type: AsciiString from PDataStd.
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(PDF_Attribute)& Source, const Handle(TDF_Attribute)& Target, const Handle(MDF_RRelocationTable)& RelocTable)  const;




  DEFINE_STANDARD_RTTI(MDataStd_AsciiStringRetrievalDriver)

protected:




private: 




};







#endif // _MDataStd_AsciiStringRetrievalDriver_HeaderFile
