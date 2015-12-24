// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_IndexedDataMapNodeOfPType_HeaderFile
#define _Storage_IndexedDataMapNodeOfPType_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Storage/Handle_Storage_IndexedDataMapNodeOfPType.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class TCollection_AsciiString;
class Storage_PType;



class Storage_IndexedDataMapNodeOfPType : public TCollection_MapNode
{

public:

  
    Storage_IndexedDataMapNodeOfPType(const TCollection_AsciiString& K1, const Standard_Integer K2, const Standard_Integer& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TCollection_AsciiString& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      Standard_Integer& Value()  const;




  DEFINE_STANDARD_RTTI(Storage_IndexedDataMapNodeOfPType)

protected:




private: 


  TCollection_AsciiString myKey1;
  Standard_Integer myKey2;
  Standard_Integer myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Foundation/Standard/Standard_Integer.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TCollection_IndexedDataMapNode Storage_IndexedDataMapNodeOfPType
#define TCollection_IndexedDataMapNode_hxx <Foundation/Storage/Storage_IndexedDataMapNodeOfPType.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_Storage_IndexedDataMapNodeOfPType
#define TCollection_IndexedDataMapNode_Type_() Storage_IndexedDataMapNodeOfPType_Type_()
#define TCollection_IndexedDataMap Storage_PType
#define TCollection_IndexedDataMap_hxx <Foundation/Storage/Storage_PType.hxx>

#include <Foundation/TCollection/TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _Storage_IndexedDataMapNodeOfPType_HeaderFile
