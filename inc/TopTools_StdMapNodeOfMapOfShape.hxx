// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_StdMapNodeOfMapOfShape_HeaderFile
#define _TopTools_StdMapNodeOfMapOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopTools_StdMapNodeOfMapOfShape.hxx>

#include <TopoDS_Shape.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_MapOfShape;
class TopTools_MapIteratorOfMapOfShape;



class TopTools_StdMapNodeOfMapOfShape : public TCollection_MapNode
{

public:

  
    TopTools_StdMapNodeOfMapOfShape(const TopoDS_Shape& K, const TCollection_MapNodePtr& n);
  
      TopoDS_Shape& Key()  const;




  DEFINE_STANDARD_RTTI(TopTools_StdMapNodeOfMapOfShape)

protected:




private: 


  TopoDS_Shape myKey;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_StdMapNode TopTools_StdMapNodeOfMapOfShape
#define TCollection_StdMapNode_hxx <TopTools_StdMapNodeOfMapOfShape.hxx>
#define TCollection_MapIterator TopTools_MapIteratorOfMapOfShape
#define TCollection_MapIterator_hxx <TopTools_MapIteratorOfMapOfShape.hxx>
#define Handle_TCollection_StdMapNode Handle_TopTools_StdMapNodeOfMapOfShape
#define TCollection_StdMapNode_Type_() TopTools_StdMapNodeOfMapOfShape_Type_()
#define TCollection_Map TopTools_MapOfShape
#define TCollection_Map_hxx <TopTools_MapOfShape.hxx>

#include <TCollection_StdMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_StdMapNode
#undef TCollection_StdMapNode_hxx
#undef TCollection_MapIterator
#undef TCollection_MapIterator_hxx
#undef Handle_TCollection_StdMapNode
#undef TCollection_StdMapNode_Type_
#undef TCollection_Map
#undef TCollection_Map_hxx




#endif // _TopTools_StdMapNodeOfMapOfShape_HeaderFile
