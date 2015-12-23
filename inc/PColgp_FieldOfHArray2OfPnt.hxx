// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_FieldOfHArray2OfPnt_HeaderFile
#define _PColgp_FieldOfHArray2OfPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/DBC/DBC_BaseArray.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfPnt.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class gp_Pnt;
class PColgp_VArrayNodeOfFieldOfHArray2OfPnt;
class PColgp_VArrayTNodeOfFieldOfHArray2OfPnt;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColgp_FieldOfHArray2OfPnt);


class PColgp_FieldOfHArray2OfPnt  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PColgp_FieldOfHArray2OfPnt();
  
  Standard_EXPORT PColgp_FieldOfHArray2OfPnt(const Standard_Integer Size);
  
  Standard_EXPORT PColgp_FieldOfHArray2OfPnt(const PColgp_FieldOfHArray2OfPnt& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PColgp_FieldOfHArray2OfPnt& Other) ;
  void operator = (const PColgp_FieldOfHArray2OfPnt& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Pnt& Value) ;
  
  Standard_EXPORT   gp_Pnt& Value (const Standard_Integer Index)  const;
  gp_Pnt& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PColgp_FieldOfHArray2OfPnt()
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







#endif // _PColgp_FieldOfHArray2OfPnt_HeaderFile
