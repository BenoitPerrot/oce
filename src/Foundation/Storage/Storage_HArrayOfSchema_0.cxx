// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Foundation/Storage/Storage_HArrayOfSchema.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_RangeError.hxx>
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_OutOfMemory.hxx>
#include <Foundation/Storage/Storage_Schema.hxx>
#include <Foundation/Storage/Storage_ArrayOfSchema.hxx>

 


IMPLEMENT_STANDARD_TYPE(Storage_HArrayOfSchema)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Storage_HArrayOfSchema)


IMPLEMENT_DOWNCAST(Storage_HArrayOfSchema,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Storage_HArrayOfSchema)


#define ItemHArray1 Handle(Storage_Schema)
#define ItemHArray1_hxx <Foundation/Storage/Storage_Schema.hxx>
#define TheArray1 Storage_ArrayOfSchema
#define TheArray1_hxx <Foundation/Storage/Storage_ArrayOfSchema.hxx>
#define TCollection_HArray1 Storage_HArrayOfSchema
#define TCollection_HArray1_hxx <Foundation/Storage/Storage_HArrayOfSchema.hxx>
#define Handle_TCollection_HArray1 Handle_Storage_HArrayOfSchema
#define TCollection_HArray1_Type_() Storage_HArrayOfSchema_Type_()
#include <Foundation/TCollection/TCollection_HArray1.gxx>

