// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_HArray1OfHAsciiString_HeaderFile
#define _PDataStd_HArray1OfHAsciiString_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PDataStd_HArray1OfHAsciiString.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_PCollection_HAsciiString.hxx>
#include <PDataStd_FieldOfHArray1OfHAsciiString.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString.hxx>
class PCollection_HAsciiString;
class Standard_OutOfRange;
class Standard_RangeError;
class PDataStd_FieldOfHArray1OfHAsciiString;
class PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString;
class PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString;


class PDataStd_HArray1OfHAsciiString : public Standard_Persistent
{

public:

  
  Standard_EXPORT PDataStd_HArray1OfHAsciiString(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PDataStd_HArray1OfHAsciiString(const Standard_Integer Low, const Standard_Integer Up, const Handle(PCollection_HAsciiString)& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PCollection_HAsciiString)& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   Handle(PCollection_HAsciiString) Value (const Standard_Integer Index)  const;

PDataStd_HArray1OfHAsciiString( )
{
  
}
PDataStd_HArray1OfHAsciiString(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPDataStd_HArray1OfHAsciiStringLowerBound() const { return LowerBound; }
    void _CSFDB_SetPDataStd_HArray1OfHAsciiStringLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPDataStd_HArray1OfHAsciiStringUpperBound() const { return UpperBound; }
    void _CSFDB_SetPDataStd_HArray1OfHAsciiStringUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PDataStd_FieldOfHArray1OfHAsciiString& _CSFDB_GetPDataStd_HArray1OfHAsciiStringData() const { return Data; }



  DEFINE_STANDARD_RTTI(PDataStd_HArray1OfHAsciiString)

protected:




private: 

  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHAsciiString Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PDataStd_FieldOfHArray1OfHAsciiString Data;


};

#define Item Handle(PCollection_HAsciiString)
#define Item_hxx <OCAF/PCollection/PCollection_HAsciiString.hxx>
#define PCollection_FieldOfHArray1 PDataStd_FieldOfHArray1OfHAsciiString
#define PCollection_FieldOfHArray1_hxx <PDataStd_FieldOfHArray1OfHAsciiString.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString_Type_()
#define PCollection_HArray1 PDataStd_HArray1OfHAsciiString
#define PCollection_HArray1_hxx <PDataStd_HArray1OfHAsciiString.hxx>
#define Handle_PCollection_HArray1 Handle_PDataStd_HArray1OfHAsciiString
#define PCollection_HArray1_Type_() PDataStd_HArray1OfHAsciiString_Type_()

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




#endif // _PDataStd_HArray1OfHAsciiString_HeaderFile
