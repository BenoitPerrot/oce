// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeSequence_HeaderFile
#define _TDF_AttributeSequence_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_SequenceNodeOfAttributeSequence.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TDF_Attribute;
class TDF_SequenceNodeOfAttributeSequence;



class TDF_AttributeSequence  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TDF_AttributeSequence();
  
  Standard_EXPORT TDF_AttributeSequence(const TDF_AttributeSequence& Other);
  
  Standard_EXPORT   void Clear() ;
~TDF_AttributeSequence()
{
  Clear();
}
  
  Standard_EXPORT  const  TDF_AttributeSequence& Assign (const TDF_AttributeSequence& Other) ;
 const  TDF_AttributeSequence& operator = (const TDF_AttributeSequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(TDF_Attribute)& T) ;
  
      void Append (TDF_AttributeSequence& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(TDF_Attribute)& T) ;
  
      void Prepend (TDF_AttributeSequence& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(TDF_Attribute)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TDF_AttributeSequence& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(TDF_Attribute)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TDF_AttributeSequence& S) ;
  
  Standard_EXPORT  const  Handle(TDF_Attribute)& First()  const;
  
  Standard_EXPORT  const  Handle(TDF_Attribute)& Last()  const;
  
      void Split (const Standard_Integer Index, TDF_AttributeSequence& Sub) ;
  
  Standard_EXPORT  const  Handle(TDF_Attribute)& Value (const Standard_Integer Index)  const;
 const  Handle(TDF_Attribute)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(TDF_Attribute)& I) ;
  
  Standard_EXPORT   Handle(TDF_Attribute)& ChangeValue (const Standard_Integer Index) ;
  Handle(TDF_Attribute)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(TDF_Attribute)
#define SeqItem_hxx <OCAF/TDF/TDF_Attribute.hxx>
#define TCollection_SequenceNode TDF_SequenceNodeOfAttributeSequence
#define TCollection_SequenceNode_hxx <OCAF/TDF/TDF_SequenceNodeOfAttributeSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_TDF_SequenceNodeOfAttributeSequence
#define TCollection_SequenceNode_Type_() TDF_SequenceNodeOfAttributeSequence_Type_()
#define TCollection_Sequence TDF_AttributeSequence
#define TCollection_Sequence_hxx <OCAF/TDF/TDF_AttributeSequence.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TDF_AttributeSequence_HeaderFile
