// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SequenceNodeOfSequenceOfGeneralRelation_HeaderFile
#define _Expr_SequenceNodeOfSequenceOfGeneralRelation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation.hxx>

#include <Handle_Expr_GeneralRelation.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Expr_GeneralRelation;
class Expr_SequenceOfGeneralRelation;



class Expr_SequenceNodeOfSequenceOfGeneralRelation : public TCollection_SeqNode
{

public:

  
    Expr_SequenceNodeOfSequenceOfGeneralRelation(const Handle(Expr_GeneralRelation)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Expr_GeneralRelation)& Value()  const;




  DEFINE_STANDARD_RTTI(Expr_SequenceNodeOfSequenceOfGeneralRelation)

protected:




private: 


  Handle(Expr_GeneralRelation) myValue;


};

#define SeqItem Handle(Expr_GeneralRelation)
#define SeqItem_hxx <Expr_GeneralRelation.hxx>
#define TCollection_SequenceNode Expr_SequenceNodeOfSequenceOfGeneralRelation
#define TCollection_SequenceNode_hxx <Expr_SequenceNodeOfSequenceOfGeneralRelation.hxx>
#define Handle_TCollection_SequenceNode Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation
#define TCollection_SequenceNode_Type_() Expr_SequenceNodeOfSequenceOfGeneralRelation_Type_()
#define TCollection_Sequence Expr_SequenceOfGeneralRelation
#define TCollection_Sequence_hxx <Expr_SequenceOfGeneralRelation.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Expr_SequenceNodeOfSequenceOfGeneralRelation_HeaderFile
