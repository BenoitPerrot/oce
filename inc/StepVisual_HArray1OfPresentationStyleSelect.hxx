// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_HArray1OfPresentationStyleSelect_HeaderFile
#define _StepVisual_HArray1OfPresentationStyleSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepVisual_HArray1OfPresentationStyleSelect.hxx>

#include <StepVisual_Array1OfPresentationStyleSelect.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_PresentationStyleSelect;
class StepVisual_Array1OfPresentationStyleSelect;



class StepVisual_HArray1OfPresentationStyleSelect : public MMgt_TShared
{

public:

  
    StepVisual_HArray1OfPresentationStyleSelect(const Standard_Integer Low, const Standard_Integer Up);
  
    StepVisual_HArray1OfPresentationStyleSelect(const Standard_Integer Low, const Standard_Integer Up, const StepVisual_PresentationStyleSelect& V);
  
      void Init (const StepVisual_PresentationStyleSelect& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepVisual_PresentationStyleSelect& Value) ;
  
     const  StepVisual_PresentationStyleSelect& Value (const Standard_Integer Index)  const;
  
      StepVisual_PresentationStyleSelect& ChangeValue (const Standard_Integer Index) ;
  
     const  StepVisual_Array1OfPresentationStyleSelect& Array1()  const;
  
      StepVisual_Array1OfPresentationStyleSelect& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepVisual_HArray1OfPresentationStyleSelect)

protected:




private: 


  StepVisual_Array1OfPresentationStyleSelect myArray;


};

#define ItemHArray1 StepVisual_PresentationStyleSelect
#define ItemHArray1_hxx <StepVisual_PresentationStyleSelect.hxx>
#define TheArray1 StepVisual_Array1OfPresentationStyleSelect
#define TheArray1_hxx <StepVisual_Array1OfPresentationStyleSelect.hxx>
#define TCollection_HArray1 StepVisual_HArray1OfPresentationStyleSelect
#define TCollection_HArray1_hxx <StepVisual_HArray1OfPresentationStyleSelect.hxx>
#define Handle_TCollection_HArray1 Handle_StepVisual_HArray1OfPresentationStyleSelect
#define TCollection_HArray1_Type_() StepVisual_HArray1OfPresentationStyleSelect_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepVisual_HArray1OfPresentationStyleSelect_HeaderFile
