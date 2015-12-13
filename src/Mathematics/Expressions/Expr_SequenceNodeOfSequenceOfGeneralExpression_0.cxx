// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Mathematics/Expressions/Expr_SequenceNodeOfSequenceOfGeneralExpression.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Mathematics/Expressions/Expr_GeneralExpression.hxx>
#include <Mathematics/Expressions/Expr_SequenceOfGeneralExpression.hxx>

 


IMPLEMENT_STANDARD_TYPE(Expr_SequenceNodeOfSequenceOfGeneralExpression)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_SequenceNodeOfSequenceOfGeneralExpression)


IMPLEMENT_DOWNCAST(Expr_SequenceNodeOfSequenceOfGeneralExpression,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_SequenceNodeOfSequenceOfGeneralExpression)


#define SeqItem Handle(Expr_GeneralExpression)
#define SeqItem_hxx <Mathematics/Expressions/Expr_GeneralExpression.hxx>
#define TCollection_SequenceNode Expr_SequenceNodeOfSequenceOfGeneralExpression
#define TCollection_SequenceNode_hxx <Mathematics/Expressions/Expr_SequenceNodeOfSequenceOfGeneralExpression.hxx>
#define Handle_TCollection_SequenceNode Handle_Expr_SequenceNodeOfSequenceOfGeneralExpression
#define TCollection_SequenceNode_Type_() Expr_SequenceNodeOfSequenceOfGeneralExpression_Type_()
#define TCollection_Sequence Expr_SequenceOfGeneralExpression
#define TCollection_Sequence_hxx <Mathematics/Expressions/Expr_SequenceOfGeneralExpression.hxx>
#include <Foundation/TCollection/TCollection_SequenceNode.gxx>

