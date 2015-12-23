// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_IntegerList_HeaderFile
#define _PDataStd_IntegerList_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PDataStd_IntegerList.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_PColStd_HArray1OfInteger.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class PColStd_HArray1OfInteger;


class PDataStd_IntegerList : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_IntegerList();
  
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer index, const Standard_Integer value) ;
  
  Standard_EXPORT   Standard_Integer Value (const Standard_Integer index)  const;
  
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  Standard_EXPORT   Standard_Integer Upper()  const;

PDataStd_IntegerList(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPDataStd_IntegerListmyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_IntegerListmyValue(const Handle(PColStd_HArray1OfInteger)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_IntegerList)

protected:




private: 


  Handle(PColStd_HArray1OfInteger) myValue;


};







#endif // _PDataStd_IntegerList_HeaderFile
