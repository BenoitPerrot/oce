// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_Reference_HeaderFile
#define _CDM_Reference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_CDM_Reference.hxx>

#include <Handle_CDM_Document.hxx>
#include <CDM_DocumentPointer.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_CDM_Application.hxx>
#include <Handle_CDM_MetaData.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
class CDM_Document;
class CDM_Application;
class CDM_MetaData;



class CDM_Reference : public Standard_Transient
{

public:

  
  Standard_EXPORT   Handle(CDM_Document) FromDocument() ;
  
  Standard_EXPORT   Handle(CDM_Document) ToDocument() ;
  
  Standard_EXPORT   Standard_Integer ReferenceIdentifier() ;
  
  Standard_EXPORT   Standard_Integer DocumentVersion()  const;
  
  Standard_EXPORT   Standard_Boolean IsReadOnly()  const;


friend class CDM_Document;


  DEFINE_STANDARD_RTTI(CDM_Reference)

protected:




private: 

  
  Standard_EXPORT CDM_Reference(const Handle(CDM_Document)& aFromDocument, const Handle(CDM_Document)& aToDocument, const Standard_Integer aReferenceIdentifier, const Standard_Integer aToDocumentVersion);
  
  Standard_EXPORT CDM_Reference(const Handle(CDM_Document)& aFromDocument, const Handle(CDM_MetaData)& aMetaData, const Standard_Integer aReferenceIdentifier, const Handle(CDM_Application)& anApplication, const Standard_Integer aToDocumentVersion, const Standard_Boolean UseStorageConfiguration);
  
  Standard_EXPORT   void Update (const Handle(CDM_MetaData)& aMetaData) ;
  
  //! compares the actual document version with the
  //! document version at the creation of the reference
  Standard_EXPORT   Standard_Boolean IsUpToDate()  const;
  
  Standard_EXPORT   void SetIsUpToDate() ;
  
  Standard_EXPORT   void UnsetToDocument (const Handle(CDM_MetaData)& aMetaData, const Handle(CDM_Application)& anApplication) ;
  
  //! returns  true if the  ToDocument has been retrieved
  //! and opened.
  Standard_EXPORT   Standard_Boolean IsOpened()  const;
  
  Standard_EXPORT   Handle(CDM_Document) Document()  const;
  
  Standard_EXPORT   Handle(CDM_MetaData) MetaData()  const;
  
  Standard_EXPORT   Handle(CDM_Application) Application()  const;
  
  Standard_EXPORT   Standard_Boolean UseStorageConfiguration()  const;
  
  Standard_EXPORT   Standard_Boolean IsInSession()  const;
  
  Standard_EXPORT   Standard_Boolean IsStored()  const;

  Handle(CDM_Document) myToDocument;
  CDM_DocumentPointer myFromDocument;
  Standard_Integer myReferenceIdentifier;
  Handle(CDM_Application) myApplication;
  Handle(CDM_MetaData) myMetaData;
  Standard_Integer myDocumentVersion;
  Standard_Boolean myUseStorageConfiguration;


};







#endif // _CDM_Reference_HeaderFile
