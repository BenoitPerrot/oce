// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataXtd_PlacementStorageDriver_HeaderFile
#define _MDataXtd_PlacementStorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDataXtd_PlacementStorageDriver.hxx>

#include <OCAF/MDF/MDF_ASDriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_PDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_MDF_SRelocationTable.hxx>
class CDM_MessageDriver;
class Standard_Type;
class PDF_Attribute;
class TDF_Attribute;
class MDF_SRelocationTable;



class MDataXtd_PlacementStorageDriver : public MDF_ASDriver
{

public:

  
  Standard_EXPORT MDataXtd_PlacementStorageDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  //! Returns the version number from which the driver
  //! is available: 0.
  Standard_EXPORT   Standard_Integer VersionNumber()  const;
  
  //! Returns the type: Integer from TDataStd.
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  Standard_EXPORT   Handle(PDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, const Handle(PDF_Attribute)& Target, const Handle(MDF_SRelocationTable)& RelocTable)  const;




  DEFINE_STANDARD_RTTI(MDataXtd_PlacementStorageDriver)

protected:




private: 




};







#endif // _MDataXtd_PlacementStorageDriver_HeaderFile
