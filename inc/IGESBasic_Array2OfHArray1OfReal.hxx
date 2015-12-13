// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_Array2OfHArray1OfReal_HeaderFile
#define _IGESBasic_Array2OfHArray1OfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColStd_HArray1OfReal;



class IGESBasic_Array2OfHArray1OfReal 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IGESBasic_Array2OfHArray1OfReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT IGESBasic_Array2OfHArray1OfReal(const Handle(TColStd_HArray1OfReal)& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const Handle(TColStd_HArray1OfReal)& V) ;
  
  Standard_EXPORT   void Destroy() ;
~IGESBasic_Array2OfHArray1OfReal()
{
  Destroy();
}
  
  Standard_EXPORT  const  IGESBasic_Array2OfHArray1OfReal& Assign (const IGESBasic_Array2OfHArray1OfReal& Other) ;
 const  IGESBasic_Array2OfHArray1OfReal& operator = (const IGESBasic_Array2OfHArray1OfReal& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Handle(TColStd_HArray1OfReal)& Value) ;
  
     const  Handle(TColStd_HArray1OfReal)& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  Handle(TColStd_HArray1OfReal)& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      Handle(TColStd_HArray1OfReal)& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    Handle(TColStd_HArray1OfReal)& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT IGESBasic_Array2OfHArray1OfReal(const IGESBasic_Array2OfHArray1OfReal& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item Handle(TColStd_HArray1OfReal)
#define Array2Item_hxx <TColStd_HArray1OfReal.hxx>
#define TCollection_Array2 IGESBasic_Array2OfHArray1OfReal
#define TCollection_Array2_hxx <IGESBasic_Array2OfHArray1OfReal.hxx>

#include <Foundation/TCollection/TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _IGESBasic_Array2OfHArray1OfReal_HeaderFile
