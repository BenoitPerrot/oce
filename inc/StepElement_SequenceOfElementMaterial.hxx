// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SequenceOfElementMaterial_HeaderFile
#define _StepElement_SequenceOfElementMaterial_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_StepElement_ElementMaterial.hxx>
#include <Handle_StepElement_SequenceNodeOfSequenceOfElementMaterial.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepElement_ElementMaterial;
class StepElement_SequenceNodeOfSequenceOfElementMaterial;



class StepElement_SequenceOfElementMaterial  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepElement_SequenceOfElementMaterial();
  
  Standard_EXPORT StepElement_SequenceOfElementMaterial(const StepElement_SequenceOfElementMaterial& Other);
  
  Standard_EXPORT   void Clear() ;
~StepElement_SequenceOfElementMaterial()
{
  Clear();
}
  
  Standard_EXPORT  const  StepElement_SequenceOfElementMaterial& Assign (const StepElement_SequenceOfElementMaterial& Other) ;
 const  StepElement_SequenceOfElementMaterial& operator = (const StepElement_SequenceOfElementMaterial& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StepElement_ElementMaterial)& T) ;
  
      void Append (StepElement_SequenceOfElementMaterial& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_ElementMaterial)& T) ;
  
      void Prepend (StepElement_SequenceOfElementMaterial& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StepElement_ElementMaterial)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StepElement_SequenceOfElementMaterial& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StepElement_ElementMaterial)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StepElement_SequenceOfElementMaterial& S) ;
  
  Standard_EXPORT  const  Handle(StepElement_ElementMaterial)& First()  const;
  
  Standard_EXPORT  const  Handle(StepElement_ElementMaterial)& Last()  const;
  
      void Split (const Standard_Integer Index, StepElement_SequenceOfElementMaterial& Sub) ;
  
  Standard_EXPORT  const  Handle(StepElement_ElementMaterial)& Value (const Standard_Integer Index)  const;
 const  Handle(StepElement_ElementMaterial)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StepElement_ElementMaterial)& I) ;
  
  Standard_EXPORT   Handle(StepElement_ElementMaterial)& ChangeValue (const Standard_Integer Index) ;
  Handle(StepElement_ElementMaterial)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StepElement_ElementMaterial)
#define SeqItem_hxx <StepElement_ElementMaterial.hxx>
#define TCollection_SequenceNode StepElement_SequenceNodeOfSequenceOfElementMaterial
#define TCollection_SequenceNode_hxx <StepElement_SequenceNodeOfSequenceOfElementMaterial.hxx>
#define Handle_TCollection_SequenceNode Handle_StepElement_SequenceNodeOfSequenceOfElementMaterial
#define TCollection_SequenceNode_Type_() StepElement_SequenceNodeOfSequenceOfElementMaterial_Type_()
#define TCollection_Sequence StepElement_SequenceOfElementMaterial
#define TCollection_Sequence_hxx <StepElement_SequenceOfElementMaterial.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepElement_SequenceOfElementMaterial_HeaderFile
