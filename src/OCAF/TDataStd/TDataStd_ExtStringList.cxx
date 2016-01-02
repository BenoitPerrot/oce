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
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/TDataStd/TDataStd_ListOfExtendedString.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TDF/TDF_RelocationTable.hxx>
#include <OCAF/TDataStd/TDataStd_ExtStringList.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDataStd_ExtStringList)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_Attribute),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDataStd_ExtStringList)
IMPLEMENT_DOWNCAST(TDataStd_ExtStringList,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDataStd_ExtStringList)
#include <OCAF/TDataStd/TDataStd_ListIteratorOfListOfExtendedString.hxx>

//=======================================================================
//function : GetID
//purpose  : 
//=======================================================================
const Standard_GUID& TDataStd_ExtStringList::GetID() 
{ 
  static Standard_GUID TDataStd_ExtStringListID ("D13FBE0A-E084-4912-A99D-7713C59C0AC4");
  return TDataStd_ExtStringListID; 
}

//=======================================================================
//function : TDataStd_ExtStringList
//purpose  : Empty Constructor
//=======================================================================
TDataStd_ExtStringList::TDataStd_ExtStringList() 
{

}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================
Handle(TDataStd_ExtStringList) TDataStd_ExtStringList::Set(const TDF_Label& label) 
{
  Handle(TDataStd_ExtStringList) A;
  if (!label.FindAttribute (TDataStd_ExtStringList::GetID(), A)) 
  {
    A = new TDataStd_ExtStringList;
    label.AddAttribute(A);
  }
  return A;
}

//=======================================================================
//function : IsEmpty
//purpose  : 
//=======================================================================
Standard_Boolean TDataStd_ExtStringList::IsEmpty() const
{
  return myList.empty();
}

//=======================================================================
//function : Extent
//purpose  : 
//=======================================================================
Standard_Integer TDataStd_ExtStringList::Extent() const
{
  return myList.size();
}

//=======================================================================
//function : Prepend
//purpose  : 
//=======================================================================
void TDataStd_ExtStringList::Prepend(const TCollection_ExtendedString& value)
{
  Backup();
  myList.push_front(value);
}

//=======================================================================
//function : Append
//purpose  : 
//=======================================================================
void TDataStd_ExtStringList::Append(const TCollection_ExtendedString& value)
{
  Backup();
  myList.push_back(value);
}

//=======================================================================
//function : InsertBefore
//purpose  : 
//=======================================================================
Standard_Boolean TDataStd_ExtStringList::InsertBefore(const TCollection_ExtendedString& value,
						      const TCollection_ExtendedString& before_value)
{
  for (TDataStd_ListIteratorOfListOfExtendedString itr(myList.begin()); itr != myList.end(); ++itr)
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
Standard_Boolean TDataStd_ExtStringList::InsertAfter(const TCollection_ExtendedString& value,
						     const TCollection_ExtendedString& after_value)
{
  for (TDataStd_ListIteratorOfListOfExtendedString itr(myList.begin()); itr != myList.end(); ++itr)
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
Standard_Boolean TDataStd_ExtStringList::Remove(const TCollection_ExtendedString& value)
{
  for (TDataStd_ListIteratorOfListOfExtendedString itr(myList.begin()); itr != myList.end(); ++itr)
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
void TDataStd_ExtStringList::Clear()
{
  Backup();
  myList.clear();
}

//=======================================================================
//function : First
//purpose  : 
//=======================================================================
const TCollection_ExtendedString& TDataStd_ExtStringList::First() const
{
  return myList.front();
}

//=======================================================================
//function : Last
//purpose  : 
//=======================================================================
const TCollection_ExtendedString& TDataStd_ExtStringList::Last() const
{
  return myList.back();
}

//=======================================================================
//function : List
//purpose  : 
//=======================================================================
const TDataStd_ListOfExtendedString& TDataStd_ExtStringList::List() const
{
  return myList;
}

//=======================================================================
//function : ID
//purpose  : 
//=======================================================================
const Standard_GUID& TDataStd_ExtStringList::ID () const 
{ 
  return GetID(); 
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) TDataStd_ExtStringList::NewEmpty () const
{  
  return new TDataStd_ExtStringList(); 
}

//=======================================================================
//function : Restore
//purpose  : 
//=======================================================================
void TDataStd_ExtStringList::Restore(const Handle(TDF_Attribute)& With) 
{
  myList.clear();
  Handle(TDataStd_ExtStringList) aList = Handle(TDataStd_ExtStringList)::DownCast(With);

  myList.insert(myList.begin(), aList->List().begin(), aList->List().end());
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void TDataStd_ExtStringList::Paste (const Handle(TDF_Attribute)& Into,
				    const Handle(TDF_RelocationTable)& ) const
{
  Handle(TDataStd_ExtStringList) aList = Handle(TDataStd_ExtStringList)::DownCast(Into);
  aList->Clear();

  for (TDataStd_ListOfExtendedString::const_iterator itr(myList.begin()); itr != myList.end(); ++itr)
  {
    aList->Append((*itr));
  }
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================
Standard_OStream& TDataStd_ExtStringList::Dump (Standard_OStream& anOS) const
{  
  anOS << "ExtStringList";
  return anOS;
}
