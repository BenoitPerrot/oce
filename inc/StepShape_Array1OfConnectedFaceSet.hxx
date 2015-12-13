// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfConnectedFaceSet_HeaderFile
#define _StepShape_Array1OfConnectedFaceSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepShape_ConnectedFaceSet.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_ConnectedFaceSet;



class StepShape_Array1OfConnectedFaceSet 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepShape_Array1OfConnectedFaceSet(const Standard_Integer Low, const Standard_Integer Up);
  
    StepShape_Array1OfConnectedFaceSet(const Handle(StepShape_ConnectedFaceSet)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepShape_ConnectedFaceSet)& V) ;
  
      void Destroy() ;
~StepShape_Array1OfConnectedFaceSet()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepShape_Array1OfConnectedFaceSet& Assign (const StepShape_Array1OfConnectedFaceSet& Other) ;
 const  StepShape_Array1OfConnectedFaceSet& operator = (const StepShape_Array1OfConnectedFaceSet& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepShape_ConnectedFaceSet)& Value) ;
  
     const  Handle(StepShape_ConnectedFaceSet)& Value (const Standard_Integer Index)  const;
   const  Handle(StepShape_ConnectedFaceSet)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepShape_ConnectedFaceSet)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepShape_ConnectedFaceSet)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepShape_Array1OfConnectedFaceSet(const StepShape_Array1OfConnectedFaceSet& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepShape_ConnectedFaceSet)
#define Array1Item_hxx <StepShape_ConnectedFaceSet.hxx>
#define TCollection_Array1 StepShape_Array1OfConnectedFaceSet
#define TCollection_Array1_hxx <StepShape_Array1OfConnectedFaceSet.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepShape_Array1OfConnectedFaceSet_HeaderFile
