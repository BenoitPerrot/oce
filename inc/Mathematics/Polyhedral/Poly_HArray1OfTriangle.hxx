// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_HArray1OfTriangle_HeaderFile
#define _Poly_HArray1OfTriangle_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/Polyhedral/Handle_Poly_HArray1OfTriangle.hxx>

#include <Mathematics/Polyhedral/Poly_Array1OfTriangle.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Poly_Triangle;
class Poly_Array1OfTriangle;



class Poly_HArray1OfTriangle : public MMgt_TShared
{

public:

  
    Poly_HArray1OfTriangle(const Standard_Integer Low, const Standard_Integer Up);
  
    Poly_HArray1OfTriangle(const Standard_Integer Low, const Standard_Integer Up, const Poly_Triangle& V);
  
      void Init (const Poly_Triangle& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Poly_Triangle& Value) ;
  
     const  Poly_Triangle& Value (const Standard_Integer Index)  const;
  
      Poly_Triangle& ChangeValue (const Standard_Integer Index) ;
  
     const  Poly_Array1OfTriangle& Array1()  const;
  
      Poly_Array1OfTriangle& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Poly_HArray1OfTriangle)

protected:




private: 


  Poly_Array1OfTriangle myArray;


};

#define ItemHArray1 Poly_Triangle
#define ItemHArray1_hxx <Mathematics/Polyhedral/Poly_Triangle.hxx>
#define TheArray1 Poly_Array1OfTriangle
#define TheArray1_hxx <Mathematics/Polyhedral/Poly_Array1OfTriangle.hxx>
#define TCollection_HArray1 Poly_HArray1OfTriangle
#define TCollection_HArray1_hxx <Mathematics/Polyhedral/Poly_HArray1OfTriangle.hxx>
#define Handle_TCollection_HArray1 Handle_Poly_HArray1OfTriangle
#define TCollection_HArray1_Type_() Poly_HArray1OfTriangle_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Poly_HArray1OfTriangle_HeaderFile
