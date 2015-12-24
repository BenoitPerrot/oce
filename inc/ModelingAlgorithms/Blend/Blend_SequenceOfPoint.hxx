// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Blend_SequenceOfPoint_HeaderFile
#define _Blend_SequenceOfPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <ModelingAlgorithms/Blend/Handle_Blend_SequenceNodeOfSequenceOfPoint.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Blend_Point;
class Blend_SequenceNodeOfSequenceOfPoint;



class Blend_SequenceOfPoint  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Blend_SequenceOfPoint();
  
  Standard_EXPORT Blend_SequenceOfPoint(const Blend_SequenceOfPoint& Other);
  
  Standard_EXPORT   void Clear() ;
~Blend_SequenceOfPoint()
{
  Clear();
}
  
  Standard_EXPORT  const  Blend_SequenceOfPoint& Assign (const Blend_SequenceOfPoint& Other) ;
 const  Blend_SequenceOfPoint& operator = (const Blend_SequenceOfPoint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Blend_Point& T) ;
  
      void Append (Blend_SequenceOfPoint& S) ;
  
  Standard_EXPORT   void Prepend (const Blend_Point& T) ;
  
      void Prepend (Blend_SequenceOfPoint& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Blend_Point& T) ;
  
      void InsertBefore (const Standard_Integer Index, Blend_SequenceOfPoint& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Blend_Point& T) ;
  
      void InsertAfter (const Standard_Integer Index, Blend_SequenceOfPoint& S) ;
  
  Standard_EXPORT  const  Blend_Point& First()  const;
  
  Standard_EXPORT  const  Blend_Point& Last()  const;
  
      void Split (const Standard_Integer Index, Blend_SequenceOfPoint& Sub) ;
  
  Standard_EXPORT  const  Blend_Point& Value (const Standard_Integer Index)  const;
 const  Blend_Point& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Blend_Point& I) ;
  
  Standard_EXPORT   Blend_Point& ChangeValue (const Standard_Integer Index) ;
  Blend_Point& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Blend_Point
#define SeqItem_hxx <ModelingAlgorithms/Blend/Blend_Point.hxx>
#define TCollection_SequenceNode Blend_SequenceNodeOfSequenceOfPoint
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/Blend/Blend_SequenceNodeOfSequenceOfPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_Blend_SequenceNodeOfSequenceOfPoint
#define TCollection_SequenceNode_Type_() Blend_SequenceNodeOfSequenceOfPoint_Type_()
#define TCollection_Sequence Blend_SequenceOfPoint
#define TCollection_Sequence_hxx <ModelingAlgorithms/Blend/Blend_SequenceOfPoint.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Blend_SequenceOfPoint_HeaderFile
