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
#include <DataExchange/IGESDraw/IGESDraw_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDraw_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDraw_SpecificModule)
IMPLEMENT_DOWNCAST(IGESDraw_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDraw_SpecificModule)
#include <Interface_Macros.hxx>

#include <DataExchange/IGESDraw/IGESDraw_CircArraySubfigure.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ConnectPoint.hxx>
#include <DataExchange/IGESDraw/IGESDraw_Drawing.hxx>
#include <DataExchange/IGESDraw/IGESDraw_DrawingWithRotation.hxx>
#include <DataExchange/IGESDraw/IGESDraw_LabelDisplay.hxx>
#include <DataExchange/IGESDraw/IGESDraw_NetworkSubfigure.hxx>
#include <DataExchange/IGESDraw/IGESDraw_NetworkSubfigureDef.hxx>
#include <DataExchange/IGESDraw/IGESDraw_PerspectiveView.hxx>
#include <DataExchange/IGESDraw/IGESDraw_Planar.hxx>
#include <DataExchange/IGESDraw/IGESDraw_RectArraySubfigure.hxx>
#include <DataExchange/IGESDraw/IGESDraw_SegmentedViewsVisible.hxx>
#include <DataExchange/IGESDraw/IGESDraw_View.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ViewsVisible.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ViewsVisibleWithAttr.hxx>

#include <DataExchange/IGESDraw/IGESDraw_ToolCircArraySubfigure.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolConnectPoint.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolDrawing.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolDrawingWithRotation.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolLabelDisplay.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolNetworkSubfigure.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolNetworkSubfigureDef.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolPerspectiveView.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolPlanar.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolRectArraySubfigure.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolSegmentedViewsVisible.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolView.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolViewsVisible.hxx>
#include <DataExchange/IGESDraw/IGESDraw_ToolViewsVisibleWithAttr.hxx>



//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESDraw_SpecificModule::IGESDraw_SpecificModule()    {  }


    void  IGESDraw_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESDraw_CircArraySubfigure,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolCircArraySubfigure tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESDraw_ConnectPoint,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolConnectPoint tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESDraw_Drawing,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolDrawing tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESDraw_DrawingWithRotation,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolDrawingWithRotation tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESDraw_LabelDisplay,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolLabelDisplay tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESDraw_NetworkSubfigure,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolNetworkSubfigure tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESDraw_NetworkSubfigureDef,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolNetworkSubfigureDef tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESDraw_PerspectiveView,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolPerspectiveView tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESDraw_Planar,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolPlanar tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESDraw_RectArraySubfigure,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolRectArraySubfigure tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESDraw_SegmentedViewsVisible,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolSegmentedViewsVisible tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESDraw_View,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolView tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESDraw_ViewsVisible,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolViewsVisible tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESDraw_ViewsVisibleWithAttr,anent,ent);
      if (anent.IsNull()) return;
      IGESDraw_ToolViewsVisibleWithAttr tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}


    Standard_Boolean  IGESDraw_SpecificModule::OwnCorrect
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent) const
{
//   Applies only on some types
  switch (CN) {
    case  3 : {
      DeclareAndCast(IGESDraw_Drawing,anent,ent);
      if (anent.IsNull()) break;
      IGESDraw_ToolDrawing tool;
      return tool.OwnCorrect(anent);
    }
    case  4 : {
      DeclareAndCast(IGESDraw_DrawingWithRotation,anent,ent);
      if (anent.IsNull()) break;
      IGESDraw_ToolDrawingWithRotation tool;
      return tool.OwnCorrect(anent);
    }
    case  9 : {
      DeclareAndCast(IGESDraw_Planar,anent,ent);
      if (anent.IsNull()) break;
      IGESDraw_ToolPlanar tool;
      return tool.OwnCorrect(anent);
    }
    case 13 : {
      DeclareAndCast(IGESDraw_ViewsVisible,anent,ent);
      if (anent.IsNull()) break;
      IGESDraw_ToolViewsVisible tool;
      return tool.OwnCorrect(anent);
    }
    case 14 : {
      DeclareAndCast(IGESDraw_ViewsVisibleWithAttr,anent,ent);
      if (anent.IsNull()) break;
      IGESDraw_ToolViewsVisibleWithAttr tool;
      return tool.OwnCorrect(anent);
    }
    default : break;
  }
  return Standard_False;
}
