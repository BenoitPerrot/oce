// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_SequenceOfSection_HeaderFile
#define _BRepFill_SequenceOfSection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_BRepFill_SequenceNodeOfSequenceOfSection.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class BRepFill_Section;
class BRepFill_SequenceNodeOfSequenceOfSection;



class BRepFill_SequenceOfSection  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    BRepFill_SequenceOfSection();
  
  Standard_EXPORT BRepFill_SequenceOfSection(const BRepFill_SequenceOfSection& Other);
  
  Standard_EXPORT   void Clear() ;
~BRepFill_SequenceOfSection()
{
  Clear();
}
  
  Standard_EXPORT  const  BRepFill_SequenceOfSection& Assign (const BRepFill_SequenceOfSection& Other) ;
 const  BRepFill_SequenceOfSection& operator = (const BRepFill_SequenceOfSection& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const BRepFill_Section& T) ;
  
      void Append (BRepFill_SequenceOfSection& S) ;
  
  Standard_EXPORT   void Prepend (const BRepFill_Section& T) ;
  
      void Prepend (BRepFill_SequenceOfSection& S) ;
  
      void InsertBefore (const Standard_Integer Index, const BRepFill_Section& T) ;
  
      void InsertBefore (const Standard_Integer Index, BRepFill_SequenceOfSection& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const BRepFill_Section& T) ;
  
      void InsertAfter (const Standard_Integer Index, BRepFill_SequenceOfSection& S) ;
  
  Standard_EXPORT  const  BRepFill_Section& First()  const;
  
  Standard_EXPORT  const  BRepFill_Section& Last()  const;
  
      void Split (const Standard_Integer Index, BRepFill_SequenceOfSection& Sub) ;
  
  Standard_EXPORT  const  BRepFill_Section& Value (const Standard_Integer Index)  const;
 const  BRepFill_Section& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const BRepFill_Section& I) ;
  
  Standard_EXPORT   BRepFill_Section& ChangeValue (const Standard_Integer Index) ;
  BRepFill_Section& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem BRepFill_Section
#define SeqItem_hxx <BRepFill_Section.hxx>
#define TCollection_SequenceNode BRepFill_SequenceNodeOfSequenceOfSection
#define TCollection_SequenceNode_hxx <BRepFill_SequenceNodeOfSequenceOfSection.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepFill_SequenceNodeOfSequenceOfSection
#define TCollection_SequenceNode_Type_() BRepFill_SequenceNodeOfSequenceOfSection_Type_()
#define TCollection_Sequence BRepFill_SequenceOfSection
#define TCollection_Sequence_hxx <BRepFill_SequenceOfSection.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _BRepFill_SequenceOfSection_HeaderFile
