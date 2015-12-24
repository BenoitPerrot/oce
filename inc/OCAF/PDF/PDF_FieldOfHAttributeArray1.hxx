// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDF_FieldOfHAttributeArray1_HeaderFile
#define _PDF_FieldOfHAttributeArray1_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/DBC/DBC_BaseArray.hxx>
#include <OCAF/PDF/Handle_PDF_Attribute.hxx>
#include <OCAF/PDF/Handle_PDF_VArrayNodeOfFieldOfHAttributeArray1.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PDF_Attribute;
class PDF_VArrayNodeOfFieldOfHAttributeArray1;
class PDF_VArrayTNodeOfFieldOfHAttributeArray1;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PDF_FieldOfHAttributeArray1);


class PDF_FieldOfHAttributeArray1  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PDF_FieldOfHAttributeArray1();
  
  Standard_EXPORT PDF_FieldOfHAttributeArray1(const Standard_Integer Size);
  
  Standard_EXPORT PDF_FieldOfHAttributeArray1(const PDF_FieldOfHAttributeArray1& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PDF_FieldOfHAttributeArray1& Other) ;
  void operator = (const PDF_FieldOfHAttributeArray1& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PDF_Attribute)& Value) ;
  
  Standard_EXPORT   Handle(PDF_Attribute)& Value (const Standard_Integer Index)  const;
  Handle(PDF_Attribute)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PDF_FieldOfHAttributeArray1()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};







#endif // _PDF_FieldOfHAttributeArray1_HeaderFile
