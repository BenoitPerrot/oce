// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_HArray1OfCurveElementSectionDefinition_HeaderFile
#define _StepElement_HArray1OfCurveElementSectionDefinition_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_HArray1OfCurveElementSectionDefinition.hxx>

#include <StepElement_Array1OfCurveElementSectionDefinition.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepElement_CurveElementSectionDefinition.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepElement_CurveElementSectionDefinition;
class StepElement_Array1OfCurveElementSectionDefinition;



class StepElement_HArray1OfCurveElementSectionDefinition : public MMgt_TShared
{

public:

  
    StepElement_HArray1OfCurveElementSectionDefinition(const Standard_Integer Low, const Standard_Integer Up);
  
    StepElement_HArray1OfCurveElementSectionDefinition(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepElement_CurveElementSectionDefinition)& V);
  
      void Init (const Handle(StepElement_CurveElementSectionDefinition)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepElement_CurveElementSectionDefinition)& Value) ;
  
     const  Handle(StepElement_CurveElementSectionDefinition)& Value (const Standard_Integer Index)  const;
  
      Handle(StepElement_CurveElementSectionDefinition)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepElement_Array1OfCurveElementSectionDefinition& Array1()  const;
  
      StepElement_Array1OfCurveElementSectionDefinition& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepElement_HArray1OfCurveElementSectionDefinition)

protected:




private: 


  StepElement_Array1OfCurveElementSectionDefinition myArray;


};

#define ItemHArray1 Handle(StepElement_CurveElementSectionDefinition)
#define ItemHArray1_hxx <StepElement_CurveElementSectionDefinition.hxx>
#define TheArray1 StepElement_Array1OfCurveElementSectionDefinition
#define TheArray1_hxx <StepElement_Array1OfCurveElementSectionDefinition.hxx>
#define TCollection_HArray1 StepElement_HArray1OfCurveElementSectionDefinition
#define TCollection_HArray1_hxx <StepElement_HArray1OfCurveElementSectionDefinition.hxx>
#define Handle_TCollection_HArray1 Handle_StepElement_HArray1OfCurveElementSectionDefinition
#define TCollection_HArray1_Type_() StepElement_HArray1OfCurveElementSectionDefinition_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepElement_HArray1OfCurveElementSectionDefinition_HeaderFile
