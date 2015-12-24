// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_CheckCounter_HeaderFile
#define _IFSelect_CheckCounter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_CheckCounter.hxx>

#include <DataExchange/MoniTool/Handle_MoniTool_SignText.hxx>
#include <DataExchange/IFSelect/IFSelect_SignatureList.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
class MoniTool_SignText;
class Interface_CheckIterator;
class Interface_InterfaceModel;


//! A CheckCounter allows to see a CheckList (i.e. CheckIterator)
//! not per entity, its messages, but per message, the entities
//! attached (count and list). Because many messages can be
//! repeated if they are due to systematic errors
class IFSelect_CheckCounter : public IFSelect_SignatureList
{

public:

  
  //! Creates a CheckCounter, empty ready to work
  Standard_EXPORT IFSelect_CheckCounter(const Standard_Boolean withlist = Standard_False);
  
  //! Sets a specific signature
  //! Else, the current SignType (in the model) is used
  Standard_EXPORT   void SetSignature (const Handle(MoniTool_SignText)& sign) ;
  
  //! Returns the Signature;
  Standard_EXPORT   Handle(MoniTool_SignText) Signature()  const;
  
  //! Analyses a CheckIterator according a Model (which detains the
  //! entities for which the CheckIterator has messages), i.e.
  //! counts messages for entities
  //! If <original> is True, does not consider final messages but
  //! those before interpretation (such as inserting variables :
  //! integers, reals, strings)
  //! If <failsonly> is True, only Fails are considered
  //! Remark : global messages are recorded with a Null entity
  Standard_EXPORT   void Analyse (const Interface_CheckIterator& list, const Handle(Interface_InterfaceModel)& model, const Standard_Boolean original = Standard_False, const Standard_Boolean failsonly = Standard_False) ;




  DEFINE_STANDARD_RTTI(IFSelect_CheckCounter)

protected:




private: 


  Handle(MoniTool_SignText) thesign;


};







#endif // _IFSelect_CheckCounter_HeaderFile
