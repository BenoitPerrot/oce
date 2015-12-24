// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataStd_ByteArrayStorageDriver_HeaderFile
#define _MDataStd_ByteArrayStorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/MDataStd/Handle_MDataStd_ByteArrayStorageDriver.hxx>

#include <OCAF/MDF/MDF_ASDriver.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <OCAF/PDF/Handle_PDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/MDF/Handle_MDF_SRelocationTable.hxx>
class CDM_MessageDriver;
class Standard_Type;
class PDF_Attribute;
class TDF_Attribute;
class MDF_SRelocationTable;



class MDataStd_ByteArrayStorageDriver : public MDF_ASDriver
{

public:

  
  Standard_EXPORT MDataStd_ByteArrayStorageDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Standard_Integer VersionNumber()  const;
  
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  Standard_EXPORT   Handle(PDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, const Handle(PDF_Attribute)& Target, const Handle(MDF_SRelocationTable)& RelocTable)  const;




  DEFINE_STANDARD_RTTI(MDataStd_ByteArrayStorageDriver)

protected:




private: 




};







#endif // _MDataStd_ByteArrayStorageDriver_HeaderFile
