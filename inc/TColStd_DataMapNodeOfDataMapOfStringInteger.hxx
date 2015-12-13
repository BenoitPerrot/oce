// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapNodeOfDataMapOfStringInteger_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfStringInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfStringInteger.hxx>

#include <TCollection_ExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TCollection_ExtendedString;
class TColStd_DataMapOfStringInteger;
class TColStd_DataMapIteratorOfDataMapOfStringInteger;



class TColStd_DataMapNodeOfDataMapOfStringInteger : public TCollection_MapNode
{

public:

  
    TColStd_DataMapNodeOfDataMapOfStringInteger(const TCollection_ExtendedString& K, const Standard_Integer& I, const TCollection_MapNodePtr& n);
  
      TCollection_ExtendedString& Key()  const;
  
      Standard_Integer& Value()  const;




  DEFINE_STANDARD_RTTI(TColStd_DataMapNodeOfDataMapOfStringInteger)

protected:




private: 


  TCollection_ExtendedString myKey;
  Standard_Integer myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Foundation/Standard/Standard_Integer.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode TColStd_DataMapNodeOfDataMapOfStringInteger
#define TCollection_DataMapNode_hxx <TColStd_DataMapNodeOfDataMapOfStringInteger.hxx>
#define TCollection_DataMapIterator TColStd_DataMapIteratorOfDataMapOfStringInteger
#define TCollection_DataMapIterator_hxx <TColStd_DataMapIteratorOfDataMapOfStringInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_TColStd_DataMapNodeOfDataMapOfStringInteger
#define TCollection_DataMapNode_Type_() TColStd_DataMapNodeOfDataMapOfStringInteger_Type_()
#define TCollection_DataMap TColStd_DataMapOfStringInteger
#define TCollection_DataMap_hxx <TColStd_DataMapOfStringInteger.hxx>

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




#endif // _TColStd_DataMapNodeOfDataMapOfStringInteger_HeaderFile
