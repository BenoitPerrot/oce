// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_Array1OfSequenceOfReal_HeaderFile
#define _GeomPlate_Array1OfSequenceOfReal_HeaderFile

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
class TColStd_SequenceOfReal;



class GeomPlate_Array1OfSequenceOfReal 
{
public:

  DEFINE_STANDARD_ALLOC

  
    GeomPlate_Array1OfSequenceOfReal(const Standard_Integer Low, const Standard_Integer Up);
  
    GeomPlate_Array1OfSequenceOfReal(const TColStd_SequenceOfReal& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const TColStd_SequenceOfReal& V) ;
  
      void Destroy() ;
~GeomPlate_Array1OfSequenceOfReal()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  GeomPlate_Array1OfSequenceOfReal& Assign (const GeomPlate_Array1OfSequenceOfReal& Other) ;
 const  GeomPlate_Array1OfSequenceOfReal& operator = (const GeomPlate_Array1OfSequenceOfReal& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TColStd_SequenceOfReal& Value) ;
  
     const  TColStd_SequenceOfReal& Value (const Standard_Integer Index)  const;
   const  TColStd_SequenceOfReal& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      TColStd_SequenceOfReal& ChangeValue (const Standard_Integer Index) ;
    TColStd_SequenceOfReal& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT GeomPlate_Array1OfSequenceOfReal(const GeomPlate_Array1OfSequenceOfReal& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item TColStd_SequenceOfReal
#define Array1Item_hxx <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#define TCollection_Array1 GeomPlate_Array1OfSequenceOfReal
#define TCollection_Array1_hxx <GeomPlate_Array1OfSequenceOfReal.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _GeomPlate_Array1OfSequenceOfReal_HeaderFile
