// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Array1OfCompositeCurveSegment_HeaderFile
#define _StepGeom_Array1OfCompositeCurveSegment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_CompositeCurveSegment.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_CompositeCurveSegment;



class StepGeom_Array1OfCompositeCurveSegment 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepGeom_Array1OfCompositeCurveSegment(const Standard_Integer Low, const Standard_Integer Up);
  
    StepGeom_Array1OfCompositeCurveSegment(const Handle(StepGeom_CompositeCurveSegment)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepGeom_CompositeCurveSegment)& V) ;
  
      void Destroy() ;
~StepGeom_Array1OfCompositeCurveSegment()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepGeom_Array1OfCompositeCurveSegment& Assign (const StepGeom_Array1OfCompositeCurveSegment& Other) ;
 const  StepGeom_Array1OfCompositeCurveSegment& operator = (const StepGeom_Array1OfCompositeCurveSegment& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepGeom_CompositeCurveSegment)& Value) ;
  
     const  Handle(StepGeom_CompositeCurveSegment)& Value (const Standard_Integer Index)  const;
   const  Handle(StepGeom_CompositeCurveSegment)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepGeom_CompositeCurveSegment)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepGeom_CompositeCurveSegment)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepGeom_Array1OfCompositeCurveSegment(const StepGeom_Array1OfCompositeCurveSegment& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepGeom_CompositeCurveSegment)
#define Array1Item_hxx <DataExchange/StepGeom/StepGeom_CompositeCurveSegment.hxx>
#define TCollection_Array1 StepGeom_Array1OfCompositeCurveSegment
#define TCollection_Array1_hxx <DataExchange/StepGeom/StepGeom_Array1OfCompositeCurveSegment.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepGeom_Array1OfCompositeCurveSegment_HeaderFile
