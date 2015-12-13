// Created on: 2003-09-29
// Created by: Alexander SOLOVYOV and Sergey LITONIN
// Copyright (c) 2003-2014 OPEN CASCADE SAS
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

#include <SelectBasics_EntityOwner.hxx>
#include <SelectBasics_ListOfBox2d.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <MeshVS_DummySensitiveEntity.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MeshVS_DummySensitiveEntity)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectBasics_SensitiveEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MeshVS_DummySensitiveEntity)
IMPLEMENT_DOWNCAST(MeshVS_DummySensitiveEntity,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MeshVS_DummySensitiveEntity)

//================================================================
// Function : Constructor MeshVS_DummySensitiveEntity
// Purpose  :
//================================================================
MeshVS_DummySensitiveEntity::MeshVS_DummySensitiveEntity
  ( const Handle(SelectBasics_EntityOwner)& OwnerId )
: SelectBasics_SensitiveEntity( OwnerId )
{
}

//================================================================
// Function : Areas
// Purpose  :
//================================================================
void MeshVS_DummySensitiveEntity::Areas( SelectBasics_ListOfBox2d& )
{
}

//================================================================
// Function : Matches
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DummySensitiveEntity::Matches( const SelectBasics_PickArgs&,
                                                       Standard_Real&,
                                                       Standard_Real& )
{
  return Standard_False;
}

//================================================================
// Function : Matches
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DummySensitiveEntity::Matches( const Standard_Real,
                                                       const Standard_Real,
                                                       const Standard_Real,
                                                       const Standard_Real,
                                                       const Standard_Real )
{
  return Standard_False;
}

//================================================================
// Function : Matches
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DummySensitiveEntity::Matches( const TColgp_Array1OfPnt2d&,
                                                       const Bnd_Box2d&,
                                                       const Standard_Real )
{
  return Standard_False;
}

//================================================================
// Function : NeedsConversion
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DummySensitiveEntity::NeedsConversion() const
{
  return Standard_False;
}

//================================================================
// Function : Is3D
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DummySensitiveEntity::Is3D() const
{
  return Standard_True;
}

//================================================================
// Function : MaxBoxes
// Purpose  :
//================================================================
Standard_Integer MeshVS_DummySensitiveEntity::MaxBoxes() const
{
  return 0;
}
