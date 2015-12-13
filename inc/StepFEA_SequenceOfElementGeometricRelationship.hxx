// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SequenceOfElementGeometricRelationship_HeaderFile
#define _StepFEA_SequenceOfElementGeometricRelationship_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <Handle_StepFEA_ElementGeometricRelationship.hxx>
#include <Handle_StepFEA_SequenceNodeOfSequenceOfElementGeometricRelationship.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_ElementGeometricRelationship;
class StepFEA_SequenceNodeOfSequenceOfElementGeometricRelationship;



class StepFEA_SequenceOfElementGeometricRelationship  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepFEA_SequenceOfElementGeometricRelationship();
  
  Standard_EXPORT StepFEA_SequenceOfElementGeometricRelationship(const StepFEA_SequenceOfElementGeometricRelationship& Other);
  
  Standard_EXPORT   void Clear() ;
~StepFEA_SequenceOfElementGeometricRelationship()
{
  Clear();
}
  
  Standard_EXPORT  const  StepFEA_SequenceOfElementGeometricRelationship& Assign (const StepFEA_SequenceOfElementGeometricRelationship& Other) ;
 const  StepFEA_SequenceOfElementGeometricRelationship& operator = (const StepFEA_SequenceOfElementGeometricRelationship& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StepFEA_ElementGeometricRelationship)& T) ;
  
      void Append (StepFEA_SequenceOfElementGeometricRelationship& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepFEA_ElementGeometricRelationship)& T) ;
  
      void Prepend (StepFEA_SequenceOfElementGeometricRelationship& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StepFEA_ElementGeometricRelationship)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StepFEA_SequenceOfElementGeometricRelationship& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StepFEA_ElementGeometricRelationship)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StepFEA_SequenceOfElementGeometricRelationship& S) ;
  
  Standard_EXPORT  const  Handle(StepFEA_ElementGeometricRelationship)& First()  const;
  
  Standard_EXPORT  const  Handle(StepFEA_ElementGeometricRelationship)& Last()  const;
  
      void Split (const Standard_Integer Index, StepFEA_SequenceOfElementGeometricRelationship& Sub) ;
  
  Standard_EXPORT  const  Handle(StepFEA_ElementGeometricRelationship)& Value (const Standard_Integer Index)  const;
 const  Handle(StepFEA_ElementGeometricRelationship)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StepFEA_ElementGeometricRelationship)& I) ;
  
  Standard_EXPORT   Handle(StepFEA_ElementGeometricRelationship)& ChangeValue (const Standard_Integer Index) ;
  Handle(StepFEA_ElementGeometricRelationship)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StepFEA_ElementGeometricRelationship)
#define SeqItem_hxx <StepFEA_ElementGeometricRelationship.hxx>
#define TCollection_SequenceNode StepFEA_SequenceNodeOfSequenceOfElementGeometricRelationship
#define TCollection_SequenceNode_hxx <StepFEA_SequenceNodeOfSequenceOfElementGeometricRelationship.hxx>
#define Handle_TCollection_SequenceNode Handle_StepFEA_SequenceNodeOfSequenceOfElementGeometricRelationship
#define TCollection_SequenceNode_Type_() StepFEA_SequenceNodeOfSequenceOfElementGeometricRelationship_Type_()
#define TCollection_Sequence StepFEA_SequenceOfElementGeometricRelationship
#define TCollection_Sequence_hxx <StepFEA_SequenceOfElementGeometricRelationship.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepFEA_SequenceOfElementGeometricRelationship_HeaderFile
