// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TShort_HSequenceOfShortReal_HeaderFile
#define _TShort_HSequenceOfShortReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TShort_HSequenceOfShortReal.hxx>

#include <TShort_SequenceOfShortReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TShort_SequenceOfShortReal;



class TShort_HSequenceOfShortReal : public MMgt_TShared
{

public:

  
    TShort_HSequenceOfShortReal();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Standard_ShortReal& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TShort_HSequenceOfShortReal)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Standard_ShortReal& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TShort_HSequenceOfShortReal)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Standard_ShortReal& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TShort_HSequenceOfShortReal)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Standard_ShortReal& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TShort_HSequenceOfShortReal)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TShort_HSequenceOfShortReal) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Standard_ShortReal& anItem) ;
  
  Standard_EXPORT  const  Standard_ShortReal& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Standard_ShortReal& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TShort_SequenceOfShortReal& Sequence()  const;
  
      TShort_SequenceOfShortReal& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TShort_HSequenceOfShortReal) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TShort_HSequenceOfShortReal)

protected:




private: 


  TShort_SequenceOfShortReal mySequence;


};

#define Item Standard_ShortReal
#define Item_hxx <Foundation/Standard/Standard_ShortReal.hxx>
#define TheSequence TShort_SequenceOfShortReal
#define TheSequence_hxx <TShort_SequenceOfShortReal.hxx>
#define TCollection_HSequence TShort_HSequenceOfShortReal
#define TCollection_HSequence_hxx <TShort_HSequenceOfShortReal.hxx>
#define Handle_TCollection_HSequence Handle_TShort_HSequenceOfShortReal
#define TCollection_HSequence_Type_() TShort_HSequenceOfShortReal_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TShort_HSequenceOfShortReal) ShallowCopy(const Handle(TShort_HSequenceOfShortReal)& me) {
 return me->ShallowCopy();
}



#endif // _TShort_HSequenceOfShortReal_HeaderFile
