// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_Array1OfCoefficient_HeaderFile
#define _Quantity_Array1OfCoefficient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Quantity/Quantity_Coefficient.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;



class Quantity_Array1OfCoefficient 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Quantity_Array1OfCoefficient(const Standard_Integer Low, const Standard_Integer Up);
  
    Quantity_Array1OfCoefficient(const Quantity_Coefficient& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Quantity_Coefficient& V) ;
  
      void Destroy() ;
~Quantity_Array1OfCoefficient()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Quantity_Array1OfCoefficient& Assign (const Quantity_Array1OfCoefficient& Other) ;
 const  Quantity_Array1OfCoefficient& operator = (const Quantity_Array1OfCoefficient& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Quantity_Coefficient& Value) ;
  
     const  Quantity_Coefficient& Value (const Standard_Integer Index)  const;
   const  Quantity_Coefficient& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Quantity_Coefficient& ChangeValue (const Standard_Integer Index) ;
    Quantity_Coefficient& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Quantity_Array1OfCoefficient(const Quantity_Array1OfCoefficient& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Quantity_Coefficient
#define Array1Item_hxx <Foundation/Quantity/Quantity_Coefficient.hxx>
#define TCollection_Array1 Quantity_Array1OfCoefficient
#define TCollection_Array1_hxx <Foundation/Quantity/Quantity_Array1OfCoefficient.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Quantity_Array1OfCoefficient_HeaderFile
