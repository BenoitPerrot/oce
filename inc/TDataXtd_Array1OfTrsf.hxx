// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_Array1OfTrsf_HeaderFile
#define _TDataXtd_Array1OfTrsf_HeaderFile

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
class gp_Trsf;



class TDataXtd_Array1OfTrsf 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TDataXtd_Array1OfTrsf(const Standard_Integer Low, const Standard_Integer Up);
  
    TDataXtd_Array1OfTrsf(const gp_Trsf& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const gp_Trsf& V) ;
  
      void Destroy() ;
~TDataXtd_Array1OfTrsf()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TDataXtd_Array1OfTrsf& Assign (const TDataXtd_Array1OfTrsf& Other) ;
 const  TDataXtd_Array1OfTrsf& operator = (const TDataXtd_Array1OfTrsf& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_Trsf& Value) ;
  
     const  gp_Trsf& Value (const Standard_Integer Index)  const;
   const  gp_Trsf& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      gp_Trsf& ChangeValue (const Standard_Integer Index) ;
    gp_Trsf& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TDataXtd_Array1OfTrsf(const TDataXtd_Array1OfTrsf& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item gp_Trsf
#define Array1Item_hxx <gp_Trsf.hxx>
#define TCollection_Array1 TDataXtd_Array1OfTrsf
#define TCollection_Array1_hxx <TDataXtd_Array1OfTrsf.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TDataXtd_Array1OfTrsf_HeaderFile
