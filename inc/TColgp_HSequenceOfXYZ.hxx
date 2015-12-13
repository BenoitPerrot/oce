// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HSequenceOfXYZ_HeaderFile
#define _TColgp_HSequenceOfXYZ_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HSequenceOfXYZ.hxx>

#include <TColgp_SequenceOfXYZ.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_XYZ;
class TColgp_SequenceOfXYZ;



class TColgp_HSequenceOfXYZ : public MMgt_TShared
{

public:

  
    TColgp_HSequenceOfXYZ();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const gp_XYZ& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColgp_HSequenceOfXYZ)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const gp_XYZ& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HSequenceOfXYZ)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const gp_XYZ& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfXYZ)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const gp_XYZ& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfXYZ)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfXYZ) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const gp_XYZ& anItem) ;
  
  Standard_EXPORT  const  gp_XYZ& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   gp_XYZ& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColgp_SequenceOfXYZ& Sequence()  const;
  
      TColgp_SequenceOfXYZ& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfXYZ) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColgp_HSequenceOfXYZ)

protected:




private: 


  TColgp_SequenceOfXYZ mySequence;


};

#define Item gp_XYZ
#define Item_hxx <gp_XYZ.hxx>
#define TheSequence TColgp_SequenceOfXYZ
#define TheSequence_hxx <TColgp_SequenceOfXYZ.hxx>
#define TCollection_HSequence TColgp_HSequenceOfXYZ
#define TCollection_HSequence_hxx <TColgp_HSequenceOfXYZ.hxx>
#define Handle_TCollection_HSequence Handle_TColgp_HSequenceOfXYZ
#define TCollection_HSequence_Type_() TColgp_HSequenceOfXYZ_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColgp_HSequenceOfXYZ) ShallowCopy(const Handle(TColgp_HSequenceOfXYZ)& me) {
 return me->ShallowCopy();
}



#endif // _TColgp_HSequenceOfXYZ_HeaderFile
