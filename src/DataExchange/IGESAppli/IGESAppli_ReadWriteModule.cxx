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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESReaderData.hxx>
#include <DataExchange/IGESData/IGESData_ParamReader.hxx>
#include <DataExchange/IGESData/IGESData_IGESWriter.hxx>
#include <DataExchange/IGESAppli/IGESAppli_ReadWriteModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_ReadWriteModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_ReadWriteModule),
  STANDARD_TYPE(Interface_ReaderModule),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_ReadWriteModule)
IMPLEMENT_DOWNCAST(IGESAppli_ReadWriteModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_ReadWriteModule)
#include <DataExchange/Interface/Interface_Macros.hxx>

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


IGESAppli_ReadWriteModule::IGESAppli_ReadWriteModule ()    {  }


    Standard_Integer  IGESAppli_ReadWriteModule::CaseIGES
  (const Standard_Integer typenum, const Standard_Integer formnum) const 
{
  switch (typenum) {
    case 134 : return 12;
    case 136 : return  3;
    case 138 : return 10;
    case 146 : return 11;
    case 148 : return  2;
    case 402 :
      switch (formnum) {
        case 18 : return  4;
        case 20 : return 17;
	default : break;
      }
      break;
    case 406 :
      switch (formnum) {
        case  2 : return 19;
        case  3 : return  6;
        case  5 : return  8;
        case  6 : return  1;
        case  7 : return 18;
        case  8 : return 16;
        case  9 : return 15;
        case 14 : return  5;
        case 24 : return  7;
        case 25 : return 13;
        case 26 : return 14;
	default : break;
      }
      break;
    case 418 : return  9;
    default : break;
  }
  return 0;
}


    void  IGESAppli_ReadWriteModule::ReadOwnParams
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESAppli_DrilledHole,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolDrilledHole tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESAppli_ElementResults,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolElementResults tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESAppli_FiniteElement,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFiniteElement tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESAppli_Flow,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFlow tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESAppli_FlowLineSpec,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFlowLineSpec tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESAppli_LevelFunction,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLevelFunction tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESAppli_LevelToPWBLayerMap,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLevelToPWBLayerMap tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESAppli_LineWidening,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLineWidening tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESAppli_NodalConstraint,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalConstraint tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESAppli_NodalDisplAndRot,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalDisplAndRot tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESAppli_NodalResults,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalResults tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESAppli_Node,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNode tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESAppli_PWBArtworkStackup,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPWBArtworkStackup tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESAppli_PWBDrilledHole,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPWBDrilledHole tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESAppli_PartNumber,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPartNumber tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESAppli_PinNumber,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPinNumber tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESAppli_PipingFlow,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPipingFlow tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESAppli_ReferenceDesignator,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolReferenceDesignator tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESAppli_RegionRestriction,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolRegionRestriction tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    default : break;
  }
}


    void  IGESAppli_ReadWriteModule::WriteOwnParams
  (const Standard_Integer CN,  const Handle(IGESData_IGESEntity)& ent,
   IGESData_IGESWriter& IW) const
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESAppli_DrilledHole,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolDrilledHole tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESAppli_ElementResults,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolElementResults tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESAppli_FiniteElement,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFiniteElement tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESAppli_Flow,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFlow tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESAppli_FlowLineSpec,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolFlowLineSpec tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESAppli_LevelFunction,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLevelFunction tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESAppli_LevelToPWBLayerMap,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLevelToPWBLayerMap tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESAppli_LineWidening,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolLineWidening tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESAppli_NodalConstraint,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalConstraint tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESAppli_NodalDisplAndRot,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalDisplAndRot tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESAppli_NodalResults,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNodalResults tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESAppli_Node,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolNode tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESAppli_PWBArtworkStackup,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPWBArtworkStackup tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESAppli_PWBDrilledHole,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPWBDrilledHole tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESAppli_PartNumber,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPartNumber tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESAppli_PinNumber,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPinNumber tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESAppli_PipingFlow,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolPipingFlow tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESAppli_ReferenceDesignator,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolReferenceDesignator tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESAppli_RegionRestriction,anent,ent);
      if (anent.IsNull()) return;
      IGESAppli_ToolRegionRestriction tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    default : break;
  }
}
