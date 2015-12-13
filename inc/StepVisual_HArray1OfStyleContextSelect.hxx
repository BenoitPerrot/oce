// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_HArray1OfStyleContextSelect_HeaderFile
#define _StepVisual_HArray1OfStyleContextSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepVisual_HArray1OfStyleContextSelect.hxx>

#include <StepVisual_Array1OfStyleContextSelect.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_StyleContextSelect;
class StepVisual_Array1OfStyleContextSelect;



class StepVisual_HArray1OfStyleContextSelect : public MMgt_TShared
{

public:

  
    StepVisual_HArray1OfStyleContextSelect(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_HArray1OfStyleContextSelect(const Standard_Integer Low, const Standard_Integer Up, const StepVisual_StyleContextSelect& V);
  
      void Init (const StepVisual_StyleContextSelect& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepVisual_StyleContextSelect& Value) ;
  
     const  StepVisual_StyleContextSelect& Value (const Standard_Integer Index)  const;
  
      StepVisual_StyleContextSelect& ChangeValue (const Standard_Integer Index) ;
  
     const  StepVisual_Array1OfStyleContextSelect& Array1()  const;
  
      StepVisual_Array1OfStyleContextSelect& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepVisual_HArray1OfStyleContextSelect)

protected:




private: 


  StepVisual_Array1OfStyleContextSelect myArray;


};

#define ItemHArray1 StepVisual_StyleContextSelect
#define ItemHArray1_hxx <StepVisual_StyleContextSelect.hxx>
#define TheArray1 StepVisual_Array1OfStyleContextSelect
#define TheArray1_hxx <StepVisual_Array1OfStyleContextSelect.hxx>
#define TCollection_HArray1 StepVisual_HArray1OfStyleContextSelect
#define TCollection_HArray1_hxx <StepVisual_HArray1OfStyleContextSelect.hxx>
#define Handle_TCollection_HArray1 Handle_StepVisual_HArray1OfStyleContextSelect
#define TCollection_HArray1_Type_() StepVisual_HArray1OfStyleContextSelect_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepVisual_HArray1OfStyleContextSelect_HeaderFile
