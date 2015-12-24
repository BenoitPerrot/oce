// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapNodeOfDataMapOfIntegerInteger_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfIntegerInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/TColStd/Handle_TColStd_DataMapNodeOfDataMapOfIntegerInteger.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TColStd_MapIntegerHasher;
class TColStd_DataMapOfIntegerInteger;
class TColStd_DataMapIteratorOfDataMapOfIntegerInteger;



class TColStd_DataMapNodeOfDataMapOfIntegerInteger : public TCollection_MapNode
{

public:

  
    TColStd_DataMapNodeOfDataMapOfIntegerInteger(const Standard_Integer& K, const Standard_Integer& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Standard_Integer& Value()  const;




  DEFINE_STANDARD_RTTI(TColStd_DataMapNodeOfDataMapOfIntegerInteger)

protected:




private: 


  Standard_Integer myKey;
  Standard_Integer myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Foundation/Standard/Standard_Integer.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TColStd_DataMapNodeOfDataMapOfIntegerInteger
#define TCollection_DataMapNode_hxx <Foundation/TColStd/TColStd_DataMapNodeOfDataMapOfIntegerInteger.hxx>
#define TCollection_DataMapIterator TColStd_DataMapIteratorOfDataMapOfIntegerInteger
#define TCollection_DataMapIterator_hxx <Foundation/TColStd/TColStd_DataMapIteratorOfDataMapOfIntegerInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_TColStd_DataMapNodeOfDataMapOfIntegerInteger
#define TCollection_DataMapNode_Type_() TColStd_DataMapNodeOfDataMapOfIntegerInteger_Type_()
#define TCollection_DataMap TColStd_DataMapOfIntegerInteger
#define TCollection_DataMap_hxx <Foundation/TColStd/TColStd_DataMapOfIntegerInteger.hxx>

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




#endif // _TColStd_DataMapNodeOfDataMapOfIntegerInteger_HeaderFile
