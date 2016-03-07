// Created on: 1997-04-22
// Created by: Prestataire Mary FABIEN
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

#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_HDataStructure.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_Filter.hxx>

#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_Interference.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ListOfInterference.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ListIteratorOfListOfInterference.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/TopOpeBRepDS_ProcessInterferencesTool.hxx>

#ifdef OCCT_DEBUG
extern Standard_Boolean TopOpeBRepDS_GettracePI();
extern Standard_Boolean TopOpeBRepDS_GettracePCI();
static Standard_Boolean TRCC() {
  Standard_Boolean b2 = TopOpeBRepDS_GettracePI();
  Standard_Boolean b3 = TopOpeBRepDS_GettracePCI();
  return (b2 || b3);
}
#endif

//=======================================================================
//function : ProcessCurveInterferences
//purpose  : 
//=======================================================================

void TopOpeBRepDS_Filter::ProcessCurveInterferences
(const Standard_Integer CIX)
{
  TopOpeBRepDS_DataStructure& BDS = myHDS->ChangeDS();
  TopOpeBRepDS_ListOfInterference& LI = BDS.ChangeCurveInterferences(CIX);
  TopOpeBRepDS_ListIteratorOfListOfInterference it1(begin(LI));
  
  // process interferences of LI with VERTEX geometry
  while( it1 != end(LI) ) {
    const Handle(TopOpeBRepDS_Interference)& I1 = *it1;
    Standard_Integer G1 = I1->Geometry();
    TopOpeBRepDS_Kind GT1 = I1->GeometryType();
    TopAbs_Orientation O1 = I1->Transition().Orientation(TopAbs_IN);
    
    if ( GT1 == TopOpeBRepDS_VERTEX ) {
      
      TopOpeBRepDS_ListIteratorOfListOfInterference it2(it1);
      ++it2;
      
      while ( it2 != end(LI) ) {
	const Handle(TopOpeBRepDS_Interference)& I2 = *it2;
	Standard_Integer G2 = I2->Geometry();
	TopOpeBRepDS_Kind GT2 = I2->GeometryType();
	TopAbs_Orientation O2 = I2->Transition().Orientation(TopAbs_IN);
	
//	Standard_Boolean remove = (GT2 == GT1) && (G2 == G1);
	// xpu140898 : USA60111 : CPI(FORWARD,v10,C1) + CPIREV(REVERSED,v10,C1)
	//             do NOT delete CPIREV!!
	Standard_Boolean remove = (GT2 == GT1) && (G2 == G1) && (O1 == O2);
	if ( remove ) {
#ifdef OCCT_DEBUG
	  if ( TRCC() ){
	    cout<<"remove ";I2->Dump(cout);cout<<" from C "<<CIX<<endl;
	  }
#endif
	  it2 = LI.erase(it2);
	}
	else ++it2;
      }
    }
    ++it1;
  }
}
