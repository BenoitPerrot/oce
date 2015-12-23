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
#include <DataExchange/IGESBasic/IGESBasic_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_SpecificModule)
IMPLEMENT_DOWNCAST(IGESBasic_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_SpecificModule)
#include <Interface_Macros.hxx>

#include <DataExchange/IGESBasic/IGESBasic_AssocGroupType.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalRefFile.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalRefFileIndex.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalRefFileName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalRefLibName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalRefName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalReferenceFile.hxx>
#include <DataExchange/IGESBasic/IGESBasic_Group.hxx>
#include <DataExchange/IGESBasic/IGESBasic_GroupWithoutBackP.hxx>
#include <DataExchange/IGESBasic/IGESBasic_Hierarchy.hxx>
#include <DataExchange/IGESBasic/IGESBasic_Name.hxx>
#include <DataExchange/IGESBasic/IGESBasic_OrderedGroup.hxx>
#include <DataExchange/IGESBasic/IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <DataExchange/IGESBasic/IGESBasic_SingleParent.hxx>
#include <DataExchange/IGESBasic/IGESBasic_SingularSubfigure.hxx>
#include <DataExchange/IGESBasic/IGESBasic_SubfigureDef.hxx>

#include <DataExchange/IGESBasic/IGESBasic_ToolAssocGroupType.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolExternalRefFile.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolExternalRefFileIndex.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolExternalRefFileName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolExternalRefLibName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolExternalRefName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolExternalReferenceFile.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolGroup.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolGroupWithoutBackP.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolHierarchy.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolName.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolOrderedGroup.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolOrderedGroupWithoutBackP.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolSingleParent.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolSingularSubfigure.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ToolSubfigureDef.hxx>

#include <Foundation/Message/Message_Messenger.hxx>

//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESBasic_SpecificModule::IGESBasic_SpecificModule()    {  }


    void  IGESBasic_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESBasic_AssocGroupType,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolAssocGroupType tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESBasic_ExternalRefFile,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolExternalRefFile tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESBasic_ExternalRefFileIndex,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolExternalRefFileIndex tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESBasic_ExternalRefFileName,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolExternalRefFileName tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESBasic_ExternalRefLibName,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolExternalRefLibName tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESBasic_ExternalRefName,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolExternalRefName tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESBasic_ExternalReferenceFile,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolExternalReferenceFile tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESBasic_Group,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolGroup tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESBasic_GroupWithoutBackP,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolGroupWithoutBackP tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESBasic_Hierarchy,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolHierarchy tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESBasic_Name,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolName tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESBasic_OrderedGroup,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolOrderedGroup tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESBasic_OrderedGroupWithoutBackP,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolOrderedGroupWithoutBackP tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESBasic_SingleParent,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolSingleParent tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESBasic_SingularSubfigure,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolSingularSubfigure tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESBasic_SubfigureDef,anent,ent);
      if (anent.IsNull()) return;
      IGESBasic_ToolSubfigureDef tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}


    Standard_Boolean  IGESBasic_SpecificModule::OwnCorrect
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent) const
{
//   Applies only on some types
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESBasic_AssocGroupType,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolAssocGroupType tool;
      return tool.OwnCorrect(anent);
    }
    case  8 : {
      DeclareAndCast(IGESBasic_Group,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolGroup tool;
      return tool.OwnCorrect(anent);
    }
    case  9 : {
      DeclareAndCast(IGESBasic_GroupWithoutBackP,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolGroupWithoutBackP tool;
      return tool.OwnCorrect(anent);
    }
    case 10 : {
      DeclareAndCast(IGESBasic_Hierarchy,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolHierarchy tool;
      return tool.OwnCorrect(anent);
    }
    case 11 : {
      DeclareAndCast(IGESBasic_Name,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolName tool;
      return tool.OwnCorrect(anent);
    }
    case 12 : {
      DeclareAndCast(IGESBasic_OrderedGroup,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolOrderedGroup tool;
      return tool.OwnCorrect(anent);
    }
    case 13 : {
      DeclareAndCast(IGESBasic_OrderedGroupWithoutBackP,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolOrderedGroupWithoutBackP tool;
      return tool.OwnCorrect(anent);
    }
    case 14 : {
      DeclareAndCast(IGESBasic_SingleParent,anent,ent);
      if (anent.IsNull()) break;
      IGESBasic_ToolSingleParent tool;
      return tool.OwnCorrect(anent);
    }
    default : break;
  }
  return Standard_False;
}
