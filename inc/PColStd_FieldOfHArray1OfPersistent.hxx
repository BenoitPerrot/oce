// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_FieldOfHArray1OfPersistent_HeaderFile
#define _PColStd_FieldOfHArray1OfPersistent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/DBC/DBC_BaseArray.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfPersistent.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class Standard_Persistent;
class PColStd_VArrayNodeOfFieldOfHArray1OfPersistent;
class PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColStd_FieldOfHArray1OfPersistent);


class PColStd_FieldOfHArray1OfPersistent  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PColStd_FieldOfHArray1OfPersistent();
  
  Standard_EXPORT PColStd_FieldOfHArray1OfPersistent(const Standard_Integer Size);
  
  Standard_EXPORT PColStd_FieldOfHArray1OfPersistent(const PColStd_FieldOfHArray1OfPersistent& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PColStd_FieldOfHArray1OfPersistent& Other) ;
  void operator = (const PColStd_FieldOfHArray1OfPersistent& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Standard_Persistent)& Value) ;
  
  Standard_EXPORT   Handle(Standard_Persistent)& Value (const Standard_Integer Index)  const;
  Handle(Standard_Persistent)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PColStd_FieldOfHArray1OfPersistent()
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







#endif // _PColStd_FieldOfHArray1OfPersistent_HeaderFile
