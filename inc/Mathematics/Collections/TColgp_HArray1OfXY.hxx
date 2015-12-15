// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray1OfXY_HeaderFile
#define _TColgp_HArray1OfXY_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColgp_HArray1OfXY.hxx>

#include <Mathematics/Collections/TColgp_Array1OfXY.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_XY;
class TColgp_Array1OfXY;



class TColgp_HArray1OfXY : public MMgt_TShared
{

public:

  
    TColgp_HArray1OfXY(const Standard_Integer Low, const Standard_Integer Up);
  
    TColgp_HArray1OfXY(const Standard_Integer Low, const Standard_Integer Up, const gp_XY& V);
  
      void Init (const gp_XY& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_XY& Value) ;
  
     const  gp_XY& Value (const Standard_Integer Index)  const;
  
      gp_XY& ChangeValue (const Standard_Integer Index) ;
  
     const  TColgp_Array1OfXY& Array1()  const;
  
      TColgp_Array1OfXY& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray1OfXY)

protected:




private: 


  TColgp_Array1OfXY myArray;


};

#define ItemHArray1 gp_XY
#define ItemHArray1_hxx <Mathematics/Primitives/gp_XY.hxx>
#define TheArray1 TColgp_Array1OfXY
#define TheArray1_hxx <Mathematics/Collections/TColgp_Array1OfXY.hxx>
#define TCollection_HArray1 TColgp_HArray1OfXY
#define TCollection_HArray1_hxx <Mathematics/Collections/TColgp_HArray1OfXY.hxx>
#define Handle_TCollection_HArray1 Handle_TColgp_HArray1OfXY
#define TCollection_HArray1_Type_() TColgp_HArray1OfXY_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TColgp_HArray1OfXY_HeaderFile
