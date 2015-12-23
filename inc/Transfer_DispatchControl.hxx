// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_DispatchControl_HeaderFile
#define _Transfer_DispatchControl_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Transfer_DispatchControl.hxx>

#include <Handle_Transfer_TransientProcess.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Interface_CopyControl.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Transfer_TransientProcess;
class Interface_InterfaceModel;
class Interface_InterfaceError;
class Standard_Transient;


//! This is an auxiliary class for TransferDispatch, which allows
//! to record simple copies, as CopyControl from Interface, but
//! based on a TransientProcess. Hence, it allows in addition
//! more actions (such as recording results of adaptations)
class Transfer_DispatchControl : public Interface_CopyControl
{

public:

  
  //! Creates the DispatchControl, ready for use
  Standard_EXPORT Transfer_DispatchControl(const Handle(Interface_InterfaceModel)& model, const Handle(Transfer_TransientProcess)& TP);
  
  //! Returns the content of the DispatchControl : it can be used
  //! for a direct call, if the basic methods do not suffice
  Standard_EXPORT  const  Handle(Transfer_TransientProcess)& TransientProcess()  const;
  
  //! Returns the Model from which the transfer is to be done
  Standard_EXPORT  const  Handle(Interface_InterfaceModel)& StartingModel()  const;
  
  //! Clears the List of Copied Results
  Standard_EXPORT   void Clear() ;
  
  //! Binds a (Transient) Result to a (Transient) Starting Entity
  Standard_EXPORT   void Bind (const Handle(Standard_Transient)& ent, const Handle(Standard_Transient)& res) ;
  
  //! Searches for the Result bound to a Starting Entity
  //! If Found, returns True and fills <res>
  //! Else, returns False and nullifies <res>
  Standard_EXPORT   Standard_Boolean Search (const Handle(Standard_Transient)& ent, Handle(Standard_Transient)& res)  const;




  DEFINE_STANDARD_RTTI(Transfer_DispatchControl)

protected:




private: 


  Handle(Transfer_TransientProcess) theTP;
  Handle(Interface_InterfaceModel) themodel;


};







#endif // _Transfer_DispatchControl_HeaderFile
