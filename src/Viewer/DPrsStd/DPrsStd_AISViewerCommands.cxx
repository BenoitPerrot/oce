// Created on: 1998-10-27
// Created by: Denis PASCAL
// Copyright (c) 1998-1999 Matra Datavision
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

#include <Viewer/DPrsStd/DPrsStd.hxx>

#include <Viewer/Draw/Draw.hxx>
#include <Viewer/Draw/Draw_Appli.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
#include <Viewer/Draw/Draw_ColorKind.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDocStd/TDocStd_Document.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_Data.hxx> 
#include <OCAF/TDF/TDF_Tool.hxx> 
#include <OCAF/TDF/TDF_ChildIterator.hxx>
#include <Viewer/DDF/DDF.hxx>
#include <Viewer/DDocStd/DDocStd.hxx>
#include <Viewer/ViewerTest/ViewerTest.hxx>
#include <Visualization/V3d/V3d_View.hxx>
#include <OCAF/TPrsStd/TPrsStd_AISPresentation.hxx>
#include <OCAF/TPrsStd/TPrsStd_AISViewer.hxx>
#include <Visualization/AIS/AIS_InteractiveContext.hxx> 

//=======================================================================
//function : DPrsStd_AISInitViewer
//purpose  : AISInitViewer (DOC)
//=======================================================================

static Standard_Integer DPrsStd_AISInitViewer (Draw_Interpretor& theDI,
                                               Standard_Integer  theArgNb,
                                               const char**      theArgVec)
{   
  if (theArgNb != 2)
  {
    std::cout << "DPrsStd_AISInitViewer : Error\n";
    return 1;
  }

  Handle(TDocStd_Document) aDoc;
  if (!DDocStd::GetDocument (theArgVec[1], aDoc))
  {
    return 1;
  }

  TDF_Label aRoot = aDoc->GetData()->Root();
  Handle(TPrsStd_AISViewer) aDocViewer;
  TCollection_AsciiString   aViewName = TCollection_AsciiString ("Driver1/Document_") + theArgVec[1] + "/View1";
  if (!TPrsStd_AISViewer::Find (aRoot, aDocViewer))
  {
    ViewerTest::ViewerInit (0, 0, 0, 0, aViewName.ToCString(), "");
    aDocViewer = TPrsStd_AISViewer::New (aRoot, ViewerTest::GetAISContext());
  }

  DDF::ReturnLabel (theDI, aDocViewer->Label());
  return 0;
}


//=======================================================================
//function : TPrsStd_AISRepaint
//purpose  : 
//=======================================================================

static Standard_Integer DPrsStd_AISRepaint (Draw_Interpretor& di,
					    Standard_Integer nb, 
					    const char** arg) 
{   
  if (nb == 2) {     
    Handle(TDocStd_Document) D;
    if (!DDocStd::GetDocument(arg[1],D)) return 1; 
    TDF_Label acces = D->GetData()->Root(); 
    TPrsStd_AISViewer::Update(acces);
    return 0;
  }
  di << "DPrsStd_AISRepaint : Error" << "\n";
  return 1; 
}

//=======================================================================
//function : AISViewerCommands
//purpose  :
//=======================================================================


void DPrsStd::AISViewerCommands (Draw_Interpretor& theCommands)
{  

  static Standard_Boolean done = Standard_False;
  if (done) return;
  done = Standard_True;
  const char* g = "DPrsStd : standard presentation commands" ;  
 
  // standard commands working on AISViewer
  
  theCommands.Add ("AISInitViewer", 
                   "AISInitViewer (DOC)",
		   __FILE__, DPrsStd_AISInitViewer, g);    

  theCommands.Add ("AISRepaint", 
                   "update the AIS viewer",
		   __FILE__, DPrsStd_AISRepaint, g);      
}
