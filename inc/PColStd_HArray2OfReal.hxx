// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HArray2OfReal_HeaderFile
#define _PColStd_HArray2OfReal_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColStd_HArray2OfReal.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <PColStd_FieldOfHArray2OfReal.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfReal.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class PColStd_FieldOfHArray2OfReal;
class PColStd_VArrayNodeOfFieldOfHArray2OfReal;
class PColStd_VArrayTNodeOfFieldOfHArray2OfReal;


class PColStd_HArray2OfReal : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColStd_HArray2OfReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT PColStd_HArray2OfReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Standard_Real& V);
  
  Standard_EXPORT   Standard_Integer ColLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
  Standard_EXPORT   Standard_Integer RowLength()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_Real& Value) ;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
  Standard_EXPORT   Standard_Real Value (const Standard_Integer Row, const Standard_Integer Col)  const;

PColStd_HArray2OfReal( )
{
  
}
PColStd_HArray2OfReal(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_HArray2OfRealmyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColStd_HArray2OfRealmyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfRealmyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColStd_HArray2OfRealmyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfRealmyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColStd_HArray2OfRealmyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray2OfRealmyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColStd_HArray2OfRealmyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColStd_FieldOfHArray2OfReal& _CSFDB_GetPColStd_HArray2OfRealData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColStd_HArray2OfReal)

protected:




private: 

  
  Standard_EXPORT   PColStd_FieldOfHArray2OfReal Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer myLowerRow;
  Standard_Integer myLowerCol;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperCol;
  PColStd_FieldOfHArray2OfReal Data;


};

#define Item Standard_Real
#define Item_hxx <Foundation/Standard/Standard_Real.hxx>
#define PCollection_FieldOfHArray2 PColStd_FieldOfHArray2OfReal
#define PCollection_FieldOfHArray2_hxx <PColStd_FieldOfHArray2OfReal.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColStd_VArrayNodeOfFieldOfHArray2OfReal
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfReal.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColStd_VArrayTNodeOfFieldOfHArray2OfReal
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfReal.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColStd_VArrayNodeOfFieldOfHArray2OfReal
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfReal.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColStd_VArrayTNodeOfFieldOfHArray2OfReal
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfReal.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColStd_VArrayNodeOfFieldOfHArray2OfReal
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfReal_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColStd_VArrayNodeOfFieldOfHArray2OfReal
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfReal_Type_()
#define PCollection_HArray2 PColStd_HArray2OfReal
#define PCollection_HArray2_hxx <PColStd_HArray2OfReal.hxx>
#define Handle_PCollection_HArray2 Handle_PColStd_HArray2OfReal
#define PCollection_HArray2_Type_() PColStd_HArray2OfReal_Type_()

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




#endif // _PColStd_HArray2OfReal_HeaderFile
