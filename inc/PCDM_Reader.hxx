// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_Reader_HeaderFile
#define _PCDM_Reader_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_PCDM_Reader.hxx>

#include <PCDM_ReaderStatus.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Handle_CDM_Document.hxx>
#include <Handle_CDM_Application.hxx>
class PCDM_DriverError;
class CDM_Document;
class TCollection_ExtendedString;
class CDM_Application;



class PCDM_Reader : public Standard_Transient
{

public:

  
  //! this method is called by the framework before the read method.
  Standard_EXPORT virtual   Handle(CDM_Document) CreateDocument()  = 0;
  
  //! retrieves the content of the file into a new Document.
  Standard_EXPORT virtual   void Read (const TCollection_ExtendedString& aFileName, const Handle(CDM_Document)& aNewDocument, const Handle(CDM_Application)& anApplication)  = 0;
  
      PCDM_ReaderStatus GetStatus()  const;




  DEFINE_STANDARD_RTTI(PCDM_Reader)

protected:


  PCDM_ReaderStatus myReaderStatus;


private: 




};


#include <PCDM_Reader.lxx>





#endif // _PCDM_Reader_HeaderFile
