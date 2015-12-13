// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_HArray2OfPOnSurfParams_HeaderFile
#define _Extrema_HArray2OfPOnSurfParams_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Extrema_HArray2OfPOnSurfParams.hxx>

#include <Extrema_Array2OfPOnSurfParams.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Extrema_POnSurfParams;
class Extrema_Array2OfPOnSurfParams;



class Extrema_HArray2OfPOnSurfParams : public MMgt_TShared
{

public:

  
    Extrema_HArray2OfPOnSurfParams(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    Extrema_HArray2OfPOnSurfParams(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Extrema_POnSurfParams& V);
  
      void Init (const Extrema_POnSurfParams& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Extrema_POnSurfParams& Value) ;
  
     const  Extrema_POnSurfParams& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Extrema_POnSurfParams& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  Extrema_Array2OfPOnSurfParams& Array2()  const;
  
      Extrema_Array2OfPOnSurfParams& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(Extrema_HArray2OfPOnSurfParams)

protected:




private: 


  Extrema_Array2OfPOnSurfParams myArray;


};

#define ItemHArray2 Extrema_POnSurfParams
#define ItemHArray2_hxx <Extrema_POnSurfParams.hxx>
#define TheArray2 Extrema_Array2OfPOnSurfParams
#define TheArray2_hxx <Extrema_Array2OfPOnSurfParams.hxx>
#define TCollection_HArray2 Extrema_HArray2OfPOnSurfParams
#define TCollection_HArray2_hxx <Extrema_HArray2OfPOnSurfParams.hxx>
#define Handle_TCollection_HArray2 Handle_Extrema_HArray2OfPOnSurfParams
#define TCollection_HArray2_Type_() Extrema_HArray2OfPOnSurfParams_Type_()

#include <Foundation/TCollection/TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _Extrema_HArray2OfPOnSurfParams_HeaderFile
