// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_HArray1OfBox_HeaderFile
#define _Bnd_HArray1OfBox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/BoundingVolumes/Handle_Bnd_HArray1OfBox.hxx>

#include <Mathematics/BoundingVolumes/Bnd_Array1OfBox.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Bnd_Box;
class Bnd_Array1OfBox;



class Bnd_HArray1OfBox : public MMgt_TShared
{

public:

  
    Bnd_HArray1OfBox(const Standard_Integer Low, const Standard_Integer Up);
  
    Bnd_HArray1OfBox(const Standard_Integer Low, const Standard_Integer Up, const Bnd_Box& V);
  
      void Init (const Bnd_Box& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Bnd_Box& Value) ;
  
     const  Bnd_Box& Value (const Standard_Integer Index)  const;
  
      Bnd_Box& ChangeValue (const Standard_Integer Index) ;
  
     const  Bnd_Array1OfBox& Array1()  const;
  
      Bnd_Array1OfBox& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Bnd_HArray1OfBox)

protected:




private: 


  Bnd_Array1OfBox myArray;


};

#define ItemHArray1 Bnd_Box
#define ItemHArray1_hxx <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#define TheArray1 Bnd_Array1OfBox
#define TheArray1_hxx <Mathematics/BoundingVolumes/Bnd_Array1OfBox.hxx>
#define TCollection_HArray1 Bnd_HArray1OfBox
#define TCollection_HArray1_hxx <Mathematics/BoundingVolumes/Bnd_HArray1OfBox.hxx>
#define Handle_TCollection_HArray1 Handle_Bnd_HArray1OfBox
#define TCollection_HArray1_Type_() Bnd_HArray1OfBox_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Bnd_HArray1OfBox_HeaderFile
