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
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Select3D_Projector.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <MeshVS_SensitiveSegment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MeshVS_SensitiveSegment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Select3D_SensitiveSegment),
  STANDARD_TYPE(Select3D_SensitiveEntity),
  STANDARD_TYPE(SelectBasics_SensitiveEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MeshVS_SensitiveSegment)
IMPLEMENT_DOWNCAST(MeshVS_SensitiveSegment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MeshVS_SensitiveSegment)
#include <Select3D_Projector.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <CSLib_Class2d.hxx>
#include <TopLoc_Location.hxx>

//=======================================================================
// name    : MeshVS_SensitiveSegment::MeshVS_SensitiveSegment
// Purpose :
//=======================================================================
MeshVS_SensitiveSegment::MeshVS_SensitiveSegment (
             const Handle(SelectBasics_EntityOwner)& theOwnerId,
             const gp_Pnt&                           theFirstP,
             const gp_Pnt&                           theLastP,
             const Standard_Integer                  theMaxRect )
: Select3D_SensitiveSegment( theOwnerId, theFirstP, theLastP, theMaxRect )
{
  myCentre.SetXYZ( ( theFirstP.XYZ() + theLastP.XYZ() ) / 2 );
}

//=======================================================================
// name    : MeshVS_SensitiveSegment::Project
// Purpose :
//=======================================================================
void MeshVS_SensitiveSegment::Project( const Handle(Select3D_Projector)& aProj )
{
  Select3D_SensitiveSegment::Project( aProj );
  if ( HasLocation() )
    aProj->Project( myCentre.Transformed( Location().Transformation() ), myProjCentre );
  else
    aProj->Project( myCentre, myProjCentre );
}

//=======================================================================
// name    : MeshVS_SensitiveSegment::Matches
// Purpose :
//=======================================================================
Standard_Boolean MeshVS_SensitiveSegment::Matches( const Standard_Real XMin,
                                                   const Standard_Real YMin,
                                                   const Standard_Real XMax,
                                                   const Standard_Real YMax,
                                                   const Standard_Real aTol )
{
  Bnd_Box2d aBox;
  aBox.Update( XMin-aTol, YMin-aTol, XMax+aTol, YMax+aTol );
  return !aBox.IsOut( myProjCentre );
}

//=======================================================================
// name    : MeshVS_SensitiveSegment::Matches
// Purpose :
//=======================================================================
Standard_Boolean MeshVS_SensitiveSegment::Matches( const TColgp_Array1OfPnt2d& Polyline,
                                                   const Bnd_Box2d&            aBox,
                                                   const Standard_Real         aTol )
{
  Standard_Real Umin, Vmin, Umax, Vmax;
  aBox.Get ( Umin,Vmin,Umax,Vmax );
  CSLib_Class2d aClassifier2d( Polyline, aTol, aTol, Umin, Vmin, Umax, Vmax );
  Standard_Integer aRes = aClassifier2d.SiDans( myProjCentre );

  return ( aRes == 1) ;
}
