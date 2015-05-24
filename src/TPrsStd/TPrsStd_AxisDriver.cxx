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

#include <TDF_Label.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TPrsStd_AxisDriver.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TPrsStd_AxisDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TPrsStd_Driver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TPrsStd_AxisDriver)
IMPLEMENT_DOWNCAST(TPrsStd_AxisDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TPrsStd_AxisDriver)

#include <TDF_Label.hxx>
#include <TDataXtd_Axis.hxx>
#include <TDataXtd_Geometry.hxx>
#include <AIS_Axis.hxx>
#include <AIS_Drawer.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Geom_Line.hxx>
#include <gp_Lin.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_NamedShape.hxx>
#include <TopoDS_Shape.hxx>



//=======================================================================
//function :
//purpose  : 
//=======================================================================
TPrsStd_AxisDriver::TPrsStd_AxisDriver()
{
}


//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean TPrsStd_AxisDriver::Update (const TDF_Label& aLabel,
					    Handle(AIS_InteractiveObject)& anAISObject) 
{

  Handle(TDataXtd_Axis) apAxis;
  if ( !aLabel.FindAttribute(TDataXtd_Axis::GetID(), apAxis) ) {
    return Standard_False;
  }

  gp_Lin lin;  
  Handle(TNaming_NamedShape) NS;
  if(aLabel.FindAttribute(TNaming_NamedShape::GetID(),NS)){
    if(TNaming_Tool::GetShape(NS).IsNull()){
      return Standard_False;
    }
  }
  
  Handle(AIS_Axis) aistrihed;
  if (TDataXtd_Geometry::Line(aLabel,lin)) {
    Handle(Geom_Line) apt = new Geom_Line (lin);
    
    //  Update de l'AIS
    if (anAISObject.IsNull())
      aistrihed = new AIS_Axis(apt);
    else {
      aistrihed = Handle(AIS_Axis)::DownCast(anAISObject);
      if (aistrihed.IsNull()) 
	aistrihed = new AIS_Axis(apt);
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
  return Standard_False;
}

