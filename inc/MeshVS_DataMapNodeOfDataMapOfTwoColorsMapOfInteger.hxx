// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger.hxx>

#include <MeshVS_TwoColors.hxx>
#include <TColStd_MapOfInteger.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TColStd_MapOfInteger;
class MeshVS_TwoColorsHasher;
class MeshVS_DataMapOfTwoColorsMapOfInteger;
class MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger;



class MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger : public TCollection_MapNode
{

public:

  
    MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger(const MeshVS_TwoColors& K, const TColStd_MapOfInteger& I, const TCollection_MapNodePtr& n);
  
      MeshVS_TwoColors& Key()  const;
  
      TColStd_MapOfInteger& Value()  const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger)

protected:




private: 


  MeshVS_TwoColors myKey;
  TColStd_MapOfInteger myValue;


};

#define TheKey MeshVS_TwoColors
#define TheKey_hxx <MeshVS_TwoColors.hxx>
#define TheItem TColStd_MapOfInteger
#define TheItem_hxx <TColStd_MapOfInteger.hxx>
#define Hasher MeshVS_TwoColorsHasher
#define Hasher_hxx <MeshVS_TwoColorsHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger_Type_()
#define TCollection_DataMap MeshVS_DataMapOfTwoColorsMapOfInteger
#define TCollection_DataMap_hxx <MeshVS_DataMapOfTwoColorsMapOfInteger.hxx>

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




#endif // _MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger_HeaderFile
