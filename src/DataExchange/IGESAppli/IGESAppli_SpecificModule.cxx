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
#include <DataExchange/IGESAppli/IGESAppli_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_SpecificModule)
IMPLEMENT_DOWNCAST(IGESAppli_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_SpecificModule)
#include <Interface_Macros.hxx>

#include <DataExchange/IGESAppli/IGESAppli_DrilledHole.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ElementResults.hxx>
#include <DataExchange/IGESAppli/IGESAppli_FiniteElement.hxx>
#include <DataExchange/IGESAppli/IGESAppli_Flow.hxx>
#include <DataExchange/IGESAppli/IGESAppli_FlowLineSpec.hxx>
#include <DataExchange/IGESAppli/IGESAppli_LevelFunction.hxx>
#include <DataExchange/IGESAppli/IGESAppli_LevelToPWBLayerMap.hxx>
#include <DataExchange/IGESAppli/IGESAppli_LineWidening.hxx>
#include <DataExchange/IGESAppli/IGESAppli_NodalConstraint.hxx>
#include <DataExchange/IGESAppli/IGESAppli_NodalDisplAndRot.hxx>
#include <DataExchange/IGESAppli/IGESAppli_NodalResults.hxx>
#include <DataExchange/IGESAppli/IGESAppli_Node.hxx>
#include <DataExchange/IGESAppli/IGESAppli_PWBArtworkStackup.hxx>
#include <DataExchange/IGESAppli/IGESAppli_PWBDrilledHole.hxx>
#include <DataExchange/IGESAppli/IGESAppli_PartNumber.hxx>
#include <DataExchange/IGESAppli/IGESAppli_PinNumber.hxx>
#include <DataExchange/IGESAppli/IGESAppli_PipingFlow.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ReferenceDesignator.hxx>
#include <DataExchange/IGESAppli/IGESAppli_RegionRestriction.hxx>

#include <DataExchange/IGESAppli/IGESAppli_ToolDrilledHole.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolElementResults.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolFiniteElement.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolFlow.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolFlowLineSpec.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolLevelFunction.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolLevelToPWBLayerMap.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolLineWidening.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolNodalConstraint.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolNodalDisplAndRot.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolNodalResults.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolNode.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolPWBArtworkStackup.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolPWBDrilledHole.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolPartNumber.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolPinNumber.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolPipingFlow.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolReferenceDesignator.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ToolRegionRestriction.hxx>



//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESAppli_SpecificModule::IGESAppli_SpecificModule()    {  }


    void  IGESAppli_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESAppli_DrilledHole,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolDrilledHole tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESAppli_ElementResults,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolElementResults tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESAppli_FiniteElement,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFiniteElement tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESAppli_Flow,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFlow tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESAppli_FlowLineSpec,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFlowLineSpec tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESAppli_LevelFunction,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLevelFunction tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESAppli_LevelToPWBLayerMap,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLevelToPWBLayerMap tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESAppli_LineWidening,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLineWidening tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESAppli_NodalConstraint,anent,ent) ;
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalConstraint tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESAppli_NodalDisplAndRot,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalDisplAndRot tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESAppli_NodalResults,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalResults tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESAppli_Node,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNode tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESAppli_PWBArtworkStackup,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPWBArtworkStackup tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESAppli_PWBDrilledHole,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPWBDrilledHole tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESAppli_PartNumber,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPartNumber tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESAppli_PinNumber,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPinNumber tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESAppli_PipingFlow,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPipingFlow tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESAppli_ReferenceDesignator,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolReferenceDesignator tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESAppli_RegionRestriction,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolRegionRestriction tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}


    Standard_Boolean  IGESAppli_SpecificModule::OwnCorrect
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent) const
{
//   Applies only on some types
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESAppli_DrilledHole,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolDrilledHole tool;
      return tool.OwnCorrect(anent);
    }
    case  4 : {
      DeclareAndCast(IGESAppli_Flow,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolFlow tool;
      return tool.OwnCorrect(anent);
    }
    case  6 : {
      DeclareAndCast(IGESAppli_LevelFunction,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolLevelFunction tool;
      return tool.OwnCorrect(anent);
    }
    case  8 : {
      DeclareAndCast(IGESAppli_LineWidening,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolLineWidening tool;
      return tool.OwnCorrect(anent);
    }
    case 14 : {
      DeclareAndCast(IGESAppli_PWBDrilledHole,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolPWBDrilledHole tool;
      return tool.OwnCorrect(anent);
    }
    case 15 : {
      DeclareAndCast(IGESAppli_PartNumber,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolPartNumber tool;
      return tool.OwnCorrect(anent);
    }
    case 16 : {
      DeclareAndCast(IGESAppli_PinNumber,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolPinNumber tool;
      return tool.OwnCorrect(anent);
    }
    case 17 : {
      DeclareAndCast(IGESAppli_PipingFlow,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolPipingFlow tool;
      return tool.OwnCorrect(anent);
    }
    case 18 : {
      DeclareAndCast(IGESAppli_ReferenceDesignator,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolReferenceDesignator tool;
      return tool.OwnCorrect(anent);
    }
    case 19 : {
      DeclareAndCast(IGESAppli_RegionRestriction,anent,ent);
      if (anent.IsNull()) break;
      IGESAppli_ToolRegionRestriction tool;
      return tool.OwnCorrect(anent);
    }
    default : break;
  }
  return Standard_False;
}
