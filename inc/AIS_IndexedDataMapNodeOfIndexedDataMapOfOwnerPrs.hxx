// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_HeaderFile
#define _AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>

#include <Handle_SelectMgr_EntityOwner.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class SelectMgr_EntityOwner;
class Prs3d_Presentation;
class TColStd_MapTransientHasher;
class AIS_IndexedDataMapOfOwnerPrs;



class AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs : public TCollection_MapNode
{

public:

  
    AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs(const Handle(SelectMgr_EntityOwner)& K1, const Standard_Integer K2, const Handle(Prs3d_Presentation)& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      Handle(SelectMgr_EntityOwner)& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      Handle(Prs3d_Presentation)& Value()  const;




  DEFINE_STANDARD_RTTI(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)

protected:




private: 


  Handle(SelectMgr_EntityOwner) myKey1;
  Standard_Integer myKey2;
  Handle(Prs3d_Presentation) myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey Handle(SelectMgr_EntityOwner)
#define TheKey_hxx <SelectMgr_EntityOwner.hxx>
#define TheItem Handle(Prs3d_Presentation)
#define TheItem_hxx <Prs3d_Presentation.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedDataMapNode AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs
#define TCollection_IndexedDataMapNode_hxx <AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs
#define TCollection_IndexedDataMapNode_Type_() AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_Type_()
#define TCollection_IndexedDataMap AIS_IndexedDataMapOfOwnerPrs
#define TCollection_IndexedDataMap_hxx <AIS_IndexedDataMapOfOwnerPrs.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_HeaderFile
