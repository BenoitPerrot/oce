// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_ExternalRefFileName_HeaderFile
#define _IGESBasic_ExternalRefFileName_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESBasic/Handle_IGESBasic_ExternalRefFileName.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TCollection_HAsciiString;


//! defines ExternalRefFileName, Type <416> Form <0-2>
//! in package IGESBasic
//! Used when single definition from the reference file is
//! required or for external logical references where an
//! entity in one file relates to an entity in another file
class IGESBasic_ExternalRefFileName : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESBasic_ExternalRefFileName();
  
  //! This method is used to set the fields of the class
  //! ExternalRefFileName
  //! - aFileIdent : External Reference File Identifier
  //! - anExtName  : External Reference Entity Symbolic Name
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aFileIdent, const Handle(TCollection_HAsciiString)& anExtName) ;
  
  //! Changes FormNumber to be 2 if <mode> is True (For Entity)
  //! or 0 if <mode> is False (For Definition)
  Standard_EXPORT   void SetForEntity (const Standard_Boolean mode) ;
  
  //! returns External Reference File Identifier
  Standard_EXPORT   Handle(TCollection_HAsciiString) FileId()  const;
  
  //! returns External Reference Entity Symbolic Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) ReferenceName()  const;




  DEFINE_STANDARD_RTTI(IGESBasic_ExternalRefFileName)

protected:




private: 


  Handle(TCollection_HAsciiString) theExtRefFileIdentifier;
  Handle(TCollection_HAsciiString) theExtRefEntitySymbName;


};







#endif // _IGESBasic_ExternalRefFileName_HeaderFile
