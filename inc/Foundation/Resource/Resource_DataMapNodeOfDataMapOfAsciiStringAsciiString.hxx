// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString_HeaderFile
#define _Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TCollection_AsciiString;
class Resource_DataMapOfAsciiStringAsciiString;
class Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString;



class Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString : public TCollection_MapNode
{

public:

  
    Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString(const TCollection_AsciiString& K, const TCollection_AsciiString& I, const TCollection_MapNodePtr& n);
  
      TCollection_AsciiString& Key()  const;
  
      TCollection_AsciiString& Value()  const;




  DEFINE_STANDARD_RTTI(Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString)

protected:




private: 


  TCollection_AsciiString myKey;
  TCollection_AsciiString myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TheItem TCollection_AsciiString
#define TheItem_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <Foundation/TCollection/TCollection_AsciiString.hxx>
#define TCollection_DataMapNode Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString
#define TCollection_DataMapNode_hxx <Foundation/Resource/Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString.hxx>
#define TCollection_DataMapIterator Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString
#define TCollection_DataMapIterator_hxx <Foundation/Resource/Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx>
#define Handle_TCollection_DataMapNode Handle_Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString
#define TCollection_DataMapNode_Type_() Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString_Type_()
#define TCollection_DataMap Resource_DataMapOfAsciiStringAsciiString
#define TCollection_DataMap_hxx <Foundation/Resource/Resource_DataMapOfAsciiStringAsciiString.hxx>

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




#endif // _Resource_DataMapNodeOfDataMapOfAsciiStringAsciiString_HeaderFile
