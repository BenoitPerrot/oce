// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <HatchGen_SequenceNodeOfDomains.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <HatchGen_Domain.hxx>
#include <HatchGen_Domains.hxx>

 


IMPLEMENT_STANDARD_TYPE(HatchGen_SequenceNodeOfDomains)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(HatchGen_SequenceNodeOfDomains)


IMPLEMENT_DOWNCAST(HatchGen_SequenceNodeOfDomains,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(HatchGen_SequenceNodeOfDomains)


#define SeqItem HatchGen_Domain
#define SeqItem_hxx <HatchGen_Domain.hxx>
#define TCollection_SequenceNode HatchGen_SequenceNodeOfDomains
#define TCollection_SequenceNode_hxx <HatchGen_SequenceNodeOfDomains.hxx>
#define Handle_TCollection_SequenceNode Handle_HatchGen_SequenceNodeOfDomains
#define TCollection_SequenceNode_Type_() HatchGen_SequenceNodeOfDomains_Type_()
#define TCollection_Sequence HatchGen_Domains
#define TCollection_Sequence_hxx <HatchGen_Domains.hxx>
#include <Foundation/TCollection/TCollection_SequenceNode.gxx>

