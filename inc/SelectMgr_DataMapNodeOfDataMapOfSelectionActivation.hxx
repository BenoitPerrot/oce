// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapNodeOfDataMapOfSelectionActivation_HeaderFile
#define _SelectMgr_DataMapNodeOfDataMapOfSelectionActivation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfSelectionActivation.hxx>

#include <Handle_SelectMgr_Selection.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class SelectMgr_Selection;
class TColStd_MapTransientHasher;
class SelectMgr_DataMapOfSelectionActivation;
class SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation;



class SelectMgr_DataMapNodeOfDataMapOfSelectionActivation : public TCollection_MapNode
{

public:

  
    SelectMgr_DataMapNodeOfDataMapOfSelectionActivation(const Handle(SelectMgr_Selection)& K, const Standard_Integer& I, const TCollection_MapNodePtr& n);
  
      Handle(SelectMgr_Selection)& Key()  const;
  
      Standard_Integer& Value()  const;




  DEFINE_STANDARD_RTTI(SelectMgr_DataMapNodeOfDataMapOfSelectionActivation)

protected:




private: 


  Handle(SelectMgr_Selection) myKey;
  Standard_Integer myValue;


};

#define TheKey Handle(SelectMgr_Selection)
#define TheKey_hxx <SelectMgr_Selection.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Foundation/Standard/Standard_Integer.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode SelectMgr_DataMapNodeOfDataMapOfSelectionActivation
#define TCollection_DataMapNode_hxx <SelectMgr_DataMapNodeOfDataMapOfSelectionActivation.hxx>
#define TCollection_DataMapIterator SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation
#define TCollection_DataMapIterator_hxx <SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation.hxx>
#define Handle_TCollection_DataMapNode Handle_SelectMgr_DataMapNodeOfDataMapOfSelectionActivation
#define TCollection_DataMapNode_Type_() SelectMgr_DataMapNodeOfDataMapOfSelectionActivation_Type_()
#define TCollection_DataMap SelectMgr_DataMapOfSelectionActivation
#define TCollection_DataMap_hxx <SelectMgr_DataMapOfSelectionActivation.hxx>

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




#endif // _SelectMgr_DataMapNodeOfDataMapOfSelectionActivation_HeaderFile
