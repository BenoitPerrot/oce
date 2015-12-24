// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile
#define _PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/PTColStd/Handle_PTColStd_DataMapNodeOfPersistentTransientMap.hxx>

#include <Foundation/Standard/Handle_Standard_Persistent.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Standard_Persistent;
class Standard_Transient;
class PTColStd_MapPersistentHasher;
class PTColStd_PersistentTransientMap;
class PTColStd_DataMapIteratorOfPersistentTransientMap;



class PTColStd_DataMapNodeOfPersistentTransientMap : public TCollection_MapNode
{

public:

  
    PTColStd_DataMapNodeOfPersistentTransientMap(const Handle(Standard_Persistent)& K, const Handle(Standard_Transient)& I, const TCollection_MapNodePtr& n);
  
      Handle(Standard_Persistent)& Key()  const;
  
      Handle(Standard_Transient)& Value()  const;




  DEFINE_STANDARD_RTTI(PTColStd_DataMapNodeOfPersistentTransientMap)

protected:




private: 


  Handle(Standard_Persistent) myKey;
  Handle(Standard_Transient) myValue;


};

#define TheKey Handle(Standard_Persistent)
#define TheKey_hxx <Foundation/Standard/Standard_Persistent.hxx>
#define TheItem Handle(Standard_Transient)
#define TheItem_hxx <Foundation/Standard/Standard_Transient.hxx>
#define Hasher PTColStd_MapPersistentHasher
#define Hasher_hxx <OCAF/PTColStd/PTColStd_MapPersistentHasher.hxx>
#define TCollection_DataMapNode PTColStd_DataMapNodeOfPersistentTransientMap
#define TCollection_DataMapNode_hxx <OCAF/PTColStd/PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
#define TCollection_DataMapIterator PTColStd_DataMapIteratorOfPersistentTransientMap
#define TCollection_DataMapIterator_hxx <OCAF/PTColStd/PTColStd_DataMapIteratorOfPersistentTransientMap.hxx>
#define Handle_TCollection_DataMapNode Handle_PTColStd_DataMapNodeOfPersistentTransientMap
#define TCollection_DataMapNode_Type_() PTColStd_DataMapNodeOfPersistentTransientMap_Type_()
#define TCollection_DataMap PTColStd_PersistentTransientMap
#define TCollection_DataMap_hxx <OCAF/PTColStd/PTColStd_PersistentTransientMap.hxx>

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




#endif // _PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile
