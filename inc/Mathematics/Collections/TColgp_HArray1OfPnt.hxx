// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray1OfPnt_HeaderFile
#define _TColgp_HArray1OfPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColgp_HArray1OfPnt.hxx>

#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_Pnt;
class TColgp_Array1OfPnt;



class TColgp_HArray1OfPnt : public MMgt_TShared
{

public:

  
    TColgp_HArray1OfPnt(const Standard_Integer Low, const Standard_Integer Up);
  
    TColgp_HArray1OfPnt(const Standard_Integer Low, const Standard_Integer Up, const gp_Pnt& V);
  
      void Init (const gp_Pnt& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_Pnt& Value) ;
  
     const  gp_Pnt& Value (const Standard_Integer Index)  const;
  
      gp_Pnt& ChangeValue (const Standard_Integer Index) ;
  
     const  TColgp_Array1OfPnt& Array1()  const;
  
      TColgp_Array1OfPnt& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray1OfPnt)

protected:




private: 


  TColgp_Array1OfPnt myArray;


};

#define ItemHArray1 gp_Pnt
#define ItemHArray1_hxx <Mathematics/Primitives/gp_Pnt.hxx>
#define TheArray1 TColgp_Array1OfPnt
#define TheArray1_hxx <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#define TCollection_HArray1 TColgp_HArray1OfPnt
#define TCollection_HArray1_hxx <Mathematics/Collections/TColgp_HArray1OfPnt.hxx>
#define Handle_TCollection_HArray1 Handle_TColgp_HArray1OfPnt
#define TCollection_HArray1_Type_() TColgp_HArray1OfPnt_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TColgp_HArray1OfPnt_HeaderFile
