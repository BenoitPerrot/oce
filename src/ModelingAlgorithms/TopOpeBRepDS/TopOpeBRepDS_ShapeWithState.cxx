// Created on: 1999-09-20
// Created by: Peter KURNEV
// Copyright (c) 1999-1999 Matra Datavision
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

#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ShapeWithState.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>

//=======================================================================
//function : TopOpeBRepDS_ShapeWithState
//purpose  : 
//=======================================================================
TopOpeBRepDS_ShapeWithState::TopOpeBRepDS_ShapeWithState():
       myState(TopAbs_UNKNOWN), myIsSplitted(Standard_False) 
{}
//=======================================================================
//function : Part
//purpose  : 
//=======================================================================
  const TopTools_ListOfShape& TopOpeBRepDS_ShapeWithState::Part (const TopAbs_State aState) const
{
#warning C++ify: when state is invalid, fail at compile time, return nullptr or throw
  static TopTools_ListOfShape myEmptyListOfShape ;
  switch (aState) 
    {
    case TopAbs_IN:
      return myPartIn;
    case TopAbs_OUT:
      return myPartOut;
    case TopAbs_ON:
      return myPartOn;
    default :
      return myEmptyListOfShape;
    }
}
TopTools_ListOfShape& TopOpeBRepDS_ShapeWithState::ChangePart (const TopAbs_State aState)
{
#warning C++ify: when state is invalid, fail at compile time, return nullptr or throw
  static TopTools_ListOfShape myEmptyListOfShape ;
  switch (aState) 
    {
    case TopAbs_IN:
      return myPartIn;
    case TopAbs_OUT:
      return myPartOut;
    case TopAbs_ON:
      return myPartOn;
    default :
      return myEmptyListOfShape;
    }
}

//=======================================================================
//function : AddPart
//purpose  : 
//=======================================================================
  void TopOpeBRepDS_ShapeWithState::AddPart (const TopoDS_Shape& aShape, 
					     const TopAbs_State aState) 
{
  switch (aState) 
    {
    case TopAbs_IN:
      myPartIn.push_back(aShape);
      break;
    case TopAbs_OUT:
      myPartOut.push_back(aShape);
      break;
    case TopAbs_ON:
     myPartOn.push_back(aShape);
      break;
    default :
      break; 
    }
}

//=======================================================================
//function : AddParts
//purpose  : 
//=======================================================================
  void TopOpeBRepDS_ShapeWithState::AddParts (const TopTools_ListOfShape& aListOfShape, 
					      const TopAbs_State aState) 
{
  switch (aState) 
    {
    case TopAbs_IN:
      myPartIn.insert(end(myPartIn), begin(aListOfShape), end(aListOfShape));
      break;
    case TopAbs_OUT:
      myPartOut.insert(end(myPartIn), begin(aListOfShape), end(aListOfShape));
      break;
    case TopAbs_ON:
      myPartOn.insert(end(myPartIn), begin(aListOfShape), end(aListOfShape));
      break;
    
      default :
	break; 
    }
}


//=======================================================================
//function : SetState
//purpose  : 
//=======================================================================
  void TopOpeBRepDS_ShapeWithState::SetState(const TopAbs_State aState) 
{
  myState=aState;
}
//=======================================================================
//function : State
//purpose  : 
//=======================================================================
  TopAbs_State TopOpeBRepDS_ShapeWithState::State() const
{
  return myState;
}

//=======================================================================
//function : SetIsSplitted
//purpose  : 
//=======================================================================
  void TopOpeBRepDS_ShapeWithState::SetIsSplitted(const Standard_Boolean aFlag) 
{
  myIsSplitted=aFlag;
}
//=======================================================================
//function : IsSplitted
//purpose  : 
//=======================================================================
  Standard_Boolean TopOpeBRepDS_ShapeWithState::IsSplitted() const
{
  return myIsSplitted;
}
