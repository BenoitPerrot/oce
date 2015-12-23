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
#include <DataExchange/IGESGraph/IGESGraph_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGraph_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGraph_SpecificModule)
IMPLEMENT_DOWNCAST(IGESGraph_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGraph_SpecificModule)
#include <Interface_Macros.hxx>

#include <DataExchange/IGESGraph/IGESGraph_Color.hxx>
#include <DataExchange/IGESGraph/IGESGraph_DefinitionLevel.hxx>
#include <DataExchange/IGESGraph/IGESGraph_DrawingSize.hxx>
#include <DataExchange/IGESGraph/IGESGraph_DrawingUnits.hxx>
#include <DataExchange/IGESGraph/IGESGraph_HighLight.hxx>
#include <DataExchange/IGESGraph/IGESGraph_IntercharacterSpacing.hxx>
#include <DataExchange/IGESGraph/IGESGraph_LineFontDefPattern.hxx>
#include <DataExchange/IGESGraph/IGESGraph_LineFontPredefined.hxx>
#include <DataExchange/IGESGraph/IGESGraph_LineFontDefTemplate.hxx>
#include <DataExchange/IGESGraph/IGESGraph_NominalSize.hxx>
#include <DataExchange/IGESGraph/IGESGraph_Pick.hxx>
#include <DataExchange/IGESGraph/IGESGraph_TextDisplayTemplate.hxx>
#include <DataExchange/IGESGraph/IGESGraph_TextFontDef.hxx>
#include <DataExchange/IGESGraph/IGESGraph_UniformRectGrid.hxx>

#include <DataExchange/IGESGraph/IGESGraph_ToolColor.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolDefinitionLevel.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolDrawingSize.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolDrawingUnits.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolHighLight.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolIntercharacterSpacing.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolLineFontDefPattern.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolLineFontPredefined.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolLineFontDefTemplate.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolNominalSize.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolPick.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolTextDisplayTemplate.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolTextFontDef.hxx>
#include <DataExchange/IGESGraph/IGESGraph_ToolUniformRectGrid.hxx>



//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESGraph_SpecificModule::IGESGraph_SpecificModule()    {  }


    void  IGESGraph_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESGraph_Color,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolColor tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESGraph_DefinitionLevel,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolDefinitionLevel tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESGraph_DrawingSize,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolDrawingSize tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESGraph_DrawingUnits,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolDrawingUnits tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESGraph_HighLight,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolHighLight tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESGraph_IntercharacterSpacing,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolIntercharacterSpacing tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESGraph_LineFontDefPattern,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolLineFontDefPattern tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESGraph_LineFontPredefined,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolLineFontPredefined tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESGraph_LineFontDefTemplate,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolLineFontDefTemplate tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESGraph_NominalSize,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolNominalSize tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESGraph_Pick,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolPick tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESGraph_TextDisplayTemplate,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolTextDisplayTemplate tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESGraph_TextFontDef,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolTextFontDef tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESGraph_UniformRectGrid,anent,ent);
      if (anent.IsNull()) return;
      IGESGraph_ToolUniformRectGrid tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}


    Standard_Boolean  IGESGraph_SpecificModule::OwnCorrect
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent) const
{
//   Applies only on some types
  switch (CN) {
    case  3 : {
      DeclareAndCast(IGESGraph_DrawingSize,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolDrawingSize tool;
      return tool.OwnCorrect(anent);
    }
    case  4 : {
      DeclareAndCast(IGESGraph_DrawingUnits,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolDrawingUnits tool;
      return tool.OwnCorrect(anent);
    }
    case  5 : {
      DeclareAndCast(IGESGraph_HighLight,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolHighLight tool;
      return tool.OwnCorrect(anent);
    }
    case  6 : {
      DeclareAndCast(IGESGraph_IntercharacterSpacing,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolIntercharacterSpacing tool;
      return tool.OwnCorrect(anent);
    }
    case  8 : {
      DeclareAndCast(IGESGraph_LineFontPredefined,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolLineFontPredefined tool;
      return tool.OwnCorrect(anent);
    }
    case 10 : {
      DeclareAndCast(IGESGraph_NominalSize,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolNominalSize tool;
      return tool.OwnCorrect(anent);
    }
    case 11 : {
      DeclareAndCast(IGESGraph_Pick,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolPick tool;
      return tool.OwnCorrect(anent);
    }
    case 14 : {
      DeclareAndCast(IGESGraph_UniformRectGrid,anent,ent);
      if (anent.IsNull()) break;
      IGESGraph_ToolUniformRectGrid tool;
      return tool.OwnCorrect(anent);
    }
    default : break;
  }
  return Standard_False;
}
