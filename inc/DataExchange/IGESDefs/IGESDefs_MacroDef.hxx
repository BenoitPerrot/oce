// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_MacroDef_HeaderFile
#define _IGESDefs_MacroDef_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESDefs/Handle_IGESDefs_MacroDef.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_HArray1OfHAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;
class Interface_HArray1OfHAsciiString;
class Standard_OutOfRange;


//! defines IGES Macro Definition Entity, Type <306> Form <0>
//! in package IGESDefs
//! This Class specifies the action of a specific MACRO.
//! After specification MACRO can be used as necessary
//! by means of MACRO class instance entity.
class IGESDefs_MacroDef : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDefs_MacroDef();
  
  //! This method is used to set the fields of the class
  //! MacroDef
  //! - macro          : MACRO
  //! - entityTypeID   : Entity Type ID
  //! - langStatements : Language Statements
  //! - endMacro       : END MACRO
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& macro, const Standard_Integer entityTypeID, const Handle(Interface_HArray1OfHAsciiString)& langStatements, const Handle(TCollection_HAsciiString)& endMacro) ;
  
  //! returns the number of language statements
  Standard_EXPORT   Standard_Integer NbStatements()  const;
  
  //! returns the MACRO(Literal)
  Standard_EXPORT   Handle(TCollection_HAsciiString) MACRO()  const;
  
  //! returns the Entity Type ID
  Standard_EXPORT   Standard_Integer EntityTypeID()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) LanguageStatement (const Standard_Integer StatNum)  const;
  
  //! returns the ENDM(Literal)
  Standard_EXPORT   Handle(TCollection_HAsciiString) ENDMACRO()  const;




  DEFINE_STANDARD_RTTI(IGESDefs_MacroDef)

protected:




private: 


  Handle(TCollection_HAsciiString) theMACRO;
  Standard_Integer theEntityTypeID;
  Handle(Interface_HArray1OfHAsciiString) theLangStatements;
  Handle(TCollection_HAsciiString) theENDMACRO;


};







#endif // _IGESDefs_MacroDef_HeaderFile
