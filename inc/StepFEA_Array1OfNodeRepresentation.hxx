// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_Array1OfNodeRepresentation_HeaderFile
#define _StepFEA_Array1OfNodeRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepFEA_NodeRepresentation.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepFEA_NodeRepresentation;



class StepFEA_Array1OfNodeRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepFEA_Array1OfNodeRepresentation(const Standard_Integer Low, const Standard_Integer Up);
  
    StepFEA_Array1OfNodeRepresentation(const Handle(StepFEA_NodeRepresentation)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepFEA_NodeRepresentation)& V) ;
  
      void Destroy() ;
~StepFEA_Array1OfNodeRepresentation()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepFEA_Array1OfNodeRepresentation& Assign (const StepFEA_Array1OfNodeRepresentation& Other) ;
 const  StepFEA_Array1OfNodeRepresentation& operator = (const StepFEA_Array1OfNodeRepresentation& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepFEA_NodeRepresentation)& Value) ;
  
     const  Handle(StepFEA_NodeRepresentation)& Value (const Standard_Integer Index)  const;
   const  Handle(StepFEA_NodeRepresentation)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepFEA_NodeRepresentation)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepFEA_NodeRepresentation)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepFEA_Array1OfNodeRepresentation(const StepFEA_Array1OfNodeRepresentation& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepFEA_NodeRepresentation)
#define Array1Item_hxx <StepFEA_NodeRepresentation.hxx>
#define TCollection_Array1 StepFEA_Array1OfNodeRepresentation
#define TCollection_Array1_hxx <StepFEA_Array1OfNodeRepresentation.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepFEA_Array1OfNodeRepresentation_HeaderFile
