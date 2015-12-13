// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceOfRoots_HeaderFile
#define _IntTools_SequenceOfRoots_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_IntTools_SequenceNodeOfSequenceOfRoots.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntTools_Root;
class IntTools_SequenceNodeOfSequenceOfRoots;



class IntTools_SequenceOfRoots  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntTools_SequenceOfRoots();
  
  Standard_EXPORT IntTools_SequenceOfRoots(const IntTools_SequenceOfRoots& Other);
  
  Standard_EXPORT   void Clear() ;
~IntTools_SequenceOfRoots()
{
  Clear();
}
  
  Standard_EXPORT  const  IntTools_SequenceOfRoots& Assign (const IntTools_SequenceOfRoots& Other) ;
 const  IntTools_SequenceOfRoots& operator = (const IntTools_SequenceOfRoots& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const IntTools_Root& T) ;
  
      void Append (IntTools_SequenceOfRoots& S) ;
  
  Standard_EXPORT   void Prepend (const IntTools_Root& T) ;
  
      void Prepend (IntTools_SequenceOfRoots& S) ;
  
      void InsertBefore (const Standard_Integer Index, const IntTools_Root& T) ;
  
      void InsertBefore (const Standard_Integer Index, IntTools_SequenceOfRoots& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const IntTools_Root& T) ;
  
      void InsertAfter (const Standard_Integer Index, IntTools_SequenceOfRoots& S) ;
  
  Standard_EXPORT  const  IntTools_Root& First()  const;
  
  Standard_EXPORT  const  IntTools_Root& Last()  const;
  
      void Split (const Standard_Integer Index, IntTools_SequenceOfRoots& Sub) ;
  
  Standard_EXPORT  const  IntTools_Root& Value (const Standard_Integer Index)  const;
 const  IntTools_Root& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const IntTools_Root& I) ;
  
  Standard_EXPORT   IntTools_Root& ChangeValue (const Standard_Integer Index) ;
  IntTools_Root& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem IntTools_Root
#define SeqItem_hxx <IntTools_Root.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfRoots
#define TCollection_SequenceNode_hxx <IntTools_SequenceNodeOfSequenceOfRoots.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfRoots
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfRoots_Type_()
#define TCollection_Sequence IntTools_SequenceOfRoots
#define TCollection_Sequence_hxx <IntTools_SequenceOfRoots.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntTools_SequenceOfRoots_HeaderFile
