// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_ActorOfFinderProcess_HeaderFile
#define _Transfer_ActorOfFinderProcess_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/Transfer/Handle_Transfer_ActorOfFinderProcess.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Transfer/Transfer_ActorOfProcessForFinder.hxx>
#include <DataExchange/Transfer/Handle_Transfer_Binder.hxx>
#include <DataExchange/Transfer/Handle_Transfer_Finder.hxx>
#include <DataExchange/Transfer/Handle_Transfer_ProcessForFinder.hxx>
#include <DataExchange/Transfer/Handle_Transfer_FinderProcess.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
class Transfer_Binder;
class Transfer_Finder;
class Transfer_ProcessForFinder;
class Transfer_FinderProcess;
class Standard_Transient;


//! The original class was renamed. Compatibility only
//!
//! ModeTrans : a simple way of transmitting a transfer mode from
//! a user. To be interpreted for each norm
class Transfer_ActorOfFinderProcess : public Transfer_ActorOfProcessForFinder
{

public:

  
  Standard_EXPORT Transfer_ActorOfFinderProcess();
  
  //! Returns the Transfer Mode, modifiable
  Standard_EXPORT   Standard_Integer& ModeTrans() ;
  
  Standard_EXPORT virtual   Handle(Transfer_Binder) Transferring (const Handle(Transfer_Finder)& start, const Handle(Transfer_ProcessForFinder)& TP) ;
  
  Standard_EXPORT virtual   Handle(Transfer_Binder) Transfer (const Handle(Transfer_Finder)& start, const Handle(Transfer_FinderProcess)& TP) ;
  
  Standard_EXPORT virtual   Handle(Standard_Transient) TransferTransient (const Handle(Standard_Transient)& start, const Handle(Transfer_FinderProcess)& TP) ;




  DEFINE_STANDARD_RTTI(Transfer_ActorOfFinderProcess)

protected:


  Standard_Integer themodetrans;


private: 




};







#endif // _Transfer_ActorOfFinderProcess_HeaderFile
