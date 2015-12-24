// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_SequenceOfPrsBuilder_HeaderFile
#define _MeshVS_SequenceOfPrsBuilder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_PrsBuilder.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MeshVS_PrsBuilder;
class MeshVS_SequenceNodeOfSequenceOfPrsBuilder;



class MeshVS_SequenceOfPrsBuilder  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    MeshVS_SequenceOfPrsBuilder();
  
  Standard_EXPORT MeshVS_SequenceOfPrsBuilder(const MeshVS_SequenceOfPrsBuilder& Other);
  
  Standard_EXPORT   void Clear() ;
~MeshVS_SequenceOfPrsBuilder()
{
  Clear();
}
  
  Standard_EXPORT  const  MeshVS_SequenceOfPrsBuilder& Assign (const MeshVS_SequenceOfPrsBuilder& Other) ;
 const  MeshVS_SequenceOfPrsBuilder& operator = (const MeshVS_SequenceOfPrsBuilder& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(MeshVS_PrsBuilder)& T) ;
  
      void Append (MeshVS_SequenceOfPrsBuilder& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(MeshVS_PrsBuilder)& T) ;
  
      void Prepend (MeshVS_SequenceOfPrsBuilder& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(MeshVS_PrsBuilder)& T) ;
  
      void InsertBefore (const Standard_Integer Index, MeshVS_SequenceOfPrsBuilder& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(MeshVS_PrsBuilder)& T) ;
  
      void InsertAfter (const Standard_Integer Index, MeshVS_SequenceOfPrsBuilder& S) ;
  
  Standard_EXPORT  const  Handle(MeshVS_PrsBuilder)& First()  const;
  
  Standard_EXPORT  const  Handle(MeshVS_PrsBuilder)& Last()  const;
  
      void Split (const Standard_Integer Index, MeshVS_SequenceOfPrsBuilder& Sub) ;
  
  Standard_EXPORT  const  Handle(MeshVS_PrsBuilder)& Value (const Standard_Integer Index)  const;
 const  Handle(MeshVS_PrsBuilder)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(MeshVS_PrsBuilder)& I) ;
  
  Standard_EXPORT   Handle(MeshVS_PrsBuilder)& ChangeValue (const Standard_Integer Index) ;
  Handle(MeshVS_PrsBuilder)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(MeshVS_PrsBuilder)
#define SeqItem_hxx <Visualization/MeshVS/MeshVS_PrsBuilder.hxx>
#define TCollection_SequenceNode MeshVS_SequenceNodeOfSequenceOfPrsBuilder
#define TCollection_SequenceNode_hxx <Visualization/MeshVS/MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#define Handle_TCollection_SequenceNode Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder
#define TCollection_SequenceNode_Type_() MeshVS_SequenceNodeOfSequenceOfPrsBuilder_Type_()
#define TCollection_Sequence MeshVS_SequenceOfPrsBuilder
#define TCollection_Sequence_hxx <Visualization/MeshVS/MeshVS_SequenceOfPrsBuilder.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MeshVS_SequenceOfPrsBuilder_HeaderFile
