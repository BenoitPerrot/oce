// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_Mesh_HeaderFile
#define _MeshVS_Mesh_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MeshVS_Mesh.hxx>

#include <MeshVS_SequenceOfPrsBuilder.hxx>
#include <Handle_MeshVS_PrsBuilder.hxx>
#include <Handle_TColStd_HPackedMapOfInteger.hxx>
#include <MeshVS_DataMapOfIntegerOwner.hxx>
#include <Handle_MeshVS_DataSource.hxx>
#include <Handle_MeshVS_Drawer.hxx>
#include <Handle_SelectMgr_EntityOwner.hxx>
#include <MeshVS_MeshSelectionMethod.hxx>
#include <AIS_InteractiveObject.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_SelectMgr_Selection.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class MeshVS_PrsBuilder;
class TColStd_HPackedMapOfInteger;
class MeshVS_DataSource;
class MeshVS_Drawer;
class SelectMgr_EntityOwner;
class Prs3d_Presentation;
class SelectMgr_Selection;
class SelectMgr_SequenceOfOwner;
class MeshVS_DataMapOfIntegerOwner;


//! the main class provides interface to create mesh presentation as a whole
class MeshVS_Mesh : public AIS_InteractiveObject
{

public:

  
  //! Constructor.
  //! theIsAllowOverlapped is Standard_True, if it is allowed to draw edges overlapped with beams
  //! Its value is stored in drawer
  Standard_EXPORT MeshVS_Mesh(const Standard_Boolean theIsAllowOverlapped = Standard_False);
  
  Standard_EXPORT virtual   void Destroy() ;
~MeshVS_Mesh()
{
  Destroy();
}
  
  //! Computes presentation using builders added to sequence. Each builder computes
  //! own part of mesh presentation according to its type.
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& PM, const Handle(Prs3d_Presentation)& Prs, const Standard_Integer DisplayMode) ;
  
  //! Computes selection according to SelectMode
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& Sel, const Standard_Integer SelectMode) ;
  
  //! Draw selected owners presentation
  Standard_EXPORT virtual   void HilightSelected (const Handle(PrsMgr_PresentationManager3d)& PM, const SelectMgr_SequenceOfOwner& Owners) ;
  
  //! Draw hilighted owner presentation
  Standard_EXPORT virtual   void HilightOwnerWithColor (const Handle(PrsMgr_PresentationManager3d)& PM, const Quantity_NameOfColor Color, const Handle(SelectMgr_EntityOwner)& Owner) ;
  
  //! Clears internal selection presentation
  Standard_EXPORT virtual   void ClearSelected() ;
  
  //! How many builders there are in sequence
  Standard_EXPORT   Standard_Integer GetBuildersCount()  const;
  
  //! Returns builder by its index in sequence
  Standard_EXPORT   Handle(MeshVS_PrsBuilder) GetBuilder (const Standard_Integer Index)  const;
  
  //! Returns builder by its ID
  Standard_EXPORT   Handle(MeshVS_PrsBuilder) GetBuilderById (const Standard_Integer Id)  const;
  
  //! Returns the smallest positive ID, not occupied by any builder.
  //! This method using when builder is created with ID = -1
  Standard_EXPORT   Standard_Integer GetFreeId()  const;
  
  //! Adds builder to tale of sequence.
  //! PrsBuilder is builder to be added
  //! If TreatAsHilighter is true, MeshVS_Mesh will use this builder to create
  //! presentation of hilighted and selected owners.
  //! Only one builder can be hilighter, so that if you call this method with
  //! TreatAsHilighter = Standard_True some times, only last builder will be hilighter
  //! WARNING: As minimum one builder must be added as hilighter, otherwise selection cannot be computed
  Standard_EXPORT   void AddBuilder (const Handle(MeshVS_PrsBuilder)& Builder, const Standard_Boolean TreatAsHilighter = Standard_False) ;
  
  //! Changes hilighter ( see above )
  Standard_EXPORT   void SetHilighter (const Handle(MeshVS_PrsBuilder)& Builder) ;
  
  //! Sets builder with sequence index "Index" as hilighter
  Standard_EXPORT   Standard_Boolean SetHilighter (const Standard_Integer Index) ;
  
  //! Sets builder with identificator "Id" as hilighter
  Standard_EXPORT   Standard_Boolean SetHilighterById (const Standard_Integer Id) ;
  
  //! Returns hilighter
  Standard_EXPORT   Handle(MeshVS_PrsBuilder) GetHilighter()  const;
  
  //! Removes builder from sequence. If it is hilighter, hilighter will be NULL
  //! ( Don't remember to set it to other after!!! )
  Standard_EXPORT   void RemoveBuilder (const Standard_Integer Index) ;
  
  //! Removes builder with identificator Id
  Standard_EXPORT   void RemoveBuilderById (const Standard_Integer Id) ;
  
  //! Finds builder by its type the string represents
  Standard_EXPORT   Handle(MeshVS_PrsBuilder) FindBuilder (const Standard_CString TypeString)  const;
  
  //! Returns map of owners.
  Standard_EXPORT  const  MeshVS_DataMapOfIntegerOwner& GetOwnerMaps (const Standard_Boolean IsElement) ;
  
  //! Returns default builders' data source
  Standard_EXPORT   Handle(MeshVS_DataSource) GetDataSource()  const;
  
  //! Sets default builders' data source
  Standard_EXPORT   void SetDataSource (const Handle(MeshVS_DataSource)& aDataSource) ;
  
  //! Returns default builders' drawer
  Standard_EXPORT   Handle(MeshVS_Drawer) GetDrawer()  const;
  
  //! Sets default builders' drawer
  Standard_EXPORT   void SetDrawer (const Handle(MeshVS_Drawer)& aDrawer) ;
  
  //! Returns True if specified element is hidden
  //! By default no elements are hidden
  Standard_EXPORT   Standard_Boolean IsHiddenElem (const Standard_Integer ID)  const;
  
  //! Returns True if specified node is hidden.
  //! By default all nodes are hidden
  Standard_EXPORT   Standard_Boolean IsHiddenNode (const Standard_Integer ID)  const;
  
  //! Returns True if specified element is not hidden
  Standard_EXPORT   Standard_Boolean IsSelectableElem (const Standard_Integer ID)  const;
  
  //! Returns True if specified node is specified as selectable.
  Standard_EXPORT   Standard_Boolean IsSelectableNode (const Standard_Integer ID)  const;
  
  //! Returns map of hidden nodes (may be null handle)
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetHiddenNodes()  const;
  
  //! Sets map of hidden nodes, which shall not be displayed individually.
  //! If nodes shared by some elements shall not be drawn,
  //! they should be included into that map
  Standard_EXPORT   void SetHiddenNodes (const Handle(TColStd_HPackedMapOfInteger)& Ids) ;
  
  //! Returns map of hidden elements (may be null handle)
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetHiddenElems()  const;
  
  //! Sets map of hidden elements
  Standard_EXPORT   void SetHiddenElems (const Handle(TColStd_HPackedMapOfInteger)& Ids) ;
  
  //! Returns map of selectable elements (may be null handle)
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetSelectableNodes()  const;
  
  //! Sets map of selectable nodes.
  Standard_EXPORT   void SetSelectableNodes (const Handle(TColStd_HPackedMapOfInteger)& Ids) ;
  
  //! Automatically computes selectable nodes; the node is considered
  //! as being selectable if it is either not hidden, or is hidden
  //! but referred by at least one non-hidden element.
  //! Thus all nodes that are visible (either individually, or as ends or
  //! corners of elements) are selectable by default.
  Standard_EXPORT   void UpdateSelectableNodes() ;
  
  //! Returns set mesh selection method (see MeshVS.cdl)
  Standard_EXPORT   MeshVS_MeshSelectionMethod GetMeshSelMethod()  const;
  
  //! Sets mesh selection method (see MeshVS.cdl)
  Standard_EXPORT   void SetMeshSelMethod (const MeshVS_MeshSelectionMethod M) ;
  
  //! Returns True if the given owner represents a whole mesh.
  Standard_EXPORT virtual   Standard_Boolean IsWholeMeshOwner (const Handle(SelectMgr_EntityOwner)& theOwner)  const;

friend class MeshVS_PrsBuilder;


  DEFINE_STANDARD_RTTI(MeshVS_Mesh)

protected:


  MeshVS_DataMapOfIntegerOwner myNodeOwners;
  MeshVS_DataMapOfIntegerOwner myElementOwners;
  MeshVS_DataMapOfIntegerOwner my0DOwners;
  MeshVS_DataMapOfIntegerOwner myLinkOwners;
  MeshVS_DataMapOfIntegerOwner myFaceOwners;
  MeshVS_DataMapOfIntegerOwner myVolumeOwners;
  MeshVS_DataMapOfIntegerOwner myGroupOwners;
  MeshVS_DataMapOfIntegerOwner myMeshOwners;
  Handle(MeshVS_Drawer) myCurrentDrawer;
  Handle(MeshVS_Drawer) mySelectionDrawer;
  Handle(MeshVS_Drawer) myHilightDrawer;
  Handle(SelectMgr_EntityOwner) myWholeMeshOwner;


private: 


  MeshVS_SequenceOfPrsBuilder myBuilders;
  Handle(MeshVS_PrsBuilder) myHilighter;
  Handle(TColStd_HPackedMapOfInteger) myHiddenElements;
  Handle(TColStd_HPackedMapOfInteger) myHiddenNodes;
  Handle(TColStd_HPackedMapOfInteger) mySelectableNodes;
  Handle(MeshVS_DataSource) myDataSource;
  MeshVS_MeshSelectionMethod mySelectionMethod;


};







#endif // _MeshVS_Mesh_HeaderFile
