// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ASDriverSequence_HeaderFile
#define _MDF_ASDriverSequence_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <OCAF/MDF/Handle_MDF_ASDriver.hxx>
#include <OCAF/MDF/Handle_MDF_SequenceNodeOfASDriverSequence.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MDF_ASDriver;
class MDF_SequenceNodeOfASDriverSequence;



class MDF_ASDriverSequence  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    MDF_ASDriverSequence();
  
  Standard_EXPORT MDF_ASDriverSequence(const MDF_ASDriverSequence& Other);
  
  Standard_EXPORT   void Clear() ;
~MDF_ASDriverSequence()
{
  Clear();
}
  
  Standard_EXPORT  const  MDF_ASDriverSequence& Assign (const MDF_ASDriverSequence& Other) ;
 const  MDF_ASDriverSequence& operator = (const MDF_ASDriverSequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(MDF_ASDriver)& T) ;
  
      void Append (MDF_ASDriverSequence& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(MDF_ASDriver)& T) ;
  
      void Prepend (MDF_ASDriverSequence& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(MDF_ASDriver)& T) ;
  
      void InsertBefore (const Standard_Integer Index, MDF_ASDriverSequence& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(MDF_ASDriver)& T) ;
  
      void InsertAfter (const Standard_Integer Index, MDF_ASDriverSequence& S) ;
  
  Standard_EXPORT  const  Handle(MDF_ASDriver)& First()  const;
  
  Standard_EXPORT  const  Handle(MDF_ASDriver)& Last()  const;
  
      void Split (const Standard_Integer Index, MDF_ASDriverSequence& Sub) ;
  
  Standard_EXPORT  const  Handle(MDF_ASDriver)& Value (const Standard_Integer Index)  const;
 const  Handle(MDF_ASDriver)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(MDF_ASDriver)& I) ;
  
  Standard_EXPORT   Handle(MDF_ASDriver)& ChangeValue (const Standard_Integer Index) ;
  Handle(MDF_ASDriver)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(MDF_ASDriver)
#define SeqItem_hxx <OCAF/MDF/MDF_ASDriver.hxx>
#define TCollection_SequenceNode MDF_SequenceNodeOfASDriverSequence
#define TCollection_SequenceNode_hxx <OCAF/MDF/MDF_SequenceNodeOfASDriverSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_MDF_SequenceNodeOfASDriverSequence
#define TCollection_SequenceNode_Type_() MDF_SequenceNodeOfASDriverSequence_Type_()
#define TCollection_Sequence MDF_ASDriverSequence
#define TCollection_Sequence_hxx <OCAF/MDF/MDF_ASDriverSequence.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MDF_ASDriverSequence_HeaderFile
