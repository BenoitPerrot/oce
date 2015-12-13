// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntRes2d_SequenceOfIntersectionSegment_HeaderFile
#define _IntRes2d_SequenceOfIntersectionSegment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntRes2d_IntersectionSegment;
class IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment;



class IntRes2d_SequenceOfIntersectionSegment  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntRes2d_SequenceOfIntersectionSegment();
  
  Standard_EXPORT IntRes2d_SequenceOfIntersectionSegment(const IntRes2d_SequenceOfIntersectionSegment& Other);
  
  Standard_EXPORT   void Clear() ;
~IntRes2d_SequenceOfIntersectionSegment()
{
  Clear();
}
  
  Standard_EXPORT  const  IntRes2d_SequenceOfIntersectionSegment& Assign (const IntRes2d_SequenceOfIntersectionSegment& Other) ;
 const  IntRes2d_SequenceOfIntersectionSegment& operator = (const IntRes2d_SequenceOfIntersectionSegment& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const IntRes2d_IntersectionSegment& T) ;
  
      void Append (IntRes2d_SequenceOfIntersectionSegment& S) ;
  
  Standard_EXPORT   void Prepend (const IntRes2d_IntersectionSegment& T) ;
  
      void Prepend (IntRes2d_SequenceOfIntersectionSegment& S) ;
  
      void InsertBefore (const Standard_Integer Index, const IntRes2d_IntersectionSegment& T) ;
  
      void InsertBefore (const Standard_Integer Index, IntRes2d_SequenceOfIntersectionSegment& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const IntRes2d_IntersectionSegment& T) ;
  
      void InsertAfter (const Standard_Integer Index, IntRes2d_SequenceOfIntersectionSegment& S) ;
  
  Standard_EXPORT  const  IntRes2d_IntersectionSegment& First()  const;
  
  Standard_EXPORT  const  IntRes2d_IntersectionSegment& Last()  const;
  
      void Split (const Standard_Integer Index, IntRes2d_SequenceOfIntersectionSegment& Sub) ;
  
  Standard_EXPORT  const  IntRes2d_IntersectionSegment& Value (const Standard_Integer Index)  const;
 const  IntRes2d_IntersectionSegment& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const IntRes2d_IntersectionSegment& I) ;
  
  Standard_EXPORT   IntRes2d_IntersectionSegment& ChangeValue (const Standard_Integer Index) ;
  IntRes2d_IntersectionSegment& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem IntRes2d_IntersectionSegment
#define SeqItem_hxx <IntRes2d_IntersectionSegment.hxx>
#define TCollection_SequenceNode IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment
#define TCollection_SequenceNode_hxx <IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment.hxx>
#define Handle_TCollection_SequenceNode Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment
#define TCollection_SequenceNode_Type_() IntRes2d_SequenceNodeOfSequenceOfIntersectionSegment_Type_()
#define TCollection_Sequence IntRes2d_SequenceOfIntersectionSegment
#define TCollection_Sequence_hxx <IntRes2d_SequenceOfIntersectionSegment.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntRes2d_SequenceOfIntersectionSegment_HeaderFile
