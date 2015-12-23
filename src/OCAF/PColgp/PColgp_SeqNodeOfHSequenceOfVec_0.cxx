// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <OCAF/PColgp/PColgp_SeqNodeOfHSequenceOfVec.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <OCAF/PColgp/PColgp_SeqNodeOfHSequenceOfVec.hxx>
#include <OCAF/PColgp/PColgp_HSequenceOfVec.hxx>
#include <OCAF/PColgp/PColgp_SeqExplorerOfHSequenceOfVec.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>

 


IMPLEMENT_STANDARD_TYPE(PColgp_SeqNodeOfHSequenceOfVec)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PMMgt_PManaged),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PColgp_SeqNodeOfHSequenceOfVec)


IMPLEMENT_DOWNCAST(PColgp_SeqNodeOfHSequenceOfVec,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PColgp_SeqNodeOfHSequenceOfVec)


#define Item gp_Vec
#define Item_hxx <Mathematics/Primitives/gp_Vec.hxx>
#define PCollection_SeqNode PColgp_SeqNodeOfHSequenceOfVec
#define PCollection_SeqNode_hxx <OCAF/PColgp/PColgp_SeqNodeOfHSequenceOfVec.hxx>
#define PCollection_SeqExplorer PColgp_SeqExplorerOfHSequenceOfVec
#define PCollection_SeqExplorer_hxx <OCAF/PColgp/PColgp_SeqExplorerOfHSequenceOfVec.hxx>
#define Handle_PCollection_SeqNode Handle_PColgp_SeqNodeOfHSequenceOfVec
#define PCollection_SeqNode_Type_() PColgp_SeqNodeOfHSequenceOfVec_Type_()
#define PCollection_HSequence PColgp_HSequenceOfVec
#define PCollection_HSequence_hxx <OCAF/PColgp/PColgp_HSequenceOfVec.hxx>
#define Handle_PCollection_HSequence Handle_PColgp_HSequenceOfVec
#define PCollection_HSequence_Type_() PColgp_HSequenceOfVec_Type_()
#include <OCAF/PCollection/PCollection_SeqNode.gxx>

