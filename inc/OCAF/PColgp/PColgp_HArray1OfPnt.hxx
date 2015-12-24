// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray1OfPnt_HeaderFile
#define _PColgp_HArray1OfPnt_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PColgp/Handle_PColgp_HArray1OfPnt.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <OCAF/PColgp/PColgp_FieldOfHArray1OfPnt.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <OCAF/PColgp/Handle_PColgp_VArrayNodeOfFieldOfHArray1OfPnt.hxx>
class Standard_OutOfRange;
class Standard_RangeError;
class gp_Pnt;
class PColgp_FieldOfHArray1OfPnt;
class PColgp_VArrayNodeOfFieldOfHArray1OfPnt;
class PColgp_VArrayTNodeOfFieldOfHArray1OfPnt;


class PColgp_HArray1OfPnt : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HArray1OfPnt(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PColgp_HArray1OfPnt(const Standard_Integer Low, const Standard_Integer Up, const gp_Pnt& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Pnt& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   gp_Pnt Value (const Standard_Integer Index)  const;

PColgp_HArray1OfPnt( )
{
  
}
PColgp_HArray1OfPnt(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray1OfPntLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColgp_HArray1OfPntLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray1OfPntUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColgp_HArray1OfPntUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColgp_FieldOfHArray1OfPnt& _CSFDB_GetPColgp_HArray1OfPntData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray1OfPnt)

protected:




private: 

  
  Standard_EXPORT   PColgp_FieldOfHArray1OfPnt Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PColgp_FieldOfHArray1OfPnt Data;


};

#define Item gp_Pnt
#define Item_hxx <Mathematics/Primitives/gp_Pnt.hxx>
#define PCollection_FieldOfHArray1 PColgp_FieldOfHArray1OfPnt
#define PCollection_FieldOfHArray1_hxx <OCAF/PColgp/PColgp_FieldOfHArray1OfPnt.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfPnt
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray1OfPnt.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfPnt
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray1OfPnt.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfPnt
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray1OfPnt.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfPnt
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray1OfPnt.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfPnt
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfPnt_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfPnt
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfPnt_Type_()
#define PCollection_HArray1 PColgp_HArray1OfPnt
#define PCollection_HArray1_hxx <OCAF/PColgp/PColgp_HArray1OfPnt.hxx>
#define Handle_PCollection_HArray1 Handle_PColgp_HArray1OfPnt
#define PCollection_HArray1_Type_() PColgp_HArray1OfPnt_Type_()

#include <OCAF/PCollection/PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_




#endif // _PColgp_HArray1OfPnt_HeaderFile
