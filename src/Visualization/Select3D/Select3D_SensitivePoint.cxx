// Created on: 1995-03-10
// Created by: Mister rmi
// Copyright (c) 1995-1999 Matra Datavision
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

#include <SelectBasics_EntityOwner.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Select3D_Projector.hxx>
#include <SelectBasics_ListOfBox2d.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <Mathematics/Primitives/gp_Lin.hxx>
#include <Select3D_SensitivePoint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Select3D_SensitivePoint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Select3D_SensitiveEntity),
  STANDARD_TYPE(SelectBasics_SensitiveEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Select3D_SensitivePoint)
IMPLEMENT_DOWNCAST(Select3D_SensitivePoint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Select3D_SensitivePoint)

#include <Select3D_Projector.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <ElCLib.hxx>
#include <CSLib_Class2d.hxx>

//==================================================
// Function: Creation
// Purpose :
//==================================================

Select3D_SensitivePoint
::Select3D_SensitivePoint(const Handle(SelectBasics_EntityOwner)& anOwner,
                          const gp_Pnt& aPoint):
Select3D_SensitiveEntity(anOwner)
{
  SetSensitivityFactor(4.);
  mypoint = aPoint;
}

//==================================================
// Function: Project
// Purpose :
//==================================================

void Select3D_SensitivePoint
::Project (const Handle(Select3D_Projector)& aProj)
{
  gp_Pnt2d aPoint2d;
  if(!HasLocation())
    aProj->Project(mypoint, aPoint2d);
  else
  {
    gp_Pnt aP(mypoint.x, mypoint.y, mypoint.z);
    aProj->Project(aP.Transformed(Location().Transformation()), aPoint2d);
  }
  myprojpt = aPoint2d;
}

//==================================================
// Function: Areas
// Purpose :
//==================================================

void Select3D_SensitivePoint
::Areas(SelectBasics_ListOfBox2d& boxes)
{
  Bnd_Box2d abox;
  abox.Set(myprojpt);
  boxes.Append(abox);
}

//==================================================
// Function: Matches
// Purpose :
//==================================================

Standard_Boolean Select3D_SensitivePoint::Matches (const SelectBasics_PickArgs& thePickArgs,
                                                   Standard_Real& theMatchDMin,
                                                   Standard_Real& theMatchDepth)
{
  // check coordinate matching
  Standard_Real aDist = gp_Pnt2d (thePickArgs.X(), thePickArgs.Y()).Distance (myprojpt);
  if (aDist > thePickArgs.Tolerance() * SensitivityFactor())
  {
    return Standard_False;
  }

  Standard_Real aDepth = ComputeDepth (thePickArgs.PickLine());
  if (thePickArgs.IsClipped (aDepth))
  {
    return Standard_False;
  }

  theMatchDMin = aDist;
  theMatchDepth = aDepth;
  return Standard_True;
}

//==================================================
// Function: Matches
// Purpose :
//==================================================

Standard_Boolean Select3D_SensitivePoint::
Matches (const Standard_Real XMin,
         const Standard_Real YMin,
         const Standard_Real XMax,
         const Standard_Real YMax,
         const Standard_Real aTol)
{
  Bnd_Box2d B;
  B.Update(Min(XMin,XMax),Min(YMin,YMax),Max(XMin,XMax),Max(YMin,YMax));
  B.Enlarge(aTol);
  return !B.IsOut(myprojpt);
}

//=======================================================================
//function : Matches
//purpose  :
//=======================================================================

Standard_Boolean Select3D_SensitivePoint::
Matches (const TColgp_Array1OfPnt2d& aPoly,
         const Bnd_Box2d& aBox,
         const Standard_Real aTol)
{
  Standard_Real Umin,Vmin,Umax,Vmax;
  aBox.Get(Umin,Vmin,Umax,Vmax);
  CSLib_Class2d aClassifier2d(aPoly,aTol,aTol,Umin,Vmin,Umax,Vmax);

  Standard_Integer RES = aClassifier2d.SiDans(myprojpt);
  if(RES==1) return Standard_True;

  return Standard_False;
}

//=======================================================================
//function : Point
//purpose  :
//=======================================================================

gp_Pnt Select3D_SensitivePoint::Point() const
{return mypoint;}

//=======================================================================
//function : GetConnected
//purpose  :
//=======================================================================

Handle(Select3D_SensitiveEntity) Select3D_SensitivePoint::GetConnected(const TopLoc_Location& aLoc)
{
  Handle(Select3D_SensitivePoint) NiouEnt = new Select3D_SensitivePoint(myOwnerId,mypoint);
  if(HasLocation()) NiouEnt->SetLocation(Location());
  NiouEnt->UpdateLocation(aLoc);
  return NiouEnt;
}

//=======================================================================
//function : Dump
//purpose  :
//=======================================================================

void Select3D_SensitivePoint::Dump(Standard_OStream& S,const Standard_Boolean /*FullDump*/) const
{
  S<<"\tSensitivePoint 3D :";
  if(HasLocation())
    S<<"\t\tExisting Location"<<endl;

  S<<"\t\t P3d [ "<<mypoint.x<<" , "<<mypoint.y<<" , "<<mypoint.z<<" ]"<<endl;
  S<<"\t\t P2d [ "<<myprojpt.x<<" , "<<myprojpt.y<<" ]"<<endl;
}

//=======================================================================
//function : ComputeDepth
//purpose  :
//=======================================================================

Standard_Real Select3D_SensitivePoint::ComputeDepth(const gp_Lin& EyeLine) const
{
  return ElCLib::Parameter(EyeLine,mypoint);
}
