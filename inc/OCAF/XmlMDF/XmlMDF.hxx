// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_HeaderFile
#define _XmlMDF_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_TDF_Data.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_Element.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_SRelocationTable.hxx>
#include <Handle_XmlMDF_ADriverTable.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_RRelocationTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class TDF_Data;
class XmlMDF_ADriverTable;
class TDF_Label;
class XmlMDF_MapOfDriver;
class CDM_MessageDriver;
class XmlMDF_ADriver;
class XmlMDF_MapOfDriver;
class XmlMDF_TagSourceDriver;
class XmlMDF_ReferenceDriver;
class XmlMDF_TypeADriverMap;
class XmlMDF_ADriverTable;
class XmlMDF_DataMapNodeOfMapOfDriver;
class XmlMDF_DataMapIteratorOfMapOfDriver;
class XmlMDF_DataMapNodeOfTypeADriverMap;
class XmlMDF_DataMapIteratorOfTypeADriverMap;


//! This package provides classes and methods to
//! translate a transient DF into a persistent one and
//! vice versa.
//!
//! Driver
//!
//! A driver is a tool used to translate a transient
//! attribute into a persistent one and vice versa.
//!
//! Driver Table
//!
//! A driver table is an object building links between
//! object types and object drivers. In the
//! translation process, a driver table is asked to
//! give a translation driver for each current object
//! to be translated.
class XmlMDF 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Translates a transient <aSource> into a persistent
  //! <aTarget>.
  Standard_EXPORT static   void FromTo (const Handle(TDF_Data)& aSource, XmlObjMgt_Element& aTarget, XmlObjMgt_SRelocationTable& aReloc, const Handle(XmlMDF_ADriverTable)& aDrivers) ;
  
  //! Translates a persistent <aSource> into a transient
  //! <aTarget>.
  //! Returns True if completed successfully (False on error)
  Standard_EXPORT static   Standard_Boolean FromTo (const XmlObjMgt_Element& aSource, Handle(TDF_Data)& aTarget, XmlObjMgt_RRelocationTable& aReloc, const Handle(XmlMDF_ADriverTable)& aDrivers) ;
  
  //! Adds the attribute storage drivers to <aDriverSeq>.
  Standard_EXPORT static   void AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable, const Handle(CDM_MessageDriver)& theMessageDriver) ;




protected:





private:

  
  Standard_EXPORT static   Standard_Integer WriteSubTree (const TDF_Label& theLabel, XmlObjMgt_Element& theElement, XmlObjMgt_SRelocationTable& aReloc, const Handle(XmlMDF_ADriverTable)& aDrivers) ;
  
  Standard_EXPORT static   Standard_Integer ReadSubTree (const XmlObjMgt_Element& theElement, const TDF_Label& theLabel, XmlObjMgt_RRelocationTable& aReloc, const XmlMDF_MapOfDriver& aDrivers) ;
  
  Standard_EXPORT static   void CreateDrvMap (const Handle(XmlMDF_ADriverTable)& aDriverTable, XmlMDF_MapOfDriver& anAsciiDriverMap) ;



friend class XmlMDF_ADriver;
friend class XmlMDF_MapOfDriver;
friend class XmlMDF_TagSourceDriver;
friend class XmlMDF_ReferenceDriver;
friend class XmlMDF_TypeADriverMap;
friend class XmlMDF_ADriverTable;
friend class XmlMDF_DataMapNodeOfMapOfDriver;
friend class XmlMDF_DataMapIteratorOfMapOfDriver;
friend class XmlMDF_DataMapNodeOfTypeADriverMap;
friend class XmlMDF_DataMapIteratorOfTypeADriverMap;

};







#endif // _XmlMDF_HeaderFile
