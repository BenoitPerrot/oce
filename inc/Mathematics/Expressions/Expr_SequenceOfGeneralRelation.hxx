// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SequenceOfGeneralRelation_HeaderFile
#define _Expr_SequenceOfGeneralRelation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Mathematics/Expressions/Handle_Expr_GeneralRelation.hxx>
#include <Mathematics/Expressions/Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Expr_GeneralRelation;
class Expr_SequenceNodeOfSequenceOfGeneralRelation;



class Expr_SequenceOfGeneralRelation  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Expr_SequenceOfGeneralRelation();
  
  Standard_EXPORT Expr_SequenceOfGeneralRelation(const Expr_SequenceOfGeneralRelation& Other);
  
  Standard_EXPORT   void Clear() ;
~Expr_SequenceOfGeneralRelation()
{
  Clear();
}
  
  Standard_EXPORT  const  Expr_SequenceOfGeneralRelation& Assign (const Expr_SequenceOfGeneralRelation& Other) ;
 const  Expr_SequenceOfGeneralRelation& operator = (const Expr_SequenceOfGeneralRelation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Expr_GeneralRelation)& T) ;
  
      void Append (Expr_SequenceOfGeneralRelation& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Expr_GeneralRelation)& T) ;
  
      void Prepend (Expr_SequenceOfGeneralRelation& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Expr_GeneralRelation)& T) ;
  
      void InsertBefore (const Standard_Integer Index, Expr_SequenceOfGeneralRelation& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Expr_GeneralRelation)& T) ;
  
      void InsertAfter (const Standard_Integer Index, Expr_SequenceOfGeneralRelation& S) ;
  
  Standard_EXPORT  const  Handle(Expr_GeneralRelation)& First()  const;
  
  Standard_EXPORT  const  Handle(Expr_GeneralRelation)& Last()  const;
  
      void Split (const Standard_Integer Index, Expr_SequenceOfGeneralRelation& Sub) ;
  
  Standard_EXPORT  const  Handle(Expr_GeneralRelation)& Value (const Standard_Integer Index)  const;
 const  Handle(Expr_GeneralRelation)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Expr_GeneralRelation)& I) ;
  
  Standard_EXPORT   Handle(Expr_GeneralRelation)& ChangeValue (const Standard_Integer Index) ;
  Handle(Expr_GeneralRelation)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Expr_GeneralRelation)
#define SeqItem_hxx <Mathematics/Expressions/Expr_GeneralRelation.hxx>
#define TCollection_SequenceNode Expr_SequenceNodeOfSequenceOfGeneralRelation
#define TCollection_SequenceNode_hxx <Mathematics/Expressions/Expr_SequenceNodeOfSequenceOfGeneralRelation.hxx>
#define Handle_TCollection_SequenceNode Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation
#define TCollection_SequenceNode_Type_() Expr_SequenceNodeOfSequenceOfGeneralRelation_Type_()
#define TCollection_Sequence Expr_SequenceOfGeneralRelation
#define TCollection_Sequence_hxx <Mathematics/Expressions/Expr_SequenceOfGeneralRelation.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Expr_SequenceOfGeneralRelation_HeaderFile
