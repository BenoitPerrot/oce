// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_FieldOfHArray2OfVec_HeaderFile
#define _PColgp_FieldOfHArray2OfVec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DBC_BaseArray.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class gp_Vec;
class PColgp_VArrayNodeOfFieldOfHArray2OfVec;
class PColgp_VArrayTNodeOfFieldOfHArray2OfVec;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColgp_FieldOfHArray2OfVec);


class PColgp_FieldOfHArray2OfVec  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PColgp_FieldOfHArray2OfVec();
  
  Standard_EXPORT PColgp_FieldOfHArray2OfVec(const Standard_Integer Size);
  
  Standard_EXPORT PColgp_FieldOfHArray2OfVec(const PColgp_FieldOfHArray2OfVec& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PColgp_FieldOfHArray2OfVec& Other) ;
  void operator = (const PColgp_FieldOfHArray2OfVec& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Vec& Value) ;
  
  Standard_EXPORT   gp_Vec& Value (const Standard_Integer Index)  const;
  gp_Vec& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PColgp_FieldOfHArray2OfVec()
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







#endif // _PColgp_FieldOfHArray2OfVec_HeaderFile
