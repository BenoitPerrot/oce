// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_HArray1OfShape1_HeaderFile
#define _PTopoDS_HArray1OfShape1_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PTopoDS/Handle_PTopoDS_HArray1OfShape1.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/PTopoDS/PTopoDS_Shape1.hxx>
#include <OCAF/PTopoDS/PTopoDS_FieldOfHArray1OfShape1.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <OCAF/PTopoDS/Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1.hxx>
class Standard_OutOfRange;
class Standard_RangeError;
class PTopoDS_Shape1;
class PTopoDS_FieldOfHArray1OfShape1;
class PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1;
class PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1;


class PTopoDS_HArray1OfShape1 : public Standard_Persistent
{

public:

  
  Standard_EXPORT PTopoDS_HArray1OfShape1(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PTopoDS_HArray1OfShape1(const Standard_Integer Low, const Standard_Integer Up, const PTopoDS_Shape1& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const PTopoDS_Shape1& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   PTopoDS_Shape1 Value (const Standard_Integer Index)  const;

PTopoDS_HArray1OfShape1( )
{
  
}
PTopoDS_HArray1OfShape1(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPTopoDS_HArray1OfShape1LowerBound() const { return LowerBound; }
    void _CSFDB_SetPTopoDS_HArray1OfShape1LowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPTopoDS_HArray1OfShape1UpperBound() const { return UpperBound; }
    void _CSFDB_SetPTopoDS_HArray1OfShape1UpperBound(const Standard_Integer p) { UpperBound = p; }
    const PTopoDS_FieldOfHArray1OfShape1& _CSFDB_GetPTopoDS_HArray1OfShape1Data() const { return Data; }



  DEFINE_STANDARD_RTTI(PTopoDS_HArray1OfShape1)

protected:




private: 

  
  Standard_EXPORT   PTopoDS_FieldOfHArray1OfShape1 Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PTopoDS_FieldOfHArray1OfShape1 Data;


};

#define Item PTopoDS_Shape1
#define Item_hxx <OCAF/PTopoDS/PTopoDS_Shape1.hxx>
#define PCollection_FieldOfHArray1 PTopoDS_FieldOfHArray1OfShape1
#define PCollection_FieldOfHArray1_hxx <OCAF/PTopoDS/PTopoDS_FieldOfHArray1OfShape1.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <OCAF/PTopoDS/PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <OCAF/PTopoDS/PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <OCAF/PTopoDS/PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <OCAF/PTopoDS/PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1_Type_()
#define PCollection_HArray1 PTopoDS_HArray1OfShape1
#define PCollection_HArray1_hxx <OCAF/PTopoDS/PTopoDS_HArray1OfShape1.hxx>
#define Handle_PCollection_HArray1 Handle_PTopoDS_HArray1OfShape1
#define PCollection_HArray1_Type_() PTopoDS_HArray1OfShape1_Type_()

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




#endif // _PTopoDS_HArray1OfShape1_HeaderFile
