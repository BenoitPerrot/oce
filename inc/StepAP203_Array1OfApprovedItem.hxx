// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_Array1OfApprovedItem_HeaderFile
#define _StepAP203_Array1OfApprovedItem_HeaderFile

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
class StepAP203_ApprovedItem;



class StepAP203_Array1OfApprovedItem 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepAP203_Array1OfApprovedItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepAP203_Array1OfApprovedItem(const StepAP203_ApprovedItem& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const StepAP203_ApprovedItem& V) ;
  
      void Destroy() ;
~StepAP203_Array1OfApprovedItem()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepAP203_Array1OfApprovedItem& Assign (const StepAP203_Array1OfApprovedItem& Other) ;
 const  StepAP203_Array1OfApprovedItem& operator = (const StepAP203_Array1OfApprovedItem& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepAP203_ApprovedItem& Value) ;
  
     const  StepAP203_ApprovedItem& Value (const Standard_Integer Index)  const;
   const  StepAP203_ApprovedItem& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      StepAP203_ApprovedItem& ChangeValue (const Standard_Integer Index) ;
    StepAP203_ApprovedItem& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepAP203_Array1OfApprovedItem(const StepAP203_Array1OfApprovedItem& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item StepAP203_ApprovedItem
#define Array1Item_hxx <StepAP203_ApprovedItem.hxx>
#define TCollection_Array1 StepAP203_Array1OfApprovedItem
#define TCollection_Array1_hxx <StepAP203_Array1OfApprovedItem.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepAP203_Array1OfApprovedItem_HeaderFile
