// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray2OfBoolean_HeaderFile
#define _TColStd_HArray2OfBoolean_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColStd_HArray2OfBoolean.hxx>

#include <TColStd_Array2OfBoolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColStd_Array2OfBoolean;



class TColStd_HArray2OfBoolean : public MMgt_TShared
{

public:

  
    TColStd_HArray2OfBoolean(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TColStd_HArray2OfBoolean(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Standard_Boolean& V);
  
      void Init (const Standard_Boolean& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_Boolean& Value) ;
  
     const  Standard_Boolean& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Standard_Boolean& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TColStd_Array2OfBoolean& Array2()  const;
  
      TColStd_Array2OfBoolean& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray2OfBoolean)

protected:




private: 


  TColStd_Array2OfBoolean myArray;


};

#define ItemHArray2 Standard_Boolean
#define ItemHArray2_hxx <Foundation/Standard/Standard_Boolean.hxx>
#define TheArray2 TColStd_Array2OfBoolean
#define TheArray2_hxx <TColStd_Array2OfBoolean.hxx>
#define TCollection_HArray2 TColStd_HArray2OfBoolean
#define TCollection_HArray2_hxx <TColStd_HArray2OfBoolean.hxx>
#define Handle_TCollection_HArray2 Handle_TColStd_HArray2OfBoolean
#define TCollection_HArray2_Type_() TColStd_HArray2OfBoolean_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TColStd_HArray2OfBoolean_HeaderFile
