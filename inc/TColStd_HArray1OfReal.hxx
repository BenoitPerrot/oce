// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray1OfReal_HeaderFile
#define _TColStd_HArray1OfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>

#include <TColStd_Array1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TColStd_Array1OfReal;



class TColStd_HArray1OfReal : public MMgt_TShared
{

public:

  
    TColStd_HArray1OfReal(const Standard_Integer Low, const Standard_Integer Up);
  
    TColStd_HArray1OfReal(const Standard_Integer Low, const Standard_Integer Up, const Standard_Real& V);
  
      void Init (const Standard_Real& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Standard_Real& Value) ;
  
     const  Standard_Real& Value (const Standard_Integer Index)  const;
  
      Standard_Real& ChangeValue (const Standard_Integer Index) ;
  
     const  TColStd_Array1OfReal& Array1()  const;
  
      TColStd_Array1OfReal& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray1OfReal)

protected:




private: 


  TColStd_Array1OfReal myArray;


};

#define ItemHArray1 Standard_Real
#define ItemHArray1_hxx <Foundation/Standard/Standard_Real.hxx>
#define TheArray1 TColStd_Array1OfReal
#define TheArray1_hxx <TColStd_Array1OfReal.hxx>
#define TCollection_HArray1 TColStd_HArray1OfReal
#define TCollection_HArray1_hxx <TColStd_HArray1OfReal.hxx>
#define Handle_TCollection_HArray1 Handle_TColStd_HArray1OfReal
#define TCollection_HArray1_Type_() TColStd_HArray1OfReal_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TColStd_HArray1OfReal_HeaderFile
