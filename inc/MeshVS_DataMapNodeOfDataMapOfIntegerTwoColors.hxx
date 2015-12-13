// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <MeshVS_TwoColors.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerTwoColors;
class MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors;



class MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors : public TCollection_MapNode
{

public:

  
    MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors(const Standard_Integer& K, const MeshVS_TwoColors& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      MeshVS_TwoColors& Value()  const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors)

protected:




private: 


  Standard_Integer myKey;
  MeshVS_TwoColors myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem MeshVS_TwoColors
#define TheItem_hxx <MeshVS_TwoColors.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors_Type_()
#define TCollection_DataMap MeshVS_DataMapOfIntegerTwoColors
#define TCollection_DataMap_hxx <MeshVS_DataMapOfIntegerTwoColors.hxx>

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




#endif // _MeshVS_DataMapNodeOfDataMapOfIntegerTwoColors_HeaderFile
