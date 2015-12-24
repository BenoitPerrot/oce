// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_SequenceNodeOfSequenceOfNamedExpression_HeaderFile
#define _ExprIntrp_SequenceNodeOfSequenceOfNamedExpression_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/Expressions/Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedExpression.hxx>

#include <Mathematics/Expressions/Handle_Expr_NamedExpression.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Expr_NamedExpression;
class ExprIntrp_SequenceOfNamedExpression;



class ExprIntrp_SequenceNodeOfSequenceOfNamedExpression : public TCollection_SeqNode
{

public:

  
    ExprIntrp_SequenceNodeOfSequenceOfNamedExpression(const Handle(Expr_NamedExpression)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Expr_NamedExpression)& Value()  const;




  DEFINE_STANDARD_RTTI(ExprIntrp_SequenceNodeOfSequenceOfNamedExpression)

protected:




private: 


  Handle(Expr_NamedExpression) myValue;


};

#define SeqItem Handle(Expr_NamedExpression)
#define SeqItem_hxx <Mathematics/Expressions/Expr_NamedExpression.hxx>
#define TCollection_SequenceNode ExprIntrp_SequenceNodeOfSequenceOfNamedExpression
#define TCollection_SequenceNode_hxx <Mathematics/Expressions/ExprIntrp_SequenceNodeOfSequenceOfNamedExpression.hxx>
#define Handle_TCollection_SequenceNode Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedExpression
#define TCollection_SequenceNode_Type_() ExprIntrp_SequenceNodeOfSequenceOfNamedExpression_Type_()
#define TCollection_Sequence ExprIntrp_SequenceOfNamedExpression
#define TCollection_Sequence_hxx <Mathematics/Expressions/ExprIntrp_SequenceOfNamedExpression.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _ExprIntrp_SequenceNodeOfSequenceOfNamedExpression_HeaderFile
