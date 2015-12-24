// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_RealList_HeaderFile
#define _PDataStd_RealList_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_RealList.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/PColStd/Handle_PColStd_HArray1OfReal.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class PColStd_HArray1OfReal;


class PDataStd_RealList : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_RealList();
  
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer index, const Standard_Real value) ;
  
  Standard_EXPORT   Standard_Real Value (const Standard_Integer index)  const;
  
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  Standard_EXPORT   Standard_Integer Upper()  const;

PDataStd_RealList(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPDataStd_RealListmyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_RealListmyValue(const Handle(PColStd_HArray1OfReal)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_RealList)

protected:




private: 


  Handle(PColStd_HArray1OfReal) myValue;


};







#endif // _PDataStd_RealList_HeaderFile
