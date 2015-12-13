// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_HSequenceOfElementRepresentation_HeaderFile
#define _StepFEA_HSequenceOfElementRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepFEA_HSequenceOfElementRepresentation.hxx>

#include <StepFEA_SequenceOfElementRepresentation.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepFEA_ElementRepresentation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_ElementRepresentation;
class StepFEA_SequenceOfElementRepresentation;



class StepFEA_HSequenceOfElementRepresentation : public MMgt_TShared
{

public:

  
    StepFEA_HSequenceOfElementRepresentation();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementRepresentation) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT  const  Handle(StepFEA_ElementRepresentation)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(StepFEA_ElementRepresentation)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  StepFEA_SequenceOfElementRepresentation& Sequence()  const;
  
      StepFEA_SequenceOfElementRepresentation& ChangeSequence() ;
  
  Standard_EXPORT   Handle(StepFEA_HSequenceOfElementRepresentation) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(StepFEA_HSequenceOfElementRepresentation)

protected:




private: 


  StepFEA_SequenceOfElementRepresentation mySequence;


};

#define Item Handle(StepFEA_ElementRepresentation)
#define Item_hxx <StepFEA_ElementRepresentation.hxx>
#define TheSequence StepFEA_SequenceOfElementRepresentation
#define TheSequence_hxx <StepFEA_SequenceOfElementRepresentation.hxx>
#define TCollection_HSequence StepFEA_HSequenceOfElementRepresentation
#define TCollection_HSequence_hxx <StepFEA_HSequenceOfElementRepresentation.hxx>
#define Handle_TCollection_HSequence Handle_StepFEA_HSequenceOfElementRepresentation
#define TCollection_HSequence_Type_() StepFEA_HSequenceOfElementRepresentation_Type_()

#include <Foundation/TCollection/TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(StepFEA_HSequenceOfElementRepresentation) ShallowCopy(const Handle(StepFEA_HSequenceOfElementRepresentation)& me) {
 return me->ShallowCopy();
}



#endif // _StepFEA_HSequenceOfElementRepresentation_HeaderFile
