// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <CDM_DataMapNodeOfMetaDataLookUpTable.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <CDM_MetaData.hxx>
#include <TCollection_ExtendedString.hxx>
#include <CDM_MetaDataLookUpTable.hxx>
#include <CDM_DataMapIteratorOfMetaDataLookUpTable.hxx>

 


IMPLEMENT_STANDARD_TYPE(CDM_DataMapNodeOfMetaDataLookUpTable)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(CDM_DataMapNodeOfMetaDataLookUpTable)


IMPLEMENT_DOWNCAST(CDM_DataMapNodeOfMetaDataLookUpTable,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(CDM_DataMapNodeOfMetaDataLookUpTable)


#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Handle(CDM_MetaData)
#define TheItem_hxx <CDM_MetaData.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode CDM_DataMapNodeOfMetaDataLookUpTable
#define TCollection_DataMapNode_hxx <CDM_DataMapNodeOfMetaDataLookUpTable.hxx>
#define TCollection_DataMapIterator CDM_DataMapIteratorOfMetaDataLookUpTable
#define TCollection_DataMapIterator_hxx <CDM_DataMapIteratorOfMetaDataLookUpTable.hxx>
#define Handle_TCollection_DataMapNode Handle_CDM_DataMapNodeOfMetaDataLookUpTable
#define TCollection_DataMapNode_Type_() CDM_DataMapNodeOfMetaDataLookUpTable_Type_()
#define TCollection_DataMap CDM_MetaDataLookUpTable
#define TCollection_DataMap_hxx <CDM_MetaDataLookUpTable.hxx>
#include <TCollection_DataMapNode.gxx>

