// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ARDriverHSequence_HeaderFile
#define _MDF_ARDriverHSequence_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MDF_ARDriverHSequence.hxx>

#include <MDF_ARDriverSequence.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_MDF_ARDriver.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MDF_ARDriver;
class MDF_ARDriverSequence;



class MDF_ARDriverHSequence : public MMgt_TShared
{

public:

  
    MDF_ARDriverHSequence();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(MDF_ARDriver)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(MDF_ARDriverHSequence)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(MDF_ARDriver)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(MDF_ARDriverHSequence)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(MDF_ARDriver)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(MDF_ARDriverHSequence)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(MDF_ARDriver)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(MDF_ARDriverHSequence)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(MDF_ARDriverHSequence) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(MDF_ARDriver)& anItem) ;
  
  Standard_EXPORT  const  Handle(MDF_ARDriver)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(MDF_ARDriver)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  MDF_ARDriverSequence& Sequence()  const;
  
      MDF_ARDriverSequence& ChangeSequence() ;
  
  Standard_EXPORT   Handle(MDF_ARDriverHSequence) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(MDF_ARDriverHSequence)

protected:




private: 


  MDF_ARDriverSequence mySequence;


};

#define Item Handle(MDF_ARDriver)
#define Item_hxx <MDF_ARDriver.hxx>
#define TheSequence MDF_ARDriverSequence
#define TheSequence_hxx <MDF_ARDriverSequence.hxx>
#define TCollection_HSequence MDF_ARDriverHSequence
#define TCollection_HSequence_hxx <MDF_ARDriverHSequence.hxx>
#define Handle_TCollection_HSequence Handle_MDF_ARDriverHSequence
#define TCollection_HSequence_Type_() MDF_ARDriverHSequence_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(MDF_ARDriverHSequence) ShallowCopy(const Handle(MDF_ARDriverHSequence)& me) {
 return me->ShallowCopy();
}



#endif // _MDF_ARDriverHSequence_HeaderFile
