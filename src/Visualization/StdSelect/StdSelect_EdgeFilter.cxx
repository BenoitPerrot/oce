// Created on: 1996-03-13
// Created by: Robert COUBLANC
// Copyright (c) 1996-1999 Matra Datavision
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

#include <Visualization/SelectMgr/SelectMgr_EntityOwner.hxx>
#include <Visualization/StdSelect/StdSelect_EdgeFilter.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StdSelect_EdgeFilter)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectMgr_Filter),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StdSelect_EdgeFilter)
IMPLEMENT_DOWNCAST(StdSelect_EdgeFilter,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StdSelect_EdgeFilter)
#include <ModelingData/BRepAdaptor/BRepAdaptor_Curve.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopAbs/TopAbs.hxx>
#include <Visualization/StdSelect/StdSelect_BRepOwner.hxx>
/*#include <.hxx>
#include <.hxx>
#include <.hxx>
#include <.hxx>
#include <.hxx>
*/

//==================================================
// Function: 
// Purpose :
//==================================================
StdSelect_EdgeFilter
::StdSelect_EdgeFilter (const StdSelect_TypeOfEdge Edge):
mytype(Edge){}

//==================================================
// Function: 
// Purpose :
//==================================================
void StdSelect_EdgeFilter
::SetType(const StdSelect_TypeOfEdge aNewType)
{
  mytype=aNewType;
}



//==================================================
// Function: 
// Purpose :
//==================================================
StdSelect_TypeOfEdge StdSelect_EdgeFilter::Type() const 
{
  return mytype;
}

//==================================================
// Function: 
// Purpose :
//==================================================
Standard_Boolean StdSelect_EdgeFilter::IsOk(const Handle(SelectMgr_EntityOwner)& EO) const 
{
  if (Handle(StdSelect_BRepOwner)::DownCast(EO).IsNull()) return Standard_False;
  
  const TopoDS_Shape& sh = ((Handle(StdSelect_BRepOwner)&)EO)->Shape();
  if(sh.ShapeType()!= TopAbs_EDGE) return Standard_False;
  
  switch(mytype){
  case StdSelect_AnyEdge:
      return Standard_True;
  case StdSelect_Line:
    {
      BRepAdaptor_Curve curv(TopoDS::Edge(sh));
      return (curv.GetType() == GeomAbs_Line);
    }
    break;
  case StdSelect_Circle:
    BRepAdaptor_Curve curv(TopoDS::Edge(sh));
    return (curv.GetType() == GeomAbs_Circle);
  }
  
  return Standard_False ;
}

Standard_Boolean StdSelect_EdgeFilter::ActsOn(const TopAbs_ShapeEnum aStandardMode) const 
{return aStandardMode==TopAbs_EDGE;}
