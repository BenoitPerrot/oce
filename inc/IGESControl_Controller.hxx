// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESControl_Controller_HeaderFile
#define _IGESControl_Controller_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESControl_Controller.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <XSControl_Controller.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <Handle_Transfer_ActorOfTransientProcess.hxx>
#include <DataExchange/IFSelect/IFSelect_ReturnStatus.hxx>
#include <Handle_Transfer_FinderProcess.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_XSControl_WorkSession.hxx>
class Interface_InterfaceModel;
class Transfer_ActorOfTransientProcess;
class TopoDS_Shape;
class Transfer_FinderProcess;
class XSControl_WorkSession;


//! Controller for IGES-5.1
class IGESControl_Controller : public XSControl_Controller
{

public:

  
  //! Initializes the use of IGES Norm (the first time) and returns
  //! a Controller for IGES-5.1
  //! If <modefnes> is True, sets it to internal FNES format
  Standard_EXPORT IGESControl_Controller(const Standard_Boolean modefnes = Standard_False);
  
  //! Creates a new empty Model ready to receive data of the Norm.
  //! It is taken from IGES Template Model
  Standard_EXPORT   Handle(Interface_InterfaceModel) NewModel()  const;
  
  //! Returns the Actor for Read attached to the pair (norm,appli)
  //! It is an Actor from IGESToBRep, adapted from an IGESModel :
  //! Unit, tolerances
  Standard_EXPORT   Handle(Transfer_ActorOfTransientProcess) ActorRead (const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Takes one Shape and transfers it to the InterfaceModel
  //! (already created by NewModel for instance)
  //! <modetrans> is to be interpreted by each kind of XstepAdaptor
  //! Returns a status : 0 OK  1 No result  2 Fail  -1 bad modeshape
  //! -2 bad model (requires an IGESModel)
  //! modeshape : 0  groupe of face (version < 5.1)
  //! 1  BREP-version 5.1 of IGES
  Standard_EXPORT virtual   IFSelect_ReturnStatus TransferWriteShape (const TopoDS_Shape& shape, const Handle(Transfer_FinderProcess)& FP, const Handle(Interface_InterfaceModel)& model, const Standard_Integer modetrans = 0)  const;
  
  //! Standard Initialisation. It creates a Controller for IGES and
  //! records it to various names, available to select it later
  //! Returns True when done, False if could not be done
  //! Also, it creates and records an Adaptor for FNES
  Standard_EXPORT static   Standard_Boolean Init() ;
  
  Standard_EXPORT virtual   void Customise (Handle(XSControl_WorkSession)& WS) ;




  DEFINE_STANDARD_RTTI(IGESControl_Controller)

protected:




private: 


  Standard_Boolean themode;


};







#endif // _IGESControl_Controller_HeaderFile
