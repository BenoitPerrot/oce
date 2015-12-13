// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HArray2OfInteger_HeaderFile
#define _PColStd_HArray2OfInteger_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColStd_HArray2OfInteger.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <PColStd_FieldOfHArray2OfInteger.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class PColStd_FieldOfHArray2OfInteger;
class PColStd_VArrayNodeOfFieldOfHArray2OfInteger;
class PColStd_VArrayTNodeOfFieldOfHArray2OfInteger;


class PColStd_HArray2OfInteger : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColStd_HArray2OfInteger(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT PColStd_HArray2OfInteger(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Standard_Integer& V);
  
  Standard_EXPORT   Standard_Integer ColLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
  Standard_EXPORT   Standard_Integer RowLength()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_Integer& Value) ;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
  Standard_EXPORT   Standard_Integer Value (const Standard_Integer Row, const Standard_Integer Col)  const;

PColStd_HArray2OfInteger( )
{
  
}
PColStd_HArray2OfInteger(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_HArray2OfIntegermyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColStd_HArray2OfIntegermyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfIntegermyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColStd_HArray2OfIntegermyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfIntegermyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColStd_HArray2OfIntegermyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfIntegermyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColStd_HArray2OfIntegermyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColStd_FieldOfHArray2OfInteger& _CSFDB_GetPColStd_HArray2OfIntegerData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColStd_HArray2OfInteger)

protected:




private: 

  
  Standard_EXPORT   PColStd_FieldOfHArray2OfInteger Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer myLowerRow;
  Standard_Integer myLowerCol;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperCol;
  PColStd_FieldOfHArray2OfInteger Data;


};

#define Item Standard_Integer
#define Item_hxx <Foundation/Standard/Standard_Integer.hxx>
#define PCollection_FieldOfHArray2 PColStd_FieldOfHArray2OfInteger
#define PCollection_FieldOfHArray2_hxx <PColStd_FieldOfHArray2OfInteger.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColStd_VArrayNodeOfFieldOfHArray2OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfInteger.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColStd_VArrayTNodeOfFieldOfHArray2OfInteger
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfInteger.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColStd_VArrayNodeOfFieldOfHArray2OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfInteger.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColStd_VArrayTNodeOfFieldOfHArray2OfInteger
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfInteger.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfInteger_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfInteger_Type_()
#define PCollection_HArray2 PColStd_HArray2OfInteger
#define PCollection_HArray2_hxx <PColStd_HArray2OfInteger.hxx>
#define Handle_PCollection_HArray2 Handle_PColStd_HArray2OfInteger
#define PCollection_HArray2_Type_() PColStd_HArray2OfInteger_Type_()

#include <PCollection_HArray2.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray2
#undef PCollection_FieldOfHArray2_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray2
#undef PCollection_VArrayTNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray2
#undef PCollection_VArrayTNodeOfFieldOfHArray2_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray2
#undef PCollection_VArrayNodeOfFieldOfHArray2_Type_
#undef PCollection_HArray2
#undef PCollection_HArray2_hxx
#undef Handle_PCollection_HArray2
#undef PCollection_HArray2_Type_




#endif // _PColStd_HArray2OfInteger_HeaderFile
