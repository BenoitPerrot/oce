// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition_HeaderFile
#define _StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition.hxx>

#include <Handle_StepElement_CurveElementSectionDefinition.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class StepElement_CurveElementSectionDefinition;
class StepElement_SequenceOfCurveElementSectionDefinition;



class StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition : public TCollection_SeqNode
{

public:

  
    StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition(const Handle(StepElement_CurveElementSectionDefinition)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(StepElement_CurveElementSectionDefinition)& Value()  const;




  DEFINE_STANDARD_RTTI(StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition)

protected:




private: 


  Handle(StepElement_CurveElementSectionDefinition) myValue;


};

#define SeqItem Handle(StepElement_CurveElementSectionDefinition)
#define SeqItem_hxx <StepElement_CurveElementSectionDefinition.hxx>
#define TCollection_SequenceNode StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition
#define TCollection_SequenceNode_hxx <StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition.hxx>
#define Handle_TCollection_SequenceNode Handle_StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition
#define TCollection_SequenceNode_Type_() StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition_Type_()
#define TCollection_Sequence StepElement_SequenceOfCurveElementSectionDefinition
#define TCollection_Sequence_hxx <StepElement_SequenceOfCurveElementSectionDefinition.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepElement_SequenceNodeOfSequenceOfCurveElementSectionDefinition_HeaderFile
