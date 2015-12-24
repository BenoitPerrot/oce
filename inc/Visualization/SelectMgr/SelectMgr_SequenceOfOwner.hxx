// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_SequenceOfOwner_HeaderFile
#define _SelectMgr_SequenceOfOwner_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_EntityOwner.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_SequenceNodeOfSequenceOfOwner.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class SelectMgr_EntityOwner;
class SelectMgr_SequenceNodeOfSequenceOfOwner;



class SelectMgr_SequenceOfOwner  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    SelectMgr_SequenceOfOwner();
  
  Standard_EXPORT SelectMgr_SequenceOfOwner(const SelectMgr_SequenceOfOwner& Other);
  
  Standard_EXPORT   void Clear() ;
~SelectMgr_SequenceOfOwner()
{
  Clear();
}
  
  Standard_EXPORT  const  SelectMgr_SequenceOfOwner& Assign (const SelectMgr_SequenceOfOwner& Other) ;
 const  SelectMgr_SequenceOfOwner& operator = (const SelectMgr_SequenceOfOwner& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(SelectMgr_EntityOwner)& T) ;
  
      void Append (SelectMgr_SequenceOfOwner& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(SelectMgr_EntityOwner)& T) ;
  
      void Prepend (SelectMgr_SequenceOfOwner& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(SelectMgr_EntityOwner)& T) ;
  
      void InsertBefore (const Standard_Integer Index, SelectMgr_SequenceOfOwner& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(SelectMgr_EntityOwner)& T) ;
  
      void InsertAfter (const Standard_Integer Index, SelectMgr_SequenceOfOwner& S) ;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& First()  const;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& Last()  const;
  
      void Split (const Standard_Integer Index, SelectMgr_SequenceOfOwner& Sub) ;
  
  Standard_EXPORT  const  Handle(SelectMgr_EntityOwner)& Value (const Standard_Integer Index)  const;
 const  Handle(SelectMgr_EntityOwner)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(SelectMgr_EntityOwner)& I) ;
  
  Standard_EXPORT   Handle(SelectMgr_EntityOwner)& ChangeValue (const Standard_Integer Index) ;
  Handle(SelectMgr_EntityOwner)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(SelectMgr_EntityOwner)
#define SeqItem_hxx <Visualization/SelectMgr/SelectMgr_EntityOwner.hxx>
#define TCollection_SequenceNode SelectMgr_SequenceNodeOfSequenceOfOwner
#define TCollection_SequenceNode_hxx <Visualization/SelectMgr/SelectMgr_SequenceNodeOfSequenceOfOwner.hxx>
#define Handle_TCollection_SequenceNode Handle_SelectMgr_SequenceNodeOfSequenceOfOwner
#define TCollection_SequenceNode_Type_() SelectMgr_SequenceNodeOfSequenceOfOwner_Type_()
#define TCollection_Sequence SelectMgr_SequenceOfOwner
#define TCollection_Sequence_hxx <Visualization/SelectMgr/SelectMgr_SequenceOfOwner.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _SelectMgr_SequenceOfOwner_HeaderFile
