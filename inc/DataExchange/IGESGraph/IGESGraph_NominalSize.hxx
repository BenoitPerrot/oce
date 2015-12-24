// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_NominalSize_HeaderFile
#define _IGESGraph_NominalSize_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_NominalSize.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TCollection_HAsciiString;


//! defines IGESNominalSize, Type <406> Form <13>
//! in package IGESGraph
//!
//! Specifies a value, a name, and optionally a
//! reference to an engineering standard
class IGESGraph_NominalSize : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGraph_NominalSize();
  
  //! This method is used to set the fields of the class
  //! NominalSize
  //! - nbProps           : Number of property values (2 or 3)
  //! - aNominalSizeValue : NominalSize Value
  //! - aNominalSizeName  : NominalSize Name
  //! - aStandardName     : Name of relevant engineering standard
  Standard_EXPORT   void Init (const Standard_Integer nbProps, const Standard_Real aNominalSizeValue, const Handle(TCollection_HAsciiString)& aNominalSizeName, const Handle(TCollection_HAsciiString)& aStandardName) ;
  
  //! returns the number of property values in <me>
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the value of <me>
  Standard_EXPORT   Standard_Real NominalSizeValue()  const;
  
  //! returns the name of <me>
  Standard_EXPORT   Handle(TCollection_HAsciiString) NominalSizeName()  const;
  
  //! returns True if an engineering Standard is defined for <me>
  //! else, returns False
  Standard_EXPORT   Standard_Boolean HasStandardName()  const;
  
  //! returns the name of the relevant engineering standard of <me>
  Standard_EXPORT   Handle(TCollection_HAsciiString) StandardName()  const;




  DEFINE_STANDARD_RTTI(IGESGraph_NominalSize)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Real theNominalSizeValue;
  Handle(TCollection_HAsciiString) theNominalSizeName;
  Handle(TCollection_HAsciiString) theStandardName;


};







#endif // _IGESGraph_NominalSize_HeaderFile
