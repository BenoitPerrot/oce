// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLib_Array1OfMat_HeaderFile
#define _GeomLib_Array1OfMat_HeaderFile

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
class gp_Mat;



class GeomLib_Array1OfMat 
{
public:

  DEFINE_STANDARD_ALLOC

  
    GeomLib_Array1OfMat(const Standard_Integer Low, const Standard_Integer Up);
  
    GeomLib_Array1OfMat(const gp_Mat& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const gp_Mat& V) ;
  
      void Destroy() ;
~GeomLib_Array1OfMat()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  GeomLib_Array1OfMat& Assign (const GeomLib_Array1OfMat& Other) ;
 const  GeomLib_Array1OfMat& operator = (const GeomLib_Array1OfMat& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_Mat& Value) ;
  
     const  gp_Mat& Value (const Standard_Integer Index)  const;
   const  gp_Mat& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      gp_Mat& ChangeValue (const Standard_Integer Index) ;
    gp_Mat& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT GeomLib_Array1OfMat(const GeomLib_Array1OfMat& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item gp_Mat
#define Array1Item_hxx <Mathematics/Primitives/gp_Mat.hxx>
#define TCollection_Array1 GeomLib_Array1OfMat
#define TCollection_Array1_hxx <GeomLib_Array1OfMat.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _GeomLib_Array1OfMat_HeaderFile
