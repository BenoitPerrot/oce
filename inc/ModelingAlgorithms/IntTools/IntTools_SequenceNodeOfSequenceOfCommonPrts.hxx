// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceNodeOfSequenceOfCommonPrts_HeaderFile
#define _IntTools_SequenceNodeOfSequenceOfCommonPrts_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/IntTools/Handle_IntTools_SequenceNodeOfSequenceOfCommonPrts.hxx>

#include <ModelingAlgorithms/IntTools/IntTools_CommonPrt.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class IntTools_CommonPrt;
class IntTools_SequenceOfCommonPrts;



class IntTools_SequenceNodeOfSequenceOfCommonPrts : public TCollection_SeqNode
{

public:

  
    IntTools_SequenceNodeOfSequenceOfCommonPrts(const IntTools_CommonPrt& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntTools_CommonPrt& Value()  const;




  DEFINE_STANDARD_RTTI(IntTools_SequenceNodeOfSequenceOfCommonPrts)

protected:




private: 


  IntTools_CommonPrt myValue;


};

#define SeqItem IntTools_CommonPrt
#define SeqItem_hxx <ModelingAlgorithms/IntTools/IntTools_CommonPrt.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfCommonPrts
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/IntTools/IntTools_SequenceNodeOfSequenceOfCommonPrts.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfCommonPrts
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfCommonPrts_Type_()
#define TCollection_Sequence IntTools_SequenceOfCommonPrts
#define TCollection_Sequence_hxx <ModelingAlgorithms/IntTools/IntTools_SequenceOfCommonPrts.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntTools_SequenceNodeOfSequenceOfCommonPrts_HeaderFile
