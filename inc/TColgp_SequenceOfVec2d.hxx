// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceOfVec2d_HeaderFile
#define _TColgp_SequenceOfVec2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfVec2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Vec2d;
class TColgp_SequenceNodeOfSequenceOfVec2d;



class TColgp_SequenceOfVec2d  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColgp_SequenceOfVec2d();
  
  Standard_EXPORT TColgp_SequenceOfVec2d(const TColgp_SequenceOfVec2d& Other);
  
  Standard_EXPORT   void Clear() ;
~TColgp_SequenceOfVec2d()
{
  Clear();
}
  
  Standard_EXPORT  const  TColgp_SequenceOfVec2d& Assign (const TColgp_SequenceOfVec2d& Other) ;
 const  TColgp_SequenceOfVec2d& operator = (const TColgp_SequenceOfVec2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const gp_Vec2d& T) ;
  
      void Append (TColgp_SequenceOfVec2d& S) ;
  
  Standard_EXPORT   void Prepend (const gp_Vec2d& T) ;
  
      void Prepend (TColgp_SequenceOfVec2d& S) ;
  
      void InsertBefore (const Standard_Integer Index, const gp_Vec2d& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColgp_SequenceOfVec2d& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const gp_Vec2d& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColgp_SequenceOfVec2d& S) ;
  
  Standard_EXPORT  const  gp_Vec2d& First()  const;
  
  Standard_EXPORT  const  gp_Vec2d& Last()  const;
  
      void Split (const Standard_Integer Index, TColgp_SequenceOfVec2d& Sub) ;
  
  Standard_EXPORT  const  gp_Vec2d& Value (const Standard_Integer Index)  const;
 const  gp_Vec2d& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Vec2d& I) ;
  
  Standard_EXPORT   gp_Vec2d& ChangeValue (const Standard_Integer Index) ;
  gp_Vec2d& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem gp_Vec2d
#define SeqItem_hxx <gp_Vec2d.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfVec2d
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfVec2d.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfVec2d
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfVec2d_Type_()
#define TCollection_Sequence TColgp_SequenceOfVec2d
#define TCollection_Sequence_hxx <TColgp_SequenceOfVec2d.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceOfVec2d_HeaderFile
