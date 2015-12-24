// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMXCAFDoc_MaterialToolDriver_HeaderFile
#define _XmlMXCAFDoc_MaterialToolDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/XmlMXCAFDoc/Handle_XmlMXCAFDoc_MaterialToolDriver.hxx>

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
class XmlMXCAFDoc_MaterialToolDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMXCAFDoc_MaterialToolDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Paste (const XmlObjMgt_Persistent& theSource, const Handle(TDF_Attribute)& theTarget, XmlObjMgt_RRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& theSource, XmlObjMgt_Persistent& theTarget, XmlObjMgt_SRelocationTable& theRelocTable)  const;




  DEFINE_STANDARD_RTTI(XmlMXCAFDoc_MaterialToolDriver)

protected:




private: 




};







#endif // _XmlMXCAFDoc_MaterialToolDriver_HeaderFile
