// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_Array1OfCurveStyleFontPattern_HeaderFile
#define _StepVisual_Array1OfCurveStyleFontPattern_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_CurveStyleFontPattern.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_CurveStyleFontPattern;



class StepVisual_Array1OfCurveStyleFontPattern 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepVisual_Array1OfCurveStyleFontPattern(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_Array1OfCurveStyleFontPattern(const Handle(StepVisual_CurveStyleFontPattern)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepVisual_CurveStyleFontPattern)& V) ;
  
      void Destroy() ;
~StepVisual_Array1OfCurveStyleFontPattern()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepVisual_Array1OfCurveStyleFontPattern& Assign (const StepVisual_Array1OfCurveStyleFontPattern& Other) ;
 const  StepVisual_Array1OfCurveStyleFontPattern& operator = (const StepVisual_Array1OfCurveStyleFontPattern& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepVisual_CurveStyleFontPattern)& Value) ;
  
     const  Handle(StepVisual_CurveStyleFontPattern)& Value (const Standard_Integer Index)  const;
   const  Handle(StepVisual_CurveStyleFontPattern)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepVisual_CurveStyleFontPattern)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepVisual_CurveStyleFontPattern)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepVisual_Array1OfCurveStyleFontPattern(const StepVisual_Array1OfCurveStyleFontPattern& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepVisual_CurveStyleFontPattern)
#define Array1Item_hxx <DataExchange/StepVisual/StepVisual_CurveStyleFontPattern.hxx>
#define TCollection_Array1 StepVisual_Array1OfCurveStyleFontPattern
#define TCollection_Array1_hxx <DataExchange/StepVisual/StepVisual_Array1OfCurveStyleFontPattern.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepVisual_Array1OfCurveStyleFontPattern_HeaderFile
