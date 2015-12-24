// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_ReadWriter_1_HeaderFile
#define _PCDM_ReadWriter_1_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/PCDM/Handle_PCDM_ReadWriter_1.hxx>

#include <OCAF/PCDM/PCDM_ReadWriter.hxx>
#include <Foundation/Storage/Handle_Storage_Data.hxx>
#include <OCAF/CDM/Handle_CDM_Document.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
class TCollection_AsciiString;
class Storage_Data;
class CDM_Document;
class TCollection_ExtendedString;
class CDM_MessageDriver;
class PCDM_SequenceOfReference;
class TColStd_SequenceOfExtendedString;



class PCDM_ReadWriter_1 : public PCDM_ReadWriter
{

public:

  
  Standard_EXPORT PCDM_ReadWriter_1();
  
  //! returns PCDM_ReadWriter_1.
  Standard_EXPORT   TCollection_AsciiString Version()  const;
  
  Standard_EXPORT   void WriteReferenceCounter (const Handle(Storage_Data)& aData, const Handle(CDM_Document)& aDocument)  const;
  
  Standard_EXPORT   void WriteReferences (const Handle(Storage_Data)& aData, const Handle(CDM_Document)& aDocument, const TCollection_ExtendedString& theReferencerFileName)  const;
  
  Standard_EXPORT   void WriteExtensions (const Handle(Storage_Data)& aData, const Handle(CDM_Document)& aDocument)  const;
  
  Standard_EXPORT   void WriteVersion (const Handle(Storage_Data)& aData, const Handle(CDM_Document)& aDocument)  const;
  
  Standard_EXPORT   Standard_Integer ReadReferenceCounter (const TCollection_ExtendedString& aFileName, const Handle(CDM_MessageDriver)& theMsgDriver)  const;
  
  Standard_EXPORT   void ReadReferences (const TCollection_ExtendedString& aFileName, PCDM_SequenceOfReference& theReferences, const Handle(CDM_MessageDriver)& theMsgDriver)  const;
  
  Standard_EXPORT   void ReadExtensions (const TCollection_ExtendedString& aFileName, TColStd_SequenceOfExtendedString& theExtensions, const Handle(CDM_MessageDriver)& theMsgDriver)  const;
  
  Standard_EXPORT   Standard_Integer ReadDocumentVersion (const TCollection_ExtendedString& aFileName, const Handle(CDM_MessageDriver)& theMsgDriver)  const;




  DEFINE_STANDARD_RTTI(PCDM_ReadWriter_1)

protected:




private: 

  
  Standard_EXPORT static   void ReadUserInfo (const TCollection_ExtendedString& aFileName, const TCollection_AsciiString& Start, const TCollection_AsciiString& End, TColStd_SequenceOfExtendedString& theUserInfo, const Handle(CDM_MessageDriver)& theMsgDriver) ;



};







#endif // _PCDM_ReadWriter_1_HeaderFile
