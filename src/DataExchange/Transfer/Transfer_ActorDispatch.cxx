// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <DataExchange/Interface/Interface_InterfaceError.hxx>
#include <DataExchange/Interface/Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Interface_GeneralLib.hxx>
#include <DataExchange/Interface/Interface_Protocol.hxx>
#include <DataExchange/Transfer/Transfer_ActorOfTransientProcess.hxx>
#include <DataExchange/Transfer/Transfer_TransferDispatch.hxx>
#include <DataExchange/Transfer/Transfer_Binder.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Transfer/Transfer_TransientProcess.hxx>
#include <DataExchange/Transfer/Transfer_ActorDispatch.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Transfer_ActorDispatch)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_ActorOfTransientProcess),
  STANDARD_TYPE(Transfer_ActorOfProcessForTransient),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Transfer_ActorDispatch)
IMPLEMENT_DOWNCAST(Transfer_ActorDispatch,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Transfer_ActorDispatch)
#include <DataExchange/Transfer/Transfer_TransientProcess.hxx>


Transfer_ActorDispatch::Transfer_ActorDispatch
  (const Handle(Interface_InterfaceModel)& amodel,
   const Interface_GeneralLib& lib)
    :  thetool (amodel,lib)
{
  SetLast(Standard_True);  // actor par defaut
  thetool.TransientProcess()->SetActor(this);
}

    Transfer_ActorDispatch::Transfer_ActorDispatch
  (const Handle(Interface_InterfaceModel)& amodel,
   const Handle(Interface_Protocol)& protocol)
    :  thetool (amodel,protocol)
{
  SetLast(Standard_True);  // actor par defaut
  thetool.TransientProcess()->SetActor(this);
}

    Transfer_ActorDispatch::Transfer_ActorDispatch
  (const Handle(Interface_InterfaceModel)& amodel)
    :  thetool (amodel)
{
  SetLast(Standard_True);  // actor par defaut
  thetool.TransientProcess()->SetActor(this);
}


    void  Transfer_ActorDispatch::AddActor
  (const Handle(Transfer_ActorOfTransientProcess)& actor)
      {  thetool.TransientProcess()->SetActor(actor);  }

    Transfer_TransferDispatch&  Transfer_ActorDispatch::TransferDispatch ()
      {  return thetool;  }


    Handle(Transfer_Binder)  Transfer_ActorDispatch::Transfer
  (const Handle(Standard_Transient)& start,
   const Handle(Transfer_TransientProcess)& /*TP*/)
{
  thetool.TransferEntity(start);
  return thetool.TransientProcess()->Find(start);
}
