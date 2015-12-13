// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_SequenceOfSeg_HeaderFile
#define _IntCurveSurface_SequenceOfSeg_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_IntCurveSurface_SequenceNodeOfSequenceOfSeg.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntCurveSurface_IntersectionSegment;
class IntCurveSurface_SequenceNodeOfSequenceOfSeg;



class IntCurveSurface_SequenceOfSeg  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntCurveSurface_SequenceOfSeg();
  
  Standard_EXPORT IntCurveSurface_SequenceOfSeg(const IntCurveSurface_SequenceOfSeg& Other);
  
  Standard_EXPORT   void Clear() ;
~IntCurveSurface_SequenceOfSeg()
{
  Clear();
}
  
  Standard_EXPORT  const  IntCurveSurface_SequenceOfSeg& Assign (const IntCurveSurface_SequenceOfSeg& Other) ;
 const  IntCurveSurface_SequenceOfSeg& operator = (const IntCurveSurface_SequenceOfSeg& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const IntCurveSurface_IntersectionSegment& T) ;
  
      void Append (IntCurveSurface_SequenceOfSeg& S) ;
  
  Standard_EXPORT   void Prepend (const IntCurveSurface_IntersectionSegment& T) ;
  
      void Prepend (IntCurveSurface_SequenceOfSeg& S) ;
  
      void InsertBefore (const Standard_Integer Index, const IntCurveSurface_IntersectionSegment& T) ;
  
      void InsertBefore (const Standard_Integer Index, IntCurveSurface_SequenceOfSeg& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const IntCurveSurface_IntersectionSegment& T) ;
  
      void InsertAfter (const Standard_Integer Index, IntCurveSurface_SequenceOfSeg& S) ;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionSegment& First()  const;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionSegment& Last()  const;
  
      void Split (const Standard_Integer Index, IntCurveSurface_SequenceOfSeg& Sub) ;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionSegment& Value (const Standard_Integer Index)  const;
 const  IntCurveSurface_IntersectionSegment& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const IntCurveSurface_IntersectionSegment& I) ;
  
  Standard_EXPORT   IntCurveSurface_IntersectionSegment& ChangeValue (const Standard_Integer Index) ;
  IntCurveSurface_IntersectionSegment& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem IntCurveSurface_IntersectionSegment
#define SeqItem_hxx <IntCurveSurface_IntersectionSegment.hxx>
#define TCollection_SequenceNode IntCurveSurface_SequenceNodeOfSequenceOfSeg
#define TCollection_SequenceNode_hxx <IntCurveSurface_SequenceNodeOfSequenceOfSeg.hxx>
#define Handle_TCollection_SequenceNode Handle_IntCurveSurface_SequenceNodeOfSequenceOfSeg
#define TCollection_SequenceNode_Type_() IntCurveSurface_SequenceNodeOfSequenceOfSeg_Type_()
#define TCollection_Sequence IntCurveSurface_SequenceOfSeg
#define TCollection_Sequence_hxx <IntCurveSurface_SequenceOfSeg.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntCurveSurface_SequenceOfSeg_HeaderFile
