// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array1OfBoolean_HeaderFile
#define _TColStd_Array1OfBoolean_HeaderFile

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



class TColStd_Array1OfBoolean 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_Array1OfBoolean(const Standard_Integer Low, const Standard_Integer Up);
  
    TColStd_Array1OfBoolean(const Standard_Boolean& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Standard_Boolean& V) ;
  
      void Destroy() ;
~TColStd_Array1OfBoolean()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColStd_Array1OfBoolean& Assign (const TColStd_Array1OfBoolean& Other) ;
 const  TColStd_Array1OfBoolean& operator = (const TColStd_Array1OfBoolean& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Standard_Boolean& Value) ;
  
     const  Standard_Boolean& Value (const Standard_Integer Index)  const;
   const  Standard_Boolean& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Standard_Boolean& ChangeValue (const Standard_Integer Index) ;
    Standard_Boolean& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColStd_Array1OfBoolean(const TColStd_Array1OfBoolean& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Standard_Boolean
#define Array1Item_hxx <Foundation/Standard/Standard_Boolean.hxx>
#define TCollection_Array1 TColStd_Array1OfBoolean
#define TCollection_Array1_hxx <TColStd_Array1OfBoolean.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColStd_Array1OfBoolean_HeaderFile
