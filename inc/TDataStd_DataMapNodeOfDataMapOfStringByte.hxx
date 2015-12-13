// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapNodeOfDataMapOfStringByte_HeaderFile
#define _TDataStd_DataMapNodeOfDataMapOfStringByte_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_DataMapNodeOfDataMapOfStringByte.hxx>

#include <TCollection_ExtendedString.hxx>
#include <Foundation/Standard/Standard_Byte.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TCollection_ExtendedString;
class TDataStd_DataMapOfStringByte;
class TDataStd_DataMapIteratorOfDataMapOfStringByte;



class TDataStd_DataMapNodeOfDataMapOfStringByte : public TCollection_MapNode
{

public:

  
    TDataStd_DataMapNodeOfDataMapOfStringByte(const TCollection_ExtendedString& K, const Standard_Byte& I, const TCollection_MapNodePtr& n);
  
      TCollection_ExtendedString& Key()  const;
  
      Standard_Byte& Value()  const;




  DEFINE_STANDARD_RTTI(TDataStd_DataMapNodeOfDataMapOfStringByte)

protected:




private: 


  TCollection_ExtendedString myKey;
  Standard_Byte myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Standard_Byte
#define TheItem_hxx <Foundation/Standard/Standard_Byte.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode TDataStd_DataMapNodeOfDataMapOfStringByte
#define TCollection_DataMapNode_hxx <TDataStd_DataMapNodeOfDataMapOfStringByte.hxx>
#define TCollection_DataMapIterator TDataStd_DataMapIteratorOfDataMapOfStringByte
#define TCollection_DataMapIterator_hxx <TDataStd_DataMapIteratorOfDataMapOfStringByte.hxx>
#define Handle_TCollection_DataMapNode Handle_TDataStd_DataMapNodeOfDataMapOfStringByte
#define TCollection_DataMapNode_Type_() TDataStd_DataMapNodeOfDataMapOfStringByte_Type_()
#define TCollection_DataMap TDataStd_DataMapOfStringByte
#define TCollection_DataMap_hxx <TDataStd_DataMapOfStringByte.hxx>

#include <TCollection_DataMapNode.lxx>

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




#endif // _TDataStd_DataMapNodeOfDataMapOfStringByte_HeaderFile
