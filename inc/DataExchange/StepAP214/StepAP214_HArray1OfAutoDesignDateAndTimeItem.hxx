// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_HArray1OfAutoDesignDateAndTimeItem_HeaderFile
#define _StepAP214_HArray1OfAutoDesignDateAndTimeItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepAP214/Handle_StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx>

#include <DataExchange/StepAP214/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP214_AutoDesignDateAndTimeItem;
class StepAP214_Array1OfAutoDesignDateAndTimeItem;



class StepAP214_HArray1OfAutoDesignDateAndTimeItem : public MMgt_TShared
{

public:

  
    StepAP214_HArray1OfAutoDesignDateAndTimeItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepAP214_HArray1OfAutoDesignDateAndTimeItem(const Standard_Integer Low, const Standard_Integer Up, const StepAP214_AutoDesignDateAndTimeItem& V);
  
      void Init (const StepAP214_AutoDesignDateAndTimeItem& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepAP214_AutoDesignDateAndTimeItem& Value) ;
  
     const  StepAP214_AutoDesignDateAndTimeItem& Value (const Standard_Integer Index)  const;
  
      StepAP214_AutoDesignDateAndTimeItem& ChangeValue (const Standard_Integer Index) ;
  
     const  StepAP214_Array1OfAutoDesignDateAndTimeItem& Array1()  const;
  
      StepAP214_Array1OfAutoDesignDateAndTimeItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP214_HArray1OfAutoDesignDateAndTimeItem)

protected:




private: 


  StepAP214_Array1OfAutoDesignDateAndTimeItem myArray;


};

#define ItemHArray1 StepAP214_AutoDesignDateAndTimeItem
#define ItemHArray1_hxx <DataExchange/StepAP214/StepAP214_AutoDesignDateAndTimeItem.hxx>
#define TheArray1 StepAP214_Array1OfAutoDesignDateAndTimeItem
#define TheArray1_hxx <DataExchange/StepAP214/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx>
#define TCollection_HArray1 StepAP214_HArray1OfAutoDesignDateAndTimeItem
#define TCollection_HArray1_hxx <DataExchange/StepAP214/StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP214_HArray1OfAutoDesignDateAndTimeItem
#define TCollection_HArray1_Type_() StepAP214_HArray1OfAutoDesignDateAndTimeItem_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepAP214_HArray1OfAutoDesignDateAndTimeItem_HeaderFile
