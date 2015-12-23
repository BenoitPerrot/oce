// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_ByteArray_1_HeaderFile
#define _PDataStd_ByteArray_1_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PDataStd_ByteArray_1.hxx>

#include <Handle_PColStd_HArray1OfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class PColStd_HArray1OfInteger;


class PDataStd_ByteArray_1 : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_ByteArray_1();
  
  Standard_EXPORT   void Set (const Handle(PColStd_HArray1OfInteger)& values) ;
  
  Standard_EXPORT  const  Handle(PColStd_HArray1OfInteger)& Get()  const;
  
  Standard_EXPORT   void SetDelta (const Standard_Boolean delta) ;
  
  Standard_EXPORT   Standard_Boolean GetDelta()  const;

PDataStd_ByteArray_1(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPDataStd_ByteArray_1myValues() const { return myValues; }
    void _CSFDB_SetPDataStd_ByteArray_1myValues(const Handle(PColStd_HArray1OfInteger)& p) { myValues = p; }
    Standard_Boolean _CSFDB_GetPDataStd_ByteArray_1myDelta() const { return myDelta; }
    void _CSFDB_SetPDataStd_ByteArray_1myDelta(const Standard_Boolean p) { myDelta = p; }



  DEFINE_STANDARD_RTTI(PDataStd_ByteArray_1)

protected:




private: 


  Handle(PColStd_HArray1OfInteger) myValues;
  Standard_Boolean myDelta;


};







#endif // _PDataStd_ByteArray_1_HeaderFile
