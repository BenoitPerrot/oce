// Created on: 2007-05-29
// Created by: Vlad Romashko
// Copyright (c) 2007-2014 OPEN CASCADE SAS
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

#include <Foundation/Standard/Standard_GUID.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_LabelList.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TDF/TDF_RelocationTable.hxx>
#include <OCAF/TDF/TDF_DataSet.hxx>
#include <OCAF/TDataStd/TDataStd_ReferenceList.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDataStd_ReferenceList)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_Attribute),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDataStd_ReferenceList)
IMPLEMENT_DOWNCAST(TDataStd_ReferenceList,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDataStd_ReferenceList)
#include <OCAF/TDF/TDF_ListIteratorOfLabelList.hxx>

//=======================================================================
//function : GetID
//purpose  : 
//=======================================================================
const Standard_GUID& TDataStd_ReferenceList::GetID() 
{ 
  static Standard_GUID TDataStd_ReferenceListID ("FCC1A658-59FF-4218-931B-0320A2B469A7");
  return TDataStd_ReferenceListID; 
}

//=======================================================================
//function : TDataStd_ReferenceList
//purpose  : Empty Constructor
//=======================================================================
TDataStd_ReferenceList::TDataStd_ReferenceList() 
{

}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================
Handle(TDataStd_ReferenceList) TDataStd_ReferenceList::Set(const TDF_Label& label) 
{
  Handle(TDataStd_ReferenceList) A;
  if (!label.FindAttribute (TDataStd_ReferenceList::GetID(), A)) 
  {
    A = new TDataStd_ReferenceList;
    label.AddAttribute(A);
  }
  return A;
}

//=======================================================================
//function : IsEmpty
//purpose  : 
//=======================================================================
Standard_Boolean TDataStd_ReferenceList::IsEmpty() const
{
  return myList.empty();
}

//=======================================================================
//function : Extent
//purpose  : 
//=======================================================================
Standard_Integer TDataStd_ReferenceList::Extent() const
{
  return myList.size();
}

//=======================================================================
//function : Prepend
//purpose  : 
//=======================================================================
void TDataStd_ReferenceList::Prepend(const TDF_Label& value)
{
  Backup();
  myList.push_front(value);
}

//=======================================================================
//function : Append
//purpose  : 
//=======================================================================
void TDataStd_ReferenceList::Append(const TDF_Label& value)
{
  Backup();
  myList.push_back(value);
}

//=======================================================================
//function : InsertBefore
//purpose  : 
//=======================================================================
Standard_Boolean TDataStd_ReferenceList::InsertBefore(const TDF_Label& value,
						      const TDF_Label& before_value)
{
  for (TDF_ListIteratorOfLabelList itr(myList.begin()); itr != myList.end(); ++itr)
  {
    if ((*itr) == before_value)
    {
      Backup();
      myList.insert(itr, value);
      return Standard_True;
    }
  }
  return Standard_False;
}

//=======================================================================
//function : InsertAfter
//purpose  : 
//=======================================================================
Standard_Boolean TDataStd_ReferenceList::InsertAfter(const TDF_Label& value,
						     const TDF_Label& after_value)
{
  for (TDF_ListIteratorOfLabelList itr(myList.begin()); itr != myList.end(); ++itr)
  {
    if ((*itr) == after_value)
    {
      Backup();
      myList.insert(++itr, value);
      return Standard_True;
    }
  }
  return Standard_False;
}

//=======================================================================
//function : Remove
//purpose  : 
//=======================================================================
Standard_Boolean TDataStd_ReferenceList::Remove(const TDF_Label& value)
{
  for (TDF_ListIteratorOfLabelList itr(myList.begin()); itr != myList.end(); ++itr)
  {
    if ((*itr) == value)
    {
      Backup();
      myList.erase(itr);
      return Standard_True;
    }
  }
  return Standard_False;
}

//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================
void TDataStd_ReferenceList::Clear()
{
  Backup();
  myList.clear();
}

//=======================================================================
//function : First
//purpose  : 
//=======================================================================
const TDF_Label& TDataStd_ReferenceList::First() const
{
  return myList.front();
}

//=======================================================================
//function : Last
//purpose  : 
//=======================================================================
const TDF_Label& TDataStd_ReferenceList::Last() const
{
  return myList.back();
}

//=======================================================================
//function : List
//purpose  : 
//=======================================================================
const TDF_LabelList& TDataStd_ReferenceList::List() const
{
  return myList;
}

//=======================================================================
//function : ID
//purpose  : 
//=======================================================================
const Standard_GUID& TDataStd_ReferenceList::ID () const 
{ 
  return GetID(); 
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) TDataStd_ReferenceList::NewEmpty () const
{  
  return new TDataStd_ReferenceList(); 
}

//=======================================================================
//function : Restore
//purpose  : 
//=======================================================================
void TDataStd_ReferenceList::Restore(const Handle(TDF_Attribute)& With) 
{
  myList.clear();
  Handle(TDataStd_ReferenceList) aList = Handle(TDataStd_ReferenceList)::DownCast(With);
  myList.insert(myList.begin(), aList->List().begin(), aList->List().end());
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void TDataStd_ReferenceList::Paste (const Handle(TDF_Attribute)& Into,
				    const Handle(TDF_RelocationTable)& RT) const
{
  Handle(TDataStd_ReferenceList) aList = Handle(TDataStd_ReferenceList)::DownCast(Into);
  aList->Clear();
  for (TDF_Label L : myList)
  {
    TDF_Label rL;
    if (!L.IsNull())
    {
      if (!RT->HasRelocation(L, rL))
	rL = L;
      aList->Append(rL);
    }
  }
}

//=======================================================================
//function : References
//purpose  : Adds the referenced attributes or labels.
//=======================================================================
void TDataStd_ReferenceList::References(const Handle(TDF_DataSet)& aDataSet) const
{
  if (!Label().IsImported()) 
  {
    for (const TDF_Label &l : myList)
    {
      aDataSet->AddLabel(l);
    }
  }
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================
Standard_OStream& TDataStd_ReferenceList::Dump (Standard_OStream& anOS) const
{  
  anOS << "ReferenceList";
  return anOS;
}
