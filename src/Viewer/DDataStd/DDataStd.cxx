// Created on: 1997-03-27
// Created by: Denis PASCAL
// Copyright (c) 1997-1999 Matra Datavision
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

#include <OCAF/TDataXtd/TDataXtd_Constraint.hxx>
#include <DDataStd.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDataStd/TDataStd.hxx>
#include <OCAF/TDataXtd/TDataXtd.hxx>
#include <OCAF/TDataStd/TDataStd_RealEnum.hxx>
#include <OCAF/TDataStd/TDataStd_Real.hxx>
#include <TNaming_NamedShape.hxx>

//=======================================================================
//function : AllCommands
//purpose  : 
//=======================================================================

void DDataStd::AllCommands (Draw_Interpretor& theCommands)
{   
  NamedShapeCommands (theCommands);  
  BasicCommands (theCommands);  
  DatumCommands (theCommands);   
  ConstraintCommands (theCommands); 
  ObjectCommands (theCommands); 
  DrawDisplayCommands (theCommands);
  NameCommands(theCommands); 
  TreeCommands(theCommands);   
}


//=======================================================================
//function : DumpConstraint
//purpose  : 
//=======================================================================

void DDataStd::DumpConstraint (const Handle(TDataXtd_Constraint)& CTR, Standard_OStream& anOS)
{
  TCollection_AsciiString S;
  TDF_Tool::Entry(CTR->Label(),S); 
  anOS << S << " ";
  TDataXtd::Print(CTR->GetType(),anOS); 
  for (Standard_Integer i = 1; i <= CTR->NbGeometries(); i++) {
    anOS << " G_" << i << " (";
    TDF_Tool::Entry(CTR->GetGeometry(i)->Label(),S); 
    anOS << S << ") ";
  }	
  if (CTR->IsPlanar()) {
    anOS << " P (";
    TDF_Tool::Entry(CTR->GetPlane()->Label(),S); 
    anOS << S << ") ";  
  }
  if (CTR->IsDimension()) {
    anOS << " V (";
    TDF_Tool::Entry(CTR->GetValue()->Label(),S); 
    anOS << S << ") ";     
    TDataStd_RealEnum t = CTR->GetValue()->GetDimension();  
    TDataStd::Print(t,anOS); 
    Standard_Real val = CTR->GetValue()->Get();
    if (t == TDataStd_ANGULAR) val = (180.*val)/M_PI;
    anOS << " ";
    anOS << val;
  }
  if (!CTR->Verified()) anOS << " NotVerifed"; 
}
