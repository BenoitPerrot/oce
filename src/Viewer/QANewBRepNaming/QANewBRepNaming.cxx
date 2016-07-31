// Created on: 2003-06-20
// Created by: Sergey ZARITCHNY
// Copyright (c) 2003-2014 OPEN CASCADE SAS
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
#include <OCAF/TNaming/TNaming_Builder.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <Viewer/QANewBRepNaming/QANewBRepNaming.hxx>

#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_ChildIterator.hxx>
#include <OCAF/TNaming/TNaming.hxx>
#include <OCAF/TNaming/TNaming_Iterator.hxx>
#include <OCAF/TNaming/TNaming_Builder.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>

//=======================================================================
//function : CleanStructure
//purpose  : 
//=======================================================================

void QANewBRepNaming::CleanStructure(const TDF_Label& theLabel) {
  
  TopTools_ListOfShape Olds;
  TopTools_ListOfShape News;
  TNaming_Evolution    anEvol;
  TNaming_Iterator     anIt(theLabel);
  if (anIt.More()) {
    anEvol = anIt.Evolution();
    for ( ; anIt.More(); anIt.Next()) {
      Olds.push_back(anIt.OldShape());
      News.push_back(anIt.NewShape());
    }

    TopTools_ListIteratorOfListOfShape itOlds = begin(Olds);
    TopTools_ListIteratorOfListOfShape itNews = begin(News);
    TNaming_Builder aBuilder(theLabel);
    anEvol = TNaming_DELETE;

    for ( ; itOlds != end(Olds) ; ++itOlds, ++itNews) {
      LoadNamedShape ( aBuilder, anEvol, *itOlds, *itNews);
    }
  }
  for (TDF_ChildIterator chlIt(theLabel, Standard_True); chlIt.More(); chlIt.Next()) {
    CleanStructure (chlIt.Value());
  }
}

//=======================================================================
//function : LoadNamedShape
//purpose  : 
//=======================================================================

void QANewBRepNaming::LoadNamedShape (TNaming_Builder& theBuilder,
					const TNaming_Evolution theEvol,
					const TopoDS_Shape& theOS,
					const TopoDS_Shape& theNS)
{
  switch (theEvol) {
  case TNaming_PRIMITIVE :
    {
      theBuilder.Generated(theNS);
      break;
    }
  case TNaming_GENERATED :
    {
      theBuilder.Generated(theOS, theNS);
      break;
    }
  case TNaming_MODIFY :
    {
      theBuilder.Modify(theOS, theNS);
      break;
    }
    case TNaming_REPLACE :
    {
      theBuilder.Modify(theOS, theNS);
      break;
    } // for compatibility
//  case TNaming_REPLACE :
//    {
//      theBuilder.Replace(theOS, theNS);
//      break;
//    }
  case TNaming_DELETE :
    {
      theBuilder.Delete (theOS);
      break;
    }
  case TNaming_SELECTED :
    {
      theBuilder.Select(theNS, theOS);
    }
  default:
    break;
  }
}

//=======================================================================
//function : Displace
//purpose  : if WithOld == True, dsplace with old subshapes
//=======================================================================

void QANewBRepNaming::Displace (const TDF_Label& theLabel,
                        const TopLoc_Location& theLoc,
                        const Standard_Boolean theWithOld)
{
  TopTools_ListOfShape Olds;
  TopTools_ListOfShape News;
  TNaming_Evolution    Evol;
  TNaming_Iterator     it(theLabel);

  if (it.More()) {
    Evol = it.Evolution();
    for ( ; it.More(); it.Next()) {
      Olds.push_back(it.OldShape());
      News.push_back(it.NewShape());
    }

    TopTools_ListIteratorOfListOfShape itOlds = begin(Olds);
    TopTools_ListIteratorOfListOfShape itNews = begin(News);
    TNaming_Builder B(theLabel);

    for ( ; itOlds != end(Olds) ; ++itOlds, ++itNews) {
      TopoDS_Shape OS,NS;
      const TopoDS_Shape& SO     = *itOlds;
      const TopoDS_Shape& SN     = *itNews;
      OS = SO;
      if (theWithOld && !SO.IsNull()) OS = SO.Moved(theLoc);
      if (!SN.IsNull()) NS = SN.Moved(theLoc);

      LoadNamedShape ( B, Evol, OS, NS);
    }
  }
  for (TDF_ChildIterator ciL(theLabel); ciL.More(); ciL.Next()) {
    Displace (ciL.Value(),theLoc,theWithOld);
  }
}
