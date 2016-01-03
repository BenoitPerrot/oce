// Created on: 1997-07-30
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

#include <OCAF/TDF/TDF_IDList.hxx>
#include <OCAF/TDataStd/TDataStd.hxx>

#include <OCAF/TDF/TDF_AttributeIterator.hxx>
#include <OCAF/TDF/TDF_AttributeList.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDF/TDF_TagSource.hxx>
#include <OCAF/TDF/TDF_Reference.hxx>
#include <OCAF/TDF/TDF_ListIteratorOfAttributeList.hxx>
#include <OCAF/TDF/TDF_ListIteratorOfLabelList.hxx>
#include <OCAF/TDF/TDF_MapIteratorOfLabelMap.hxx>
#include <OCAF/TDF/TDF_DataSet.hxx>  
#include <OCAF/TDF/TDF_ChildIterator.hxx>
#include <OCAF/TDataStd/TDataStd_Integer.hxx>
#include <OCAF/TDataStd/TDataStd_Real.hxx>
#include <OCAF/TDataStd/TDataStd_Name.hxx>
#include <OCAF/TDataStd/TDataStd_UAttribute.hxx>
#include <OCAF/TDataStd/TDataStd_IntegerArray.hxx>
#include <OCAF/TDataStd/TDataStd_RealArray.hxx>
#include <OCAF/TDataStd/TDataStd_ExtStringArray.hxx>

#include <Foundation/Standard/Standard_GUID.hxx>



//=======================================================================
//function : IDList
//purpose  : 
//=======================================================================

void TDataStd::IDList(TDF_IDList& anIDList)
{  
  anIDList.push_back(TDF_TagSource::GetID());  
  anIDList.push_back(TDF_Reference::GetID());
  anIDList.push_back(TDataStd_Integer::GetID()); 
  anIDList.push_back(TDataStd_Name::GetID());  
  anIDList.push_back(TDataStd_Real::GetID());  
  anIDList.push_back(TDataStd_IntegerArray::GetID());
  anIDList.push_back(TDataStd_RealArray::GetID());
  anIDList.push_back(TDataStd_ExtStringArray::GetID());
  
}


//=======================================================================
//function : 
//purpose  : print the name of the real dimension
//=======================================================================

Standard_OStream& TDataStd::Print(const TDataStd_RealEnum C,  Standard_OStream& s)
{
  switch (C) {
  case TDataStd_SCALAR :
    {
      s << "SCALAR";  break;
    }
  case  TDataStd_LENGTH :
    {  
      s << "LENGTH"; break;
    }  
  case TDataStd_ANGULAR :
    { 
      s << "ANGULAR"; break;
    }
    default :
      {
	s << "UNKNOWN"; break;
      }
  }
  return s;
}

