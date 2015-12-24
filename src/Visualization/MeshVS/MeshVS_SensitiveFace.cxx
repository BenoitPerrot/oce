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

#include <Visualization/SelectBasics/SelectBasics_EntityOwner.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Visualization/Select3D/Select3D_Projector.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <Visualization/MeshVS/MeshVS_SensitiveFace.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MeshVS_SensitiveFace)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Select3D_SensitiveFace),
  STANDARD_TYPE(Select3D_SensitivePoly),
  STANDARD_TYPE(Select3D_SensitiveEntity),
  STANDARD_TYPE(SelectBasics_SensitiveEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MeshVS_SensitiveFace)
IMPLEMENT_DOWNCAST(MeshVS_SensitiveFace,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MeshVS_SensitiveFace)

#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Visualization/Select3D/Select3D_Projector.hxx>
#include <Mathematics/Primitives/CSLib_Class2d.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>

//=======================================================================
// name    : MeshVS_SensitiveFace::MeshVS_SensitiveFace
// Purpose :
//=======================================================================
MeshVS_SensitiveFace::MeshVS_SensitiveFace (
                   const Handle(SelectBasics_EntityOwner)& theOwnerId,
                   const TColgp_Array1OfPnt&               thePnts,
                   const Select3D_TypeOfSensitivity        theSensitivity )
: Select3D_SensitiveFace( theOwnerId, thePnts, theSensitivity )
{
  gp_XYZ c( 0, 0, 0 );
  Standard_Integer nbPnts = thePnts.Upper() - thePnts.Lower() + 1;
  for ( Standard_Integer i = thePnts.Lower(); i <= thePnts.Upper(); i++ )
    c += thePnts( i ).XYZ();
  myCentre.SetXYZ( c / nbPnts );
}

//=======================================================================
// name    : MeshVS_SensitiveFace::Project
// Purpose :
//=======================================================================
void MeshVS_SensitiveFace::Project( const Handle(Select3D_Projector)& aProj )
{
  Select3D_SensitiveFace::Project( aProj );
  if ( HasLocation() )
    aProj->Project( myCentre.Transformed( Location().Transformation() ), myProjCentre );
  else
    aProj->Project( myCentre, myProjCentre );
}

//=======================================================================
// name    : MeshVS_SensitiveFace::Matches
// Purpose :
//=======================================================================
Standard_Boolean MeshVS_SensitiveFace::Matches( const Standard_Real XMin,
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
// name    : MeshVS_SensitiveFace::Matches
// Purpose :
//=======================================================================
Standard_Boolean MeshVS_SensitiveFace::Matches( const TColgp_Array1OfPnt2d& Polyline,
                                                const Bnd_Box2d&            aBox,
                                                const Standard_Real         aTol )
{
  Standard_Real Umin, Vmin, Umax, Vmax;
  aBox.Get ( Umin,Vmin,Umax,Vmax );
  CSLib_Class2d aClassifier2d( Polyline, aTol, aTol, Umin, Vmin, Umax, Vmax );
  Standard_Integer aRes = aClassifier2d.SiDans( myProjCentre );

  return ( aRes == 1) ;
}
