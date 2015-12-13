// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _UTL_HeaderFile
#define _UTL_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Storage/Storage_Error.hxx>
#include <Foundation/Storage/Storage_OpenMode.hxx>
#include <Handle_Storage_Data.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Resource_Manager.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TCollection_ExtendedString;
class Storage_BaseDriver;
class Storage_Data;
class OSD_Path;
class OSD_FileIterator;
class TCollection_AsciiString;
class Standard_GUID;
class Resource_Manager;



class UTL 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   TCollection_ExtendedString xgetenv (const Standard_CString aCString) ;
  
  Standard_EXPORT static   Storage_Error OpenFile (Storage_BaseDriver& aFile, const TCollection_ExtendedString& aName, const Storage_OpenMode aMode) ;
  
  Standard_EXPORT static   void AddToUserInfo (const Handle(Storage_Data)& aData, const TCollection_ExtendedString& anInfo) ;
  
  Standard_EXPORT static   OSD_Path Path (const TCollection_ExtendedString& aFileName) ;
  
  Standard_EXPORT static   TCollection_ExtendedString Disk (const OSD_Path& aPath) ;
  
  Standard_EXPORT static   TCollection_ExtendedString Trek (const OSD_Path& aPath) ;
  
  Standard_EXPORT static   TCollection_ExtendedString Name (const OSD_Path& aPath) ;
  
  Standard_EXPORT static   TCollection_ExtendedString Extension (const OSD_Path& aPath) ;
  
  Standard_EXPORT static   OSD_FileIterator FileIterator (const OSD_Path& aPath, const TCollection_ExtendedString& aMask) ;
  
  Standard_EXPORT static   TCollection_ExtendedString Extension (const TCollection_ExtendedString& aFileName) ;
  
  Standard_EXPORT static   TCollection_ExtendedString LocalHost() ;
  
  Standard_EXPORT static   TCollection_ExtendedString ExtendedString (const TCollection_AsciiString& anAsciiString) ;
  
  Standard_EXPORT static   Standard_GUID GUID (const TCollection_ExtendedString& anXString) ;
  
  Standard_EXPORT static   Standard_Boolean Find (const Handle(Resource_Manager)& aResourceManager, const TCollection_ExtendedString& aResourceName) ;
  
  Standard_EXPORT static   TCollection_ExtendedString Value (const Handle(Resource_Manager)& aResourceManager, const TCollection_ExtendedString& aResourceName) ;
  
  Standard_EXPORT static   Standard_Integer IntegerValue (const TCollection_ExtendedString& anExtendedString) ;
  
  Standard_EXPORT static   Standard_CString CString (const TCollection_ExtendedString& anExtendedString) ;
  
  Standard_EXPORT static   Standard_Boolean IsReadOnly (const TCollection_ExtendedString& aFileName) ;




protected:





private:





};







#endif // _UTL_HeaderFile
