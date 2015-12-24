// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SequenceNodeOfSequenceOfNodeRepresentation_HeaderFile
#define _StepFEA_SequenceNodeOfSequenceOfNodeRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepFEA/Handle_StepFEA_SequenceNodeOfSequenceOfNodeRepresentation.hxx>

#include <DataExchange/StepFEA/Handle_StepFEA_NodeRepresentation.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class StepFEA_NodeRepresentation;
class StepFEA_SequenceOfNodeRepresentation;



class StepFEA_SequenceNodeOfSequenceOfNodeRepresentation : public TCollection_SeqNode
{

public:

  
    StepFEA_SequenceNodeOfSequenceOfNodeRepresentation(const Handle(StepFEA_NodeRepresentation)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(StepFEA_NodeRepresentation)& Value()  const;




  DEFINE_STANDARD_RTTI(StepFEA_SequenceNodeOfSequenceOfNodeRepresentation)

protected:




private: 


  Handle(StepFEA_NodeRepresentation) myValue;


};

#define SeqItem Handle(StepFEA_NodeRepresentation)
#define SeqItem_hxx <DataExchange/StepFEA/StepFEA_NodeRepresentation.hxx>
#define TCollection_SequenceNode StepFEA_SequenceNodeOfSequenceOfNodeRepresentation
#define TCollection_SequenceNode_hxx <DataExchange/StepFEA/StepFEA_SequenceNodeOfSequenceOfNodeRepresentation.hxx>
#define Handle_TCollection_SequenceNode Handle_StepFEA_SequenceNodeOfSequenceOfNodeRepresentation
#define TCollection_SequenceNode_Type_() StepFEA_SequenceNodeOfSequenceOfNodeRepresentation_Type_()
#define TCollection_Sequence StepFEA_SequenceOfNodeRepresentation
#define TCollection_Sequence_hxx <DataExchange/StepFEA/StepFEA_SequenceOfNodeRepresentation.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepFEA_SequenceNodeOfSequenceOfNodeRepresentation_HeaderFile
