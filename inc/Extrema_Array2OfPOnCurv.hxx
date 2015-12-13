// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_Array2OfPOnCurv_HeaderFile
#define _Extrema_Array2OfPOnCurv_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Extrema_POnCurv;



class Extrema_Array2OfPOnCurv 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_Array2OfPOnCurv(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT Extrema_Array2OfPOnCurv(const Extrema_POnCurv& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const Extrema_POnCurv& V) ;
  
  Standard_EXPORT   void Destroy() ;
~Extrema_Array2OfPOnCurv()
{
  Destroy();
}
  
  Standard_EXPORT  const  Extrema_Array2OfPOnCurv& Assign (const Extrema_Array2OfPOnCurv& Other) ;
 const  Extrema_Array2OfPOnCurv& operator = (const Extrema_Array2OfPOnCurv& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Extrema_POnCurv& Value) ;
  
     const  Extrema_POnCurv& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  Extrema_POnCurv& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      Extrema_POnCurv& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    Extrema_POnCurv& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT Extrema_Array2OfPOnCurv(const Extrema_Array2OfPOnCurv& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item Extrema_POnCurv
#define Array2Item_hxx <Extrema_POnCurv.hxx>
#define TCollection_Array2 Extrema_Array2OfPOnCurv
#define TCollection_Array2_hxx <Extrema_Array2OfPOnCurv.hxx>

#include <Foundation/TCollection/TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _Extrema_Array2OfPOnCurv_HeaderFile
