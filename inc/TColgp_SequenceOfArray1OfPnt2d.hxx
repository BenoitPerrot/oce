// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceOfArray1OfPnt2d_HeaderFile
#define _TColgp_SequenceOfArray1OfPnt2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColgp_HArray1OfPnt2d;
class TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d;



class TColgp_SequenceOfArray1OfPnt2d  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColgp_SequenceOfArray1OfPnt2d();
  
  Standard_EXPORT TColgp_SequenceOfArray1OfPnt2d(const TColgp_SequenceOfArray1OfPnt2d& Other);
  
  Standard_EXPORT   void Clear() ;
~TColgp_SequenceOfArray1OfPnt2d()
{
  Clear();
}
  
  Standard_EXPORT  const  TColgp_SequenceOfArray1OfPnt2d& Assign (const TColgp_SequenceOfArray1OfPnt2d& Other) ;
 const  TColgp_SequenceOfArray1OfPnt2d& operator = (const TColgp_SequenceOfArray1OfPnt2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(TColgp_HArray1OfPnt2d)& T) ;
  
      void Append (TColgp_SequenceOfArray1OfPnt2d& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HArray1OfPnt2d)& T) ;
  
      void Prepend (TColgp_SequenceOfArray1OfPnt2d& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(TColgp_HArray1OfPnt2d)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColgp_SequenceOfArray1OfPnt2d& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(TColgp_HArray1OfPnt2d)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColgp_SequenceOfArray1OfPnt2d& S) ;
  
  Standard_EXPORT  const  Handle(TColgp_HArray1OfPnt2d)& First()  const;
  
  Standard_EXPORT  const  Handle(TColgp_HArray1OfPnt2d)& Last()  const;
  
      void Split (const Standard_Integer Index, TColgp_SequenceOfArray1OfPnt2d& Sub) ;
  
  Standard_EXPORT  const  Handle(TColgp_HArray1OfPnt2d)& Value (const Standard_Integer Index)  const;
 const  Handle(TColgp_HArray1OfPnt2d)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(TColgp_HArray1OfPnt2d)& I) ;
  
  Standard_EXPORT   Handle(TColgp_HArray1OfPnt2d)& ChangeValue (const Standard_Integer Index) ;
  Handle(TColgp_HArray1OfPnt2d)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(TColgp_HArray1OfPnt2d)
#define SeqItem_hxx <TColgp_HArray1OfPnt2d.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d_Type_()
#define TCollection_Sequence TColgp_SequenceOfArray1OfPnt2d
#define TCollection_Sequence_hxx <TColgp_SequenceOfArray1OfPnt2d.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceOfArray1OfPnt2d_HeaderFile
