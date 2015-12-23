// Created on: 1997-04-01
// Created by: Jean Yves LEBEY
// Copyright (c) 1997-1999 Matra Datavision
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

#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_box.hxx>

#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_HBoxTool.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>

Standard_EXPORT void FBOX_Prepare() 
{
  Handle(TopOpeBRepTool_HBoxTool) hbt = FBOX_GetHBoxTool();
  hbt->Clear();
#ifdef OCCT_DEBUG
  if (TopOpeBRepTool_GettraceBOX()) {
    cout<<endl<<"TOOLBOX : Prepare"<<endl;
  }
#endif
}

Standard_EXPORT Handle(TopOpeBRepTool_HBoxTool) FBOX_GetHBoxTool()
{
  static Handle(TopOpeBRepTool_HBoxTool) GLOBAL_TOOLBOX_hboxtool;
  if (GLOBAL_TOOLBOX_hboxtool.IsNull()) {
    GLOBAL_TOOLBOX_hboxtool = new TopOpeBRepTool_HBoxTool();
  }
  return GLOBAL_TOOLBOX_hboxtool;
}

Standard_EXPORT const Bnd_Box& FBOX_Box(const TopoDS_Shape& S)
{
  Handle(TopOpeBRepTool_HBoxTool) hbt = FBOX_GetHBoxTool();
#ifdef OCCT_DEBUG
  if (TopOpeBRepTool_GettraceBOX()) {
    Standard_Integer i = hbt->Index(S);
    Standard_Integer n = hbt->Extent();
    cout<<"TOOLBOX : "<<i<<"/"<<n<<endl;
  }
#endif
  return hbt->Box(S);
}
