// Created on: 1995-09-04
// Created by: Jacques GOUSSARD
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

#include <LocOpe_WiresOnShape.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Compound.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <BRepFeat_SplitShape.hxx>

#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <Foundation/Standard/Standard_Failure.hxx>

//=======================================================================
//function : Build
//purpose  : 
//=======================================================================

void BRepFeat_SplitShape::Build ()
{
  mySShape.Perform(myWOnShape);
  if (mySShape.IsDone()) {
    Done();
    myShape = mySShape.ResultingShape();
  }
}



//=======================================================================
//function : DirectLeft
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepFeat_SplitShape::DirectLeft() const
{
  return mySShape.DirectLeft();
}


//=======================================================================
//function : DirectLeft
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepFeat_SplitShape::Left() const
{
  return mySShape.Left();
}

//=======================================================================
//function : isDeleted
//purpose  : 
//=======================================================================

Standard_Boolean BRepFeat_SplitShape::IsDeleted(const TopoDS_Shape& F) 
{
  TopTools_ListIteratorOfListOfShape itl
    (((LocOpe_Spliter*) &mySShape)->DescendantShapes(F));
  // all that to swindle the constant

  return (!itl.More());// a priori impossible

}
//=======================================================================
//function : Modified
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepFeat_SplitShape::Modified
   (const TopoDS_Shape& F)
{
  return mySShape.DescendantShapes(F);
}




