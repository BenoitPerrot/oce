// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMXCAFDoc_LocationDriver_HeaderFile
#define _XmlMXCAFDoc_LocationDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_XmlMXCAFDoc_LocationDriver.hxx>

#include <TopTools_LocationSetPtr.hxx>
#include <XmlMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
#include <XmlObjMgt_Element.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;
class TopLoc_Location;


//! Attribute Driver.
class XmlMXCAFDoc_LocationDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMXCAFDoc_LocationDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const XmlObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, XmlObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, XmlObjMgt_Persistent& Target, XmlObjMgt_SRelocationTable& RelocTable)  const;
  
  //! Translate a non storable Location to a storable Location.
  Standard_EXPORT   void Translate (const TopLoc_Location& theLoc, XmlObjMgt_Element& theParent, XmlObjMgt_SRelocationTable& theMap)  const;
  
  //! Translate a storable Location to a non storable Location.
  Standard_EXPORT   Standard_Boolean Translate (const XmlObjMgt_Element& theParent, TopLoc_Location& theLoc, XmlObjMgt_RRelocationTable& theMap)  const;
  
      void SetSharedLocations (const TopTools_LocationSetPtr& theLocations) ;




  DEFINE_STANDARD_RTTI(XmlMXCAFDoc_LocationDriver)

protected:




private: 


  TopTools_LocationSetPtr myLocations;


};


#include <XmlMXCAFDoc_LocationDriver.lxx>





#endif // _XmlMXCAFDoc_LocationDriver_HeaderFile
