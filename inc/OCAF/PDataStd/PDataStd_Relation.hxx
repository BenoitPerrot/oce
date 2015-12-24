// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_Relation_HeaderFile
#define _PDataStd_Relation_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_Relation.hxx>

#include <OCAF/PCollection/Handle_PCollection_HExtendedString.hxx>
#include <OCAF/PDF/Handle_PDF_HAttributeArray1.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class PCollection_HExtendedString;
class PDF_HAttributeArray1;


class PDataStd_Relation : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_Relation();
  
  Standard_EXPORT PDataStd_Relation(const Handle(PCollection_HExtendedString)& name);
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) GetName()  const;
  
  Standard_EXPORT   void SetName (const Handle(PCollection_HExtendedString)& vars) ;
  
  Standard_EXPORT   Handle(PDF_HAttributeArray1) GetVariables()  const;
  
  Standard_EXPORT   void SetVariables (const Handle(PDF_HAttributeArray1)& vars) ;

PDataStd_Relation(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PCollection_HExtendedString) _CSFDB_GetPDataStd_RelationmyName() const { return myName; }
    void _CSFDB_SetPDataStd_RelationmyName(const Handle(PCollection_HExtendedString)& p) { myName = p; }
    Handle(PDF_HAttributeArray1) _CSFDB_GetPDataStd_RelationmyVariables() const { return myVariables; }
    void _CSFDB_SetPDataStd_RelationmyVariables(const Handle(PDF_HAttributeArray1)& p) { myVariables = p; }



  DEFINE_STANDARD_RTTI(PDataStd_Relation)

protected:




private: 


  Handle(PCollection_HExtendedString) myName;
  Handle(PDF_HAttributeArray1) myVariables;


};







#endif // _PDataStd_Relation_HeaderFile
