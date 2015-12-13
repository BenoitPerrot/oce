// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_Array1OfFillStyleSelect_HeaderFile
#define _StepVisual_Array1OfFillStyleSelect_HeaderFile

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
class StepVisual_FillStyleSelect;



class StepVisual_Array1OfFillStyleSelect 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepVisual_Array1OfFillStyleSelect(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_Array1OfFillStyleSelect(const StepVisual_FillStyleSelect& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const StepVisual_FillStyleSelect& V) ;
  
      void Destroy() ;
~StepVisual_Array1OfFillStyleSelect()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepVisual_Array1OfFillStyleSelect& Assign (const StepVisual_Array1OfFillStyleSelect& Other) ;
 const  StepVisual_Array1OfFillStyleSelect& operator = (const StepVisual_Array1OfFillStyleSelect& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepVisual_FillStyleSelect& Value) ;
  
     const  StepVisual_FillStyleSelect& Value (const Standard_Integer Index)  const;
   const  StepVisual_FillStyleSelect& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      StepVisual_FillStyleSelect& ChangeValue (const Standard_Integer Index) ;
    StepVisual_FillStyleSelect& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepVisual_Array1OfFillStyleSelect(const StepVisual_Array1OfFillStyleSelect& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item StepVisual_FillStyleSelect
#define Array1Item_hxx <StepVisual_FillStyleSelect.hxx>
#define TCollection_Array1 StepVisual_Array1OfFillStyleSelect
#define TCollection_Array1_hxx <StepVisual_Array1OfFillStyleSelect.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepVisual_Array1OfFillStyleSelect_HeaderFile
