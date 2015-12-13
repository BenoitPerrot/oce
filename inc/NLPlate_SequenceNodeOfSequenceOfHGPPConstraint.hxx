// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_SequenceNodeOfSequenceOfHGPPConstraint_HeaderFile
#define _NLPlate_SequenceNodeOfSequenceOfHGPPConstraint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_NLPlate_SequenceNodeOfSequenceOfHGPPConstraint.hxx>

#include <Handle_NLPlate_HGPPConstraint.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class NLPlate_HGPPConstraint;
class NLPlate_SequenceOfHGPPConstraint;



class NLPlate_SequenceNodeOfSequenceOfHGPPConstraint : public TCollection_SeqNode
{

public:

  
    NLPlate_SequenceNodeOfSequenceOfHGPPConstraint(const Handle(NLPlate_HGPPConstraint)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(NLPlate_HGPPConstraint)& Value()  const;




  DEFINE_STANDARD_RTTI(NLPlate_SequenceNodeOfSequenceOfHGPPConstraint)

protected:




private: 


  Handle(NLPlate_HGPPConstraint) myValue;


};

#define SeqItem Handle(NLPlate_HGPPConstraint)
#define SeqItem_hxx <NLPlate_HGPPConstraint.hxx>
#define TCollection_SequenceNode NLPlate_SequenceNodeOfSequenceOfHGPPConstraint
#define TCollection_SequenceNode_hxx <NLPlate_SequenceNodeOfSequenceOfHGPPConstraint.hxx>
#define Handle_TCollection_SequenceNode Handle_NLPlate_SequenceNodeOfSequenceOfHGPPConstraint
#define TCollection_SequenceNode_Type_() NLPlate_SequenceNodeOfSequenceOfHGPPConstraint_Type_()
#define TCollection_Sequence NLPlate_SequenceOfHGPPConstraint
#define TCollection_Sequence_hxx <NLPlate_SequenceOfHGPPConstraint.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _NLPlate_SequenceNodeOfSequenceOfHGPPConstraint_HeaderFile
