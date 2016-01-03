// Copyright (c) 2006-2014 OPEN CASCADE SAS
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

#include <OCAF/TDF/TDF_Data.hxx>
#include <OCAF/TDF/TDF_Delta.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/TDF/TDF_LabelMap.hxx>
#include <OCAF/TDF/TDF_DeltaList.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/CDM/CDM_Document.hxx>
#include <OCAF/TDocStd/TDocStd_CompoundDelta.hxx>
#include <OCAF/TDocStd/TDocStd_Document.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDocStd_Document)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(CDM_Document),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDocStd_Document)
IMPLEMENT_DOWNCAST(TDocStd_Document,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDocStd_Document)

#include <OCAF/TDocStd/TDocStd.hxx>

#include <OCAF/TDocStd/TDocStd_XLink.hxx>
#include <OCAF/TDocStd/TDocStd_XLinkIterator.hxx>
#include <OCAF/TDocStd/TDocStd_Application.hxx>

#include <OCAF/TDocStd/TDocStd_Context.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDF/TDF_AttributeIterator.hxx>
#include <OCAF/TDF/TDF_ListIteratorOfDeltaList.hxx>
#include <OCAF/TDF/TDF_AttributeList.hxx>
#include <OCAF/TDF/TDF_ListIteratorOfAttributeList.hxx>
#include <OCAF/TDF/TDF_AttributeDelta.hxx>
#include <OCAF/TDF/TDF_AttributeDeltaList.hxx>
#include <OCAF/TDF/TDF_ListIteratorOfAttributeDeltaList.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_Delta.hxx>
#include <OCAF/TDocStd/TDocStd_CompoundDelta.hxx>
#include <OCAF/TDocStd/TDocStd_Owner.hxx>
#include <OCAF/TDocStd/TDocStd_Modified.hxx>

#include <OCAF/TDF/TDF_IDMap.hxx>
#include <OCAF/TDocStd/TDocStd_LabelIDMapDataMap.hxx>

#include <OCAF/CDM/CDM_MetaData.hxx>

#undef DEB_TRANS

#undef DEB_DELTA

#define BUC60836

#define SRN_DELTA_COMPACT

//=======================================================================
//function : Get
//purpose  : 
//=======================================================================

Handle(TDocStd_Document) TDocStd_Document::Get (const TDF_Label& acces)
{
  return TDocStd_Owner::GetDocument(acces.Data());
}

//=======================================================================
//function : TDocStd_Document
//purpose  : 
//=======================================================================


TDocStd_Document::TDocStd_Document(const TCollection_ExtendedString& aStorageFormat) : 
myStorageFormat(aStorageFormat),
myData (new TDF_Data()),
myUndoLimit(0),
mySaveTime(0),
myIsNestedTransactionMode(0)
{
  TDF_Transaction* pTr =  new TDF_Transaction (myData,"UNDO");
  myUndoTransaction    = *pTr; delete pTr;
  TDocStd_Owner::SetDocument(myData,this);

#ifdef SRN_DELTA_COMPACT
  myFromUndo.Nullify();  
  myFromRedo.Nullify();
#endif
}


//=======================================================================
//function : IsSaved
//purpose  : 
//=======================================================================

Standard_Boolean TDocStd_Document::IsSaved() const
{
  return CDM_Document::IsStored();
}


//=======================================================================
//function : GetName
//purpose  : 
//=======================================================================

TCollection_ExtendedString TDocStd_Document::GetName () const
{
  return CDM_Document::MetaData()->Name();
}

//=======================================================================
//function : GetPath
//purpose  : 
//=======================================================================

TCollection_ExtendedString TDocStd_Document::GetPath () const
{
  return CDM_Document::MetaData()->Path();
}


//=======================================================================
//function : SetData
//purpose  : 
//=======================================================================

void TDocStd_Document::SetData (const Handle(TDF_Data)& D)
{
  myData = D;
  TDF_Transaction* pTr = new TDF_Transaction(myData,"UNDO");
  myUndoTransaction = *pTr; delete pTr;  
}

//=======================================================================
//function : GetData
//purpose  : 
//=======================================================================

Handle(TDF_Data) TDocStd_Document::GetData () const
{
  return myData;
}

//=======================================================================
//function : Main
//purpose  : 
//=======================================================================

TDF_Label TDocStd_Document::Main () const
{ 
  return  myData->Root().FindChild(1,Standard_True);
}

//=======================================================================
//function : IsEmpty
//purpose  : 
//=======================================================================

Standard_Boolean TDocStd_Document::IsEmpty() const
{
  TDF_AttributeIterator It (Main());
  return !It.More();
}

//=======================================================================
//function : IsValid
//purpose  : 
//=======================================================================

Standard_Boolean TDocStd_Document::IsValid() const
{
  return TDocStd_Modified::IsEmpty(Main());
}

//=======================================================================
//function : SetModified
//purpose  : 
//=======================================================================

void TDocStd_Document::SetModified (const TDF_Label& L)                                  
{  
  TDocStd_Modified::Add(L);
}

//=======================================================================
//function : IsModified
//purpose  : 
//=======================================================================
//Standard_Boolean TDocStd_Document::IsModified (const TDF_Label& L) const                                 
//{  
//  return TDocStd_Modified::Contains(L);
//}

//=======================================================================
//function : PurgeModified
//purpose  : 
//=======================================================================

void TDocStd_Document::PurgeModified()
{   
  TDocStd_Modified::Clear(Main()); 
}

//=======================================================================
//function : GetModified
//purpose  : 
//=======================================================================

const TDF_LabelMap&  TDocStd_Document::GetModified() const
{  
  return TDocStd_Modified::Get(Main());  
}



//=======================================================================
//function : Update
//purpose  : 
//=======================================================================

void TDocStd_Document::Update(const Handle(CDM_Document)& /*aToDocument*/,
			       const Standard_Integer aReferenceIdentifier,
			       const Standard_Address aModifContext) 
{
  const TDocStd_Context* CC = static_cast<TDocStd_Context*> (aModifContext);
  if (CC->ModifiedReferences() || !IsUpToDate(aReferenceIdentifier)) {
    TCollection_AsciiString aDocEntry(aReferenceIdentifier);
    UpdateReferences(aDocEntry);
    SetIsUpToDate(aReferenceIdentifier);
  }
}

//=======================================================================
//function : NewCommand
//purpose  : 
//=======================================================================

void TDocStd_Document::NewCommand()
{
#ifdef OCCT_DEBUG_TRANS
  if (myUndoTransaction.IsOpen() && myData->Transaction() > 1) {
    Standard_DomainError::Raise ("NewCommand : many open transactions");
  }
#endif

  CommitTransaction();
  OpenTransaction();

#ifdef OCCT_DEBUG_TRANS
  cout<<"End NewCommand"<<endl;
#endif
}


//=======================================================================
//function : HasOpenCommand
//purpose  : 
//=======================================================================
Standard_Boolean TDocStd_Document::HasOpenCommand() const
{
  return myUndoTransaction.IsOpen();
}

//=======================================================================
//function : OpenCommand
//purpose  : 
//=======================================================================

void TDocStd_Document::OpenCommand ()
{
  if (!myIsNestedTransactionMode && myUndoTransaction.IsOpen()) {
    Standard_DomainError::Raise("TDocStd_Document::OpenCommand : already open");
  }
  OpenTransaction();
//  if (myUndoLimit != 0) myUndoTransaction.Open();
}

//=======================================================================
//function : CommitCommand
//purpose  : 
//=======================================================================

Standard_Boolean TDocStd_Document::CommitCommand ()
{
  return CommitTransaction();
}


//=======================================================================
//function : AbortCommand
//purpose  : 
//=======================================================================

void TDocStd_Document::AbortCommand ()
{ 
  AbortTransaction();
}


//=======================================================================
//function : CommitTransaction
//purpose  : Private method.
//=======================================================================

Standard_Boolean TDocStd_Document::CommitTransaction()
{
  myData->AllowModification(Standard_True);

  Standard_Boolean isDone = Standard_False;
  // nested transaction mode
  if (myIsNestedTransactionMode && myUndoTransaction.IsOpen()) {

    Handle(TDF_Delta) D = myUndoTransaction.Commit(Standard_True);
    Handle(TDocStd_CompoundDelta) aCompDelta =
      Handle(TDocStd_CompoundDelta)::DownCast(myUndoFILO.front());
    AppendDeltaToTheFirst(aCompDelta, D);
    D = aCompDelta;
    myUndoFILO.pop_front();
    if(myUndoFILO.size()) {
      aCompDelta = Handle(TDocStd_CompoundDelta)::DownCast(myUndoFILO.front());
      AppendDeltaToTheFirst(aCompDelta, D);
      myUndoTransaction.Open();
    }
    else {
      if(!D->IsEmpty()) {
        myUndos.push_back(D);
        myRedos.clear(); // if we push an Undo we clear the redos
        isDone = Standard_True;
      }
    }

    // deny modifications if the transaction is not opened
    if(myOnlyTransactionModification) {
      myData->AllowModification(myUndoTransaction.IsOpen() && myUndoLimit
                                ? Standard_True :Standard_False);
    }

  } else {

  // are we undoing...
    if (myUndoLimit != 0 && myUndoTransaction.IsOpen()) {

      Handle(TDF_Delta) D = myUndoTransaction.Commit(Standard_True);
      if (!(D.IsNull() || D->IsEmpty())) {
        isDone = Standard_True;

        myRedos.clear(); // if we push an Undo we clear the redos
        myUndos.push_back(D); // New undos are at the end of the list
        // Check  the limit to remove the oldest one
        if (myUndos.size() > myUndoLimit) {
#ifdef SRN_DELTA_COMPACT
          Handle(TDF_Delta) aDelta = myUndos.front();
#endif
          myUndos.pop_front();
#ifdef SRN_DELTA_COMPACT
          if(myFromUndo == aDelta) {
            //The oldest Undo delta coincides with `from` delta
            if(myUndos.size() == 1) {   //There is the only Undo
              myFromUndo.Nullify();
              myFromRedo.Nullify();
            }
            else
              myFromUndo = myUndos.front();
          }
#endif
        }
      }

    }

    // deny or allow modifications acording to transaction state
    if(myOnlyTransactionModification) {
      myData->AllowModification (myUndoTransaction.IsOpen() && myUndoLimit
                                 ? Standard_True :Standard_False);
    }
  }
  // Notify CDM_Application of the successful commit
  if (isDone && IsOpened()) {
    const Handle(TDocStd_Application) anAppli =
      Handle(TDocStd_Application)::DownCast(Application());
    if (!anAppli.IsNull())
      anAppli -> OnCommitTransaction (this);
  }
  return isDone;
}


//=======================================================================
//function : AbortTransaction
//purpose  : Private method.
//=======================================================================

void TDocStd_Document::AbortTransaction()
{
  myData->AllowModification(Standard_True);
  
  if (myUndoTransaction.IsOpen())
    if (myUndoLimit != 0)
      myUndoTransaction.Abort();

  if (myIsNestedTransactionMode && myUndoFILO.size()) {
    if (!myUndoFILO.front()->IsEmpty())
      myData->Undo(myUndoFILO.front(),Standard_True);
    myUndoFILO.pop_front();
    if (myUndoFILO.size())
      myUndoTransaction.Open();
  }
  // deny or allow modifications acording to transaction state
  if (myOnlyTransactionModification) {
    myData->AllowModification (myUndoTransaction.IsOpen() && myUndoLimit
                               ? Standard_True :Standard_False);
  }
  // Notify CDM_Application of the event
  if (IsOpened()) {
    const Handle(TDocStd_Application) anAppli =
      Handle(TDocStd_Application)::DownCast(Application());
    if (!anAppli.IsNull())
      anAppli -> OnAbortTransaction (this);
  }
}


//=======================================================================
//function :OpenTransaction
//purpose  : Private method.
//=======================================================================

void TDocStd_Document::OpenTransaction()
{
  myData->AllowModification(Standard_True);

  // nested transaction mode
  if (myIsNestedTransactionMode) {

    if (myUndoTransaction.IsOpen()) {
      Handle(TDF_Delta) D = myUndoTransaction.Commit(Standard_True);
      Handle(TDocStd_CompoundDelta) aCompDelta =
        Handle(TDocStd_CompoundDelta)::DownCast(myUndoFILO.front());
      AppendDeltaToTheFirst(aCompDelta, D);
    }
    Standard_Integer aLastTime = myData->Time();
    if (myUndoFILO.size())
      aLastTime = myUndoFILO.front()->EndTime();
    Handle(TDocStd_CompoundDelta) aCompoundDelta =
      new TDocStd_CompoundDelta;
    aCompoundDelta->Validity(aLastTime, aLastTime);
    myUndoFILO.push_front(aCompoundDelta);
  } 

  if (myUndoLimit != 0) myUndoTransaction.Open();

  // deny or allow modifications acording to transaction state
  if (myOnlyTransactionModification) {
    myData->AllowModification (myUndoTransaction.IsOpen() && myUndoLimit
                               ? Standard_True :Standard_False);
  }
  // Notify CDM_Application of the event
  if (IsOpened()) {
    const Handle(TDocStd_Application) anAppli =
      Handle(TDocStd_Application)::DownCast(Application());
    if (!anAppli.IsNull())
      anAppli -> OnOpenTransaction (this);
  }
}

//=======================================================================
//function : SetUndoLimit
//purpose  : 
//=======================================================================

void TDocStd_Document::SetUndoLimit(const Standard_Integer L)
{  
#ifdef SRN_DELTA_COMPACT
  myFromUndo.Nullify();  //Compaction has to aborted
  myFromRedo.Nullify();
#endif

  CommitTransaction ();
  myUndoLimit = (L > 0) ? L : 0;
  Standard_Integer n = myUndos.size() - myUndoLimit;
  while (n > 0) {
    myUndos.pop_front();
    --n;
  }
  // deny or allow modifications acording to transaction state
  if(myOnlyTransactionModification) {
    myData->AllowModification(myUndoTransaction.IsOpen() && myUndoLimit
                              ? Standard_True :Standard_False);
  }
  //OpenTransaction(); dp 15/10/99
}

//=======================================================================
//function : GetUndoLimit
//purpose  : 
//=======================================================================

Standard_Integer TDocStd_Document::GetUndoLimit() const
{
  return myUndoLimit;
}

//=======================================================================
//function : Undos
//purpose  : 
//=======================================================================

Standard_Integer TDocStd_Document::GetAvailableUndos() const
{
  return myUndos.size();
}

//=======================================================================
//function : ClearUndos
//purpose  : 
//=======================================================================

void TDocStd_Document::ClearUndos()
{
  myUndos.clear();
  myRedos.clear();
#ifdef SRN_DELTA_COMPACT
  myFromRedo.Nullify();
  myFromUndo.Nullify();
#endif
}

//=======================================================================
//function : ClearRedos
//purpose  : 
//=======================================================================

void TDocStd_Document::ClearRedos()
{
  myRedos.clear();
#ifdef SRN_DELTA_COMPACT
  myFromRedo.Nullify();
#endif
}

//=======================================================================
//function : Undo
//purpose  : 
// Some importante notice:
// 1) The most recent undo delta is at the end of the list.
// 2) Removing the LAST item of a list is tedious, but it is done only on
//    Undo. Remove first is done at each command if the limit is reached!
// 3) To make fun, the redos are not like the undos: the most recent delta
//    is at the beginning! Like this, it is easier to remove it after use.
//=======================================================================
Standard_Boolean TDocStd_Document::Undo() 
{
  // Don't call NewCommand(), because it may commit Interactive Attributes
  // and generate a undesirable Delta!

  Standard_Boolean isOpened = myUndoTransaction.IsOpen();
  Standard_Boolean undoDone = Standard_False;
  //TDF_Label currentObjectLabel = CurrentLabel (); //Sauve pour usage ulterieur.

  if (!myUndos.empty()) {
    // Reset the transaction
    AbortTransaction();

    // only for nested transaction mode
    while(myIsNestedTransactionMode && myUndoFILO.size())
      AbortTransaction();

    // allow modifications
    myData->AllowModification(Standard_True);

    // Apply the Undo
    // should test the applicability before.
#ifdef OCCT_DEBUG_DELTA
    cout<<"DF before Undo =================================="<<endl; TDF_Tool::DeepDump(cout,myData);
#endif
    Handle(TDF_Delta) D = myData->Undo(myUndos.back(),Standard_True);
#ifdef BUC60836 
    D->SetName(myUndos.back()->Name());
#endif
#ifdef OCCT_DEBUG_DELTA
    cout<<"DF after Undo =================================="<<endl; TDF_Tool::DeepDump(cout,myData);
#endif
    // Push the redo
    myRedos.push_front(D);
    // Remove the last Undo
    myUndos.pop_back();
    undoDone = Standard_True;
  }

  if (isOpened && undoDone) OpenTransaction();

  // deny or allow modifications acording to transaction state
  if(myOnlyTransactionModification) {
    myData->AllowModification(myUndoTransaction.IsOpen() && myUndoLimit
                              ? Standard_True :Standard_False);
  }
  
  return undoDone;
}

//=======================================================================
//function : GetAvailableRedos
//purpose  : 
//=======================================================================

Standard_Integer TDocStd_Document:: GetAvailableRedos() const
{
  // should test the applicability before.
  return myRedos.size();
}

//=======================================================================
//function : Redo
//purpose  : 
//=======================================================================
Standard_Boolean TDocStd_Document::Redo() 
{
  Standard_Boolean isOpened = myUndoTransaction.IsOpen();
  Standard_Boolean undoDone = Standard_False;
  // TDF_Label currentObjectLabel = CurrentLabel();//Sauve pour usage ulterieur.
  if (!myRedos.empty()) {
    // should test the applicability before.
    // Reset the transaction
    AbortTransaction();

    // only for nested transaction mode
    while(myIsNestedTransactionMode && myUndoFILO.size())
      AbortTransaction();

    // allow modifications
    myData->AllowModification(Standard_True);

    // Apply the Redo
#ifdef OCCT_DEBUG_DELTA
    cout<<"DF before Redo =================================="<<endl; TDF_Tool::DeepDump(cout,myData);
#endif
    Handle(TDF_Delta) D = myData->Undo(myRedos.front(),Standard_True);
#ifdef BUC60836
    D->SetName(myRedos.front()->Name());
#endif
#ifdef OCCT_DEBUG_DELTA
    cout<<"DF after Redo =================================="<<endl; TDF_Tool::DeepDump(cout,myData);
#endif
    // Push the redo of the redo as an undo (got it !)
    myUndos.push_back(D);
    // remove the Redo from the head
    myRedos.pop_front();
    undoDone = Standard_True;
  }
  
  if (isOpened && undoDone) OpenTransaction();

  // deny or allow modifications acording to transaction state
  if(myOnlyTransactionModification) {
    myData->AllowModification(myUndoTransaction.IsOpen() && myUndoLimit
                              ? Standard_True :Standard_False);
  }

  return undoDone;
}

//=======================================================================
//function : UpdateReferences
//purpose  : 
//=======================================================================

void TDocStd_Document::UpdateReferences(const TCollection_AsciiString& aDocEntry) 
{

  TDF_AttributeList aRefList;
  TDocStd_XLink* xRefPtr;
  for (TDocStd_XLinkIterator xItr (this); xItr.More(); xItr.Next()) {
    xRefPtr = xItr.Value();
    if (xRefPtr->DocumentEntry() == aDocEntry) {
      aRefList.Append(xRefPtr->Update());
    }
  }
  TDF_ListIteratorOfAttributeList It(aRefList);
  for (;It.More();It.Next()) {
    //     // mise a jour import
    SetModified(It.Value()->Label());
  }
}


//=======================================================================
//function : GetUndos
//purpose  : 
//=======================================================================

const TDF_DeltaList& TDocStd_Document::GetUndos() const 
{
  return myUndos;
}


//=======================================================================
//function : GetRedos
//purpose  : 
//=======================================================================

const TDF_DeltaList& TDocStd_Document::GetRedos() const 
{
  return myRedos;
}

//=======================================================================
//function : InitDeltaCompaction
//purpose  : 
//=======================================================================

Standard_Boolean TDocStd_Document::InitDeltaCompaction()
{
#ifdef SRN_DELTA_COMPACT
  if (myUndoLimit == 0 || myUndos.size() == 0) {
    myFromRedo.Nullify();
    myFromUndo.Nullify();
    return Standard_False; //No Undos to compact
  }

  myFromRedo.Nullify();

  myFromUndo = myUndos.back();
  if(myRedos.size() > 0) myFromRedo = myRedos.front();
#endif
  return Standard_True;
}

//=======================================================================
//function : PerformDeltaCompaction
//purpose  : 
//=======================================================================

Standard_Boolean TDocStd_Document::PerformDeltaCompaction()  
{ 
#ifdef SRN_DELTA_COMPACT
  if(myFromUndo.IsNull()) return Standard_False;  //Redo can be Null for this operation 

  TDF_DeltaList aList; 
  Handle(TDocStd_CompoundDelta) aCompoundDelta = new TDocStd_CompoundDelta; 
  TDocStd_LabelIDMapDataMap aMap; 
  Standard_Boolean isFound = Standard_False, isTimeSet = Standard_False; 

  //Process Undos

  for (const Handle(TDF_Delta) &d: myUndos) { 
    if(!isFound) { 
      if(myFromUndo == d) isFound = Standard_True; 
      aList.push_back(d);  //Fill the list of deltas that precede compound delta 
      continue;
    } 

    if(!isTimeSet) {  //Set begin and end time when the compound delta is valid
      aCompoundDelta->Validity(d->BeginTime(), myUndos.back()->EndTime());
      isTimeSet = Standard_True;
    } 

    for (const Handle(TDF_AttributeDelta) &ad : d->AttributeDeltas()) {
      if(!aMap.IsBound(ad->Label())) {
	TDF_IDMap* pIDMap = new TDF_IDMap();
	aMap.Bind(ad->Label(), *pIDMap);
	delete pIDMap;
	}
      if(aMap(ad->Label()).Add(ad->ID())) //The attribute is not 
	aCompoundDelta->AddAttributeDelta(ad);                 //already in the delta
    }
  } 

  myUndos.clear(); 
  myUndos.insert(myUndos.begin(), aList.begin(), aList.end()); 
  myUndos.push_back(aCompoundDelta); 

  //Process Redos

  if(myFromRedo.IsNull()) {
    myRedos.clear();
    return Standard_True;
  }

  aList.clear();
  for (const Handle(TDF_Delta) &d : myRedos) { 
    aList.push_back(d); 
    if(d == myFromRedo) break;
  }

  myRedos.clear();
  myRedos.insert(myRedos.begin(), aList.begin(), aList.end()); 
#endif
  return Standard_True; 
} 


//=======================================================================
//function : StorageFormat
//purpose  : 
//=======================================================================

TCollection_ExtendedString TDocStd_Document::StorageFormat() const 
{
  return myStorageFormat;
}


//=======================================================================
//function : ChangeStorageFormat
//purpose  : 
//=======================================================================

void TDocStd_Document::ChangeStorageFormat (const TCollection_ExtendedString& newStorageFormat) 
{
  if (newStorageFormat != myStorageFormat) {
    myStorageFormat = newStorageFormat;
    myResourcesAreLoaded = Standard_False;
    CDM_Document::LoadResources ();
  }
}




//=======================================================================
//function : Recompute
//purpose  : 
//=======================================================================

void TDocStd_Document::Recompute ()
{
  if (IsValid()) return;
  // find the top function and execute it
  //  Handle(TDesign_Function) F;
  //  if (Main().FindAttribute(TDesign_Function::GetID(),F)) {
  // TFunction_Solver slv;
  // slv.SetTouched(GetModified());
  // slv.ExecuteFrom(F);
  PurgeModified();
}

//=======================================================================
//function : AppendDeltaToTheFirst
//purpose  : Appends delta to the first delta in the myUndoFILO
//=======================================================================

void TDocStd_Document::AppendDeltaToTheFirst
  (const Handle(TDocStd_CompoundDelta)& theDelta1,
   const Handle(TDF_Delta)& theDelta2)
{
  if(theDelta2->IsEmpty()) return;
  TDocStd_LabelIDMapDataMap aMap; 

  for (const Handle(TDF_AttributeDelta) &ad : theDelta1->AttributeDeltas()) {
    TDF_Label aLabel = ad->Label();
    if(!aMap.IsBound(aLabel)) {
      TDF_IDMap aTmpIDMap;
      aMap.Bind(aLabel, aTmpIDMap);
    }
    Standard_GUID anID = ad->ID();
    TDF_IDMap& anIDMap = aMap.ChangeFind(aLabel);
    anIDMap.Add(anID);
  }
  
  theDelta1->Validity(theDelta1->BeginTime(), theDelta2->EndTime());
  for (const Handle(TDF_AttributeDelta) &ad : theDelta2->AttributeDeltas()) {
    TDF_Label aLabel = ad->Label();
    Standard_GUID anID = ad->ID();
    if(aMap.IsBound(aLabel)) {
      const TDF_IDMap& anIDMap = aMap.Find(aLabel);
      if(anIDMap.Contains(anID)) continue;
    }
    theDelta1->AddAttributeDelta(ad);
  }
}

//=======================================================================
//function : RemoveFirstUndo
//purpose  : 
//=======================================================================
void TDocStd_Document::RemoveFirstUndo() {
  if (myUndos.empty()) return;
  myUndos.pop_front();
}

//=======================================================================
//function : BeforeClose
//purpose  : 
//=======================================================================
void TDocStd_Document::BeforeClose() 
{
  SetModificationMode(Standard_False);
  AbortTransaction();
  if(myIsNestedTransactionMode)
	 myUndoFILO.clear();
  ClearUndos();
}
