// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_Tool_HeaderFile
#define _STEPConstruct_Tool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/XSControl/Handle_XSControl_WorkSession.hxx>
#include <DataExchange/Transfer/Handle_Transfer_FinderProcess.hxx>
#include <DataExchange/Transfer/Handle_Transfer_TransientProcess.hxx>
#include <DataExchange/Interface/Handle_Interface_HGraph.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
class XSControl_WorkSession;
class Transfer_FinderProcess;
class Transfer_TransientProcess;
class Interface_HGraph;
class Interface_InterfaceModel;
class Interface_Graph;


//! Provides basic functionalities for tools which are intended
//! for encoding/decoding specific STEP constructs
//!
//! It is initialized by WorkSession and allows easy access to
//! its fields and internal data such as Model, TP and FP
//!
//! NOTE: Call to method Graph() with True (or for a first time,
//! if you have updated the model since last computation of model)
//! can take a time, so it is recommended to avoid creation of
//! this (and derived) tool multiple times
class STEPConstruct_Tool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty tool
  Standard_EXPORT STEPConstruct_Tool();
  
  //! Creates a tool and loads it with worksession
  Standard_EXPORT STEPConstruct_Tool(const Handle(XSControl_WorkSession)& WS);
  
  //! Returns currently loaded WorkSession
     const  Handle(XSControl_WorkSession)& WS()  const;
  
  //! Returns current model (Null if not loaded)
      Handle(Interface_InterfaceModel) Model()  const;
  
  //! Returns current graph (recomputing if necessary)
     const  Interface_Graph& Graph (const Standard_Boolean recompute = Standard_False)  const;
  
  //! Returns TransientProcess (reading; Null if not loaded)
     const  Handle(Transfer_TransientProcess)& TransientProcess()  const;
  
  //! Returns FinderProcess (writing; Null if not loaded)
     const  Handle(Transfer_FinderProcess)& FinderProcess()  const;




protected:

  
  //! Load worksession; returns True if succeeded
  //! Returns False if either FinderProcess of TransientProcess
  //! cannot be obtained or are Null
  Standard_EXPORT   Standard_Boolean SetWS (const Handle(XSControl_WorkSession)& WS) ;




private:



  Handle(XSControl_WorkSession) myWS;
  Handle(Transfer_FinderProcess) myFinderProcess;
  Handle(Transfer_TransientProcess) myTransientProcess;
  Handle(Interface_HGraph) myHGraph;


};


#include <DataExchange/STEPConstruct/STEPConstruct_Tool.lxx>





#endif // _STEPConstruct_Tool_HeaderFile
