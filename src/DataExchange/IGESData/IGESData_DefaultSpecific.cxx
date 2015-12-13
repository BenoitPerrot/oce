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

#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Foundation/Message/Message_Messenger.hxx>
#include <IGESData_DefaultSpecific.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESData_DefaultSpecific)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESData_DefaultSpecific)
IMPLEMENT_DOWNCAST(IGESData_DefaultSpecific,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESData_DefaultSpecific)
#include <IGESData_UndefinedEntity.hxx>
#include <Interface_UndefinedContent.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData.hxx>
#include <IGESData_Protocol.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_Macros.hxx>
#include <Foundation/Message/Message_Messenger.hxx>


IGESData_DefaultSpecific::IGESData_DefaultSpecific ()
{  IGESData_SpecificLib::SetGlobal(this, IGESData::Protocol());  }

    void  IGESData_DefaultSpecific::OwnDump
  (const Standard_Integer /*CN*/, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer /*own*/) const 
{
  DeclareAndCast(IGESData_UndefinedEntity,lent,ent);
  if (lent.IsNull()) return;

  Standard_Integer dstat = lent->DirStatus();
  if (dstat != 0) S
    << " --  Directory Entry Error Status = " << dstat << "  --" << endl;
  Handle(Interface_UndefinedContent) cont = lent->UndefinedContent();
  Standard_Integer nb = cont->NbParams();
  S << " UNDEFINED ENTITY ...\n"<<nb
    <<" Parameters (WARNING : Odd Integer Values Interpreted as Entities)\n";
  for (Standard_Integer i = 1; i <= nb; i ++) {
    Interface_ParamType ptyp = cont->ParamType(i);
    if (ptyp == Interface_ParamVoid) S<<"	["<<i<<":Void]";
    else if (cont->IsParamEntity(i)) {
      DeclareAndCast(IGESData_IGESEntity,anent,cont->ParamEntity(i));
      S<<"	["<<i<<":IGES]=";  
      dumper.PrintDNum(anent,S);
    }
    else {  S<<"	["<<i<<"]=" << cont->ParamValue(i);  }
    if ( i == (i%5)*5) S << endl;
  }
  S << endl;
}
