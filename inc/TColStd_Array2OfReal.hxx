// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array2OfReal_HeaderFile
#define _TColStd_Array2OfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;



class TColStd_Array2OfReal 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_Array2OfReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT TColStd_Array2OfReal(const Standard_Real& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const Standard_Real& V) ;
  
  Standard_EXPORT   void Destroy() ;
~TColStd_Array2OfReal()
{
  Destroy();
}
  
  Standard_EXPORT  const  TColStd_Array2OfReal& Assign (const TColStd_Array2OfReal& Other) ;
 const  TColStd_Array2OfReal& operator = (const TColStd_Array2OfReal& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_Real& Value) ;
  
     const  Standard_Real& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  Standard_Real& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      Standard_Real& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    Standard_Real& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT TColStd_Array2OfReal(const TColStd_Array2OfReal& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item Standard_Real
#define Array2Item_hxx <Foundation/Standard/Standard_Real.hxx>
#define TCollection_Array2 TColStd_Array2OfReal
#define TCollection_Array2_hxx <TColStd_Array2OfReal.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _TColStd_Array2OfReal_HeaderFile
