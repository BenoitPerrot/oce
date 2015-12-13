// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <MAT_SequenceNodeOfSequenceOfArc.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <MAT_Arc.hxx>
#include <MAT_SequenceOfArc.hxx>

 


IMPLEMENT_STANDARD_TYPE(MAT_SequenceNodeOfSequenceOfArc)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MAT_SequenceNodeOfSequenceOfArc)


IMPLEMENT_DOWNCAST(MAT_SequenceNodeOfSequenceOfArc,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MAT_SequenceNodeOfSequenceOfArc)


#define SeqItem Handle(MAT_Arc)
#define SeqItem_hxx <MAT_Arc.hxx>
#define TCollection_SequenceNode MAT_SequenceNodeOfSequenceOfArc
#define TCollection_SequenceNode_hxx <MAT_SequenceNodeOfSequenceOfArc.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT_SequenceNodeOfSequenceOfArc
#define TCollection_SequenceNode_Type_() MAT_SequenceNodeOfSequenceOfArc_Type_()
#define TCollection_Sequence MAT_SequenceOfArc
#define TCollection_Sequence_hxx <MAT_SequenceOfArc.hxx>
#include <TCollection_SequenceNode.gxx>

