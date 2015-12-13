// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_DataMapNodeOfDataMapOfRI_HeaderFile
#define _StepToTopoDS_DataMapNodeOfDataMapOfRI_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepToTopoDS_DataMapNodeOfDataMapOfRI.hxx>

#include <Handle_StepRepr_RepresentationItem.hxx>
#include <TopoDS_Shape.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class StepRepr_RepresentationItem;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class StepToTopoDS_DataMapOfRI;
class StepToTopoDS_DataMapIteratorOfDataMapOfRI;



class StepToTopoDS_DataMapNodeOfDataMapOfRI : public TCollection_MapNode
{

public:

  
    StepToTopoDS_DataMapNodeOfDataMapOfRI(const Handle(StepRepr_RepresentationItem)& K, const TopoDS_Shape& I, const TCollection_MapNodePtr& n);
  
      Handle(StepRepr_RepresentationItem)& Key()  const;
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(StepToTopoDS_DataMapNodeOfDataMapOfRI)

protected:




private: 


  Handle(StepRepr_RepresentationItem) myKey;
  TopoDS_Shape myValue;


};

#define TheKey Handle(StepRepr_RepresentationItem)
#define TheKey_hxx <StepRepr_RepresentationItem.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <TopoDS_Shape.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode StepToTopoDS_DataMapNodeOfDataMapOfRI
#define TCollection_DataMapNode_hxx <StepToTopoDS_DataMapNodeOfDataMapOfRI.hxx>
#define TCollection_DataMapIterator StepToTopoDS_DataMapIteratorOfDataMapOfRI
#define TCollection_DataMapIterator_hxx <StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx>
#define Handle_TCollection_DataMapNode Handle_StepToTopoDS_DataMapNodeOfDataMapOfRI
#define TCollection_DataMapNode_Type_() StepToTopoDS_DataMapNodeOfDataMapOfRI_Type_()
#define TCollection_DataMap StepToTopoDS_DataMapOfRI
#define TCollection_DataMap_hxx <StepToTopoDS_DataMapOfRI.hxx>

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




#endif // _StepToTopoDS_DataMapNodeOfDataMapOfRI_HeaderFile
