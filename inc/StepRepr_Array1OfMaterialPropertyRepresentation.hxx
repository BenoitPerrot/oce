// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_Array1OfMaterialPropertyRepresentation_HeaderFile
#define _StepRepr_Array1OfMaterialPropertyRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepRepr_MaterialPropertyRepresentation.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepRepr_MaterialPropertyRepresentation;



class StepRepr_Array1OfMaterialPropertyRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepRepr_Array1OfMaterialPropertyRepresentation(const Standard_Integer Low, const Standard_Integer Up);
  
    StepRepr_Array1OfMaterialPropertyRepresentation(const Handle(StepRepr_MaterialPropertyRepresentation)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepRepr_MaterialPropertyRepresentation)& V) ;
  
      void Destroy() ;
~StepRepr_Array1OfMaterialPropertyRepresentation()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepRepr_Array1OfMaterialPropertyRepresentation& Assign (const StepRepr_Array1OfMaterialPropertyRepresentation& Other) ;
 const  StepRepr_Array1OfMaterialPropertyRepresentation& operator = (const StepRepr_Array1OfMaterialPropertyRepresentation& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepRepr_MaterialPropertyRepresentation)& Value) ;
  
     const  Handle(StepRepr_MaterialPropertyRepresentation)& Value (const Standard_Integer Index)  const;
   const  Handle(StepRepr_MaterialPropertyRepresentation)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepRepr_MaterialPropertyRepresentation)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepRepr_MaterialPropertyRepresentation)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepRepr_Array1OfMaterialPropertyRepresentation(const StepRepr_Array1OfMaterialPropertyRepresentation& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepRepr_MaterialPropertyRepresentation)
#define Array1Item_hxx <StepRepr_MaterialPropertyRepresentation.hxx>
#define TCollection_Array1 StepRepr_Array1OfMaterialPropertyRepresentation
#define TCollection_Array1_hxx <StepRepr_Array1OfMaterialPropertyRepresentation.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepRepr_Array1OfMaterialPropertyRepresentation_HeaderFile
