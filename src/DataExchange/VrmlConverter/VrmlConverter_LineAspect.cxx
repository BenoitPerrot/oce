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

#include <Vrml_Material.hxx>
#include <VrmlConverter_LineAspect.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(VrmlConverter_LineAspect)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(VrmlConverter_LineAspect)
IMPLEMENT_DOWNCAST(VrmlConverter_LineAspect,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(VrmlConverter_LineAspect)

VrmlConverter_LineAspect::VrmlConverter_LineAspect()
{
 myHasMaterial = Standard_False;
}

VrmlConverter_LineAspect::VrmlConverter_LineAspect (const Handle(Vrml_Material)& aMaterial,
                                                    const Standard_Boolean OnOff)
{
 myMaterial = aMaterial;
 myHasMaterial = OnOff;
}


void VrmlConverter_LineAspect::SetMaterial(const Handle(Vrml_Material)& aMaterial)
{
 myMaterial = aMaterial;
}

Handle(Vrml_Material) VrmlConverter_LineAspect::Material() const 
{
 return myMaterial;
}
void VrmlConverter_LineAspect::SetHasMaterial(const Standard_Boolean OnOff)
{
 myHasMaterial = OnOff;
}

Standard_Boolean VrmlConverter_LineAspect::HasMaterial() const 
{
 return myHasMaterial;
}

