// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMXCAFDoc_ShapeToolDriver_HeaderFile
#define _XmlMXCAFDoc_ShapeToolDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_XmlMXCAFDoc_ShapeToolDriver.hxx>

#include <OCAF/XmlMDF/XmlMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;


//! Attribute Driver.
class XmlMXCAFDoc_ShapeToolDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMXCAFDoc_ShapeToolDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Paste (const XmlObjMgt_Persistent& theSource, const Handle(TDF_Attribute)& theTarget, XmlObjMgt_RRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& theSource, XmlObjMgt_Persistent& theTarget, XmlObjMgt_SRelocationTable& theRelocTable)  const;




  DEFINE_STANDARD_RTTI(XmlMXCAFDoc_ShapeToolDriver)

protected:




private: 




};







#endif // _XmlMXCAFDoc_ShapeToolDriver_HeaderFile
