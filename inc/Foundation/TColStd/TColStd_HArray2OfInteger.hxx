// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray2OfInteger_HeaderFile
#define _TColStd_HArray2OfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray2OfInteger.hxx>

#include <Foundation/TColStd/TColStd_Array2OfInteger.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColStd_Array2OfInteger;



class TColStd_HArray2OfInteger : public MMgt_TShared
{

public:

  
    TColStd_HArray2OfInteger(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TColStd_HArray2OfInteger(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Standard_Integer& V);
  
      void Init (const Standard_Integer& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_Integer& Value) ;
  
     const  Standard_Integer& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Standard_Integer& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TColStd_Array2OfInteger& Array2()  const;
  
      TColStd_Array2OfInteger& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray2OfInteger)

protected:




private: 


  TColStd_Array2OfInteger myArray;


};

#define ItemHArray2 Standard_Integer
#define ItemHArray2_hxx <Foundation/Standard/Standard_Integer.hxx>
#define TheArray2 TColStd_Array2OfInteger
#define TheArray2_hxx <Foundation/TColStd/TColStd_Array2OfInteger.hxx>
#define TCollection_HArray2 TColStd_HArray2OfInteger
#define TCollection_HArray2_hxx <Foundation/TColStd/TColStd_HArray2OfInteger.hxx>
#define Handle_TCollection_HArray2 Handle_TColStd_HArray2OfInteger
#define TCollection_HArray2_Type_() TColStd_HArray2OfInteger_Type_()

#include <Foundation/TCollection/TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TColStd_HArray2OfInteger_HeaderFile
