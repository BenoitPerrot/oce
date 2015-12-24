// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDataStd_ExpressionDriver_HeaderFile
#define _BinMDataStd_ExpressionDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/BinMDataStd/Handle_BinMDataStd_ExpressionDriver.hxx>

#include <OCAF/BinMDF/BinMDF_ADriver.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_RRelocationTable.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class BinObjMgt_Persistent;


//! Attribute Driver.
class BinMDataStd_ExpressionDriver : public BinMDF_ADriver
{

public:

  
  Standard_EXPORT BinMDataStd_ExpressionDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const BinObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, BinObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, BinObjMgt_Persistent& Target, BinObjMgt_SRelocationTable& RelocTable)  const;




  DEFINE_STANDARD_RTTI(BinMDataStd_ExpressionDriver)

protected:




private: 




};







#endif // _BinMDataStd_ExpressionDriver_HeaderFile
