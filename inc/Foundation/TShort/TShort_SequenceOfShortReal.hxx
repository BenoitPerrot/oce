// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TShort_SequenceOfShortReal_HeaderFile
#define _TShort_SequenceOfShortReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Foundation/TShort/Handle_TShort_SequenceNodeOfSequenceOfShortReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TShort_SequenceNodeOfSequenceOfShortReal;



class TShort_SequenceOfShortReal  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TShort_SequenceOfShortReal();
  
  Standard_EXPORT TShort_SequenceOfShortReal(const TShort_SequenceOfShortReal& Other);
  
  Standard_EXPORT   void Clear() ;
~TShort_SequenceOfShortReal()
{
  Clear();
}
  
  Standard_EXPORT  const  TShort_SequenceOfShortReal& Assign (const TShort_SequenceOfShortReal& Other) ;
 const  TShort_SequenceOfShortReal& operator = (const TShort_SequenceOfShortReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Standard_ShortReal& T) ;
  
      void Append (TShort_SequenceOfShortReal& S) ;
  
  Standard_EXPORT   void Prepend (const Standard_ShortReal& T) ;
  
      void Prepend (TShort_SequenceOfShortReal& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Standard_ShortReal& T) ;
  
      void InsertBefore (const Standard_Integer Index, TShort_SequenceOfShortReal& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Standard_ShortReal& T) ;
  
      void InsertAfter (const Standard_Integer Index, TShort_SequenceOfShortReal& S) ;
  
  Standard_EXPORT  const  Standard_ShortReal& First()  const;
  
  Standard_EXPORT  const  Standard_ShortReal& Last()  const;
  
      void Split (const Standard_Integer Index, TShort_SequenceOfShortReal& Sub) ;
  
  Standard_EXPORT  const  Standard_ShortReal& Value (const Standard_Integer Index)  const;
 const  Standard_ShortReal& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Standard_ShortReal& I) ;
  
  Standard_EXPORT   Standard_ShortReal& ChangeValue (const Standard_Integer Index) ;
  Standard_ShortReal& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Standard_ShortReal
#define SeqItem_hxx <Foundation/Standard/Standard_ShortReal.hxx>
#define TCollection_SequenceNode TShort_SequenceNodeOfSequenceOfShortReal
#define TCollection_SequenceNode_hxx <Foundation/TShort/TShort_SequenceNodeOfSequenceOfShortReal.hxx>
#define Handle_TCollection_SequenceNode Handle_TShort_SequenceNodeOfSequenceOfShortReal
#define TCollection_SequenceNode_Type_() TShort_SequenceNodeOfSequenceOfShortReal_Type_()
#define TCollection_Sequence TShort_SequenceOfShortReal
#define TCollection_Sequence_hxx <Foundation/TShort/TShort_SequenceOfShortReal.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TShort_SequenceOfShortReal_HeaderFile
