// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfNamedUnit_HeaderFile
#define _StepBasic_Array1OfNamedUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepBasic_NamedUnit.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_NamedUnit;



class StepBasic_Array1OfNamedUnit 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepBasic_Array1OfNamedUnit(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_Array1OfNamedUnit(const Handle(StepBasic_NamedUnit)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepBasic_NamedUnit)& V) ;
  
      void Destroy() ;
~StepBasic_Array1OfNamedUnit()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepBasic_Array1OfNamedUnit& Assign (const StepBasic_Array1OfNamedUnit& Other) ;
 const  StepBasic_Array1OfNamedUnit& operator = (const StepBasic_Array1OfNamedUnit& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_NamedUnit)& Value) ;
  
     const  Handle(StepBasic_NamedUnit)& Value (const Standard_Integer Index)  const;
   const  Handle(StepBasic_NamedUnit)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepBasic_NamedUnit)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepBasic_NamedUnit)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepBasic_Array1OfNamedUnit(const StepBasic_Array1OfNamedUnit& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepBasic_NamedUnit)
#define Array1Item_hxx <StepBasic_NamedUnit.hxx>
#define TCollection_Array1 StepBasic_Array1OfNamedUnit
#define TCollection_Array1_hxx <StepBasic_Array1OfNamedUnit.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepBasic_Array1OfNamedUnit_HeaderFile
