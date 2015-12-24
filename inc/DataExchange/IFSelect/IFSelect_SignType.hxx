// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignType_HeaderFile
#define _IFSelect_SignType_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_SignType.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IFSelect/IFSelect_Signature.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
class Standard_Transient;
class Interface_InterfaceModel;


//! This Signature returns the cdl Type of an entity, under two
//! forms :
//! - complete dynamic type (package and class)
//! - class type, without package name
class IFSelect_SignType : public IFSelect_Signature
{

public:

  
  //! Returns a SignType
  //! <nopk> false (D) : complete dynamic type (name = Dynamic Type)
  //! <nopk> true : class type without pk (name = Class Type)
  Standard_EXPORT IFSelect_SignType(const Standard_Boolean nopk = Standard_False);
  
  //! Returns the Signature for a Transient object, as its Dynamic
  //! Type, with or without package name, according starting option
  Standard_EXPORT   Standard_CString Value (const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;




  DEFINE_STANDARD_RTTI(IFSelect_SignType)

protected:




private: 


  Standard_Boolean thenopk;


};







#endif // _IFSelect_SignType_HeaderFile
