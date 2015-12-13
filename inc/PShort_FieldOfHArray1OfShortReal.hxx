// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PShort_FieldOfHArray1OfShortReal_HeaderFile
#define _PShort_FieldOfHArray1OfShortReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DBC_BaseArray.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Handle_PShort_VArrayNodeOfFieldOfHArray1OfShortReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PShort_VArrayNodeOfFieldOfHArray1OfShortReal;
class PShort_VArrayTNodeOfFieldOfHArray1OfShortReal;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PShort_FieldOfHArray1OfShortReal);


class PShort_FieldOfHArray1OfShortReal  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PShort_FieldOfHArray1OfShortReal();
  
  Standard_EXPORT PShort_FieldOfHArray1OfShortReal(const Standard_Integer Size);
  
  Standard_EXPORT PShort_FieldOfHArray1OfShortReal(const PShort_FieldOfHArray1OfShortReal& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PShort_FieldOfHArray1OfShortReal& Other) ;
  void operator = (const PShort_FieldOfHArray1OfShortReal& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Standard_ShortReal& Value) ;
  
  Standard_EXPORT   Standard_ShortReal& Value (const Standard_Integer Index)  const;
  Standard_ShortReal& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PShort_FieldOfHArray1OfShortReal()
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







#endif // _PShort_FieldOfHArray1OfShortReal_HeaderFile
