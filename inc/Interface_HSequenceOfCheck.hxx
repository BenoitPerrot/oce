// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_HSequenceOfCheck_HeaderFile
#define _Interface_HSequenceOfCheck_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Interface_HSequenceOfCheck.hxx>

#include <Interface_SequenceOfCheck.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Interface_Check.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Interface_Check;
class Interface_SequenceOfCheck;



class Interface_HSequenceOfCheck : public MMgt_TShared
{

public:

  
    Interface_HSequenceOfCheck();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(Interface_Check)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(Interface_HSequenceOfCheck)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(Interface_Check)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(Interface_HSequenceOfCheck)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Interface_Check)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Interface_HSequenceOfCheck)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Interface_Check)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Interface_HSequenceOfCheck)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(Interface_HSequenceOfCheck) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(Interface_Check)& anItem) ;
  
  Standard_EXPORT  const  Handle(Interface_Check)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(Interface_Check)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  Interface_SequenceOfCheck& Sequence()  const;
  
      Interface_SequenceOfCheck& ChangeSequence() ;
  
  Standard_EXPORT   Handle(Interface_HSequenceOfCheck) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(Interface_HSequenceOfCheck)

protected:




private: 


  Interface_SequenceOfCheck mySequence;


};

#define Item Handle(Interface_Check)
#define Item_hxx <Interface_Check.hxx>
#define TheSequence Interface_SequenceOfCheck
#define TheSequence_hxx <Interface_SequenceOfCheck.hxx>
#define TCollection_HSequence Interface_HSequenceOfCheck
#define TCollection_HSequence_hxx <Interface_HSequenceOfCheck.hxx>
#define Handle_TCollection_HSequence Handle_Interface_HSequenceOfCheck
#define TCollection_HSequence_Type_() Interface_HSequenceOfCheck_Type_()

#include <Foundation/TCollection/TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(Interface_HSequenceOfCheck) ShallowCopy(const Handle(Interface_HSequenceOfCheck)& me) {
 return me->ShallowCopy();
}



#endif // _Interface_HSequenceOfCheck_HeaderFile
