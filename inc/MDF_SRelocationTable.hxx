// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_SRelocationTable_HeaderFile
#define _MDF_SRelocationTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MDF_SRelocationTable.hxx>

#include <PTColStd_TransientPersistentMap.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_PDF_Attribute.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Standard_Persistent.hxx>
class TDF_Attribute;
class PDF_Attribute;
class Standard_Transient;
class Standard_Persistent;
class PTColStd_TransientPersistentMap;



class MDF_SRelocationTable : public MMgt_TShared
{

public:

  
  Standard_EXPORT MDF_SRelocationTable(const Standard_Boolean theSelfRelocation = Standard_False);
  
  Standard_EXPORT   void SetSelfRelocation (const Standard_Boolean theStatus = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean IsSelfRelocation()  const;
  
  Standard_EXPORT   void SetRelocation (const Handle(TDF_Attribute)& aSourceAttribute, const Handle(PDF_Attribute)& aTargetAttribute) ;
  
  Standard_EXPORT   Standard_Boolean HasRelocation (const Handle(TDF_Attribute)& aSourceAttribute, Handle(PDF_Attribute)& aTargetAttribute) ;
  
  Standard_EXPORT   void SetOtherRelocation (const Handle(Standard_Transient)& aSource, const Handle(Standard_Persistent)& aTarget) ;
  
  Standard_EXPORT   Standard_Boolean HasOtherRelocation (const Handle(Standard_Transient)& aSource, Handle(Standard_Persistent)& aTarget) ;
  
  Standard_EXPORT   PTColStd_TransientPersistentMap& AttributeTable() ;
  
  Standard_EXPORT   PTColStd_TransientPersistentMap& OtherTable() ;




  DEFINE_STANDARD_RTTI(MDF_SRelocationTable)

protected:




private: 


  PTColStd_TransientPersistentMap myAttributeTable;
  PTColStd_TransientPersistentMap myOtherTable;
  Standard_Boolean mySelfRelocation;


};







#endif // _MDF_SRelocationTable_HeaderFile
