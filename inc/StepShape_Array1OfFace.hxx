// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfFace_HeaderFile
#define _StepShape_Array1OfFace_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepShape_Face.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_Face;



class StepShape_Array1OfFace 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepShape_Array1OfFace(const Standard_Integer Low, const Standard_Integer Up);
  
    StepShape_Array1OfFace(const Handle(StepShape_Face)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepShape_Face)& V) ;
  
      void Destroy() ;
~StepShape_Array1OfFace()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepShape_Array1OfFace& Assign (const StepShape_Array1OfFace& Other) ;
 const  StepShape_Array1OfFace& operator = (const StepShape_Array1OfFace& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepShape_Face)& Value) ;
  
     const  Handle(StepShape_Face)& Value (const Standard_Integer Index)  const;
   const  Handle(StepShape_Face)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepShape_Face)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepShape_Face)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepShape_Array1OfFace(const StepShape_Array1OfFace& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepShape_Face)
#define Array1Item_hxx <StepShape_Face.hxx>
#define TCollection_Array1 StepShape_Array1OfFace
#define TCollection_Array1_hxx <StepShape_Array1OfFace.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepShape_Array1OfFace_HeaderFile
