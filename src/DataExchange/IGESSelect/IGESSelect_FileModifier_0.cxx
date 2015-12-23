// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <IGESSelect_FileModifier.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <DataExchange/IGESData/IGESData_IGESWriter.hxx>
#include <DataExchange/IFSelect/IFSelect_ContextWrite.hxx>

 


IMPLEMENT_STANDARD_TYPE(IGESSelect_FileModifier)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_FileModifier)


IMPLEMENT_DOWNCAST(IGESSelect_FileModifier,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_FileModifier)


#define Writer IGESData_IGESWriter
#define Writer_hxx <DataExchange/IGESData/IGESData_IGESWriter.hxx>
#define IFSelect_FileModifier IGESSelect_FileModifier
#define IFSelect_FileModifier_hxx <IGESSelect_FileModifier.hxx>
#define Handle_IFSelect_FileModifier Handle_IGESSelect_FileModifier
#define IFSelect_FileModifier_Type_() IGESSelect_FileModifier_Type_()
#include <DataExchange/IFSelect/IFSelect_FileModifier.gxx>

