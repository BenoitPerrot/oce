// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray2OfVec2d_HeaderFile
#define _PColgp_HArray2OfVec2d_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PColgp/Handle_PColgp_HArray2OfVec2d.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <OCAF/PColgp/PColgp_FieldOfHArray2OfVec2d.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <OCAF/PColgp/Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec2d.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class gp_Vec2d;
class PColgp_FieldOfHArray2OfVec2d;
class PColgp_VArrayNodeOfFieldOfHArray2OfVec2d;
class PColgp_VArrayTNodeOfFieldOfHArray2OfVec2d;


class PColgp_HArray2OfVec2d : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HArray2OfVec2d(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT PColgp_HArray2OfVec2d(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const gp_Vec2d& V);
  
  Standard_EXPORT   Standard_Integer ColLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
  Standard_EXPORT   Standard_Integer RowLength()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Row, const Standard_Integer Col, const gp_Vec2d& Value) ;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
  Standard_EXPORT   gp_Vec2d Value (const Standard_Integer Row, const Standard_Integer Col)  const;

PColgp_HArray2OfVec2d( )
{
  
}
PColgp_HArray2OfVec2d(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray2OfVec2dmyLowerRow() const { return myLowerRow; }
    void _CSFDB_SetPColgp_HArray2OfVec2dmyLowerRow(const Standard_Integer p) { myLowerRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfVec2dmyLowerCol() const { return myLowerCol; }
    void _CSFDB_SetPColgp_HArray2OfVec2dmyLowerCol(const Standard_Integer p) { myLowerCol = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfVec2dmyUpperRow() const { return myUpperRow; }
    void _CSFDB_SetPColgp_HArray2OfVec2dmyUpperRow(const Standard_Integer p) { myUpperRow = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray2OfVec2dmyUpperCol() const { return myUpperCol; }
    void _CSFDB_SetPColgp_HArray2OfVec2dmyUpperCol(const Standard_Integer p) { myUpperCol = p; }
    const PColgp_FieldOfHArray2OfVec2d& _CSFDB_GetPColgp_HArray2OfVec2dData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray2OfVec2d)

protected:




private: 

  
  Standard_EXPORT   PColgp_FieldOfHArray2OfVec2d Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer myLowerRow;
  Standard_Integer myLowerCol;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperCol;
  PColgp_FieldOfHArray2OfVec2d Data;


};

#define Item gp_Vec2d
#define Item_hxx <Mathematics/Primitives/gp_Vec2d.hxx>
#define PCollection_FieldOfHArray2 PColgp_FieldOfHArray2OfVec2d
#define PCollection_FieldOfHArray2_hxx <OCAF/PColgp/PColgp_FieldOfHArray2OfVec2d.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfVec2d
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray2OfVec2d.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfVec2d
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray2OfVec2d.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray2 PColgp_VArrayNodeOfFieldOfHArray2OfVec2d
#define PCollection_VArrayNodeOfFieldOfHArray2_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray2OfVec2d.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray2 PColgp_VArrayTNodeOfFieldOfHArray2OfVec2d
#define PCollection_VArrayTNodeOfFieldOfHArray2_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray2OfVec2d.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec2d
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfVec2d_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray2 Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec2d
#define PCollection_VArrayNodeOfFieldOfHArray2_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfVec2d_Type_()
#define PCollection_HArray2 PColgp_HArray2OfVec2d
#define PCollection_HArray2_hxx <OCAF/PColgp/PColgp_HArray2OfVec2d.hxx>
#define Handle_PCollection_HArray2 Handle_PColgp_HArray2OfVec2d
#define PCollection_HArray2_Type_() PColgp_HArray2OfVec2d_Type_()

#include <OCAF/PCollection/PCollection_HArray2.lxx>

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




#endif // _PColgp_HArray2OfVec2d_HeaderFile
