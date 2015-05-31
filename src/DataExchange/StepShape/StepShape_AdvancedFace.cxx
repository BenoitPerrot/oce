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

#include <StepShape_AdvancedFace.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_AdvancedFace)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_FaceSurface),
  STANDARD_TYPE(StepShape_Face),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_AdvancedFace)
IMPLEMENT_DOWNCAST(StepShape_AdvancedFace,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_AdvancedFace)


StepShape_AdvancedFace::StepShape_AdvancedFace ()  {}

