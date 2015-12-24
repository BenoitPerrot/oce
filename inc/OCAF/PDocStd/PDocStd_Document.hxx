// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDocStd_Document_HeaderFile
#define _PDocStd_Document_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PDocStd/Handle_PDocStd_Document.hxx>

#include <OCAF/PDF/Handle_PDF_Data.hxx>
#include <OCAF/PCDM/PCDM_Document.hxx>
class PDF_Data;


class PDocStd_Document : public PCDM_Document
{

public:

  
  Standard_EXPORT PDocStd_Document();
  
  Standard_EXPORT PDocStd_Document(const Handle(PDF_Data)& data);
  
  Standard_EXPORT   void SetData (const Handle(PDF_Data)& data) ;
  
  Standard_EXPORT   Handle(PDF_Data) GetData()  const;

PDocStd_Document(const Storage_stCONSTclCOM& a) : PCDM_Document(a)
{
  
}
    Handle(PDF_Data) _CSFDB_GetPDocStd_DocumentmyData() const { return myData; }
    void _CSFDB_SetPDocStd_DocumentmyData(const Handle(PDF_Data)& p) { myData = p; }



  DEFINE_STANDARD_RTTI(PDocStd_Document)

protected:




private: 


  Handle(PDF_Data) myData;


};







#endif // _PDocStd_Document_HeaderFile
