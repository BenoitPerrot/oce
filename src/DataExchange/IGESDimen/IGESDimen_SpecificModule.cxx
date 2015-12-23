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
#include <DataExchange/IGESDimen/IGESDimen_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDimen_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDimen_SpecificModule)
IMPLEMENT_DOWNCAST(IGESDimen_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDimen_SpecificModule)
#include <DataExchange/Interface/Interface_Macros.hxx>

#include <DataExchange/IGESDimen/IGESDimen_AngularDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_BasicDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_CenterLine.hxx>
#include <DataExchange/IGESDimen/IGESDimen_CurveDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DiameterDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionDisplayData.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionTolerance.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionUnits.hxx>
#include <DataExchange/IGESDimen/IGESDimen_DimensionedGeometry.hxx>
#include <DataExchange/IGESDimen/IGESDimen_FlagNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_GeneralLabel.hxx>
#include <DataExchange/IGESDimen/IGESDimen_GeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_GeneralSymbol.hxx>
#include <DataExchange/IGESDimen/IGESDimen_LeaderArrow.hxx>
#include <DataExchange/IGESDimen/IGESDimen_LinearDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_NewDimensionedGeometry.hxx>
#include <DataExchange/IGESDimen/IGESDimen_NewGeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_OrdinateDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_PointDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_RadiusDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_Section.hxx>
#include <DataExchange/IGESDimen/IGESDimen_SectionedArea.hxx>
#include <DataExchange/IGESDimen/IGESDimen_WitnessLine.hxx>

#include <DataExchange/IGESDimen/IGESDimen_ToolAngularDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolBasicDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolCenterLine.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolCurveDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolDiameterDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolDimensionDisplayData.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolDimensionTolerance.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolDimensionUnits.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolDimensionedGeometry.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolFlagNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolGeneralLabel.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolGeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolGeneralSymbol.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolLeaderArrow.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolLinearDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolNewDimensionedGeometry.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolNewGeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolOrdinateDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolPointDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolRadiusDimension.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolSection.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolSectionedArea.hxx>
#include <DataExchange/IGESDimen/IGESDimen_ToolWitnessLine.hxx>



//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESDimen_SpecificModule::IGESDimen_SpecificModule()  {  }


    void  IGESDimen_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESDimen_AngularDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolAngularDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESDimen_BasicDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolBasicDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESDimen_CenterLine,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolCenterLine tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESDimen_CurveDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolCurveDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESDimen_DiameterDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDiameterDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESDimen_DimensionDisplayData,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionDisplayData tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESDimen_DimensionTolerance,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionTolerance tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESDimen_DimensionUnits,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionUnits tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESDimen_DimensionedGeometry,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionedGeometry tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESDimen_FlagNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolFlagNote tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESDimen_GeneralLabel,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralLabel tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESDimen_GeneralNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralNote tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESDimen_GeneralSymbol,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralSymbol tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESDimen_LeaderArrow,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolLeaderArrow tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESDimen_LinearDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolLinearDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESDimen_NewDimensionedGeometry,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolNewDimensionedGeometry tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESDimen_NewGeneralNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolNewGeneralNote tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESDimen_OrdinateDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolOrdinateDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESDimen_PointDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolPointDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 20 : {
      DeclareAndCast(IGESDimen_RadiusDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolRadiusDimension tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 21 : {
      DeclareAndCast(IGESDimen_Section,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolSection tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 22 : {
      DeclareAndCast(IGESDimen_SectionedArea,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolSectionedArea tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 23 : {
      DeclareAndCast(IGESDimen_WitnessLine,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolWitnessLine tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}


    Standard_Boolean  IGESDimen_SpecificModule::OwnCorrect
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent) const
{
//   Applies only on some types
  switch (CN) {
    case  2 : {
      DeclareAndCast(IGESDimen_BasicDimension,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolBasicDimension tool;
      return tool.OwnCorrect(anent);
    }
    case  3 : {
      DeclareAndCast(IGESDimen_CenterLine,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolCenterLine tool;
      return tool.OwnCorrect(anent);
    }
    case  6 : {
      DeclareAndCast(IGESDimen_DimensionDisplayData,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolDimensionDisplayData tool;
      return tool.OwnCorrect(anent);
    }
    case  7 : {
      DeclareAndCast(IGESDimen_DimensionTolerance,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolDimensionTolerance tool;
      return tool.OwnCorrect(anent);
    }
    case  8 : {
      DeclareAndCast(IGESDimen_DimensionUnits,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolDimensionUnits tool;
      return tool.OwnCorrect(anent);
    }
    case  9 : {
      DeclareAndCast(IGESDimen_DimensionedGeometry,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolDimensionedGeometry tool;
      return tool.OwnCorrect(anent);
    }
    case 16 : {
      DeclareAndCast(IGESDimen_NewDimensionedGeometry,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolNewDimensionedGeometry tool;
      return tool.OwnCorrect(anent);
    }
    case 21 : {
      DeclareAndCast(IGESDimen_Section,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolSection tool;
      return tool.OwnCorrect(anent);
    }
    case 23 : {
      DeclareAndCast(IGESDimen_WitnessLine,anent,ent);
      if (anent.IsNull()) break;
      IGESDimen_ToolWitnessLine tool;
      return tool.OwnCorrect(anent);
    }
    default : break;
  }
  return Standard_False;
}
