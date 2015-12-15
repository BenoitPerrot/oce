// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_DataMapNodeOfDataMapOfShapePnt_HeaderFile
#define _LocOpe_DataMapNodeOfDataMapOfShapePnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>

#include <TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class gp_Pnt;
class TopTools_ShapeMapHasher;
class LocOpe_DataMapOfShapePnt;
class LocOpe_DataMapIteratorOfDataMapOfShapePnt;



class LocOpe_DataMapNodeOfDataMapOfShapePnt : public TCollection_MapNode
{

public:

  
    LocOpe_DataMapNodeOfDataMapOfShapePnt(const TopoDS_Shape& K, const gp_Pnt& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      gp_Pnt& Value()  const;




  DEFINE_STANDARD_RTTI(LocOpe_DataMapNodeOfDataMapOfShapePnt)

protected:




private: 


  TopoDS_Shape myKey;
  gp_Pnt myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem gp_Pnt
#define TheItem_hxx <Mathematics/Primitives/gp_Pnt.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode LocOpe_DataMapNodeOfDataMapOfShapePnt
#define TCollection_DataMapNode_hxx <LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>
#define TCollection_DataMapIterator LocOpe_DataMapIteratorOfDataMapOfShapePnt
#define TCollection_DataMapIterator_hxx <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#define Handle_TCollection_DataMapNode Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt
#define TCollection_DataMapNode_Type_() LocOpe_DataMapNodeOfDataMapOfShapePnt_Type_()
#define TCollection_DataMap LocOpe_DataMapOfShapePnt
#define TCollection_DataMap_hxx <LocOpe_DataMapOfShapePnt.hxx>

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




#endif // _LocOpe_DataMapNodeOfDataMapOfShapePnt_HeaderFile
