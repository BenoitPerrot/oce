// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMXCAFDoc_DimTolDriver_HeaderFile
#define _XmlMXCAFDoc_DimTolDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/XmlMXCAFDoc/Handle_XmlMXCAFDoc_DimTolDriver.hxx>

#include <OCAF/XmlMDF/XmlMDF_ADriver.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_RRelocationTable.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;


//! Attribute Driver.
class XmlMXCAFDoc_DimTolDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMXCAFDoc_DimTolDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const XmlObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, XmlObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, XmlObjMgt_Persistent& Target, XmlObjMgt_SRelocationTable& RelocTable)  const;




  DEFINE_STANDARD_RTTI(XmlMXCAFDoc_DimTolDriver)

protected:




private: 




};







#endif // _XmlMXCAFDoc_DimTolDriver_HeaderFile
