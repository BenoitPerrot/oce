// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_MetaData_HeaderFile
#define _CDM_MetaData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/CDM/Handle_CDM_MetaData.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/CDM/CDM_DocumentPointer.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <OCAF/CDM/Handle_CDM_MetaData.hxx>
#include <OCAF/CDM/CDM_Document.hxx>
#include <OCAF/CDM/Handle_CDM_Document.hxx>
#include <OCAF/CDM/CDM_Application.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <OCAF/CDM/Handle_CDM_Application.hxx>
class Standard_NoSuchObject;
class CDM_Reference;
class CDM_Document;
class TCollection_ExtendedString;
class CDM_MetaDataLookUpTable;
class CDM_Application;



class CDM_MetaData : public Standard_Transient
{

public:

  
  Standard_EXPORT static   Handle(CDM_MetaData) LookUp (const TCollection_ExtendedString& aFolder, const TCollection_ExtendedString& aName, const TCollection_ExtendedString& aPath, const TCollection_ExtendedString& aFileName, const Standard_Boolean ReadOnly) ;
  
  Standard_EXPORT static   Handle(CDM_MetaData) LookUp (const TCollection_ExtendedString& aFolder, const TCollection_ExtendedString& aName, const TCollection_ExtendedString& aPath, const TCollection_ExtendedString& aVersion, const TCollection_ExtendedString& aFileName, const Standard_Boolean ReadOnly) ;
  
  Standard_EXPORT   Standard_Boolean IsRetrieved()  const;
  
  Standard_EXPORT   Handle(CDM_Document) Document()  const;
  
  //! returns the folder in which the meta-data has to be created
  //! or has to be found.
  Standard_EXPORT   TCollection_ExtendedString Folder()  const;
  
  //! returns the name under which the meta-data has to be created
  //! or has to be found.
  Standard_EXPORT   TCollection_ExtendedString Name()  const;
  
  //! returns the version under which the meta-data has to be found.
  //! Warning: raises NoSuchObject from Standard if no Version has been defined
  Standard_EXPORT   TCollection_ExtendedString Version()  const;
  
  //! indicates that the version has to be taken into account when
  //! searching the corresponding meta-data.
  Standard_EXPORT   Standard_Boolean HasVersion()  const;
  
  Standard_EXPORT   TCollection_ExtendedString FileName()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;
Standard_OStream& operator << (Standard_OStream& anOStream);
  
  Standard_EXPORT   TCollection_ExtendedString Path()  const;
  
  Standard_EXPORT   void UnsetDocument() ;
  
  Standard_EXPORT   Standard_Boolean IsReadOnly()  const;
  
  Standard_EXPORT   void SetIsReadOnly() ;
  
  Standard_EXPORT   void UnsetIsReadOnly() ;


friend class CDM_Reference;
friend   
  //! associates database  information to  a document which
  //! has been stored.  The name of the  document is now the
  //! name which has beenused to store the data.
  Standard_EXPORT   void CDM_Document::SetMetaData (const Handle(CDM_MetaData)& aMetaData) ;
friend   
  Standard_EXPORT   void CDM_Application::SetDocumentVersion (const Handle(CDM_Document)& aDocument, const Handle(CDM_MetaData)& aMetaData)  const;


  DEFINE_STANDARD_RTTI(CDM_MetaData)

protected:




private: 

  
  Standard_EXPORT CDM_MetaData(const TCollection_ExtendedString& aFolder, const TCollection_ExtendedString& aName, const TCollection_ExtendedString& aPath, const TCollection_ExtendedString& aFileName, const Standard_Boolean ReadOnly);
  
  Standard_EXPORT CDM_MetaData(const TCollection_ExtendedString& aFolder, const TCollection_ExtendedString& aName, const TCollection_ExtendedString& aPath, const TCollection_ExtendedString& aVersion, const TCollection_ExtendedString& aFileName, const Standard_Boolean ReadOnly);
  
  Standard_EXPORT   void SetDocument (const Handle(CDM_Document)& aDocument) ;
  
  Standard_EXPORT static  const  CDM_MetaDataLookUpTable& LookUpTable() ;
  
  Standard_EXPORT   Standard_Integer DocumentVersion (const Handle(CDM_Application)& anApplication) ;

  Standard_Boolean myIsRetrieved;
  CDM_DocumentPointer myDocument;
  TCollection_ExtendedString myFolder;
  TCollection_ExtendedString myName;
  TCollection_ExtendedString myVersion;
  Standard_Boolean myHasVersion;
  TCollection_ExtendedString myFileName;
  TCollection_ExtendedString myPath;
  Standard_Integer myDocumentVersion;
  Standard_Boolean myIsReadOnly;


};







#endif // _CDM_MetaData_HeaderFile
