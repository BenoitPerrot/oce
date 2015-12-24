// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference_HeaderFile
#define _TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ListOfInterference.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopOpeBRepDS_ListOfInterference;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapOfIntegerListOfInterference;
class TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference;



class TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference : public TCollection_MapNode
{

public:

  
    TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference(const Standard_Integer& K, const TopOpeBRepDS_ListOfInterference& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      TopOpeBRepDS_ListOfInterference& Value()  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference)

protected:




private: 


  Standard_Integer myKey;
  TopOpeBRepDS_ListOfInterference myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem TopOpeBRepDS_ListOfInterference
#define TheItem_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ListOfInterference.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference.hxx>
#define TCollection_DataMapIterator TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference
#define TCollection_DataMapNode_Type_() TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference_Type_()
#define TCollection_DataMap TopOpeBRepDS_DataMapOfIntegerListOfInterference
#define TCollection_DataMap_hxx <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx>

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




#endif // _TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference_HeaderFile
