// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MXCAFDoc_DimTolRetrievalDriver_HeaderFile
#define _MXCAFDoc_DimTolRetrievalDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/MXCAFDoc/Handle_MXCAFDoc_DimTolRetrievalDriver.hxx>

#include <OCAF/MDF/MDF_ARDriver.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/PDF/Handle_PDF_Attribute.hxx>
#include <OCAF/MDF/Handle_MDF_RRelocationTable.hxx>
class CDM_MessageDriver;
class Standard_Type;
class TDF_Attribute;
class PDF_Attribute;
class MDF_RRelocationTable;



class MXCAFDoc_DimTolRetrievalDriver : public MDF_ARDriver
{

public:

  
  //! Returns mutable DimTolRetrievalDriver from MXCAFDoc;
  Standard_EXPORT MXCAFDoc_DimTolRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  //! Returns the version number from which the driver
  //! is available: 0.
  Standard_EXPORT   Standard_Integer VersionNumber()  const;
  
  //! Returns the type: XCAFDoc_DimTol
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(PDF_Attribute)& Source, const Handle(TDF_Attribute)& Target, const Handle(MDF_RRelocationTable)& RelocTable)  const;




  DEFINE_STANDARD_RTTI(MXCAFDoc_DimTolRetrievalDriver)

protected:




private: 




};







#endif // _MXCAFDoc_DimTolRetrievalDriver_HeaderFile
