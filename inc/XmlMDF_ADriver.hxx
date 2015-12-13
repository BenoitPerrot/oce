// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_ADriver_HeaderFile
#define _XmlMDF_ADriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_XmlMDF_ADriver.hxx>

#include <Handle_CDM_MessageDriver.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_Standard_Type.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class Standard_Type;
class TCollection_AsciiString;
class XmlObjMgt_Persistent;
class TCollection_ExtendedString;


//! Attribute Storage/Retrieval Driver.
class XmlMDF_ADriver : public MMgt_TShared
{

public:

  
  //! Returns the version number from which the driver
  //! is available.
  Standard_EXPORT virtual   Standard_Integer VersionNumber()  const;
  
  //! Creates a new attribute from TDF.
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const = 0;
  
  //! Returns the type of source object,
  //! inheriting from Attribute from TDF.
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  //! Returns the full XML tag name (including NS prefix)
  Standard_EXPORT  const  TCollection_AsciiString& TypeName()  const;
  
  //! Translate the contents of <aSource> and put it
  //! into <aTarget>, using the relocation table
  //! <aRelocTable> to keep the sharings.
  Standard_EXPORT virtual   Standard_Boolean Paste (const XmlObjMgt_Persistent& aSource, const Handle(TDF_Attribute)& aTarget, XmlObjMgt_RRelocationTable& aRelocTable)  const = 0;
  
  //! Translate the contents of <aSource> and put it
  //! into <aTarget>, using the relocation table
  //! <aRelocTable> to keep the sharings.
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& aSource, XmlObjMgt_Persistent& aTarget, XmlObjMgt_SRelocationTable& aRelocTable)  const = 0;
  
  //! Send message to Application (usually when error occurres)
  Standard_EXPORT   void WriteMessage (const TCollection_ExtendedString& theMessage)  const;




  DEFINE_STANDARD_RTTI(XmlMDF_ADriver)

protected:

  
  Standard_EXPORT XmlMDF_ADriver(const Handle(CDM_MessageDriver)& theMessageDriver, const Standard_CString theNamespace, const Standard_CString theName = NULL);

  TCollection_AsciiString myTypeName;


private: 


  Handle(CDM_MessageDriver) myMessageDriver;


};







#endif // _XmlMDF_ADriver_HeaderFile
