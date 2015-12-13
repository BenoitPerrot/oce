// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_HSequenceOfCurveElementPurposeMember_HeaderFile
#define _StepElement_HSequenceOfCurveElementPurposeMember_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_HSequenceOfCurveElementPurposeMember.hxx>

#include <StepElement_SequenceOfCurveElementPurposeMember.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepElement_CurveElementPurposeMember.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepElement_CurveElementPurposeMember;
class StepElement_SequenceOfCurveElementPurposeMember;



class StepElement_HSequenceOfCurveElementPurposeMember : public MMgt_TShared
{

public:

  
    StepElement_HSequenceOfCurveElementPurposeMember();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(StepElement_CurveElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(StepElement_HSequenceOfCurveElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_CurveElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_HSequenceOfCurveElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepElement_CurveElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepElement_HSequenceOfCurveElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepElement_CurveElementPurposeMember)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepElement_HSequenceOfCurveElementPurposeMember)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(StepElement_HSequenceOfCurveElementPurposeMember) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(StepElement_CurveElementPurposeMember)& anItem) ;
  
  Standard_EXPORT  const  Handle(StepElement_CurveElementPurposeMember)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(StepElement_CurveElementPurposeMember)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  StepElement_SequenceOfCurveElementPurposeMember& Sequence()  const;
  
      StepElement_SequenceOfCurveElementPurposeMember& ChangeSequence() ;
  
  Standard_EXPORT   Handle(StepElement_HSequenceOfCurveElementPurposeMember) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(StepElement_HSequenceOfCurveElementPurposeMember)

protected:




private: 


  StepElement_SequenceOfCurveElementPurposeMember mySequence;


};

#define Item Handle(StepElement_CurveElementPurposeMember)
#define Item_hxx <StepElement_CurveElementPurposeMember.hxx>
#define TheSequence StepElement_SequenceOfCurveElementPurposeMember
#define TheSequence_hxx <StepElement_SequenceOfCurveElementPurposeMember.hxx>
#define TCollection_HSequence StepElement_HSequenceOfCurveElementPurposeMember
#define TCollection_HSequence_hxx <StepElement_HSequenceOfCurveElementPurposeMember.hxx>
#define Handle_TCollection_HSequence Handle_StepElement_HSequenceOfCurveElementPurposeMember
#define TCollection_HSequence_Type_() StepElement_HSequenceOfCurveElementPurposeMember_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(StepElement_HSequenceOfCurveElementPurposeMember) ShallowCopy(const Handle(StepElement_HSequenceOfCurveElementPurposeMember)& me) {
 return me->ShallowCopy();
}



#endif // _StepElement_HSequenceOfCurveElementPurposeMember_HeaderFile
