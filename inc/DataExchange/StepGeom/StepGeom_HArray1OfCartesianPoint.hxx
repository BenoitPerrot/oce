// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_HArray1OfCartesianPoint_HeaderFile
#define _StepGeom_HArray1OfCartesianPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_HArray1OfCartesianPoint.hxx>

#include <DataExchange/StepGeom/StepGeom_Array1OfCartesianPoint.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_CartesianPoint.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_CartesianPoint;
class StepGeom_Array1OfCartesianPoint;



class StepGeom_HArray1OfCartesianPoint : public MMgt_TShared
{

public:

  
    StepGeom_HArray1OfCartesianPoint(const Standard_Integer Low, const Standard_Integer Up);
  
    StepGeom_HArray1OfCartesianPoint(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepGeom_CartesianPoint)& V);
  
      void Init (const Handle(StepGeom_CartesianPoint)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepGeom_CartesianPoint)& Value) ;
  
     const  Handle(StepGeom_CartesianPoint)& Value (const Standard_Integer Index)  const;
  
      Handle(StepGeom_CartesianPoint)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepGeom_Array1OfCartesianPoint& Array1()  const;
  
      StepGeom_Array1OfCartesianPoint& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepGeom_HArray1OfCartesianPoint)

protected:




private: 


  StepGeom_Array1OfCartesianPoint myArray;


};

#define ItemHArray1 Handle(StepGeom_CartesianPoint)
#define ItemHArray1_hxx <DataExchange/StepGeom/StepGeom_CartesianPoint.hxx>
#define TheArray1 StepGeom_Array1OfCartesianPoint
#define TheArray1_hxx <DataExchange/StepGeom/StepGeom_Array1OfCartesianPoint.hxx>
#define TCollection_HArray1 StepGeom_HArray1OfCartesianPoint
#define TCollection_HArray1_hxx <DataExchange/StepGeom/StepGeom_HArray1OfCartesianPoint.hxx>
#define Handle_TCollection_HArray1 Handle_StepGeom_HArray1OfCartesianPoint
#define TCollection_HArray1_Type_() StepGeom_HArray1OfCartesianPoint_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepGeom_HArray1OfCartesianPoint_HeaderFile
