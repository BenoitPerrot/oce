// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_HArray1OfOrientedClosedShell_HeaderFile
#define _StepShape_HArray1OfOrientedClosedShell_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_HArray1OfOrientedClosedShell.hxx>

#include <StepShape_Array1OfOrientedClosedShell.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepShape_OrientedClosedShell.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_OrientedClosedShell;
class StepShape_Array1OfOrientedClosedShell;



class StepShape_HArray1OfOrientedClosedShell : public MMgt_TShared
{

public:

  
    StepShape_HArray1OfOrientedClosedShell(const Standard_Integer Low, const Standard_Integer Up);
  
    StepShape_HArray1OfOrientedClosedShell(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepShape_OrientedClosedShell)& V);
  
      void Init (const Handle(StepShape_OrientedClosedShell)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepShape_OrientedClosedShell)& Value) ;
  
     const  Handle(StepShape_OrientedClosedShell)& Value (const Standard_Integer Index)  const;
  
      Handle(StepShape_OrientedClosedShell)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepShape_Array1OfOrientedClosedShell& Array1()  const;
  
      StepShape_Array1OfOrientedClosedShell& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepShape_HArray1OfOrientedClosedShell)

protected:




private: 


  StepShape_Array1OfOrientedClosedShell myArray;


};

#define ItemHArray1 Handle(StepShape_OrientedClosedShell)
#define ItemHArray1_hxx <StepShape_OrientedClosedShell.hxx>
#define TheArray1 StepShape_Array1OfOrientedClosedShell
#define TheArray1_hxx <StepShape_Array1OfOrientedClosedShell.hxx>
#define TCollection_HArray1 StepShape_HArray1OfOrientedClosedShell
#define TCollection_HArray1_hxx <StepShape_HArray1OfOrientedClosedShell.hxx>
#define Handle_TCollection_HArray1 Handle_StepShape_HArray1OfOrientedClosedShell
#define TCollection_HArray1_Type_() StepShape_HArray1OfOrientedClosedShell_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepShape_HArray1OfOrientedClosedShell_HeaderFile
