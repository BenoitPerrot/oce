// Created on: 2000-02-07
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESToBRep_ToolContainer)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESToBRep_ToolContainer)
IMPLEMENT_DOWNCAST(IGESToBRep_ToolContainer,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESToBRep_ToolContainer)

//=======================================================================
//function : IGESToBRep_ToolContainer
//purpose  : 
//=======================================================================

IGESToBRep_ToolContainer::IGESToBRep_ToolContainer()
{
}

//=======================================================================
//function : IGESBoundary
//purpose  : 
//=======================================================================

Handle(IGESToBRep_IGESBoundary) IGESToBRep_ToolContainer::IGESBoundary() const
{
  return new IGESToBRep_IGESBoundary;
}
