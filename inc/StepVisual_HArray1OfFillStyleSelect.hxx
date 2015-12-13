// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_HArray1OfFillStyleSelect_HeaderFile
#define _StepVisual_HArray1OfFillStyleSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepVisual_HArray1OfFillStyleSelect.hxx>

#include <StepVisual_Array1OfFillStyleSelect.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_FillStyleSelect;
class StepVisual_Array1OfFillStyleSelect;



class StepVisual_HArray1OfFillStyleSelect : public MMgt_TShared
{

public:

  
    StepVisual_HArray1OfFillStyleSelect(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_HArray1OfFillStyleSelect(const Standard_Integer Low, const Standard_Integer Up, const StepVisual_FillStyleSelect& V);
  
      void Init (const StepVisual_FillStyleSelect& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepVisual_FillStyleSelect& Value) ;
  
     const  StepVisual_FillStyleSelect& Value (const Standard_Integer Index)  const;
  
      StepVisual_FillStyleSelect& ChangeValue (const Standard_Integer Index) ;
  
     const  StepVisual_Array1OfFillStyleSelect& Array1()  const;
  
      StepVisual_Array1OfFillStyleSelect& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepVisual_HArray1OfFillStyleSelect)

protected:




private: 


  StepVisual_Array1OfFillStyleSelect myArray;


};

#define ItemHArray1 StepVisual_FillStyleSelect
#define ItemHArray1_hxx <StepVisual_FillStyleSelect.hxx>
#define TheArray1 StepVisual_Array1OfFillStyleSelect
#define TheArray1_hxx <StepVisual_Array1OfFillStyleSelect.hxx>
#define TCollection_HArray1 StepVisual_HArray1OfFillStyleSelect
#define TCollection_HArray1_hxx <StepVisual_HArray1OfFillStyleSelect.hxx>
#define Handle_TCollection_HArray1 Handle_StepVisual_HArray1OfFillStyleSelect
#define TCollection_HArray1_Type_() StepVisual_HArray1OfFillStyleSelect_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepVisual_HArray1OfFillStyleSelect_HeaderFile
