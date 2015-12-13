// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array1OfXY_HeaderFile
#define _TColgp_Array1OfXY_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_XY;



class TColgp_Array1OfXY 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColgp_Array1OfXY(const Standard_Integer Low, const Standard_Integer Up);
  
    TColgp_Array1OfXY(const gp_XY& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const gp_XY& V) ;
  
      void Destroy() ;
~TColgp_Array1OfXY()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColgp_Array1OfXY& Assign (const TColgp_Array1OfXY& Other) ;
 const  TColgp_Array1OfXY& operator = (const TColgp_Array1OfXY& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_XY& Value) ;
  
     const  gp_XY& Value (const Standard_Integer Index)  const;
   const  gp_XY& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      gp_XY& ChangeValue (const Standard_Integer Index) ;
    gp_XY& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColgp_Array1OfXY(const TColgp_Array1OfXY& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item gp_XY
#define Array1Item_hxx <gp_XY.hxx>
#define TCollection_Array1 TColgp_Array1OfXY
#define TCollection_Array1_hxx <TColgp_Array1OfXY.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColgp_Array1OfXY_HeaderFile
