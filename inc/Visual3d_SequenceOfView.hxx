// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_SequenceOfView_HeaderFile
#define _Visual3d_SequenceOfView_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_Visual3d_View.hxx>
#include <Handle_Visual3d_SequenceNodeOfSequenceOfView.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Visual3d_View;
class Visual3d_SequenceNodeOfSequenceOfView;



class Visual3d_SequenceOfView  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Visual3d_SequenceOfView();
  
  Standard_EXPORT Visual3d_SequenceOfView(const Visual3d_SequenceOfView& Other);
  
  Standard_EXPORT   void Clear() ;
~Visual3d_SequenceOfView()
{
  Clear();
}
  
  Standard_EXPORT  const  Visual3d_SequenceOfView& Assign (const Visual3d_SequenceOfView& Other) ;
 const  Visual3d_SequenceOfView& operator = (const Visual3d_SequenceOfView& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Visual3d_View)& T) ;
  
      void Append (Visual3d_SequenceOfView& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Visual3d_View)& T) ;
  
      void Prepend (Visual3d_SequenceOfView& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Visual3d_View)& T) ;
  
      void InsertBefore (const Standard_Integer Index, Visual3d_SequenceOfView& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Visual3d_View)& T) ;
  
      void InsertAfter (const Standard_Integer Index, Visual3d_SequenceOfView& S) ;
  
  Standard_EXPORT  const  Handle(Visual3d_View)& First()  const;
  
  Standard_EXPORT  const  Handle(Visual3d_View)& Last()  const;
  
      void Split (const Standard_Integer Index, Visual3d_SequenceOfView& Sub) ;
  
  Standard_EXPORT  const  Handle(Visual3d_View)& Value (const Standard_Integer Index)  const;
 const  Handle(Visual3d_View)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Visual3d_View)& I) ;
  
  Standard_EXPORT   Handle(Visual3d_View)& ChangeValue (const Standard_Integer Index) ;
  Handle(Visual3d_View)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Visual3d_View)
#define SeqItem_hxx <Visual3d_View.hxx>
#define TCollection_SequenceNode Visual3d_SequenceNodeOfSequenceOfView
#define TCollection_SequenceNode_hxx <Visual3d_SequenceNodeOfSequenceOfView.hxx>
#define Handle_TCollection_SequenceNode Handle_Visual3d_SequenceNodeOfSequenceOfView
#define TCollection_SequenceNode_Type_() Visual3d_SequenceNodeOfSequenceOfView_Type_()
#define TCollection_Sequence Visual3d_SequenceOfView
#define TCollection_Sequence_hxx <Visual3d_SequenceOfView.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Visual3d_SequenceOfView_HeaderFile
