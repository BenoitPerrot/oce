// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectName_HeaderFile
#define _IGESSelect_SelectName_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectName.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectExtract.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class TCollection_HAsciiString;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! Selects Entities which have a given name.
//! Consider Property Name if present, else Short Label, but
//! not the Subscript Number
//! First version : keeps exact name
//! Later : regular expression
class IGESSelect_SelectName : public IFSelect_SelectExtract
{

public:

  
  //! Creates an empty SelectName : every entity is considered
  //! good (no filter active)
  Standard_EXPORT IGESSelect_SelectName();
  
  //! Returns True if Name of Entity complies with Name Filter
  Standard_EXPORT   Standard_Boolean Sort (const Standard_Integer rank, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Sets a Name as a criterium : IGES Entities which have this name
  //! are kept (without regular expression, there should be at most
  //! one). <name> can be regarded as a Text Parameter
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& name) ;
  
  //! Returns the Name used as Filter
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! Returns the Selection criterium : "IGES Entity, Name : <name>"
  Standard_EXPORT   TCollection_AsciiString ExtractLabel()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectName)

protected:




private: 


  Handle(TCollection_HAsciiString) thename;


};







#endif // _IGESSelect_SelectName_HeaderFile
