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

#include <DataExchange/Transfer/Transfer_Binder.hxx>
#include <DataExchange/Transfer/Transfer_Finder.hxx>
#include <DataExchange/Transfer/Transfer_ProcessForFinder.hxx>
#include <DataExchange/Transfer/Transfer_FinderProcess.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Transfer/Transfer_ActorOfFinderProcess.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Transfer_ActorOfFinderProcess)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_ActorOfProcessForFinder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Transfer_ActorOfFinderProcess)
IMPLEMENT_DOWNCAST(Transfer_ActorOfFinderProcess,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Transfer_ActorOfFinderProcess)
#include <DataExchange/Transfer/Transfer_TransientMapper.hxx>

Transfer_ActorOfFinderProcess::Transfer_ActorOfFinderProcess ()    {  themodetrans = 0;  }

Standard_Integer& Transfer_ActorOfFinderProcess::ModeTrans ()
{  return themodetrans;  }

Handle(Transfer_Binder)  Transfer_ActorOfFinderProcess::Transfer
  (const Handle(Transfer_Finder)& fnd,
   const Handle(Transfer_FinderProcess)& FP)
{
  Handle(Transfer_TransientMapper) tm = Handle(Transfer_TransientMapper)::DownCast (fnd);
  if (tm.IsNull()) return NullResult();
  Handle(Standard_Transient) res = TransferTransient (tm->Value(),FP);
  if (res.IsNull()) return NullResult();
  return TransientResult (res);
}

Handle(Transfer_Binder)  Transfer_ActorOfFinderProcess::Transferring
  (const Handle(Transfer_Finder)& ent,
   const Handle(Transfer_ProcessForFinder)& TP)
{
  return Transfer(ent,Handle(Transfer_FinderProcess)::DownCast(TP));
}

Handle(Standard_Transient)  Transfer_ActorOfFinderProcess::TransferTransient
  (const Handle(Standard_Transient)& /*ent*/,
   const Handle(Transfer_FinderProcess)& )
{
  Handle(Standard_Transient) nulres;
  return nulres;
}
