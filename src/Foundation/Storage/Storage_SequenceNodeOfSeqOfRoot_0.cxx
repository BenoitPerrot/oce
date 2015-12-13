// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Storage_SequenceNodeOfSeqOfRoot.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Storage_Root.hxx>
#include <Storage_SeqOfRoot.hxx>

 


IMPLEMENT_STANDARD_TYPE(Storage_SequenceNodeOfSeqOfRoot)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Storage_SequenceNodeOfSeqOfRoot)


IMPLEMENT_DOWNCAST(Storage_SequenceNodeOfSeqOfRoot,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Storage_SequenceNodeOfSeqOfRoot)


#define SeqItem Handle(Storage_Root)
#define SeqItem_hxx <Storage_Root.hxx>
#define TCollection_SequenceNode Storage_SequenceNodeOfSeqOfRoot
#define TCollection_SequenceNode_hxx <Storage_SequenceNodeOfSeqOfRoot.hxx>
#define Handle_TCollection_SequenceNode Handle_Storage_SequenceNodeOfSeqOfRoot
#define TCollection_SequenceNode_Type_() Storage_SequenceNodeOfSeqOfRoot_Type_()
#define TCollection_Sequence Storage_SeqOfRoot
#define TCollection_Sequence_hxx <Storage_SeqOfRoot.hxx>
#include <TCollection_SequenceNode.gxx>

