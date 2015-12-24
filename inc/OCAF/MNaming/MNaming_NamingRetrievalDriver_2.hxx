// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MNaming_NamingRetrievalDriver_2_HeaderFile
#define _MNaming_NamingRetrievalDriver_2_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/MNaming/Handle_MNaming_NamingRetrievalDriver_2.hxx>

#include <OCAF/MDF/MDF_ARDriver.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/PDF/Handle_PDF_Attribute.hxx>
#include <OCAF/MDF/Handle_MDF_RRelocationTable.hxx>
class CDM_MessageDriver;
class Standard_Type;
class TDF_Attribute;
class PDF_Attribute;
class MDF_RRelocationTable;



class MNaming_NamingRetrievalDriver_2 : public MDF_ARDriver
{

public:

  
  Standard_EXPORT MNaming_NamingRetrievalDriver_2(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  //! Returns the version number from which the driver
  //! is available: 0.
  Standard_EXPORT   Standard_Integer VersionNumber()  const;
  
  //! Returns the type: Naming from PNaming.
  Standard_EXPORT   Handle(Standard_Type) SourceType()  const;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(PDF_Attribute)& Source, const Handle(TDF_Attribute)& Target, const Handle(MDF_RRelocationTable)& RelocTable)  const;




  DEFINE_STANDARD_RTTI(MNaming_NamingRetrievalDriver_2)

protected:




private: 




};







#endif // _MNaming_NamingRetrievalDriver_2_HeaderFile
