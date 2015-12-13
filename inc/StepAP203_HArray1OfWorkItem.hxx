// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_HArray1OfWorkItem_HeaderFile
#define _StepAP203_HArray1OfWorkItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepAP203_HArray1OfWorkItem.hxx>

#include <StepAP203_Array1OfWorkItem.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP203_WorkItem;
class StepAP203_Array1OfWorkItem;



class StepAP203_HArray1OfWorkItem : public MMgt_TShared
{

public:

  
    StepAP203_HArray1OfWorkItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepAP203_HArray1OfWorkItem(const Standard_Integer Low, const Standard_Integer Up, const StepAP203_WorkItem& V);
  
      void Init (const StepAP203_WorkItem& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepAP203_WorkItem& Value) ;
  
     const  StepAP203_WorkItem& Value (const Standard_Integer Index)  const;
  
      StepAP203_WorkItem& ChangeValue (const Standard_Integer Index) ;
  
     const  StepAP203_Array1OfWorkItem& Array1()  const;
  
      StepAP203_Array1OfWorkItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP203_HArray1OfWorkItem)

protected:




private: 


  StepAP203_Array1OfWorkItem myArray;


};

#define ItemHArray1 StepAP203_WorkItem
#define ItemHArray1_hxx <StepAP203_WorkItem.hxx>
#define TheArray1 StepAP203_Array1OfWorkItem
#define TheArray1_hxx <StepAP203_Array1OfWorkItem.hxx>
#define TCollection_HArray1 StepAP203_HArray1OfWorkItem
#define TCollection_HArray1_hxx <StepAP203_HArray1OfWorkItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP203_HArray1OfWorkItem
#define TCollection_HArray1_Type_() StepAP203_HArray1OfWorkItem_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepAP203_HArray1OfWorkItem_HeaderFile
