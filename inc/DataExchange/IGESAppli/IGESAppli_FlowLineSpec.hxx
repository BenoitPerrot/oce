// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_FlowLineSpec_HeaderFile
#define _IGESAppli_FlowLineSpec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESAppli/Handle_IGESAppli_FlowLineSpec.hxx>

#include <DataExchange/Interface/Handle_Interface_HArray1OfHAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
class Interface_HArray1OfHAsciiString;
class Standard_OutOfRange;
class TCollection_HAsciiString;


//! defines FlowLineSpec, Type <406> Form <14>
//! in package IGESAppli
//! Attaches one or more text strings to entities being
//! used to represent a flow line
class IGESAppli_FlowLineSpec : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_FlowLineSpec();
  
  //! This method is used to set the fields of the class
  //! FlowLineSpec
  //! - allProperties : primary flow line specification and modifiers
  Standard_EXPORT   void Init (const Handle(Interface_HArray1OfHAsciiString)& allProperties) ;
  
  //! returns the number of property values
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns primary flow line specification name
  Standard_EXPORT   Handle(TCollection_HAsciiString) FlowLineName()  const;
  
  //! returns specified modifier element
  //! raises exception if Index <= 1 or Index > NbPropertyValues
  Standard_EXPORT   Handle(TCollection_HAsciiString) Modifier (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESAppli_FlowLineSpec)

protected:




private: 


  Handle(Interface_HArray1OfHAsciiString) theNameAndModifiers;


};







#endif // _IGESAppli_FlowLineSpec_HeaderFile
