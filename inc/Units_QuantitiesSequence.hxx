// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_QuantitiesSequence_HeaderFile
#define _Units_QuantitiesSequence_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Units_QuantitiesSequence.hxx>

#include <Units_QtsSequence.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Units_Quantity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Units_Quantity;
class Units_QtsSequence;



class Units_QuantitiesSequence : public MMgt_TShared
{

public:

  
    Units_QuantitiesSequence();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(Units_Quantity)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(Units_QuantitiesSequence)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(Units_Quantity)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(Units_QuantitiesSequence)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Units_Quantity)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Units_QuantitiesSequence)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Units_Quantity)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Units_QuantitiesSequence)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(Units_QuantitiesSequence) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(Units_Quantity)& anItem) ;
  
  Standard_EXPORT  const  Handle(Units_Quantity)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(Units_Quantity)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  Units_QtsSequence& Sequence()  const;
  
      Units_QtsSequence& ChangeSequence() ;
  
  Standard_EXPORT   Handle(Units_QuantitiesSequence) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(Units_QuantitiesSequence)

protected:




private: 


  Units_QtsSequence mySequence;


};

#define Item Handle(Units_Quantity)
#define Item_hxx <Units_Quantity.hxx>
#define TheSequence Units_QtsSequence
#define TheSequence_hxx <Units_QtsSequence.hxx>
#define TCollection_HSequence Units_QuantitiesSequence
#define TCollection_HSequence_hxx <Units_QuantitiesSequence.hxx>
#define Handle_TCollection_HSequence Handle_Units_QuantitiesSequence
#define TCollection_HSequence_Type_() Units_QuantitiesSequence_Type_()

#include <Foundation/TCollection/TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(Units_QuantitiesSequence) ShallowCopy(const Handle(Units_QuantitiesSequence)& me) {
 return me->ShallowCopy();
}



#endif // _Units_QuantitiesSequence_HeaderFile
