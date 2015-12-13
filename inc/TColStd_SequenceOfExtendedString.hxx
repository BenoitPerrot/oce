// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SequenceOfExtendedString_HeaderFile
#define _TColStd_SequenceOfExtendedString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_TColStd_SequenceNodeOfSequenceOfExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TCollection_ExtendedString;
class TColStd_SequenceNodeOfSequenceOfExtendedString;



class TColStd_SequenceOfExtendedString  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_SequenceOfExtendedString();
  
  Standard_EXPORT TColStd_SequenceOfExtendedString(const TColStd_SequenceOfExtendedString& Other);
  
  Standard_EXPORT   void Clear() ;
~TColStd_SequenceOfExtendedString()
{
  Clear();
}
  
  Standard_EXPORT  const  TColStd_SequenceOfExtendedString& Assign (const TColStd_SequenceOfExtendedString& Other) ;
 const  TColStd_SequenceOfExtendedString& operator = (const TColStd_SequenceOfExtendedString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const TCollection_ExtendedString& T) ;
  
      void Append (TColStd_SequenceOfExtendedString& S) ;
  
  Standard_EXPORT   void Prepend (const TCollection_ExtendedString& T) ;
  
      void Prepend (TColStd_SequenceOfExtendedString& S) ;
  
      void InsertBefore (const Standard_Integer Index, const TCollection_ExtendedString& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColStd_SequenceOfExtendedString& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const TCollection_ExtendedString& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColStd_SequenceOfExtendedString& S) ;
  
  Standard_EXPORT  const  TCollection_ExtendedString& First()  const;
  
  Standard_EXPORT  const  TCollection_ExtendedString& Last()  const;
  
      void Split (const Standard_Integer Index, TColStd_SequenceOfExtendedString& Sub) ;
  
  Standard_EXPORT  const  TCollection_ExtendedString& Value (const Standard_Integer Index)  const;
 const  TCollection_ExtendedString& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const TCollection_ExtendedString& I) ;
  
  Standard_EXPORT   TCollection_ExtendedString& ChangeValue (const Standard_Integer Index) ;
  TCollection_ExtendedString& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem TCollection_ExtendedString
#define SeqItem_hxx <TCollection_ExtendedString.hxx>
#define TCollection_SequenceNode TColStd_SequenceNodeOfSequenceOfExtendedString
#define TCollection_SequenceNode_hxx <TColStd_SequenceNodeOfSequenceOfExtendedString.hxx>
#define Handle_TCollection_SequenceNode Handle_TColStd_SequenceNodeOfSequenceOfExtendedString
#define TCollection_SequenceNode_Type_() TColStd_SequenceNodeOfSequenceOfExtendedString_Type_()
#define TCollection_Sequence TColStd_SequenceOfExtendedString
#define TCollection_Sequence_hxx <TColStd_SequenceOfExtendedString.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColStd_SequenceOfExtendedString_HeaderFile
