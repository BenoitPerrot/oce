// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_ExtStringArray_HeaderFile
#define _PDataStd_ExtStringArray_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_ExtStringArray.hxx>

#include <OCAF/PCollection/Handle_PCollection_HExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/PColStd/Handle_PColStd_HArray1OfExtendedString.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class PCollection_HExtendedString;
class PColStd_HArray1OfExtendedString;


class PDataStd_ExtStringArray : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_ExtStringArray();
  
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PCollection_HExtendedString)& Value) ;
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) Value (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  Standard_EXPORT   Standard_Integer Upper()  const;

PDataStd_ExtStringArray(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_ExtStringArraymyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_ExtStringArraymyValue(const Handle(PColStd_HArray1OfExtendedString)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_ExtStringArray)

protected:




private: 


  Handle(PColStd_HArray1OfExtendedString) myValue;


};







#endif // _PDataStd_ExtStringArray_HeaderFile
