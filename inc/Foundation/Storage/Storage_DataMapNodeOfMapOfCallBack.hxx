// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_DataMapNodeOfMapOfCallBack_HeaderFile
#define _Storage_DataMapNodeOfMapOfCallBack_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Storage_DataMapNodeOfMapOfCallBack.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Handle_Storage_TypedCallBack.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Storage_TypedCallBack;
class TCollection_AsciiString;
class Storage_MapOfCallBack;
class Storage_DataMapIteratorOfMapOfCallBack;



class Storage_DataMapNodeOfMapOfCallBack : public TCollection_MapNode
{

public:

  
    Storage_DataMapNodeOfMapOfCallBack(const TCollection_AsciiString& K, const Handle(Storage_TypedCallBack)& I, const TCollection_MapNodePtr& n);
  
      TCollection_AsciiString& Key()  const;
  
      Handle(Storage_TypedCallBack)& Value()  const;




  DEFINE_STANDARD_RTTI(Storage_DataMapNodeOfMapOfCallBack)

protected:




private: 


  TCollection_AsciiString myKey;
  Handle(Storage_TypedCallBack) myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TheItem Handle(Storage_TypedCallBack)
#define TheItem_hxx <Foundation/Storage/Storage_TypedCallBack.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TCollection_DataMapNode Storage_DataMapNodeOfMapOfCallBack
#define TCollection_DataMapNode_hxx <Foundation/Storage/Storage_DataMapNodeOfMapOfCallBack.hxx>
#define TCollection_DataMapIterator Storage_DataMapIteratorOfMapOfCallBack
#define TCollection_DataMapIterator_hxx <Foundation/Storage/Storage_DataMapIteratorOfMapOfCallBack.hxx>
#define Handle_TCollection_DataMapNode Handle_Storage_DataMapNodeOfMapOfCallBack
#define TCollection_DataMapNode_Type_() Storage_DataMapNodeOfMapOfCallBack_Type_()
#define TCollection_DataMap Storage_MapOfCallBack
#define TCollection_DataMap_hxx <Foundation/Storage/Storage_MapOfCallBack.hxx>

#include <Foundation/TCollection/TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _Storage_DataMapNodeOfMapOfCallBack_HeaderFile
