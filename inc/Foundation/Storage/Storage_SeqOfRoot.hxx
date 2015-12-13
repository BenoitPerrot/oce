// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_SeqOfRoot_HeaderFile
#define _Storage_SeqOfRoot_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_Storage_Root.hxx>
#include <Handle_Storage_SequenceNodeOfSeqOfRoot.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Storage_Root;
class Storage_SequenceNodeOfSeqOfRoot;



class Storage_SeqOfRoot  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Storage_SeqOfRoot();
  
  Standard_EXPORT Storage_SeqOfRoot(const Storage_SeqOfRoot& Other);
  
  Standard_EXPORT   void Clear() ;
~Storage_SeqOfRoot()
{
  Clear();
}
  
  Standard_EXPORT  const  Storage_SeqOfRoot& Assign (const Storage_SeqOfRoot& Other) ;
 const  Storage_SeqOfRoot& operator = (const Storage_SeqOfRoot& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Storage_Root)& T) ;
  
      void Append (Storage_SeqOfRoot& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Storage_Root)& T) ;
  
      void Prepend (Storage_SeqOfRoot& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Storage_Root)& T) ;
  
      void InsertBefore (const Standard_Integer Index, Storage_SeqOfRoot& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Storage_Root)& T) ;
  
      void InsertAfter (const Standard_Integer Index, Storage_SeqOfRoot& S) ;
  
  Standard_EXPORT  const  Handle(Storage_Root)& First()  const;
  
  Standard_EXPORT  const  Handle(Storage_Root)& Last()  const;
  
      void Split (const Standard_Integer Index, Storage_SeqOfRoot& Sub) ;
  
  Standard_EXPORT  const  Handle(Storage_Root)& Value (const Standard_Integer Index)  const;
 const  Handle(Storage_Root)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Storage_Root)& I) ;
  
  Standard_EXPORT   Handle(Storage_Root)& ChangeValue (const Standard_Integer Index) ;
  Handle(Storage_Root)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Storage_Root)
#define SeqItem_hxx <Foundation/Storage/Storage_Root.hxx>
#define TCollection_SequenceNode Storage_SequenceNodeOfSeqOfRoot
#define TCollection_SequenceNode_hxx <Foundation/Storage/Storage_SequenceNodeOfSeqOfRoot.hxx>
#define Handle_TCollection_SequenceNode Handle_Storage_SequenceNodeOfSeqOfRoot
#define TCollection_SequenceNode_Type_() Storage_SequenceNodeOfSeqOfRoot_Type_()
#define TCollection_Sequence Storage_SeqOfRoot
#define TCollection_Sequence_hxx <Foundation/Storage/Storage_SeqOfRoot.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Storage_SeqOfRoot_HeaderFile
