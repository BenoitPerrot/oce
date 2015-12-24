// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_Modifier_HeaderFile
#define _IFSelect_Modifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_Modifier.hxx>

#include <DataExchange/IFSelect/IFSelect_GeneralModifier.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Handle_Interface_Protocol.hxx>
class IFSelect_ContextModif;
class Interface_InterfaceModel;
class Interface_Protocol;
class Interface_CopyTool;


//! This class gives a frame for Actions which can work globally
//! on a File once completely defined (i.e. afterwards)
//!
//! Remark : if no Selection is set as criterium, the Modifier is
//! set to work and should consider all the content of the Model
//! produced.
class IFSelect_Modifier : public IFSelect_GeneralModifier
{

public:

  
  //! This deferred method defines the action specific to each class
  //! of Modifier. It is called by a ModelCopier, once the Model
  //! generated and filled. ModelCopier has already checked the
  //! criteria (Dispatch, Model Rank, Selection) before calling it.
  //!
  //! <ctx> detains informations about original data and selection.
  //! The result of copying, on which modifications are to be done,
  //! is <target>.
  //! <TC> allows to run additional copies as required
  //!
  //! In case of Error, use methods CCheck from the ContextModif
  //! to aknowledge an entity Check or a Global Check with messages
  Standard_EXPORT virtual   void Perform (IFSelect_ContextModif& ctx, const Handle(Interface_InterfaceModel)& target, const Handle(Interface_Protocol)& protocol, Interface_CopyTool& TC)  const = 0;




  DEFINE_STANDARD_RTTI(IFSelect_Modifier)

protected:

  
  //! Calls inherited Initialize, transmits to it the information
  //! <maychangegraph>
  Standard_EXPORT IFSelect_Modifier(const Standard_Boolean maychangegraph);



private: 




};







#endif // _IFSelect_Modifier_HeaderFile
