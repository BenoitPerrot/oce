// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass3d_DataMapNodeOfMapOfInter_HeaderFile
#define _BRepClass3d_DataMapNodeOfMapOfInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepClass3d/Handle_BRepClass3d_DataMapNodeOfMapOfInter.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class BRepClass3d_MapOfInter;
class BRepClass3d_DataMapIteratorOfMapOfInter;



class BRepClass3d_DataMapNodeOfMapOfInter : public TCollection_MapNode
{

public:

  
    BRepClass3d_DataMapNodeOfMapOfInter(const TopoDS_Shape& K, const Standard_Address& I, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;
  
      Standard_Address& Value()  const;




  DEFINE_STANDARD_RTTI(BRepClass3d_DataMapNodeOfMapOfInter)

protected:




private: 


  TopoDS_Shape myKey;
  Standard_Address myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheItem Standard_Address
#define TheItem_hxx <Foundation/Standard/Standard_Address.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <ModelingData/TopTools/TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepClass3d_DataMapNodeOfMapOfInter
#define TCollection_DataMapNode_hxx <ModelingAlgorithms/BRepClass3d/BRepClass3d_DataMapNodeOfMapOfInter.hxx>
#define TCollection_DataMapIterator BRepClass3d_DataMapIteratorOfMapOfInter
#define TCollection_DataMapIterator_hxx <ModelingAlgorithms/BRepClass3d/BRepClass3d_DataMapIteratorOfMapOfInter.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepClass3d_DataMapNodeOfMapOfInter
#define TCollection_DataMapNode_Type_() BRepClass3d_DataMapNodeOfMapOfInter_Type_()
#define TCollection_DataMap BRepClass3d_MapOfInter
#define TCollection_DataMap_hxx <ModelingAlgorithms/BRepClass3d/BRepClass3d_MapOfInter.hxx>

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




#endif // _BRepClass3d_DataMapNodeOfMapOfInter_HeaderFile
