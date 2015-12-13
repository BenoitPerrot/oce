// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HSequenceOfXY_HeaderFile
#define _TColgp_HSequenceOfXY_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HSequenceOfXY.hxx>

#include <TColgp_SequenceOfXY.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_XY;
class TColgp_SequenceOfXY;



class TColgp_HSequenceOfXY : public MMgt_TShared
{

public:

  
    TColgp_HSequenceOfXY();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const gp_XY& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColgp_HSequenceOfXY)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const gp_XY& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HSequenceOfXY)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const gp_XY& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfXY)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const gp_XY& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfXY)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfXY) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const gp_XY& anItem) ;
  
  Standard_EXPORT  const  gp_XY& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   gp_XY& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColgp_SequenceOfXY& Sequence()  const;
  
      TColgp_SequenceOfXY& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfXY) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColgp_HSequenceOfXY)

protected:




private: 


  TColgp_SequenceOfXY mySequence;


};

#define Item gp_XY
#define Item_hxx <gp_XY.hxx>
#define TheSequence TColgp_SequenceOfXY
#define TheSequence_hxx <TColgp_SequenceOfXY.hxx>
#define TCollection_HSequence TColgp_HSequenceOfXY
#define TCollection_HSequence_hxx <TColgp_HSequenceOfXY.hxx>
#define Handle_TCollection_HSequence Handle_TColgp_HSequenceOfXY
#define TCollection_HSequence_Type_() TColgp_HSequenceOfXY_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColgp_HSequenceOfXY) ShallowCopy(const Handle(TColgp_HSequenceOfXY)& me) {
 return me->ShallowCopy();
}



#endif // _TColgp_HSequenceOfXY_HeaderFile
