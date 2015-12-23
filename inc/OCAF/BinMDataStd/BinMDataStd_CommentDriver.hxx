// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDataStd_CommentDriver_HeaderFile
#define _BinMDataStd_CommentDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BinMDataStd_CommentDriver.hxx>

#include <OCAF/BinMDF/BinMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class BinObjMgt_Persistent;


//! Attribute Driver.
class BinMDataStd_CommentDriver : public BinMDF_ADriver
{

public:

  
  Standard_EXPORT BinMDataStd_CommentDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const BinObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, BinObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, BinObjMgt_Persistent& Target, BinObjMgt_SRelocationTable& RelocTable)  const;




  DEFINE_STANDARD_RTTI(BinMDataStd_CommentDriver)

protected:




private: 




};







#endif // _BinMDataStd_CommentDriver_HeaderFile
