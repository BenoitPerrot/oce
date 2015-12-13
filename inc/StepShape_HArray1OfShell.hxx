// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_HArray1OfShell_HeaderFile
#define _StepShape_HArray1OfShell_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_HArray1OfShell.hxx>

#include <StepShape_Array1OfShell.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_Shell;
class StepShape_Array1OfShell;



class StepShape_HArray1OfShell : public MMgt_TShared
{

public:

  
    StepShape_HArray1OfShell(const Standard_Integer Low, const Standard_Integer Up);
  
    StepShape_HArray1OfShell(const Standard_Integer Low, const Standard_Integer Up, const StepShape_Shell& V);
  
      void Init (const StepShape_Shell& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepShape_Shell& Value) ;
  
     const  StepShape_Shell& Value (const Standard_Integer Index)  const;
  
      StepShape_Shell& ChangeValue (const Standard_Integer Index) ;
  
     const  StepShape_Array1OfShell& Array1()  const;
  
      StepShape_Array1OfShell& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepShape_HArray1OfShell)

protected:




private: 


  StepShape_Array1OfShell myArray;


};

#define ItemHArray1 StepShape_Shell
#define ItemHArray1_hxx <StepShape_Shell.hxx>
#define TheArray1 StepShape_Array1OfShell
#define TheArray1_hxx <StepShape_Array1OfShell.hxx>
#define TCollection_HArray1 StepShape_HArray1OfShell
#define TCollection_HArray1_hxx <StepShape_HArray1OfShell.hxx>
#define Handle_TCollection_HArray1 Handle_StepShape_HArray1OfShell
#define TCollection_HArray1_Type_() StepShape_HArray1OfShell_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepShape_HArray1OfShell_HeaderFile
