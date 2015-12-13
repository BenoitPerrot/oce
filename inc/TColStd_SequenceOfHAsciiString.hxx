// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SequenceOfHAsciiString_HeaderFile
#define _TColStd_SequenceOfHAsciiString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_TColStd_SequenceNodeOfSequenceOfHAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TCollection_HAsciiString;
class TColStd_SequenceNodeOfSequenceOfHAsciiString;



class TColStd_SequenceOfHAsciiString  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_SequenceOfHAsciiString();
  
  Standard_EXPORT TColStd_SequenceOfHAsciiString(const TColStd_SequenceOfHAsciiString& Other);
  
  Standard_EXPORT   void Clear() ;
~TColStd_SequenceOfHAsciiString()
{
  Clear();
}
  
  Standard_EXPORT  const  TColStd_SequenceOfHAsciiString& Assign (const TColStd_SequenceOfHAsciiString& Other) ;
 const  TColStd_SequenceOfHAsciiString& operator = (const TColStd_SequenceOfHAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(TCollection_HAsciiString)& T) ;
  
      void Append (TColStd_SequenceOfHAsciiString& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(TCollection_HAsciiString)& T) ;
  
      void Prepend (TColStd_SequenceOfHAsciiString& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(TCollection_HAsciiString)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColStd_SequenceOfHAsciiString& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(TCollection_HAsciiString)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColStd_SequenceOfHAsciiString& S) ;
  
  Standard_EXPORT  const  Handle(TCollection_HAsciiString)& First()  const;
  
  Standard_EXPORT  const  Handle(TCollection_HAsciiString)& Last()  const;
  
      void Split (const Standard_Integer Index, TColStd_SequenceOfHAsciiString& Sub) ;
  
  Standard_EXPORT  const  Handle(TCollection_HAsciiString)& Value (const Standard_Integer Index)  const;
 const  Handle(TCollection_HAsciiString)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(TCollection_HAsciiString)& I) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString)& ChangeValue (const Standard_Integer Index) ;
  Handle(TCollection_HAsciiString)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(TCollection_HAsciiString)
#define SeqItem_hxx <Foundation/TCollection/TCollection_HAsciiString.hxx>
#define TCollection_SequenceNode TColStd_SequenceNodeOfSequenceOfHAsciiString
#define TCollection_SequenceNode_hxx <TColStd_SequenceNodeOfSequenceOfHAsciiString.hxx>
#define Handle_TCollection_SequenceNode Handle_TColStd_SequenceNodeOfSequenceOfHAsciiString
#define TCollection_SequenceNode_Type_() TColStd_SequenceNodeOfSequenceOfHAsciiString_Type_()
#define TCollection_Sequence TColStd_SequenceOfHAsciiString
#define TCollection_Sequence_hxx <TColStd_SequenceOfHAsciiString.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColStd_SequenceOfHAsciiString_HeaderFile
