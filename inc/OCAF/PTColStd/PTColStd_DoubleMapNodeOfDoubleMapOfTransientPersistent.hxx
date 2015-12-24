// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent_HeaderFile
#define _PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/PTColStd/Handle_PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent.hxx>

#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Handle_Standard_Persistent.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
class Standard_Transient;
class Standard_Persistent;
class TColStd_MapTransientHasher;
class PTColStd_MapPersistentHasher;
class PTColStd_DoubleMapOfTransientPersistent;
class PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent;



class PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent : public TCollection_MapNode
{

public:

  
    PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent(const Handle(Standard_Transient)& K1, const Handle(Standard_Persistent)& K2, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(Standard_Transient)& Key1()  const;
  
      Handle(Standard_Persistent)& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;




  DEFINE_STANDARD_RTTI(PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent)

protected:




private: 


  Handle(Standard_Transient) myKey1;
  Handle(Standard_Persistent) myKey2;
  TCollection_MapNodePtr myNext2;


};

#define TheKey1 Handle(Standard_Transient)
#define TheKey1_hxx <Foundation/Standard/Standard_Transient.hxx>
#define TheKey2 Handle(Standard_Persistent)
#define TheKey2_hxx <Foundation/Standard/Standard_Persistent.hxx>
#define Hasher1 TColStd_MapTransientHasher
#define Hasher1_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define Hasher2 PTColStd_MapPersistentHasher
#define Hasher2_hxx <OCAF/PTColStd/PTColStd_MapPersistentHasher.hxx>
#define TCollection_DoubleMapNode PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent
#define TCollection_DoubleMapNode_hxx <OCAF/PTColStd/PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent.hxx>
#define TCollection_DoubleMapIterator PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent
#define TCollection_DoubleMapIterator_hxx <OCAF/PTColStd/PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent.hxx>
#define Handle_TCollection_DoubleMapNode Handle_PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent
#define TCollection_DoubleMapNode_Type_() PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent_Type_()
#define TCollection_DoubleMap PTColStd_DoubleMapOfTransientPersistent
#define TCollection_DoubleMap_hxx <OCAF/PTColStd/PTColStd_DoubleMapOfTransientPersistent.hxx>

#include <Foundation/TCollection/TCollection_DoubleMapNode.lxx>

#undef TheKey1
#undef TheKey1_hxx
#undef TheKey2
#undef TheKey2_hxx
#undef Hasher1
#undef Hasher1_hxx
#undef Hasher2
#undef Hasher2_hxx
#undef TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_hxx
#undef TCollection_DoubleMapIterator
#undef TCollection_DoubleMapIterator_hxx
#undef Handle_TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_Type_
#undef TCollection_DoubleMap
#undef TCollection_DoubleMap_hxx




#endif // _PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent_HeaderFile
