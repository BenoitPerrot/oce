// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_Array1OfLayeredItem_HeaderFile
#define _StepVisual_Array1OfLayeredItem_HeaderFile

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
class StepVisual_LayeredItem;



class StepVisual_Array1OfLayeredItem 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepVisual_Array1OfLayeredItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_Array1OfLayeredItem(const StepVisual_LayeredItem& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const StepVisual_LayeredItem& V) ;
  
      void Destroy() ;
~StepVisual_Array1OfLayeredItem()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepVisual_Array1OfLayeredItem& Assign (const StepVisual_Array1OfLayeredItem& Other) ;
 const  StepVisual_Array1OfLayeredItem& operator = (const StepVisual_Array1OfLayeredItem& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepVisual_LayeredItem& Value) ;
  
     const  StepVisual_LayeredItem& Value (const Standard_Integer Index)  const;
   const  StepVisual_LayeredItem& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      StepVisual_LayeredItem& ChangeValue (const Standard_Integer Index) ;
    StepVisual_LayeredItem& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepVisual_Array1OfLayeredItem(const StepVisual_Array1OfLayeredItem& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item StepVisual_LayeredItem
#define Array1Item_hxx <StepVisual_LayeredItem.hxx>
#define TCollection_Array1 StepVisual_Array1OfLayeredItem
#define TCollection_Array1_hxx <StepVisual_Array1OfLayeredItem.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepVisual_Array1OfLayeredItem_HeaderFile
