// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_FieldOfHArray1OfNamedShape_HeaderFile
#define _PNaming_FieldOfHArray1OfNamedShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/DBC/DBC_BaseArray.hxx>
#include <Handle_PNaming_NamedShape.hxx>
#include <Handle_PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PNaming_NamedShape;
class PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape;
class PNaming_VArrayTNodeOfFieldOfHArray1OfNamedShape;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PNaming_FieldOfHArray1OfNamedShape);


class PNaming_FieldOfHArray1OfNamedShape  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PNaming_FieldOfHArray1OfNamedShape();
  
  Standard_EXPORT PNaming_FieldOfHArray1OfNamedShape(const Standard_Integer Size);
  
  Standard_EXPORT PNaming_FieldOfHArray1OfNamedShape(const PNaming_FieldOfHArray1OfNamedShape& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PNaming_FieldOfHArray1OfNamedShape& Other) ;
  void operator = (const PNaming_FieldOfHArray1OfNamedShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PNaming_NamedShape)& Value) ;
  
  Standard_EXPORT   Handle(PNaming_NamedShape)& Value (const Standard_Integer Index)  const;
  Handle(PNaming_NamedShape)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PNaming_FieldOfHArray1OfNamedShape()
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







#endif // _PNaming_FieldOfHArray1OfNamedShape_HeaderFile
