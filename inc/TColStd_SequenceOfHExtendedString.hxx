// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SequenceOfHExtendedString_HeaderFile
#define _TColStd_SequenceOfHExtendedString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_TCollection_HExtendedString.hxx>
#include <Handle_TColStd_SequenceNodeOfSequenceOfHExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TCollection_HExtendedString;
class TColStd_SequenceNodeOfSequenceOfHExtendedString;



class TColStd_SequenceOfHExtendedString  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_SequenceOfHExtendedString();
  
  Standard_EXPORT TColStd_SequenceOfHExtendedString(const TColStd_SequenceOfHExtendedString& Other);
  
  Standard_EXPORT   void Clear() ;
~TColStd_SequenceOfHExtendedString()
{
  Clear();
}
  
  Standard_EXPORT  const  TColStd_SequenceOfHExtendedString& Assign (const TColStd_SequenceOfHExtendedString& Other) ;
 const  TColStd_SequenceOfHExtendedString& operator = (const TColStd_SequenceOfHExtendedString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(TCollection_HExtendedString)& T) ;
  
      void Append (TColStd_SequenceOfHExtendedString& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(TCollection_HExtendedString)& T) ;
  
      void Prepend (TColStd_SequenceOfHExtendedString& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(TCollection_HExtendedString)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColStd_SequenceOfHExtendedString& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(TCollection_HExtendedString)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColStd_SequenceOfHExtendedString& S) ;
  
  Standard_EXPORT  const  Handle(TCollection_HExtendedString)& First()  const;
  
  Standard_EXPORT  const  Handle(TCollection_HExtendedString)& Last()  const;
  
      void Split (const Standard_Integer Index, TColStd_SequenceOfHExtendedString& Sub) ;
  
  Standard_EXPORT  const  Handle(TCollection_HExtendedString)& Value (const Standard_Integer Index)  const;
 const  Handle(TCollection_HExtendedString)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(TCollection_HExtendedString)& I) ;
  
  Standard_EXPORT   Handle(TCollection_HExtendedString)& ChangeValue (const Standard_Integer Index) ;
  Handle(TCollection_HExtendedString)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(TCollection_HExtendedString)
#define SeqItem_hxx <TCollection_HExtendedString.hxx>
#define TCollection_SequenceNode TColStd_SequenceNodeOfSequenceOfHExtendedString
#define TCollection_SequenceNode_hxx <TColStd_SequenceNodeOfSequenceOfHExtendedString.hxx>
#define Handle_TCollection_SequenceNode Handle_TColStd_SequenceNodeOfSequenceOfHExtendedString
#define TCollection_SequenceNode_Type_() TColStd_SequenceNodeOfSequenceOfHExtendedString_Type_()
#define TCollection_Sequence TColStd_SequenceOfHExtendedString
#define TCollection_Sequence_hxx <TColStd_SequenceOfHExtendedString.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColStd_SequenceOfHExtendedString_HeaderFile
