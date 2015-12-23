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

#include <OCAF/TDF/TDF_Label.hxx>
#include <Visualization/AIS/AIS_InteractiveObject.hxx>
#include <TPrsStd_PointDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TPrsStd_PointDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TPrsStd_Driver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TPrsStd_PointDriver)
IMPLEMENT_DOWNCAST(TPrsStd_PointDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TPrsStd_PointDriver)

#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDataXtd/TDataXtd_Point.hxx>
#include <OCAF/TDataXtd/TDataXtd_Geometry.hxx>
//#include <OCAF/TDataStd/TDataStd_Datum.hxx>
#include <Visualization/AIS/AIS_Point.hxx>
#include <Visualization/AIS/AIS_Drawer.hxx>
#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <Geometry/Geom/Geom_Point.hxx>
#include <Geometry/Geom/Geom_CartesianPoint.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>



//=======================================================================
//function :
//purpose  : 
//=======================================================================
TPrsStd_PointDriver::TPrsStd_PointDriver()
{
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean TPrsStd_PointDriver::Update (const TDF_Label& aLabel,
					     Handle(AIS_InteractiveObject)& anAISObject) 
{
  Handle(TDataXtd_Point) appoint;

  if ( !aLabel.FindAttribute(TDataXtd_Point::GetID(), appoint) ) {
    return Standard_False;
  }
 
  gp_Pnt pnt;
  if (!TDataXtd_Geometry::Point(aLabel,pnt)) {
    return Standard_False;
  }
  Handle(Geom_CartesianPoint) apt = new Geom_CartesianPoint(pnt);
  
  //  Update de l'AIS
  Handle(AIS_Point) aistrihed;
  if (anAISObject.IsNull())
    aistrihed = new AIS_Point(apt);
  else {
    aistrihed = Handle(AIS_Point)::DownCast(anAISObject);
    if (aistrihed.IsNull()) 
      aistrihed = new AIS_Point(apt);
    else {
      aistrihed->SetComponent(apt);
      aistrihed->ResetTransformation();
      aistrihed->SetToUpdate();
      aistrihed->UpdateSelection();
    }
  }
  anAISObject = aistrihed;
  return Standard_True;
}

