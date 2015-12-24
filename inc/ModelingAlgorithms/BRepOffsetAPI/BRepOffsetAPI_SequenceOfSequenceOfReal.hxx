// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_SequenceOfSequenceOfReal_HeaderFile
#define _BRepOffsetAPI_SequenceOfSequenceOfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <ModelingAlgorithms/BRepOffsetAPI/Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColStd_SequenceOfReal;
class BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal;



class BRepOffsetAPI_SequenceOfSequenceOfReal  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    BRepOffsetAPI_SequenceOfSequenceOfReal();
  
  Standard_EXPORT BRepOffsetAPI_SequenceOfSequenceOfReal(const BRepOffsetAPI_SequenceOfSequenceOfReal& Other);
  
  Standard_EXPORT   void Clear() ;
~BRepOffsetAPI_SequenceOfSequenceOfReal()
{
  Clear();
}
  
  Standard_EXPORT  const  BRepOffsetAPI_SequenceOfSequenceOfReal& Assign (const BRepOffsetAPI_SequenceOfSequenceOfReal& Other) ;
 const  BRepOffsetAPI_SequenceOfSequenceOfReal& operator = (const BRepOffsetAPI_SequenceOfSequenceOfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const TColStd_SequenceOfReal& T) ;
  
      void Append (BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
  Standard_EXPORT   void Prepend (const TColStd_SequenceOfReal& T) ;
  
      void Prepend (BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
      void InsertBefore (const Standard_Integer Index, const TColStd_SequenceOfReal& T) ;
  
      void InsertBefore (const Standard_Integer Index, BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const TColStd_SequenceOfReal& T) ;
  
      void InsertAfter (const Standard_Integer Index, BRepOffsetAPI_SequenceOfSequenceOfReal& S) ;
  
  Standard_EXPORT  const  TColStd_SequenceOfReal& First()  const;
  
  Standard_EXPORT  const  TColStd_SequenceOfReal& Last()  const;
  
      void Split (const Standard_Integer Index, BRepOffsetAPI_SequenceOfSequenceOfReal& Sub) ;
  
  Standard_EXPORT  const  TColStd_SequenceOfReal& Value (const Standard_Integer Index)  const;
 const  TColStd_SequenceOfReal& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const TColStd_SequenceOfReal& I) ;
  
  Standard_EXPORT   TColStd_SequenceOfReal& ChangeValue (const Standard_Integer Index) ;
  TColStd_SequenceOfReal& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem TColStd_SequenceOfReal
#define SeqItem_hxx <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#define TCollection_SequenceNode BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/BRepOffsetAPI/BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal
#define TCollection_SequenceNode_Type_() BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal_Type_()
#define TCollection_Sequence BRepOffsetAPI_SequenceOfSequenceOfReal
#define TCollection_Sequence_hxx <ModelingAlgorithms/BRepOffsetAPI/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _BRepOffsetAPI_SequenceOfSequenceOfReal_HeaderFile
