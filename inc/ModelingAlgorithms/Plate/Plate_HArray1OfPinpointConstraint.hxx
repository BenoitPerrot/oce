// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_HArray1OfPinpointConstraint_HeaderFile
#define _Plate_HArray1OfPinpointConstraint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/Plate/Handle_Plate_HArray1OfPinpointConstraint.hxx>

#include <ModelingAlgorithms/Plate/Plate_Array1OfPinpointConstraint.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Plate_PinpointConstraint;
class Plate_Array1OfPinpointConstraint;



class Plate_HArray1OfPinpointConstraint : public MMgt_TShared
{

public:

  
    Plate_HArray1OfPinpointConstraint(const Standard_Integer Low, const Standard_Integer Up);
  
    Plate_HArray1OfPinpointConstraint(const Standard_Integer Low, const Standard_Integer Up, const Plate_PinpointConstraint& V);
  
      void Init (const Plate_PinpointConstraint& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Plate_PinpointConstraint& Value) ;
  
     const  Plate_PinpointConstraint& Value (const Standard_Integer Index)  const;
  
      Plate_PinpointConstraint& ChangeValue (const Standard_Integer Index) ;
  
     const  Plate_Array1OfPinpointConstraint& Array1()  const;
  
      Plate_Array1OfPinpointConstraint& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Plate_HArray1OfPinpointConstraint)

protected:




private: 


  Plate_Array1OfPinpointConstraint myArray;


};

#define ItemHArray1 Plate_PinpointConstraint
#define ItemHArray1_hxx <ModelingAlgorithms/Plate/Plate_PinpointConstraint.hxx>
#define TheArray1 Plate_Array1OfPinpointConstraint
#define TheArray1_hxx <ModelingAlgorithms/Plate/Plate_Array1OfPinpointConstraint.hxx>
#define TCollection_HArray1 Plate_HArray1OfPinpointConstraint
#define TCollection_HArray1_hxx <ModelingAlgorithms/Plate/Plate_HArray1OfPinpointConstraint.hxx>
#define Handle_TCollection_HArray1 Handle_Plate_HArray1OfPinpointConstraint
#define TCollection_HArray1_Type_() Plate_HArray1OfPinpointConstraint_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Plate_HArray1OfPinpointConstraint_HeaderFile
