// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_HeaderFile
#define _TDocStd_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>
#include <OCAF/TDF/TDF_IDList.hxx>

class TDocStd_Application;
class TDocStd_Document;
class TDocStd_Context;
class TDocStd_XLink;
class TDocStd_XLinkIterator;
class TDocStd_XLinkTool;
class TDocStd_Owner;
class TDocStd_Modified;
class TDocStd_XLinkRoot;
class TDocStd_PathParser;
class TDocStd_CompoundDelta;
class TDocStd_LabelIDMapDataMap;
class TDocStd_ApplicationDelta;
class TDocStd_MultiTransactionManager;
class TDocStd_SequenceOfApplicationDelta;
class TDocStd_SequenceOfDocument;
class TDocStd_DataMapNodeOfLabelIDMapDataMap;
class TDocStd_DataMapIteratorOfLabelIDMapDataMap;
class TDocStd_SequenceNodeOfSequenceOfApplicationDelta;
class TDocStd_SequenceNodeOfSequenceOfDocument;


//! This package define  CAF main classes.
//!
//! * The standard application root class
//!
//! * The standard document wich contains data
//!
//! * The external reference mechanism between documents
//!
//! * Attributes for Document management
//! Standard documents offer you a ready-to-use
//! document containing a TDF-based data
//! structure. The documents themselves are
//! contained in a class inheriting from
//! TDocStd_Application which manages creation,
//! storage and retrieval of documents.
//! You can implement undo and redo in your
//! document, and refer from the data framework of
//! one document to that of another one. This is
//! done by means of external link attributes, which
//! store the path and the entry of external links. To
//! sum up, standard documents alone provide
//! access to the data framework. They also allow
//! you to:
//! -   Update external links
//! -   Manage the saving and opening of data
//! -   Manage undo/redo functionality.
//! Note
//! For information on the relations between this
//! component of OCAF and the others, refer to the
//! OCAF User's Guide.
class TDocStd 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! specific GUID of this package
  //! =============================
  //! Appends to <anIDList> the list of the attributes
  //! IDs of this package. CAUTION: <anIDList> is NOT
  //! cleared before use.
  Standard_EXPORT static   void IDList (TDF_IDList& anIDList) ;




protected:





private:




friend class TDocStd_Application;
friend class TDocStd_Document;
friend class TDocStd_Context;
friend class TDocStd_XLink;
friend class TDocStd_XLinkIterator;
friend class TDocStd_XLinkTool;
friend class TDocStd_Owner;
friend class TDocStd_Modified;
friend class TDocStd_XLinkRoot;
friend class TDocStd_PathParser;
friend class TDocStd_CompoundDelta;
friend class TDocStd_LabelIDMapDataMap;
friend class TDocStd_ApplicationDelta;
friend class TDocStd_MultiTransactionManager;
friend class TDocStd_SequenceOfApplicationDelta;
friend class TDocStd_SequenceOfDocument;
friend class TDocStd_DataMapNodeOfLabelIDMapDataMap;
friend class TDocStd_DataMapIteratorOfLabelIDMapDataMap;
friend class TDocStd_SequenceNodeOfSequenceOfApplicationDelta;
friend class TDocStd_SequenceNodeOfSequenceOfDocument;

};







#endif // _TDocStd_HeaderFile
