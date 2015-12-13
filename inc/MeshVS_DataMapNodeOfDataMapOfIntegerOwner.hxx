// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerOwner_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerOwner_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerOwner.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_SelectMgr_EntityOwner.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class SelectMgr_EntityOwner;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerOwner;
class MeshVS_DataMapIteratorOfDataMapOfIntegerOwner;



class MeshVS_DataMapNodeOfDataMapOfIntegerOwner : public TCollection_MapNode
{

public:

  
    MeshVS_DataMapNodeOfDataMapOfIntegerOwner(const Standard_Integer& K, const Handle(SelectMgr_EntityOwner)& I, const TCollection_MapNodePtr& n);
  
      Standard_Integer& Key()  const;
  
      Handle(SelectMgr_EntityOwner)& Value()  const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfIntegerOwner)

protected:




private: 


  Standard_Integer myKey;
  Handle(SelectMgr_EntityOwner) myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheItem Handle(SelectMgr_EntityOwner)
#define TheItem_hxx <SelectMgr_EntityOwner.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfIntegerOwner
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfIntegerOwner.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfIntegerOwner
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfIntegerOwner.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfIntegerOwner
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfIntegerOwner_Type_()
#define TCollection_DataMap MeshVS_DataMapOfIntegerOwner
#define TCollection_DataMap_hxx <MeshVS_DataMapOfIntegerOwner.hxx>

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




#endif // _MeshVS_DataMapNodeOfDataMapOfIntegerOwner_HeaderFile
