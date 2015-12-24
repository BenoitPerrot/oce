// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray2OfVec_HeaderFile
#define _TColgp_HArray2OfVec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/Collections/Handle_TColgp_HArray2OfVec.hxx>

#include <Mathematics/Collections/TColgp_Array2OfVec.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_Vec;
class TColgp_Array2OfVec;



class TColgp_HArray2OfVec : public MMgt_TShared
{

public:

  
    TColgp_HArray2OfVec(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TColgp_HArray2OfVec(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const gp_Vec& V);
  
      void Init (const gp_Vec& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const gp_Vec& Value) ;
  
     const  gp_Vec& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      gp_Vec& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TColgp_Array2OfVec& Array2()  const;
  
      TColgp_Array2OfVec& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray2OfVec)

protected:




private: 


  TColgp_Array2OfVec myArray;


};

#define ItemHArray2 gp_Vec
#define ItemHArray2_hxx <Mathematics/Primitives/gp_Vec.hxx>
#define TheArray2 TColgp_Array2OfVec
#define TheArray2_hxx <Mathematics/Collections/TColgp_Array2OfVec.hxx>
#define TCollection_HArray2 TColgp_HArray2OfVec
#define TCollection_HArray2_hxx <Mathematics/Collections/TColgp_HArray2OfVec.hxx>
#define Handle_TCollection_HArray2 Handle_TColgp_HArray2OfVec
#define TCollection_HArray2_Type_() TColgp_HArray2OfVec_Type_()

#include <Foundation/TCollection/TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TColgp_HArray2OfVec_HeaderFile
