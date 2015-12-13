// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_SequenceOfInteriorPoint_HeaderFile
#define _IntSurf_SequenceOfInteriorPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_IntSurf_SequenceNodeOfSequenceOfInteriorPoint.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntSurf_InteriorPoint;
class IntSurf_SequenceNodeOfSequenceOfInteriorPoint;



class IntSurf_SequenceOfInteriorPoint  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntSurf_SequenceOfInteriorPoint();
  
  Standard_EXPORT IntSurf_SequenceOfInteriorPoint(const IntSurf_SequenceOfInteriorPoint& Other);
  
  Standard_EXPORT   void Clear() ;
~IntSurf_SequenceOfInteriorPoint()
{
  Clear();
}
  
  Standard_EXPORT  const  IntSurf_SequenceOfInteriorPoint& Assign (const IntSurf_SequenceOfInteriorPoint& Other) ;
 const  IntSurf_SequenceOfInteriorPoint& operator = (const IntSurf_SequenceOfInteriorPoint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const IntSurf_InteriorPoint& T) ;
  
      void Append (IntSurf_SequenceOfInteriorPoint& S) ;
  
  Standard_EXPORT   void Prepend (const IntSurf_InteriorPoint& T) ;
  
      void Prepend (IntSurf_SequenceOfInteriorPoint& S) ;
  
      void InsertBefore (const Standard_Integer Index, const IntSurf_InteriorPoint& T) ;
  
      void InsertBefore (const Standard_Integer Index, IntSurf_SequenceOfInteriorPoint& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const IntSurf_InteriorPoint& T) ;
  
      void InsertAfter (const Standard_Integer Index, IntSurf_SequenceOfInteriorPoint& S) ;
  
  Standard_EXPORT  const  IntSurf_InteriorPoint& First()  const;
  
  Standard_EXPORT  const  IntSurf_InteriorPoint& Last()  const;
  
      void Split (const Standard_Integer Index, IntSurf_SequenceOfInteriorPoint& Sub) ;
  
  Standard_EXPORT  const  IntSurf_InteriorPoint& Value (const Standard_Integer Index)  const;
 const  IntSurf_InteriorPoint& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const IntSurf_InteriorPoint& I) ;
  
  Standard_EXPORT   IntSurf_InteriorPoint& ChangeValue (const Standard_Integer Index) ;
  IntSurf_InteriorPoint& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem IntSurf_InteriorPoint
#define SeqItem_hxx <IntSurf_InteriorPoint.hxx>
#define TCollection_SequenceNode IntSurf_SequenceNodeOfSequenceOfInteriorPoint
#define TCollection_SequenceNode_hxx <IntSurf_SequenceNodeOfSequenceOfInteriorPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_IntSurf_SequenceNodeOfSequenceOfInteriorPoint
#define TCollection_SequenceNode_Type_() IntSurf_SequenceNodeOfSequenceOfInteriorPoint_Type_()
#define TCollection_Sequence IntSurf_SequenceOfInteriorPoint
#define TCollection_Sequence_hxx <IntSurf_SequenceOfInteriorPoint.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntSurf_SequenceOfInteriorPoint_HeaderFile
