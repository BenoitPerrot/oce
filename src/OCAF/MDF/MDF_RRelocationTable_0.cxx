// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <MDF_RRelocationTable.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <PTColStd_PersistentTransientMap.hxx>

 


IMPLEMENT_STANDARD_TYPE(MDF_RRelocationTable)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDF_RRelocationTable)


IMPLEMENT_DOWNCAST(MDF_RRelocationTable,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDF_RRelocationTable)


#define TheSourceType Handle(PDF_Attribute)
#define TheSourceType_hxx <PDF_Attribute.hxx>
#define TheTargetType Handle(TDF_Attribute)
#define TheTargetType_hxx <TDF_Attribute.hxx>
#define TheOtherSourceType Handle(Standard_Persistent)
#define TheOtherSourceType_hxx <Foundation/Standard/Standard_Persistent.hxx>
#define TheOtherTargetType Handle(Standard_Transient)
#define TheOtherTargetType_hxx <Foundation/Standard/Standard_Transient.hxx>
#define TheMapType PTColStd_PersistentTransientMap
#define TheMapType_hxx <PTColStd_PersistentTransientMap.hxx>
#define MDF_RelocationTable MDF_RRelocationTable
#define MDF_RelocationTable_hxx <MDF_RRelocationTable.hxx>
#define Handle_MDF_RelocationTable Handle_MDF_RRelocationTable
#define MDF_RelocationTable_Type_() MDF_RRelocationTable_Type_()
#include <MDF_RelocationTable.gxx>

