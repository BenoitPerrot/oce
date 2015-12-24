// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignatureList_HeaderFile
#define _IFSelect_SignatureList_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_SignatureList.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/Dico/Handle_Dico_DictionaryOfInteger.hxx>
#include <Foundation/Dico/Handle_Dico_DictionaryOfTransient.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/TColStd/Handle_TColStd_HSequenceOfHAsciiString.hxx>
#include <Foundation/TColStd/Handle_TColStd_HSequenceOfTransient.hxx>
#include <Foundation/Message/Handle_Message_Messenger.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
#include <DataExchange/IFSelect/IFSelect_PrintCount.hxx>
class TCollection_HAsciiString;
class Dico_DictionaryOfInteger;
class Dico_DictionaryOfTransient;
class Standard_Transient;
class TColStd_HSequenceOfHAsciiString;
class TColStd_HSequenceOfTransient;
class Message_Messenger;
class Interface_InterfaceModel;


//! A SignatureList is given as result from a Counter (any kind)
//! It gives access to a list of signatures, with counts, and
//! optionally with list of corresponding entities
//!
//! It can also be used only to give a signature, through SignOnly
//! Mode. This can be useful for a specific counter (used in a
//! Selection), while it remains better to use a Signature
//! whenever possible
class IFSelect_SignatureList : public MMgt_TShared
{

public:

  
  //! Creates a SignatureList. If <withlist> is True, entities will
  //! be not only counted per signature, but also listed.
  Standard_EXPORT IFSelect_SignatureList(const Standard_Boolean withlist = Standard_False);
  
  //! Changes the record-list status. The list is not cleared but
  //! its use changes
  Standard_EXPORT   void SetList (const Standard_Boolean withlist) ;
  
  //! Returns modifiable the SignOnly Mode
  //! If False (D), the counter normally counts
  //! If True, the counting work is turned off, Add only fills the
  //! LastValue, which can be used as signature, when a counter
  //! works from data which are not available from a Signature
  Standard_EXPORT   Standard_Boolean& ModeSignOnly() ;
  
  Standard_EXPORT virtual   void Clear() ;
  
  //! Adds an entity with its signature, i.e. :
  //! - counts an item more for <sign>
  //! - if record-list status is set, records the entity
  //! Accepts a null entity (the signature is then for the global
  //! model). But if the string is empty, counts a Null item.
  //!
  //! If SignOnly Mode is set, this work is replaced by just
  //! setting LastValue
  Standard_EXPORT   void Add (const Handle(Standard_Transient)& ent, const Standard_CString sign) ;
  
  //! Returns the last value recorded by Add (only if SignMode set)
  //! Cleared by Clear or Init
  Standard_EXPORT   Standard_CString LastValue()  const;
  
  //! Aknowledges the list in once. Name identifies the Signature
  Standard_EXPORT   void Init (const Standard_CString name, const Handle(Dico_DictionaryOfInteger)& count, const Handle(Dico_DictionaryOfTransient)& list, const Standard_Integer nbnuls) ;
  
  //! Returns the list of signatures, as a sequence of strings
  //! (but without their respective counts). It is ordered.
  //! By default, for all the signatures.
  //! If <root> is given non empty, for the signatures which
  //! begin by <root>
  Standard_EXPORT   Handle(TColStd_HSequenceOfHAsciiString) List (const Standard_CString root = "")  const;
  
  //! Returns True if the list of Entities is aknowledged, else
  //! the method Entities will always return a Null Handle
  Standard_EXPORT   Standard_Boolean HasEntities()  const;
  
  //! Returns the count of null entities
  Standard_EXPORT   Standard_Integer NbNulls()  const;
  
  //! Returns the number of times a signature was counted,
  //! 0 if it has not been recorded at all
  Standard_EXPORT   Standard_Integer NbTimes (const Standard_CString sign)  const;
  
  //! Returns the list of entities attached to a signature
  //! It is empty if <sign> has not been recorded
  //! It is a Null Handle if the list of entities is not known
  Standard_EXPORT   Handle(TColStd_HSequenceOfTransient) Entities (const Standard_CString sign)  const;
  
  //! Defines a name for a SignatureList (used to print it)
  Standard_EXPORT   void SetName (const Standard_CString name) ;
  
  //! Returns the recorded Name.
  //! Remark : default is "..." (no SetName called)
  Standard_EXPORT virtual   Standard_CString Name()  const;
  
  //! Prints the counts of items (not the list)
  Standard_EXPORT virtual   void PrintCount (const Handle(Message_Messenger)& S)  const;
  
  //! Prints the lists of items, if they are present (else, prints
  //! a message "no list available")
  //! Uses <model> to determine for each entity to be listed, its
  //! number, and its specific identifier (by PrintLabel)
  //! <mod> gives a mode for printing :
  //! - CountByItem : just count (as PrintCount)
  //! - ShortByItem : minimum i.e. count plus 5 first entity numbers
  //! - ShortByItem(D) complete list of entity numbers (0: "Global")
  //! - EntitiesByItem : list of (entity number/PrintLabel from the model)
  //! other modes are ignored
  Standard_EXPORT virtual   void PrintList (const Handle(Message_Messenger)& S, const Handle(Interface_InterfaceModel)& model, const IFSelect_PrintCount mod = IFSelect_ListByItem)  const;
  
  //! Prints a summary
  //! Item which has the greatest count of entities
  //! For items which are numeric values : their count, maximum,
  //! minimum values, cumul, average
  Standard_EXPORT virtual   void PrintSum (const Handle(Message_Messenger)& S)  const;




  DEFINE_STANDARD_RTTI(IFSelect_SignatureList)

protected:




private: 


  Standard_Boolean thesignonly;
  Standard_Boolean thelistat;
  Standard_Integer thenbnuls;
  Handle(TCollection_HAsciiString) thename;
  TCollection_AsciiString thelastval;
  Handle(Dico_DictionaryOfInteger) thedicount;
  Handle(Dico_DictionaryOfTransient) thediclist;


};







#endif // _IFSelect_SignatureList_HeaderFile
