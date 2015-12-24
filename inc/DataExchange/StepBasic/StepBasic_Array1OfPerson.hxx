// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfPerson_HeaderFile
#define _StepBasic_Array1OfPerson_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Person.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_Person;



class StepBasic_Array1OfPerson 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepBasic_Array1OfPerson(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_Array1OfPerson(const Handle(StepBasic_Person)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepBasic_Person)& V) ;
  
      void Destroy() ;
~StepBasic_Array1OfPerson()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepBasic_Array1OfPerson& Assign (const StepBasic_Array1OfPerson& Other) ;
 const  StepBasic_Array1OfPerson& operator = (const StepBasic_Array1OfPerson& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_Person)& Value) ;
  
     const  Handle(StepBasic_Person)& Value (const Standard_Integer Index)  const;
   const  Handle(StepBasic_Person)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepBasic_Person)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepBasic_Person)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepBasic_Array1OfPerson(const StepBasic_Array1OfPerson& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepBasic_Person)
#define Array1Item_hxx <DataExchange/StepBasic/StepBasic_Person.hxx>
#define TCollection_Array1 StepBasic_Array1OfPerson
#define TCollection_Array1_hxx <DataExchange/StepBasic/StepBasic_Array1OfPerson.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepBasic_Array1OfPerson_HeaderFile
