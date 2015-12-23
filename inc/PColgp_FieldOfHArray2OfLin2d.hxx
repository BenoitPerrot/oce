// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_FieldOfHArray2OfLin2d_HeaderFile
#define _PColgp_FieldOfHArray2OfLin2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/DBC/DBC_BaseArray.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfLin2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class gp_Lin2d;
class PColgp_VArrayNodeOfFieldOfHArray2OfLin2d;
class PColgp_VArrayTNodeOfFieldOfHArray2OfLin2d;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColgp_FieldOfHArray2OfLin2d);


class PColgp_FieldOfHArray2OfLin2d  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PColgp_FieldOfHArray2OfLin2d();
  
  Standard_EXPORT PColgp_FieldOfHArray2OfLin2d(const Standard_Integer Size);
  
  Standard_EXPORT PColgp_FieldOfHArray2OfLin2d(const PColgp_FieldOfHArray2OfLin2d& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PColgp_FieldOfHArray2OfLin2d& Other) ;
  void operator = (const PColgp_FieldOfHArray2OfLin2d& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Lin2d& Value) ;
  
  Standard_EXPORT   gp_Lin2d& Value (const Standard_Integer Index)  const;
  gp_Lin2d& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PColgp_FieldOfHArray2OfLin2d()
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







#endif // _PColgp_FieldOfHArray2OfLin2d_HeaderFile
