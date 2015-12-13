// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array2OfPnt_HeaderFile
#define _TColgp_Array2OfPnt_HeaderFile

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
class gp_Pnt;



class TColgp_Array2OfPnt 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColgp_Array2OfPnt(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT TColgp_Array2OfPnt(const gp_Pnt& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const gp_Pnt& V) ;
  
  Standard_EXPORT   void Destroy() ;
~TColgp_Array2OfPnt()
{
  Destroy();
}
  
  Standard_EXPORT  const  TColgp_Array2OfPnt& Assign (const TColgp_Array2OfPnt& Other) ;
 const  TColgp_Array2OfPnt& operator = (const TColgp_Array2OfPnt& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const gp_Pnt& Value) ;
  
     const  gp_Pnt& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  gp_Pnt& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      gp_Pnt& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    gp_Pnt& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT TColgp_Array2OfPnt(const TColgp_Array2OfPnt& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item gp_Pnt
#define Array2Item_hxx <gp_Pnt.hxx>
#define TCollection_Array2 TColgp_Array2OfPnt
#define TCollection_Array2_hxx <TColgp_Array2OfPnt.hxx>

#include <Foundation/TCollection/TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _TColgp_Array2OfPnt_HeaderFile
