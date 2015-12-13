// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_HSequenceOfNodeRepresentation_HeaderFile
#define _StepFEA_HSequenceOfNodeRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_HSequenceOfNodeRepresentation.hxx>

#include <StepFEA_SequenceOfNodeRepresentation.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepFEA_NodeRepresentation.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_NodeRepresentation;
class StepFEA_SequenceOfNodeRepresentation;



class StepFEA_HSequenceOfNodeRepresentation : public MMgt_TShared
{

public:

  
    StepFEA_HSequenceOfNodeRepresentation();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(StepFEA_NodeRepresentation)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(StepFEA_HSequenceOfNodeRepresentation)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepFEA_NodeRepresentation)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepFEA_HSequenceOfNodeRepresentation)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepFEA_NodeRepresentation)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepFEA_HSequenceOfNodeRepresentation)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepFEA_NodeRepresentation)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepFEA_HSequenceOfNodeRepresentation)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfNodeRepresentation) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(StepFEA_NodeRepresentation)& anItem) ;
  
  Standard_EXPORT  const  Handle(StepFEA_NodeRepresentation)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(StepFEA_NodeRepresentation)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  StepFEA_SequenceOfNodeRepresentation& Sequence()  const;
  
      StepFEA_SequenceOfNodeRepresentation& ChangeSequence() ;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfNodeRepresentation) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(StepFEA_HSequenceOfNodeRepresentation)

protected:




private: 


  StepFEA_SequenceOfNodeRepresentation mySequence;


};

#define Item Handle(StepFEA_NodeRepresentation)
#define Item_hxx <StepFEA_NodeRepresentation.hxx>
#define TheSequence StepFEA_SequenceOfNodeRepresentation
#define TheSequence_hxx <StepFEA_SequenceOfNodeRepresentation.hxx>
#define TCollection_HSequence StepFEA_HSequenceOfNodeRepresentation
#define TCollection_HSequence_hxx <StepFEA_HSequenceOfNodeRepresentation.hxx>
#define Handle_TCollection_HSequence Handle_StepFEA_HSequenceOfNodeRepresentation
#define TCollection_HSequence_Type_() StepFEA_HSequenceOfNodeRepresentation_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(StepFEA_HSequenceOfNodeRepresentation) ShallowCopy(const Handle(StepFEA_HSequenceOfNodeRepresentation)& me) {
 return me->ShallowCopy();
}



#endif // _StepFEA_HSequenceOfNodeRepresentation_HeaderFile
