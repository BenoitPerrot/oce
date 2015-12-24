// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_SequenceNodeOfSequenceOfDimension_HeaderFile
#define _AIS_SequenceNodeOfSequenceOfDimension_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/AIS/Handle_AIS_SequenceNodeOfSequenceOfDimension.hxx>

#include <Visualization/AIS/Handle_AIS_Relation.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class AIS_Relation;
class AIS_SequenceOfDimension;



class AIS_SequenceNodeOfSequenceOfDimension : public TCollection_SeqNode
{

public:

  
    AIS_SequenceNodeOfSequenceOfDimension(const Handle(AIS_Relation)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(AIS_Relation)& Value()  const;




  DEFINE_STANDARD_RTTI(AIS_SequenceNodeOfSequenceOfDimension)

protected:




private: 


  Handle(AIS_Relation) myValue;


};

#define SeqItem Handle(AIS_Relation)
#define SeqItem_hxx <Visualization/AIS/AIS_Relation.hxx>
#define TCollection_SequenceNode AIS_SequenceNodeOfSequenceOfDimension
#define TCollection_SequenceNode_hxx <Visualization/AIS/AIS_SequenceNodeOfSequenceOfDimension.hxx>
#define Handle_TCollection_SequenceNode Handle_AIS_SequenceNodeOfSequenceOfDimension
#define TCollection_SequenceNode_Type_() AIS_SequenceNodeOfSequenceOfDimension_Type_()
#define TCollection_Sequence AIS_SequenceOfDimension
#define TCollection_Sequence_hxx <Visualization/AIS/AIS_SequenceOfDimension.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _AIS_SequenceNodeOfSequenceOfDimension_HeaderFile
