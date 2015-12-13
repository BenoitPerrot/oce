// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMXCAFDoc_ShapeToolDriver_HeaderFile
#define _BinMXCAFDoc_ShapeToolDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BinMXCAFDoc_ShapeToolDriver.hxx>

#include <BinMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class BinObjMgt_Persistent;



class BinMXCAFDoc_ShapeToolDriver : public BinMDF_ADriver
{

public:

  
  Standard_EXPORT BinMXCAFDoc_ShapeToolDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Paste (const BinObjMgt_Persistent& theSource, const Handle(TDF_Attribute)& theTarget, BinObjMgt_RRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& theSource, BinObjMgt_Persistent& theTarget, BinObjMgt_SRelocationTable& theRelocTable)  const;




  DEFINE_STANDARD_RTTI(BinMXCAFDoc_ShapeToolDriver)

protected:




private: 




};







#endif // _BinMXCAFDoc_ShapeToolDriver_HeaderFile
