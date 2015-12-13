// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColQuantity_HArray2OfLength_HeaderFile
#define _TColQuantity_HArray2OfLength_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColQuantity_HArray2OfLength.hxx>

#include <TColQuantity_Array2OfLength.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Quantity/Quantity_Length.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColQuantity_Array2OfLength;



class TColQuantity_HArray2OfLength : public MMgt_TShared
{

public:

  
    TColQuantity_HArray2OfLength(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TColQuantity_HArray2OfLength(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Quantity_Length& V);
  
      void Init (const Quantity_Length& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Quantity_Length& Value) ;
  
     const  Quantity_Length& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Quantity_Length& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TColQuantity_Array2OfLength& Array2()  const;
  
      TColQuantity_Array2OfLength& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColQuantity_HArray2OfLength)

protected:




private: 


  TColQuantity_Array2OfLength myArray;


};

#define ItemHArray2 Quantity_Length
#define ItemHArray2_hxx <Foundation/Quantity/Quantity_Length.hxx>
#define TheArray2 TColQuantity_Array2OfLength
#define TheArray2_hxx <TColQuantity_Array2OfLength.hxx>
#define TCollection_HArray2 TColQuantity_HArray2OfLength
#define TCollection_HArray2_hxx <TColQuantity_HArray2OfLength.hxx>
#define Handle_TCollection_HArray2 Handle_TColQuantity_HArray2OfLength
#define TCollection_HArray2_Type_() TColQuantity_HArray2OfLength_Type_()

#include <Foundation/TCollection/TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TColQuantity_HArray2OfLength_HeaderFile
