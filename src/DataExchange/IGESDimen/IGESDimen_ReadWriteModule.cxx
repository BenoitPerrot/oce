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
#include <DataExchange/IGESDimen/IGESDimen_ReadWriteModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDimen_ReadWriteModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_ReadWriteModule),
  STANDARD_TYPE(Interface_ReaderModule),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDimen_ReadWriteModule)
IMPLEMENT_DOWNCAST(IGESDimen_ReadWriteModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDimen_ReadWriteModule)
#include <Interface_Macros.hxx>

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


IGESDimen_ReadWriteModule::IGESDimen_ReadWriteModule ()    {  }


    Standard_Integer  IGESDimen_ReadWriteModule::CaseIGES
  (const Standard_Integer typenum, const Standard_Integer formnum) const 
{
  switch (typenum) {
    case 106 :
      if      (formnum == 20 || formnum == 21) return  3;
      else if (formnum  > 30 && formnum  < 40) return 21;
      else if (formnum == 40)                  return 23;
      break;
    case 202 : return  1;
    case 204 : return  4;
    case 206 : return  5;
    case 208 : return 10;
    case 210 : return 11;
    case 212 : return 12;
    case 213 : return 17;
    case 214 : return 14;
    case 216 : return 15;
    case 218 : return 18;
    case 220 : return 19;
    case 222 : return 20;
    case 228 : return 13;
    case 230 : return 22;
    case 402 :
      switch (formnum) {
        case 13 : return  9;
        case 21 : return 16;
	default : break;
      }
      break;
    case 406 :
      switch (formnum) {
        case 28 : return  8;
        case 29 : return  7;
        case 30 : return  6;
        case 31 : return  2;
	default : break;
      }
      break;
    default : break;
  }
  return 0;
}


    void  IGESDimen_ReadWriteModule::ReadOwnParams
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESDimen_AngularDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolAngularDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESDimen_BasicDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolBasicDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESDimen_CenterLine,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolCenterLine tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESDimen_CurveDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolCurveDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESDimen_DiameterDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDiameterDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESDimen_DimensionDisplayData,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionDisplayData tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESDimen_DimensionTolerance,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionTolerance tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESDimen_DimensionUnits,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionUnits tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESDimen_DimensionedGeometry,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionedGeometry tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESDimen_FlagNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolFlagNote tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESDimen_GeneralLabel,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralLabel tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESDimen_GeneralNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralNote tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESDimen_GeneralSymbol,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralSymbol tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESDimen_LeaderArrow,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolLeaderArrow tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESDimen_LinearDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolLinearDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESDimen_NewDimensionedGeometry,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolNewDimensionedGeometry tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESDimen_NewGeneralNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolNewGeneralNote tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESDimen_OrdinateDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolOrdinateDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESDimen_PointDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolPointDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 20 : {
      DeclareAndCast(IGESDimen_RadiusDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolRadiusDimension tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 21 : {
      DeclareAndCast(IGESDimen_Section,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolSection tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 22 : {
      DeclareAndCast(IGESDimen_SectionedArea,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolSectionedArea tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    case 23 : {
      DeclareAndCast(IGESDimen_WitnessLine,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolWitnessLine tool;
      tool.ReadOwnParams(anent,IR,PR);
    }
      break;
    default : break;
  }
}


    void  IGESDimen_ReadWriteModule::WriteOwnParams
  (const Standard_Integer CN,  const Handle(IGESData_IGESEntity)& ent,
   IGESData_IGESWriter& IW) const
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESDimen_AngularDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolAngularDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESDimen_BasicDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolBasicDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESDimen_CenterLine,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolCenterLine tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESDimen_CurveDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolCurveDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESDimen_DiameterDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDiameterDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESDimen_DimensionDisplayData,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionDisplayData tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESDimen_DimensionTolerance,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionTolerance tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESDimen_DimensionUnits,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionUnits tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESDimen_DimensionedGeometry,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolDimensionedGeometry tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESDimen_FlagNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolFlagNote tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESDimen_GeneralLabel,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralLabel tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESDimen_GeneralNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralNote tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESDimen_GeneralSymbol,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolGeneralSymbol tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESDimen_LeaderArrow,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolLeaderArrow tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESDimen_LinearDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolLinearDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESDimen_NewDimensionedGeometry,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolNewDimensionedGeometry tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESDimen_NewGeneralNote,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolNewGeneralNote tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESDimen_OrdinateDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolOrdinateDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESDimen_PointDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolPointDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 20 : {
      DeclareAndCast(IGESDimen_RadiusDimension,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolRadiusDimension tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 21 : {
      DeclareAndCast(IGESDimen_Section,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolSection tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 22 : {
      DeclareAndCast(IGESDimen_SectionedArea,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolSectionedArea tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    case 23 : {
      DeclareAndCast(IGESDimen_WitnessLine,anent,ent);
      if (anent.IsNull()) return;
      IGESDimen_ToolWitnessLine tool;
      tool.WriteOwnParams(anent,IW);
    }
      break;
    default : break;
  }
}
