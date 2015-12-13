// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_SequenceNodeOfSequenceOfCouple_HeaderFile
#define _IntSurf_SequenceNodeOfSequenceOfCouple_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IntSurf_SequenceNodeOfSequenceOfCouple.hxx>

#include <IntSurf_Couple.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class IntSurf_Couple;
class IntSurf_SequenceOfCouple;



class IntSurf_SequenceNodeOfSequenceOfCouple : public TCollection_SeqNode
{

public:

  
    IntSurf_SequenceNodeOfSequenceOfCouple(const IntSurf_Couple& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntSurf_Couple& Value()  const;




  DEFINE_STANDARD_RTTI(IntSurf_SequenceNodeOfSequenceOfCouple)

protected:




private: 


  IntSurf_Couple myValue;


};

#define SeqItem IntSurf_Couple
#define SeqItem_hxx <IntSurf_Couple.hxx>
#define TCollection_SequenceNode IntSurf_SequenceNodeOfSequenceOfCouple
#define TCollection_SequenceNode_hxx <IntSurf_SequenceNodeOfSequenceOfCouple.hxx>
#define Handle_TCollection_SequenceNode Handle_IntSurf_SequenceNodeOfSequenceOfCouple
#define TCollection_SequenceNode_Type_() IntSurf_SequenceNodeOfSequenceOfCouple_Type_()
#define TCollection_Sequence IntSurf_SequenceOfCouple
#define TCollection_Sequence_hxx <IntSurf_SequenceOfCouple.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntSurf_SequenceNodeOfSequenceOfCouple_HeaderFile
