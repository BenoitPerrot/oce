// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignCategory_HeaderFile
#define _IFSelect_SignCategory_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_SignCategory.hxx>

#include <DataExchange/IFSelect/IFSelect_Signature.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
class Standard_Transient;
class Interface_InterfaceModel;


//! This Signature returns the Category of an entity, as recorded
//! in the model
class IFSelect_SignCategory : public IFSelect_Signature
{

public:

  
  //! Returns a SignCategory
  Standard_EXPORT IFSelect_SignCategory();
  
  //! Returns the Signature for a Transient object, as its Category
  //! recorded in the model
  Standard_EXPORT   Standard_CString Value (const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;




  DEFINE_STANDARD_RTTI(IFSelect_SignCategory)

protected:




private: 




};







#endif // _IFSelect_SignCategory_HeaderFile
