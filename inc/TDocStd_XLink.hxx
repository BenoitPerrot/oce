// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_XLink_HeaderFile
#define _TDocStd_XLink_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDocStd_XLink.hxx>

#include <TCollection_AsciiString.hxx>
#include <TDocStd_XLinkPtr.hxx>
#include <TDF_Attribute.hxx>
#include <Handle_TDF_Reference.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TDF_AttributeDelta.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TDocStd_XLinkRoot;
class TDocStd_XLinkIterator;
class TDF_Label;
class TDF_Reference;
class Standard_GUID;
class TCollection_AsciiString;
class TDF_AttributeDelta;
class TDF_Attribute;
class TDF_RelocationTable;


//! An attribute to store the path and the entry of
//! external links.
//! These refer from one data structure to a data
//! structure in another document.
class TDocStd_XLink : public TDF_Attribute
{

public:

  
  //! Sets an empty external reference, at the label aLabel.
  Standard_EXPORT static   Handle(TDocStd_XLink) Set (const TDF_Label& atLabel) ;
  
  //! Initializes fields.
  Standard_EXPORT TDocStd_XLink();
  
  //! Updates the data referenced in this external link attribute.
  Standard_EXPORT   Handle(TDF_Reference) Update() ;
  
  //! Returns the ID of the attribute.
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  //! Returns the GUID for external links.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Sets the name aDocEntry for the external
  //! document in this external link attribute.
  Standard_EXPORT   void DocumentEntry (const TCollection_AsciiString& aDocEntry) ;
  
  //! Returns the contents of the document identified by aDocEntry.
  //! aDocEntry provides external data to this external link attribute.
  Standard_EXPORT  const  TCollection_AsciiString& DocumentEntry()  const;
  
  //! Sets the label entry for this external link attribute with the label aLabel.
  //! aLabel pilots the importation of data from the document entry.
  Standard_EXPORT   void LabelEntry (const TDF_Label& aLabel) ;
  
  //! Sets the label entry for this external link attribute
  //! as a document identified by aLabEntry.
  Standard_EXPORT   void LabelEntry (const TCollection_AsciiString& aLabEntry) ;
  
  //! Returns the contents of the field <myLabelEntry>.
  Standard_EXPORT  const  TCollection_AsciiString& LabelEntry()  const;
  
  //! Updates the XLinkRoot attribute by adding <me>
  //! to its list.
  Standard_EXPORT   void AfterAddition() ;
  
  //! Updates the XLinkRoot attribute by removing <me>
  //! from its list.
  Standard_EXPORT   void BeforeRemoval() ;
  
  //! Something to do before applying <anAttDelta>.
  Standard_EXPORT virtual   Standard_Boolean BeforeUndo (const Handle(TDF_AttributeDelta)& anAttDelta, const Standard_Boolean forceIt = Standard_False) ;
  
  //! Something to do after applying <anAttDelta>.
  Standard_EXPORT virtual   Standard_Boolean AfterUndo (const Handle(TDF_AttributeDelta)& anAttDelta, const Standard_Boolean forceIt = Standard_False) ;
  
  //! Returns a null handle. Raise allways for ,it is
  //! nonsense to use this method.
  Standard_EXPORT   Handle(TDF_Attribute) BackupCopy()  const;
  
  //! Does nothing.
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& anAttribute) ;
  
  //! Returns a null handle.
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  //! Does nothing.
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& intoAttribute, const Handle(TDF_RelocationTable)& aRelocationTable)  const;
  
  //! Dumps the attribute on <aStream>.
  Standard_EXPORT   Standard_OStream& Dump (Standard_OStream& anOS)  const;


friend class TDocStd_XLinkRoot;
friend class TDocStd_XLinkIterator;


  DEFINE_STANDARD_RTTI(TDocStd_XLink)

protected:




private: 

  
  //! Sets the field <myNext> with <anXLinkPtr>.
      void Next (const TDocStd_XLinkPtr& anXLinkPtr) ;
  
  //! Returns the contents of the field <myNext>.
      TDocStd_XLinkPtr Next()  const;

  TCollection_AsciiString myDocEntry;
  TCollection_AsciiString myLabelEntry;
  TDocStd_XLinkPtr myNext;


};


#include <TDocStd_XLink.lxx>





#endif // _TDocStd_XLink_HeaderFile
