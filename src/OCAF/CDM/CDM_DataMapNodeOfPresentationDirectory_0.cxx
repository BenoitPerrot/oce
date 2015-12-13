// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <CDM_DataMapNodeOfPresentationDirectory.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <CDM_Document.hxx>
#include <TCollection_ExtendedString.hxx>
#include <CDM_PresentationDirectory.hxx>
#include <CDM_DataMapIteratorOfPresentationDirectory.hxx>

 


IMPLEMENT_STANDARD_TYPE(CDM_DataMapNodeOfPresentationDirectory)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(CDM_DataMapNodeOfPresentationDirectory)


IMPLEMENT_DOWNCAST(CDM_DataMapNodeOfPresentationDirectory,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(CDM_DataMapNodeOfPresentationDirectory)


#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Handle(CDM_Document)
#define TheItem_hxx <CDM_Document.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode CDM_DataMapNodeOfPresentationDirectory
#define TCollection_DataMapNode_hxx <CDM_DataMapNodeOfPresentationDirectory.hxx>
#define TCollection_DataMapIterator CDM_DataMapIteratorOfPresentationDirectory
#define TCollection_DataMapIterator_hxx <CDM_DataMapIteratorOfPresentationDirectory.hxx>
#define Handle_TCollection_DataMapNode Handle_CDM_DataMapNodeOfPresentationDirectory
#define TCollection_DataMapNode_Type_() CDM_DataMapNodeOfPresentationDirectory_Type_()
#define TCollection_DataMap CDM_PresentationDirectory
#define TCollection_DataMap_hxx <CDM_PresentationDirectory.hxx>
#include <TCollection_DataMapNode.gxx>

