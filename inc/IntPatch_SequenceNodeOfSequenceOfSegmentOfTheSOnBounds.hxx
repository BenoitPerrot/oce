// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds_HeaderFile
#define _IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds.hxx>

#include <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class IntPatch_TheSegmentOfTheSOnBounds;
class IntPatch_SequenceOfSegmentOfTheSOnBounds;



class IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds : public TCollection_SeqNode
{

public:

  
    IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds(const IntPatch_TheSegmentOfTheSOnBounds& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntPatch_TheSegmentOfTheSOnBounds& Value()  const;




  DEFINE_STANDARD_RTTI(IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds)

protected:




private: 


  IntPatch_TheSegmentOfTheSOnBounds myValue;


};

#define SeqItem IntPatch_TheSegmentOfTheSOnBounds
#define SeqItem_hxx <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#define TCollection_SequenceNode IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds
#define TCollection_SequenceNode_hxx <IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds
#define TCollection_SequenceNode_Type_() IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds_Type_()
#define TCollection_Sequence IntPatch_SequenceOfSegmentOfTheSOnBounds
#define TCollection_Sequence_hxx <IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds_HeaderFile
