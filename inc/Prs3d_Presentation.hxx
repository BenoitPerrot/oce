// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_Presentation_HeaderFile
#define _Prs3d_Presentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Prs3d_Presentation.hxx>

#include <Graphic3d_Structure.hxx>
#include <Handle_Graphic3d_StructureManager.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Graphic3d_Structure.hxx>
#include <Handle_Graphic3d_DataStructureManager.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Handle_Prs3d_ShadingAspect.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Foundation/Quantity/Quantity_Length.hxx>
#include <Handle_Graphic3d_Group.hxx>
class Prs3d_Root;
class Graphic3d_StructureManager;
class Graphic3d_Structure;
class Graphic3d_DataStructureManager;
class TColStd_Array2OfReal;
class Prs3d_ShadingAspect;
class Geom_Transformation;
class Graphic3d_Group;


//! Defines a presentation object which can be displayed,
//! highlighted or erased.
//! The presentation object stores the results of the
//! presentation algorithms as defined in the StdPrs
//! classes and the Prs3d classes inheriting Prs3d_Root.
//! This presentation object is used to give display
//! attributes defined at this level to
//! ApplicationInteractiveServices classes at the level above.
//! A presentation object is attached to a given Viewer.
class Prs3d_Presentation : public Graphic3d_Structure
{

public:

  
  //! Constructs a presentation object
  //! if <Init> is false, no color initialization is done.
  Standard_EXPORT Prs3d_Presentation(const Handle(Graphic3d_StructureManager)& theStructManager, const Standard_Boolean theToInit = Standard_True);
  
  //! Constructs a presentation object.
  Standard_EXPORT Prs3d_Presentation(const Handle(Graphic3d_StructureManager)& theStructManager, const Handle(Prs3d_Presentation)& thePrs);
  
  Standard_EXPORT virtual   Handle(Graphic3d_Structure) Compute (const Handle(Graphic3d_DataStructureManager)& aProjector) ;
  
  //! Returns the new Structure defined for the new visualization
  Standard_EXPORT virtual   Handle(Graphic3d_Structure) Compute (const Handle(Graphic3d_DataStructureManager)& aProjector, const TColStd_Array2OfReal& AMatrix) ;
  
  //! Returns the new Structure defined for the new visualization
  Standard_EXPORT virtual   void Compute (const Handle(Graphic3d_DataStructureManager)& aProjector, Handle(Graphic3d_Structure)& aStructure) ;
  
  //! Returns the new Structure defined for the new visualization
  Standard_EXPORT virtual   void Compute (const Handle(Graphic3d_DataStructureManager)& aProjector, const TColStd_Array2OfReal& AMatrix, Handle(Graphic3d_Structure)& aStructure) ;
  
  //! displays the whole content of the presentation in white.
  Standard_EXPORT   void Highlight() ;
  
  //! displays the whole content of the presentation in the specified color.
  Standard_EXPORT   void Color (const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT   void BoundBox() ;
  
  //! marks the structure <me> representing wired structure needed for
  //! highlight only so it won't be added to BVH tree.
  Standard_EXPORT virtual   void SetIsForHighlight (const Standard_Boolean isForHighlight) ;
  
  Standard_EXPORT   void SetShadingAspect (const Handle(Prs3d_ShadingAspect)& aShadingAspect) ;
  
  Standard_EXPORT   Standard_Boolean IsPickable()  const;
  
  Standard_EXPORT   void Transform (const Handle(Geom_Transformation)& aTransformation) ;
  
  Standard_EXPORT   void Place (const Quantity_Length X, const Quantity_Length Y, const Quantity_Length Z) ;
  
  Standard_EXPORT   void Multiply (const Handle(Geom_Transformation)& aTransformation) ;
  
  Standard_EXPORT   void Move (const Quantity_Length X, const Quantity_Length Y, const Quantity_Length Z) ;
  
  Standard_EXPORT   Handle(Geom_Transformation) Transformation()  const;
  
  Standard_EXPORT   void Connect (const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void Remove (const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void RemoveAll() ;
  
  Standard_EXPORT   void SetPickable() ;
  
  Standard_EXPORT   void SetUnPickable() ;


friend class Prs3d_Root;


  DEFINE_STANDARD_RTTI(Prs3d_Presentation)

protected:




private: 

  
  Standard_EXPORT   Handle(Graphic3d_Group) CurrentGroup()  const;



};







#endif // _Prs3d_Presentation_HeaderFile
