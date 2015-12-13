// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ARDriver_HeaderFile
#define _MDF_ARDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDF_ARDriver.hxx>

#include <Handle_CDM_MessageDriver.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
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
class TCollection_ExtendedString;


//! Attribute Retrieval Driver.
class MDF_ARDriver : public MMgt_TShared
{

public:

  
  //! Returns the version number from which the driver
  //! is available.
  Standard_EXPORT virtual   Standard_Integer VersionNumber()  const = 0;
  
  //! Returns the type of source object, inheriting from
  //! Attribute from PDF.
  Standard_EXPORT virtual   Handle(Standard_Type) SourceType()  const = 0;
  
  //! Creates a new attribute from PDF.
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const = 0;
  
  //! Translate the contents of <aSource> and put it
  //! into <aTarget>, using the relocation table
  //! <aRelocTable> to keep the sharings.
  Standard_EXPORT virtual   void Paste (const Handle(PDF_Attribute)& aSource, const Handle(TDF_Attribute)& aTarget, const Handle(MDF_RRelocationTable)& aRelocTable)  const = 0;
  
  //! To send message to Application (if MessageDriver defined)
  Standard_EXPORT   void WriteMessage (const TCollection_ExtendedString& theMessage)  const;




  DEFINE_STANDARD_RTTI(MDF_ARDriver)

protected:

  
  Standard_EXPORT MDF_ARDriver(const Handle(CDM_MessageDriver)& theMessageDriver);



private: 


  Handle(CDM_MessageDriver) myMessageDriver;


};







#endif // _MDF_ARDriver_HeaderFile
