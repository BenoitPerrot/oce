// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_StorageDriver_HeaderFile
#define _PCDM_StorageDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/PCDM/Handle_PCDM_StorageDriver.hxx>

#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/PCDM/PCDM_StoreStatus.hxx>
#include <OCAF/PCDM/PCDM_Writer.hxx>
#include <OCAF/PCDM/Handle_PCDM_Document.hxx>
#include <OCAF/CDM/Handle_CDM_Document.hxx>
#include <Foundation/Storage/Handle_Storage_Schema.hxx>
class Standard_NoSuchObject;
class PCDM_DriverError;
class PCDM_Document;
class CDM_Document;
class PCDM_SequenceOfDocument;
class TCollection_ExtendedString;
class Storage_Schema;
class TColStd_SequenceOfExtendedString;


//! persistent implemention of storage.
//!
//! The  application  must redefine one the two Make()
//! methods.  The first one, if  the application wants to
//! put only one document in the storage file.
//!
//! The  second  method  should  be   redefined  to  put
//! additional document  that   could  be  used by   the
//! retrieval instead of the principal document, depending
//! on the schema used during the retrieval.  For example,
//! a    second     document   could   be     a   standard
//! CDMShape_Document.    This  means   that a   client
//! application will already be able to extract a CDMShape_Document
//! of the file, if the Shape Schema remains unchanged.
class PCDM_StorageDriver : public PCDM_Writer
{

public:

  
  //! raises NotImplemented.
  Standard_EXPORT virtual   Handle(PCDM_Document) Make (const Handle(CDM_Document)& aDocument) ;
  
  //! By default, puts  in the Sequence the  document returns
  //! by the previous Make method.
  Standard_EXPORT virtual   void Make (const Handle(CDM_Document)& aDocument, PCDM_SequenceOfDocument& Documents) ;
  
  Standard_EXPORT virtual   TCollection_ExtendedString SchemaName()  const = 0;
  
  Standard_EXPORT virtual   void LoadExtensions (const Handle(Storage_Schema)& aSchema, const TColStd_SequenceOfExtendedString& Extensions) ;
  
  //! Warning! raises DriverError if an error occurs during inside the
  //! Make method.
  //! stores the content of the Document into a new file.
  //!
  //! by  default  Write will  use Make   method to build a persistent
  //! document and the Schema method to write the persistent document.
  Standard_EXPORT virtual   void Write (const Handle(CDM_Document)& aDocument, const TCollection_ExtendedString& aFileName) ;
  
  Standard_EXPORT   void SetFormat (const TCollection_ExtendedString& aformat) ;
  
  Standard_EXPORT   TCollection_ExtendedString GetFormat()  const;
  
  Standard_EXPORT   Standard_Boolean IsError()  const;
  
  Standard_EXPORT   void SetIsError (const Standard_Boolean theIsError) ;
  
  Standard_EXPORT   PCDM_StoreStatus GetStoreStatus()  const;
  
  Standard_EXPORT   void SetStoreStatus (const PCDM_StoreStatus theStoreStatus) ;




  DEFINE_STANDARD_RTTI(PCDM_StorageDriver)

protected:




private: 


  TCollection_ExtendedString myFormat;
  Standard_Boolean myIsError;
  PCDM_StoreStatus myStoreStatus;


};







#endif // _PCDM_StorageDriver_HeaderFile
