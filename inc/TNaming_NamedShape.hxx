// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_NamedShape_HeaderFile
#define _TNaming_NamedShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TNaming_NamedShape.hxx>

#include <TNaming_PtrNode.hxx>
#include <TNaming_Evolution.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_DeltaOnModification.hxx>
#include <Handle_TDF_DeltaOnRemoval.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Handle_TDF_DataSet.hxx>
#include <Handle_TDF_AttributeDelta.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TNaming_Builder;
class TNaming_Iterator;
class TNaming_NewShapeIterator;
class TNaming_OldShapeIterator;
class Standard_GUID;
class TopoDS_Shape;
class TDF_Attribute;
class TDF_DeltaOnModification;
class TDF_DeltaOnRemoval;
class TDF_RelocationTable;
class TDF_DataSet;
class TDF_AttributeDelta;


//! The basis to define an attribute for the storage of
//! topology and naming data.
//! This attribute contains two parts:
//! -   The type of evolution, a term of the
//! enumeration TNaming_Evolution
//! -   A list of pairs of shapes called the "old"
//! shape and the "new" shape. The meaning
//! depends on the type of evolution.
class TNaming_NamedShape : public TDF_Attribute
{

public:

  
  //! class method
  //! ============
  //! Returns the GUID for named shapes.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT TNaming_NamedShape();
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  //! Returns the shapes contained in <NS>. Returns a null
  //! shape if IsEmpty.
  Standard_EXPORT   TopoDS_Shape Get()  const;
  
  //! Returns the Evolution of the attribute.
      TNaming_Evolution Evolution()  const;
  
  //! Returns the Version of the attribute.
      Standard_Integer Version()  const;
  
  //! Set the Version of the attribute.
      void SetVersion (const Standard_Integer version) ;
  
  Standard_EXPORT   void Clear() ;
~TNaming_NamedShape()
{
  Clear();
}
  
  //! Returns the ID of the attribute.
     const  Standard_GUID& ID()  const;
  
  //! Copies  the attribute  contents into  a  new other
  //! attribute. It is used by Backup().
  Standard_EXPORT virtual   Handle(TDF_Attribute) BackupCopy()  const;
  
  //! Restores the contents from <anAttribute> into this
  //! one. It is used when aborting a transaction.
  Standard_EXPORT virtual   void Restore (const Handle(TDF_Attribute)& anAttribute) ;
  
  //! Makes a DeltaOnModification between <me> and
  //! <anOldAttribute.
  Standard_EXPORT virtual   Handle(TDF_DeltaOnModification) DeltaOnModification (const Handle(TDF_Attribute)& anOldAttribute)  const;
  
  //! Applies a DeltaOnModification to <me>.
  Standard_EXPORT virtual   void DeltaOnModification (const Handle(TDF_DeltaOnModification)& aDelta) ;
  
  //! Makes a DeltaOnRemoval on <me> because <me> has
  //! disappeared from the DS.
  Standard_EXPORT virtual   Handle(TDF_DeltaOnRemoval) DeltaOnRemoval()  const;
  
  //! Returns an new empty attribute from the good end
  //! type. It is used by the copy algorithm.
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  //! This method is different from the "Copy" one,
  //! because it is used when copying an attribute from
  //! a source structure into a target structure. This
  //! method pastes the current attribute to the label
  //! corresponding to the insertor. The pasted
  //! attribute may be a brand new one or a new version
  //! of the previous one.
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& intoAttribute, const Handle(TDF_RelocationTable)& aRelocTationable)  const;
  
  //! Adds the directly referenced attributes and labels
  //! to <aDataSet>. "Directly" means we have only to
  //! look at the first level of references.
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& aDataSet)  const;
  
  Standard_EXPORT virtual   void BeforeRemoval() ;
  
  //! Something to do before applying <anAttDelta>
  Standard_EXPORT virtual   Standard_Boolean BeforeUndo (const Handle(TDF_AttributeDelta)& anAttDelta, const Standard_Boolean forceIt = Standard_False) ;
  
  //! Something to do after applying <anAttDelta>.
  Standard_EXPORT virtual   Standard_Boolean AfterUndo (const Handle(TDF_AttributeDelta)& anAttDelta, const Standard_Boolean forceIt = Standard_False) ;
  
  //! Dumps the attribute on <aStream>.
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;

friend class TNaming_Builder;
friend class TNaming_Iterator;
friend class TNaming_NewShapeIterator;
friend class TNaming_OldShapeIterator;


  DEFINE_STANDARD_RTTI(TNaming_NamedShape)

protected:




private: 

  
  //! Adds an evolution
  Standard_EXPORT   void Add (TNaming_PtrNode& Evolution) ;

  TNaming_PtrNode myNode;
  TNaming_Evolution myEvolution;
  Standard_Integer myVersion;


};


#include <TNaming_NamedShape.lxx>





#endif // _TNaming_NamedShape_HeaderFile
