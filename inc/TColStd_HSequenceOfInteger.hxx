// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HSequenceOfInteger_HeaderFile
#define _TColStd_HSequenceOfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColStd_HSequenceOfInteger.hxx>

#include <TColStd_SequenceOfInteger.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColStd_SequenceOfInteger;



class TColStd_HSequenceOfInteger : public MMgt_TShared
{

public:

  
    TColStd_HSequenceOfInteger();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Standard_Integer& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColStd_HSequenceOfInteger)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Standard_Integer& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColStd_HSequenceOfInteger)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Standard_Integer& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColStd_HSequenceOfInteger)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Standard_Integer& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColStd_HSequenceOfInteger)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColStd_HSequenceOfInteger) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Standard_Integer& anItem) ;
  
  Standard_EXPORT  const  Standard_Integer& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Standard_Integer& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColStd_SequenceOfInteger& Sequence()  const;
  
      TColStd_SequenceOfInteger& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColStd_HSequenceOfInteger) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColStd_HSequenceOfInteger)

protected:




private: 


  TColStd_SequenceOfInteger mySequence;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TheSequence TColStd_SequenceOfInteger
#define TheSequence_hxx <TColStd_SequenceOfInteger.hxx>
#define TCollection_HSequence TColStd_HSequenceOfInteger
#define TCollection_HSequence_hxx <TColStd_HSequenceOfInteger.hxx>
#define Handle_TCollection_HSequence Handle_TColStd_HSequenceOfInteger
#define TCollection_HSequence_Type_() TColStd_HSequenceOfInteger_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColStd_HSequenceOfInteger) ShallowCopy(const Handle(TColStd_HSequenceOfInteger)& me) {
 return me->ShallowCopy();
}



#endif // _TColStd_HSequenceOfInteger_HeaderFile
