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
#include <DataExchange/IGESSolid/IGESSolid_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSolid_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SpecificModule),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSolid_SpecificModule)
IMPLEMENT_DOWNCAST(IGESSolid_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSolid_SpecificModule)
#include <DataExchange/Interface/Interface_Macros.hxx>

#include <DataExchange/IGESSolid/IGESSolid_Block.hxx>
#include <DataExchange/IGESSolid/IGESSolid_BooleanTree.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ConeFrustum.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ConicalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Cylinder.hxx>
#include <DataExchange/IGESSolid/IGESSolid_CylindricalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_EdgeList.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Ellipsoid.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Face.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Loop.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ManifoldSolid.hxx>
#include <DataExchange/IGESSolid/IGESSolid_PlaneSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_RightAngularWedge.hxx>
#include <DataExchange/IGESSolid/IGESSolid_SelectedComponent.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Shell.hxx>
#include <DataExchange/IGESSolid/IGESSolid_SolidAssembly.hxx>
#include <DataExchange/IGESSolid/IGESSolid_SolidInstance.hxx>
#include <DataExchange/IGESSolid/IGESSolid_SolidOfLinearExtrusion.hxx>
#include <DataExchange/IGESSolid/IGESSolid_SolidOfRevolution.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Sphere.hxx>
#include <DataExchange/IGESSolid/IGESSolid_SphericalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToroidalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_Torus.hxx>
#include <DataExchange/IGESSolid/IGESSolid_VertexList.hxx>

#include <DataExchange/IGESSolid/IGESSolid_ToolBlock.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolBooleanTree.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolConeFrustum.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolConicalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolCylinder.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolCylindricalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolEdgeList.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolEllipsoid.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolFace.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolLoop.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolManifoldSolid.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolPlaneSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolRightAngularWedge.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSelectedComponent.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolShell.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSolidAssembly.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSolidInstance.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSolidOfLinearExtrusion.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSolidOfRevolution.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSphere.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolSphericalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolToroidalSurface.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolTorus.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ToolVertexList.hxx>



//  Each Module is attached to a Protocol : it must interprete Case Numbers
//  (arguments <CN> of various methods) in accordance to values returned by
//  the method TypeNumber from this Protocol


IGESSolid_SpecificModule::IGESSolid_SpecificModule()    {  }


    void  IGESSolid_SpecificModule::OwnDump
  (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent,
   const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S,
   const Standard_Integer own) const 
{
  switch (CN) {
    case  1 : {
      DeclareAndCast(IGESSolid_Block,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolBlock tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  2 : {
      DeclareAndCast(IGESSolid_BooleanTree,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolBooleanTree tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  3 : {
      DeclareAndCast(IGESSolid_ConeFrustum,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolConeFrustum tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  4 : {
      DeclareAndCast(IGESSolid_ConicalSurface,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolConicalSurface tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  5 : {
      DeclareAndCast(IGESSolid_Cylinder,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolCylinder tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  6 : {
      DeclareAndCast(IGESSolid_CylindricalSurface,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolCylindricalSurface tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  7 : {
      DeclareAndCast(IGESSolid_EdgeList,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolEdgeList tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  8 : {
      DeclareAndCast(IGESSolid_Ellipsoid,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolEllipsoid tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case  9 : {
      DeclareAndCast(IGESSolid_Face,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolFace tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 10 : {
      DeclareAndCast(IGESSolid_Loop,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolLoop tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 11 : {
      DeclareAndCast(IGESSolid_ManifoldSolid,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolManifoldSolid tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 12 : {
      DeclareAndCast(IGESSolid_PlaneSurface,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolPlaneSurface tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 13 : {
      DeclareAndCast(IGESSolid_RightAngularWedge,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolRightAngularWedge tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 14 : {
      DeclareAndCast(IGESSolid_SelectedComponent,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSelectedComponent tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 15 : {
      DeclareAndCast(IGESSolid_Shell,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolShell tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 16 : {
      DeclareAndCast(IGESSolid_SolidAssembly,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSolidAssembly tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 17 : {
      DeclareAndCast(IGESSolid_SolidInstance,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSolidInstance tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 18 : {
      DeclareAndCast(IGESSolid_SolidOfLinearExtrusion,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSolidOfLinearExtrusion tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 19 : {
      DeclareAndCast(IGESSolid_SolidOfRevolution,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSolidOfRevolution tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 20 : {
      DeclareAndCast(IGESSolid_Sphere,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSphere tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 21 : {
      DeclareAndCast(IGESSolid_SphericalSurface,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolSphericalSurface tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 22 : {
      DeclareAndCast(IGESSolid_ToroidalSurface,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolToroidalSurface tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 23 : {
      DeclareAndCast(IGESSolid_Torus,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolTorus tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    case 24 : {
      DeclareAndCast(IGESSolid_VertexList,anent,ent);
      if (anent.IsNull()) return;
      IGESSolid_ToolVertexList tool;
      tool.OwnDump(anent,dumper,S,own);
    }
      break;
    default : break;
  }
}
