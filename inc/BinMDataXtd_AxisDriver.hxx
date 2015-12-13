// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDataXtd_AxisDriver_HeaderFile
#define _BinMDataXtd_AxisDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BinMDataXtd_AxisDriver.hxx>

#include <BinMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class BinObjMgt_Persistent;


//! Axis attribute Driver.
class BinMDataXtd_AxisDriver : public BinMDF_ADriver
{

public:

  
  Standard_EXPORT BinMDataXtd_AxisDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Paste (const BinObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, BinObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& Source, BinObjMgt_Persistent& Target, BinObjMgt_SRelocationTable& RelocTable)  const;




  DEFINE_STANDARD_RTTI(BinMDataXtd_AxisDriver)

protected:




private: 




};







#endif // _BinMDataXtd_AxisDriver_HeaderFile
