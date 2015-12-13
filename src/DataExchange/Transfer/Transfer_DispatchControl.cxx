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

#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Transfer_DispatchControl.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Transfer_DispatchControl)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Interface_CopyControl),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Transfer_DispatchControl)
IMPLEMENT_DOWNCAST(Transfer_DispatchControl,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Transfer_DispatchControl)



Transfer_DispatchControl::Transfer_DispatchControl
  (const Handle(Interface_InterfaceModel)& model,
   const Handle(Transfer_TransientProcess)& TP)
      { themodel = model;  theTP = TP;  }


    const Handle(Transfer_TransientProcess)&
  Transfer_DispatchControl::TransientProcess () const
      { return theTP;  }

    const Handle(Interface_InterfaceModel)&
  Transfer_DispatchControl::StartingModel () const
      { return themodel; }

    void Transfer_DispatchControl::Clear ()  { theTP->Clear();  }


    void Transfer_DispatchControl::Bind
  (const Handle(Standard_Transient)& ent,
   const Handle(Standard_Transient)& res)
      {  theTP->BindTransient(ent,res);  }


    Standard_Boolean  Transfer_DispatchControl::Search
  (const Handle(Standard_Transient)& ent,
   Handle(Standard_Transient)&res) const
      {  res = theTP->FindTransient(ent);  return !res.IsNull();  }
