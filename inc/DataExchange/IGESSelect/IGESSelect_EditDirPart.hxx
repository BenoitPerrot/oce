// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_EditDirPart_HeaderFile
#define _IGESSelect_EditDirPart_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESSelect/Handle_IGESSelect_EditDirPart.hxx>

#include <DataExchange/IFSelect/IFSelect_Editor.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_EditForm.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
class TCollection_AsciiString;
class IFSelect_EditForm;
class TCollection_HAsciiString;
class Standard_Transient;
class Interface_InterfaceModel;


//! This class is aimed to display and edit the Directory Part of
//! an IGESEntity
class IGESSelect_EditDirPart : public IFSelect_Editor
{

public:

  
  Standard_EXPORT IGESSelect_EditDirPart();
  
  Standard_EXPORT   TCollection_AsciiString Label()  const;
  
  Standard_EXPORT   Standard_Boolean Recognize (const Handle(IFSelect_EditForm)& form)  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) StringValue (const Handle(IFSelect_EditForm)& form, const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Boolean Load (const Handle(IFSelect_EditForm)& form, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  Standard_EXPORT virtual   Standard_Boolean Update (const Handle(IFSelect_EditForm)& form, const Standard_Integer num, const Handle(TCollection_HAsciiString)& newval, const Standard_Boolean enforce)  const;
  
  Standard_EXPORT   Standard_Boolean Apply (const Handle(IFSelect_EditForm)& form, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;




  DEFINE_STANDARD_RTTI(IGESSelect_EditDirPart)

protected:




private: 




};







#endif // _IGESSelect_EditDirPart_HeaderFile
