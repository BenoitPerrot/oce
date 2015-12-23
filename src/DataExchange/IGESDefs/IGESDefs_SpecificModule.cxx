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

#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESDumper.hxx>
#include <Foundation/Message/Message_Messenger.hxx>
#include <DataExchange/IGESDefs/IGESDefs_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDefs_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDefs_SpecificModule)
IMPLEMENT_DOWNCAST(IGESDefs_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDefs_SpecificModule)
#include <Interface_Macros.hxx>

#include <DataExchange/IGESDefs/IGESDefs_AssociativityDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_AttributeDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_AttributeTable.hxx>
#include <DataExchange/IGESDefs/IGESDefs_GenericData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_MacroDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_TabularData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_UnitsData.hxx>

#include <DataExchange/IGESDefs/IGESDefs_ToolAssociativityDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ToolAttributeDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ToolAttributeTable.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ToolGenericData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ToolMacroDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ToolTabularData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ToolUnitsData.hxx>



//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESDefs_SpecificModule::IGESDefs_SpecificModule()    {  }


    void  IGESDefs_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESDefs_AssociativityDef,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolAssociativityDef tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESDefs_AttributeDef,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolAttributeDef tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESDefs_AttributeTable,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolAttributeTable tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESDefs_GenericData,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolGenericData tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESDefs_MacroDef,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolMacroDef tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESDefs_TabularData,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolTabularData tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESDefs_UnitsData,anent,ent);
      if (anent.IsNull()) return;
      IGESDefs_ToolUnitsData tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}
