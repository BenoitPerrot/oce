// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_HArray1OfNamedUnit_HeaderFile
#define _StepBasic_HArray1OfNamedUnit_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_HArray1OfNamedUnit.hxx>

#include <StepBasic_Array1OfNamedUnit.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepBasic_NamedUnit.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_NamedUnit;
class StepBasic_Array1OfNamedUnit;



class StepBasic_HArray1OfNamedUnit : public MMgt_TShared
{

public:

  
    StepBasic_HArray1OfNamedUnit(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_HArray1OfNamedUnit(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepBasic_NamedUnit)& V);
  
      void Init (const Handle(StepBasic_NamedUnit)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_NamedUnit)& Value) ;
  
     const  Handle(StepBasic_NamedUnit)& Value (const Standard_Integer Index)  const;
  
      Handle(StepBasic_NamedUnit)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepBasic_Array1OfNamedUnit& Array1()  const;
  
      StepBasic_Array1OfNamedUnit& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepBasic_HArray1OfNamedUnit)

protected:




private: 


  StepBasic_Array1OfNamedUnit myArray;


};

#define ItemHArray1 Handle(StepBasic_NamedUnit)
#define ItemHArray1_hxx <StepBasic_NamedUnit.hxx>
#define TheArray1 StepBasic_Array1OfNamedUnit
#define TheArray1_hxx <StepBasic_Array1OfNamedUnit.hxx>
#define TCollection_HArray1 StepBasic_HArray1OfNamedUnit
#define TCollection_HArray1_hxx <StepBasic_HArray1OfNamedUnit.hxx>
#define Handle_TCollection_HArray1 Handle_StepBasic_HArray1OfNamedUnit
#define TCollection_HArray1_Type_() StepBasic_HArray1OfNamedUnit_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepBasic_HArray1OfNamedUnit_HeaderFile
