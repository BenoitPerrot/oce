// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_DataMapNodeOfDataMapOfTRI_HeaderFile
#define _StepToTopoDS_DataMapNodeOfDataMapOfTRI_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepToTopoDS_DataMapNodeOfDataMapOfTRI.hxx>

#include <Handle_StepShape_TopologicalRepresentationItem.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class StepShape_TopologicalRepresentationItem;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class StepToTopoDS_DataMapOfTRI;
class StepToTopoDS_DataMapIteratorOfDataMapOfTRI;



class StepToTopoDS_DataMapNodeOfDataMapOfTRI : public TCollection_MapNode
{

public:

  
    StepToTopoDS_DataMapNodeOfDataMapOfTRI(const Handle(StepShape_TopologicalRepresentationItem)& K, const TopoDS_Shape& I, const TCollection_MapNodePtr& n);
  
      Handle(StepShape_TopologicalRepresentationItem)& Key()  const;
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(StepToTopoDS_DataMapNodeOfDataMapOfTRI)

protected:




private: 


  Handle(StepShape_TopologicalRepresentationItem) myKey;
  TopoDS_Shape myValue;


};

#define TheKey Handle(StepShape_TopologicalRepresentationItem)
#define TheKey_hxx <DataExchange/StepShape/StepShape_TopologicalRepresentationItem.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <Foundation/TColStd/TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode StepToTopoDS_DataMapNodeOfDataMapOfTRI
#define TCollection_DataMapNode_hxx <StepToTopoDS_DataMapNodeOfDataMapOfTRI.hxx>
#define TCollection_DataMapIterator StepToTopoDS_DataMapIteratorOfDataMapOfTRI
#define TCollection_DataMapIterator_hxx <StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx>
#define Handle_TCollection_DataMapNode Handle_StepToTopoDS_DataMapNodeOfDataMapOfTRI
#define TCollection_DataMapNode_Type_() StepToTopoDS_DataMapNodeOfDataMapOfTRI_Type_()
#define TCollection_DataMap StepToTopoDS_DataMapOfTRI
#define TCollection_DataMap_hxx <StepToTopoDS_DataMapOfTRI.hxx>

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




#endif // _StepToTopoDS_DataMapNodeOfDataMapOfTRI_HeaderFile
