// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HSequenceOfReal_HeaderFile
#define _TColStd_HSequenceOfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/TColStd/Handle_TColStd_HSequenceOfReal.hxx>

#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColStd_SequenceOfReal;



class TColStd_HSequenceOfReal : public MMgt_TShared
{

public:

  
    TColStd_HSequenceOfReal();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Standard_Real& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColStd_HSequenceOfReal)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Standard_Real& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColStd_HSequenceOfReal)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Standard_Real& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColStd_HSequenceOfReal)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Standard_Real& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColStd_HSequenceOfReal)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColStd_HSequenceOfReal) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Standard_Real& anItem) ;
  
  Standard_EXPORT  const  Standard_Real& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Standard_Real& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColStd_SequenceOfReal& Sequence()  const;
  
      TColStd_SequenceOfReal& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColStd_HSequenceOfReal) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColStd_HSequenceOfReal)

protected:




private: 


  TColStd_SequenceOfReal mySequence;


};

#define Item Standard_Real
#define Item_hxx <Foundation/Standard/Standard_Real.hxx>
#define TheSequence TColStd_SequenceOfReal
#define TheSequence_hxx <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#define TCollection_HSequence TColStd_HSequenceOfReal
#define TCollection_HSequence_hxx <Foundation/TColStd/TColStd_HSequenceOfReal.hxx>
#define Handle_TCollection_HSequence Handle_TColStd_HSequenceOfReal
#define TCollection_HSequence_Type_() TColStd_HSequenceOfReal_Type_()

#include <Foundation/TCollection/TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColStd_HSequenceOfReal) ShallowCopy(const Handle(TColStd_HSequenceOfReal)& me) {
 return me->ShallowCopy();
}



#endif // _TColStd_HSequenceOfReal_HeaderFile
