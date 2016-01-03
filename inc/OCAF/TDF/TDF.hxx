// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_HeaderFile
#define _TDF_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_GUID;
class TCollection_ExtendedString;
class TDF_Data;
class TDF_Label;
class TDF_Attribute;
class TDF_TagSource;
class TDF_Reference;
class TDF_ClosureMode;
class TDF_ClosureTool;
class TDF_CopyTool;
class TDF_CopyLabel;
class TDF_ComparisonTool;
class TDF_Transaction;
class TDF_Delta;
class TDF_AttributeDelta;
class TDF_DeltaOnAddition;
class TDF_DeltaOnForget;
class TDF_DeltaOnResume;
class TDF_DeltaOnRemoval;
class TDF_DeltaOnModification;
class TDF_DefaultDeltaOnRemoval;
class TDF_DefaultDeltaOnModification;
class TDF_ChildIterator;
class TDF_ChildIDIterator;
class TDF_DataSet;
class TDF_RelocationTable;
class TDF_Tool;
class TDF_LabelMapHasher;
class TDF_IDFilter;
class TDF_AttributeList;
class TDF_AttributeDeltaList;
class TDF_DeltaList;
class TDF_AttributeSequence;
class TDF_LabelSequence;
class TDF_AttributeArray1;
class TDF_HAttributeArray1;
class TDF_IDMap;
class TDF_AttributeMap;
class TDF_AttributeDataMap;
class TDF_AttributeDoubleMap;
class TDF_AttributeIndexedMap;
class TDF_LabelMap;
class TDF_LabelDataMap;
class TDF_LabelDoubleMap;
class TDF_LabelIndexedMap;
class TDF_LabelIntegerMap;
class TDF_GUIDProgIDMap;
class TDF_ListNodeOfAttributeList;
class TDF_ListIteratorOfAttributeList;
class TDF_ListNodeOfAttributeDeltaList;
class TDF_ListIteratorOfAttributeDeltaList;
class TDF_ListNodeOfDeltaList;
class TDF_ListIteratorOfDeltaList;
class TDF_SequenceNodeOfAttributeSequence;
class TDF_SequenceNodeOfLabelSequence;
class TDF_StdMapNodeOfIDMap;
class TDF_MapIteratorOfIDMap;
class TDF_StdMapNodeOfAttributeMap;
class TDF_MapIteratorOfAttributeMap;
class TDF_DataMapNodeOfAttributeDataMap;
class TDF_DataMapIteratorOfAttributeDataMap;
class TDF_DoubleMapNodeOfAttributeDoubleMap;
class TDF_DoubleMapIteratorOfAttributeDoubleMap;
class TDF_IndexedMapNodeOfAttributeIndexedMap;
class TDF_StdMapNodeOfLabelMap;
class TDF_MapIteratorOfLabelMap;
class TDF_DataMapNodeOfLabelDataMap;
class TDF_DataMapIteratorOfLabelDataMap;
class TDF_DoubleMapNodeOfLabelDoubleMap;
class TDF_DoubleMapIteratorOfLabelDoubleMap;
class TDF_IndexedMapNodeOfLabelIndexedMap;
class TDF_DataMapNodeOfLabelIntegerMap;
class TDF_DataMapIteratorOfLabelIntegerMap;
class TDF_DoubleMapNodeOfGUIDProgIDMap;
class TDF_DoubleMapIteratorOfGUIDProgIDMap;


//! This package provides data framework for binding
//! features and data structures.
//!
//! The feature structure is a tree used to bind
//! semantic informations about each feature together.
//!
//! The only one concrete   attribute defined in  this
//! package is the TagSource attribute.This attribute
//! is used for  random creation of child labels under
//! a given label. Tags are randomly delivered.
class TDF 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns ID "00000000-0000-0000-0000-000000000000",
  //! sometimes used as null ID.
  Standard_EXPORT static  const  Standard_GUID& LowestID() ;
  
  //! Returns ID "ffffffff-ffff-ffff-ffff-ffffffffffff".
  Standard_EXPORT static  const  Standard_GUID& UppestID() ;
  
  //! Sets link between GUID and ProgID in hidden DataMap
  Standard_EXPORT static   void AddLinkGUIDToProgID (const Standard_GUID& ID, const TCollection_ExtendedString& ProgID) ;
  
  //! Returns True if there is GUID for given <ProgID> then GUID is returned in <ID>
  Standard_EXPORT static   Standard_Boolean GUIDFromProgID (const TCollection_ExtendedString& ProgID, Standard_GUID& ID) ;
  
  //! Returns True if there is ProgID for given <ID> then ProgID is returned in <ProgID>
  Standard_EXPORT static   Standard_Boolean ProgIDFromGUID (const Standard_GUID& ID, TCollection_ExtendedString& ProgID) ;




protected:





private:




friend class TDF_Data;
friend class TDF_Label;
friend class TDF_Attribute;
friend class TDF_TagSource;
friend class TDF_Reference;
friend class TDF_ClosureMode;
friend class TDF_ClosureTool;
friend class TDF_CopyTool;
friend class TDF_CopyLabel;
friend class TDF_ComparisonTool;
friend class TDF_Transaction;
friend class TDF_Delta;
friend class TDF_AttributeDelta;
friend class TDF_DeltaOnAddition;
friend class TDF_DeltaOnForget;
friend class TDF_DeltaOnResume;
friend class TDF_DeltaOnRemoval;
friend class TDF_DeltaOnModification;
friend class TDF_DefaultDeltaOnRemoval;
friend class TDF_DefaultDeltaOnModification;
friend class TDF_ChildIterator;
friend class TDF_ChildIDIterator;
friend class TDF_DataSet;
friend class TDF_RelocationTable;
friend class TDF_Tool;
friend class TDF_LabelMapHasher;
friend class TDF_IDFilter;
friend class TDF_AttributeList;
friend class TDF_AttributeDeltaList;
friend class TDF_DeltaList;
friend class TDF_AttributeSequence;
friend class TDF_LabelSequence;
friend class TDF_AttributeArray1;
friend class TDF_HAttributeArray1;
friend class TDF_IDMap;
friend class TDF_AttributeMap;
friend class TDF_AttributeDataMap;
friend class TDF_AttributeDoubleMap;
friend class TDF_AttributeIndexedMap;
friend class TDF_LabelMap;
friend class TDF_LabelDataMap;
friend class TDF_LabelDoubleMap;
friend class TDF_LabelIndexedMap;
friend class TDF_LabelIntegerMap;
friend class TDF_GUIDProgIDMap;
friend class TDF_ListNodeOfAttributeList;
friend class TDF_ListIteratorOfAttributeList;
friend class TDF_ListNodeOfAttributeDeltaList;
friend class TDF_ListIteratorOfAttributeDeltaList;
friend class TDF_ListNodeOfDeltaList;
friend class TDF_ListIteratorOfDeltaList;
friend class TDF_SequenceNodeOfAttributeSequence;
friend class TDF_SequenceNodeOfLabelSequence;
friend class TDF_StdMapNodeOfIDMap;
friend class TDF_MapIteratorOfIDMap;
friend class TDF_StdMapNodeOfAttributeMap;
friend class TDF_MapIteratorOfAttributeMap;
friend class TDF_DataMapNodeOfAttributeDataMap;
friend class TDF_DataMapIteratorOfAttributeDataMap;
friend class TDF_DoubleMapNodeOfAttributeDoubleMap;
friend class TDF_DoubleMapIteratorOfAttributeDoubleMap;
friend class TDF_IndexedMapNodeOfAttributeIndexedMap;
friend class TDF_StdMapNodeOfLabelMap;
friend class TDF_MapIteratorOfLabelMap;
friend class TDF_DataMapNodeOfLabelDataMap;
friend class TDF_DataMapIteratorOfLabelDataMap;
friend class TDF_DoubleMapNodeOfLabelDoubleMap;
friend class TDF_DoubleMapIteratorOfLabelDoubleMap;
friend class TDF_IndexedMapNodeOfLabelIndexedMap;
friend class TDF_DataMapNodeOfLabelIntegerMap;
friend class TDF_DataMapIteratorOfLabelIntegerMap;
friend class TDF_DoubleMapNodeOfGUIDProgIDMap;
friend class TDF_DoubleMapIteratorOfGUIDProgIDMap;

};







#endif // _TDF_HeaderFile
