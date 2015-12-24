// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_RRelocationTable_HeaderFile
#define _MDF_RRelocationTable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/MDF/Handle_MDF_RRelocationTable.hxx>

#include <OCAF/PTColStd/PTColStd_PersistentTransientMap.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <OCAF/PDF/Handle_PDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Handle_Standard_Persistent.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
class PDF_Attribute;
class TDF_Attribute;
class Standard_Persistent;
class Standard_Transient;
class PTColStd_PersistentTransientMap;



class MDF_RRelocationTable : public MMgt_TShared
{

public:

  
  Standard_EXPORT MDF_RRelocationTable(const Standard_Boolean theSelfRelocation = Standard_False);
  
  Standard_EXPORT   void SetSelfRelocation (const Standard_Boolean theStatus = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean IsSelfRelocation()  const;
  
  Standard_EXPORT   void SetRelocation (const Handle(PDF_Attribute)& aSourceAttribute, const Handle(TDF_Attribute)& aTargetAttribute) ;
  
  Standard_EXPORT   Standard_Boolean HasRelocation (const Handle(PDF_Attribute)& aSourceAttribute, Handle(TDF_Attribute)& aTargetAttribute) ;
  
  Standard_EXPORT   void SetOtherRelocation (const Handle(Standard_Persistent)& aSource, const Handle(Standard_Transient)& aTarget) ;
  
  Standard_EXPORT   Standard_Boolean HasOtherRelocation (const Handle(Standard_Persistent)& aSource, Handle(Standard_Transient)& aTarget) ;
  
  Standard_EXPORT   PTColStd_PersistentTransientMap& AttributeTable() ;
  
  Standard_EXPORT   PTColStd_PersistentTransientMap& OtherTable() ;




  DEFINE_STANDARD_RTTI(MDF_RRelocationTable)

protected:




private: 


  PTColStd_PersistentTransientMap myAttributeTable;
  PTColStd_PersistentTransientMap myOtherTable;
  Standard_Boolean mySelfRelocation;


};







#endif // _MDF_RRelocationTable_HeaderFile
