// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray2OfXYZ_HeaderFile
#define _PColgp_HArray2OfXYZ_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_HArray2OfXYZ.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <PColgp_FieldOfHArray2OfXYZ.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXYZ.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class gp_XYZ;
class PColgp_FieldOfHArray2OfXYZ;
class PColgp_VArrayNodeOfFieldOfHArray2OfXYZ;
class PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ;


class PColgp_HArray2OfXYZ : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HArray2OfXYZ(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT PColgp_HArray2OfXYZ(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const gp_XYZ& V);
  
  Standard_EXPORT   Standard_Integer ColLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
  Standard_EXPORT   Standard_Integer RowLength()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Row, const Standard_Integer Col, const gp_XYZ& Value) ;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
  Standard_EXPORT   gp_XYZ Value (const Standard_Integer Row, const Standard_Integer Col)  const;

PColgp_HArray2OfXYZ( )
{
  
}
PColgp_HArray2OfXYZ(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYZmyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColgp_HArray2OfXYZmyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYZmyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColgp_HArray2OfXYZmyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYZmyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColgp_HArray2OfXYZmyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfXYZmyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColgp_HArray2OfXYZmyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColgp_FieldOfHArray2OfXYZ& _CSFDB_GetPColgp_HArray2OfXYZData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray2OfXYZ)

protected:




private: 

  
  Standard_EXPORT   PColgp_FieldOfHArray2OfXYZ Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer myLowerRow;
  Standard_Integer myLowerCol;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperCol;
  PColgp_FieldOfHArray2OfXYZ Data;


};

#define Item gp_XYZ
#define Item_hxx <Mathematics/Primitives/gp_XYZ.hxx>
#define PCollection_FieldOfHArray2 PColgp_FieldOfHArray2OfXYZ
#define PCollection_FieldOfHArray2_hxx <PColgp_FieldOfHArray2OfXYZ.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfXYZ.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfXYZ.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfXYZ_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfXYZ_Type_()
#define PCollection_HArray2 PColgp_HArray2OfXYZ
#define PCollection_HArray2_hxx <PColgp_HArray2OfXYZ.hxx>
#define Handle_PCollection_HArray2 Handle_PColgp_HArray2OfXYZ
#define PCollection_HArray2_Type_() PColgp_HArray2OfXYZ_Type_()

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




#endif // _PColgp_HArray2OfXYZ_HeaderFile
