// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TopTools_SequenceNodeOfSequenceOfShape.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TopTools_SequenceOfShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(TopTools_SequenceNodeOfSequenceOfShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopTools_SequenceNodeOfSequenceOfShape)


IMPLEMENT_DOWNCAST(TopTools_SequenceNodeOfSequenceOfShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopTools_SequenceNodeOfSequenceOfShape)


#define SeqItem TopoDS_Shape
#define SeqItem_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TCollection_SequenceNode TopTools_SequenceNodeOfSequenceOfShape
#define TCollection_SequenceNode_hxx <TopTools_SequenceNodeOfSequenceOfShape.hxx>
#define Handle_TCollection_SequenceNode Handle_TopTools_SequenceNodeOfSequenceOfShape
#define TCollection_SequenceNode_Type_() TopTools_SequenceNodeOfSequenceOfShape_Type_()
#define TCollection_Sequence TopTools_SequenceOfShape
#define TCollection_Sequence_hxx <TopTools_SequenceOfShape.hxx>
#include <Foundation/TCollection/TCollection_SequenceNode.gxx>

