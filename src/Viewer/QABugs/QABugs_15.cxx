// Created on: 2002-04-09
// Created by: QA Admin
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#include <Viewer/QABugs/QABugs.hxx>

#include <Viewer/Draw/Draw.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
#include <Viewer/DBRep/DBRep.hxx>
#include <Viewer/DrawTrSurf/DrawTrSurf.hxx>
#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <Viewer/ViewerTest/ViewerTest.hxx>
#include <Visualization/AIS/AIS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>

#include <Viewer/QABugs/QABugs_PresentableObject.hxx>

Handle(QABugs_PresentableObject) theObject1=NULL;
Handle(QABugs_PresentableObject) theObject2=NULL;

static Standard_Integer BUC60720 (Draw_Interpretor& di,Standard_Integer argc,const char ** argv )
{
  Handle(AIS_InteractiveContext) myAISContext = ViewerTest::GetAISContext();
  if(myAISContext.IsNull()) { 
    di << "use 'vinit' command before " << argv[0] << "\n";
    return -1;
  }

  if(argc != 2) {
    di << "Usage : " << argv[0] << " 0/1" << "\n";
  }

  if(Draw::Atoi(argv[1]) == 0) {
    if ( theObject1.IsNull() )
      {
	theObject1 = new QABugs_PresentableObject();
	theObject1->SetDisplayMode(0);
	myAISContext->Display(theObject1);
      }
  } else if(Draw::Atoi(argv[1]) == 1) {
    if ( theObject2.IsNull() )
      {
	theObject2 = new QABugs_PresentableObject();
	theObject2->SetDisplayMode(1);
	myAISContext->Display(theObject2);
      }
  } else {
    di << "Usage : " << argv[0] << " 0/1" << "\n";
    return -1;
  }
  return 0;
}

void QABugs::Commands_15(Draw_Interpretor& theCommands)
{
  const char *group = "QABugs";
  theCommands.Add("BUC60720","BUC60720 0/1",__FILE__,BUC60720,group);
}
