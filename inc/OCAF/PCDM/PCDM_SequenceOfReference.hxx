// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_SequenceOfReference_HeaderFile
#define _PCDM_SequenceOfReference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <OCAF/PCDM/Handle_PCDM_SequenceNodeOfSequenceOfReference.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PCDM_Reference;
class PCDM_SequenceNodeOfSequenceOfReference;



class PCDM_SequenceOfReference  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    PCDM_SequenceOfReference();
  
  Standard_EXPORT PCDM_SequenceOfReference(const PCDM_SequenceOfReference& Other);
  
  Standard_EXPORT   void Clear() ;
~PCDM_SequenceOfReference()
{
  Clear();
}
  
  Standard_EXPORT  const  PCDM_SequenceOfReference& Assign (const PCDM_SequenceOfReference& Other) ;
 const  PCDM_SequenceOfReference& operator = (const PCDM_SequenceOfReference& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const PCDM_Reference& T) ;
  
      void Append (PCDM_SequenceOfReference& S) ;
  
  Standard_EXPORT   void Prepend (const PCDM_Reference& T) ;
  
      void Prepend (PCDM_SequenceOfReference& S) ;
  
      void InsertBefore (const Standard_Integer Index, const PCDM_Reference& T) ;
  
      void InsertBefore (const Standard_Integer Index, PCDM_SequenceOfReference& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const PCDM_Reference& T) ;
  
      void InsertAfter (const Standard_Integer Index, PCDM_SequenceOfReference& S) ;
  
  Standard_EXPORT  const  PCDM_Reference& First()  const;
  
  Standard_EXPORT  const  PCDM_Reference& Last()  const;
  
      void Split (const Standard_Integer Index, PCDM_SequenceOfReference& Sub) ;
  
  Standard_EXPORT  const  PCDM_Reference& Value (const Standard_Integer Index)  const;
 const  PCDM_Reference& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const PCDM_Reference& I) ;
  
  Standard_EXPORT   PCDM_Reference& ChangeValue (const Standard_Integer Index) ;
  PCDM_Reference& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem PCDM_Reference
#define SeqItem_hxx <OCAF/PCDM/PCDM_Reference.hxx>
#define TCollection_SequenceNode PCDM_SequenceNodeOfSequenceOfReference
#define TCollection_SequenceNode_hxx <OCAF/PCDM/PCDM_SequenceNodeOfSequenceOfReference.hxx>
#define Handle_TCollection_SequenceNode Handle_PCDM_SequenceNodeOfSequenceOfReference
#define TCollection_SequenceNode_Type_() PCDM_SequenceNodeOfSequenceOfReference_Type_()
#define TCollection_Sequence PCDM_SequenceOfReference
#define TCollection_Sequence_hxx <OCAF/PCDM/PCDM_SequenceOfReference.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _PCDM_SequenceOfReference_HeaderFile
