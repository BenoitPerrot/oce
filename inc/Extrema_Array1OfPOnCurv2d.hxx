// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_Array1OfPOnCurv2d_HeaderFile
#define _Extrema_Array1OfPOnCurv2d_HeaderFile

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
class Extrema_POnCurv2d;



class Extrema_Array1OfPOnCurv2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Extrema_Array1OfPOnCurv2d(const Standard_Integer Low, const Standard_Integer Up);
  
    Extrema_Array1OfPOnCurv2d(const Extrema_POnCurv2d& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Extrema_POnCurv2d& V) ;
  
      void Destroy() ;
~Extrema_Array1OfPOnCurv2d()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Extrema_Array1OfPOnCurv2d& Assign (const Extrema_Array1OfPOnCurv2d& Other) ;
 const  Extrema_Array1OfPOnCurv2d& operator = (const Extrema_Array1OfPOnCurv2d& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Extrema_POnCurv2d& Value) ;
  
     const  Extrema_POnCurv2d& Value (const Standard_Integer Index)  const;
   const  Extrema_POnCurv2d& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Extrema_POnCurv2d& ChangeValue (const Standard_Integer Index) ;
    Extrema_POnCurv2d& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Extrema_Array1OfPOnCurv2d(const Extrema_Array1OfPOnCurv2d& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Extrema_POnCurv2d
#define Array1Item_hxx <Extrema_POnCurv2d.hxx>
#define TCollection_Array1 Extrema_Array1OfPOnCurv2d
#define TCollection_Array1_hxx <Extrema_Array1OfPOnCurv2d.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Extrema_Array1OfPOnCurv2d_HeaderFile
