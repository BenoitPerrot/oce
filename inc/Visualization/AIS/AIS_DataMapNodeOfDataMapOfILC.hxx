// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapNodeOfDataMapOfILC_HeaderFile
#define _AIS_DataMapNodeOfDataMapOfILC_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/AIS/Handle_AIS_DataMapNodeOfDataMapOfILC.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/AIS/Handle_AIS_LocalContext.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class AIS_LocalContext;
class TColStd_MapIntegerHasher;
class AIS_DataMapOfILC;
class AIS_DataMapIteratorOfDataMapOfILC;



class AIS_DataMapNodeOfDataMapOfILC : public TCollection_MapNode
{

public:

  
    AIS_DataMapNodeOfDataMapOfILC(const Standard_Integer& K, const Handle(AIS_LocalContext)& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Handle(AIS_LocalContext)& Value()  const;




  DEFINE_STANDARD_RTTI(AIS_DataMapNodeOfDataMapOfILC)

protected:




private: 


  Standard_Integer myKey;
  Handle(AIS_LocalContext) myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Handle(AIS_LocalContext)
#define TheItem_hxx <Visualization/AIS/AIS_LocalContext.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode AIS_DataMapNodeOfDataMapOfILC
#define TCollection_DataMapNode_hxx <Visualization/AIS/AIS_DataMapNodeOfDataMapOfILC.hxx>
#define TCollection_DataMapIterator AIS_DataMapIteratorOfDataMapOfILC
#define TCollection_DataMapIterator_hxx <Visualization/AIS/AIS_DataMapIteratorOfDataMapOfILC.hxx>
#define Handle_TCollection_DataMapNode Handle_AIS_DataMapNodeOfDataMapOfILC
#define TCollection_DataMapNode_Type_() AIS_DataMapNodeOfDataMapOfILC_Type_()
#define TCollection_DataMap AIS_DataMapOfILC
#define TCollection_DataMap_hxx <Visualization/AIS/AIS_DataMapOfILC.hxx>

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




#endif // _AIS_DataMapNodeOfDataMapOfILC_HeaderFile
