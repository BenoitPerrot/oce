// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Foundation/Storage/Storage_HSeqOfRoot.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Storage/Storage_Root.hxx>
#include <Foundation/Storage/Storage_SeqOfRoot.hxx>

 


IMPLEMENT_STANDARD_TYPE(Storage_HSeqOfRoot)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Storage_HSeqOfRoot)


IMPLEMENT_DOWNCAST(Storage_HSeqOfRoot,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Storage_HSeqOfRoot)


#define Item Handle(Storage_Root)
#define Item_hxx <Foundation/Storage/Storage_Root.hxx>
#define TheSequence Storage_SeqOfRoot
#define TheSequence_hxx <Foundation/Storage/Storage_SeqOfRoot.hxx>
#define TCollection_HSequence Storage_HSeqOfRoot
#define TCollection_HSequence_hxx <Foundation/Storage/Storage_HSeqOfRoot.hxx>
#define Handle_TCollection_HSequence Handle_Storage_HSeqOfRoot
#define TCollection_HSequence_Type_() Storage_HSeqOfRoot_Type_()
#include <TCollection_HSequence.gxx>

