// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_MeshPrsBuilder_HeaderFile
#define _MeshVS_MeshPrsBuilder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MeshVS_MeshPrsBuilder.hxx>

#include <MeshVS_PrsBuilder.hxx>
#include <Handle_MeshVS_Mesh.hxx>
#include <MeshVS_DisplayModeFlags.hxx>
#include <Handle_MeshVS_DataSource.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <MeshVS_BuilderPriority.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <TColStd_PackedMapOfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Graphic3d_ArrayOfSegments.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Graphic3d_ArrayOfTriangles.hxx>
#include <Handle_MeshVS_HArray1OfSequenceOfInteger.hxx>
#include <Handle_Graphic3d_ArrayOfPrimitives.hxx>
#include <Handle_Graphic3d_AspectFillArea3d.hxx>
#include <Handle_Graphic3d_AspectLine3d.hxx>
class MeshVS_Mesh;
class MeshVS_DataSource;
class Prs3d_Presentation;
class TColStd_Array1OfReal;
class Graphic3d_ArrayOfSegments;
class Graphic3d_ArrayOfTriangles;
class MeshVS_HArray1OfSequenceOfInteger;
class Graphic3d_ArrayOfPrimitives;
class Graphic3d_AspectFillArea3d;
class Graphic3d_AspectLine3d;


//! This class provides methods to compute base mesh presentation
class MeshVS_MeshPrsBuilder : public MeshVS_PrsBuilder
{

public:

  
  //! Creates builder with certain display mode flags, data source, ID and priority
  Standard_EXPORT MeshVS_MeshPrsBuilder(const Handle(MeshVS_Mesh)& Parent, const MeshVS_DisplayModeFlags& Flags = MeshVS_DMF_OCCMask, const Handle(MeshVS_DataSource)& DS = 0, const Standard_Integer Id = -1, const MeshVS_BuilderPriority& Priority = MeshVS_BP_Mesh);
  
  //! Builds base mesh presentation by calling the methods below
  Standard_EXPORT virtual   void Build (const Handle(Prs3d_Presentation)& Prs, const TColStd_PackedMapOfInteger& IDs, TColStd_PackedMapOfInteger& IDsToExclude, const Standard_Boolean IsElement, const Standard_Integer DisplayMode)  const;
  
  //! Builds nodes presentation
  Standard_EXPORT virtual   void BuildNodes (const Handle(Prs3d_Presentation)& Prs, const TColStd_PackedMapOfInteger& IDs, TColStd_PackedMapOfInteger& IDsToExclude, const Standard_Integer DisplayMode)  const;
  
  //! Builds elements presentation
  Standard_EXPORT virtual   void BuildElements (const Handle(Prs3d_Presentation)& Prs, const TColStd_PackedMapOfInteger& IDs, TColStd_PackedMapOfInteger& IDsToExclude, const Standard_Integer DisplayMode)  const;
  
  //! Builds presentation of hilighted entity
  Standard_EXPORT virtual   void BuildHilightPrs (const Handle(Prs3d_Presentation)& Prs, const TColStd_PackedMapOfInteger& IDs, const Standard_Boolean IsElement)  const;
  
  //! Add to array polygons or polylines representing volume
  Standard_EXPORT static   void AddVolumePrs (const Handle(MeshVS_HArray1OfSequenceOfInteger)& Topo, const TColStd_Array1OfReal& Nodes, const Standard_Integer NbNodes, const Handle(Graphic3d_ArrayOfPrimitives)& Array, const Standard_Boolean IsReflected, const Standard_Boolean IsShrinked, const Standard_Boolean IsSelect, const Standard_Real ShrinkCoef) ;
  
  //! Calculate how many polygons or polylines are necessary to draw passed topology
  Standard_EXPORT static   void HowManyPrimitives (const Handle(MeshVS_HArray1OfSequenceOfInteger)& Topo, const Standard_Boolean AsPolygons, const Standard_Boolean IsSelect, const Standard_Integer NbNodes, Standard_Integer& Vertices, Standard_Integer& Bounds) ;




  DEFINE_STANDARD_RTTI(MeshVS_MeshPrsBuilder)

protected:

  
  //! Add to array of polylines some lines representing link
  Standard_EXPORT   void AddLinkPrs (const TColStd_Array1OfReal& theCoords, const Handle(Graphic3d_ArrayOfSegments)& theLines, const Standard_Boolean IsShrinked, const Standard_Real ShrinkCoef)  const;
  
  //! Add to array of segments representing face's wire
  Standard_EXPORT   void AddFaceWirePrs (const TColStd_Array1OfReal& theCoords, const Standard_Integer theNbNodes, const Handle(Graphic3d_ArrayOfSegments)& theLines, const Standard_Boolean theIsShrinked, const Standard_Real theShrinkingCoef)  const;
  
  //! Add to array of polygons a polygon representing face
  Standard_EXPORT   void AddFaceSolidPrs (const Standard_Integer ID, const TColStd_Array1OfReal& theCoords, const Standard_Integer theNbNodes, const Standard_Integer theMaxNodes, const Handle(Graphic3d_ArrayOfTriangles)& theTriangles, const Standard_Boolean theIsReflected, const Standard_Boolean theIsShrinked, const Standard_Real theShrinkCoef, const Standard_Boolean theIsMeshSmoothShading)  const;
  
  //! Draw array of polygons and polylines in the certain order according to transparency
  Standard_EXPORT   void DrawArrays (const Handle(Prs3d_Presentation)& Prs, const Handle(Graphic3d_ArrayOfPrimitives)& thePolygons, const Handle(Graphic3d_ArrayOfPrimitives)& theLines, const Handle(Graphic3d_ArrayOfPrimitives)& theLinkLines, const Handle(Graphic3d_ArrayOfPrimitives)& theVolumesInShad, const Standard_Boolean IsPolygonsEdgesOff, const Standard_Boolean IsSelected, const Handle(Graphic3d_AspectFillArea3d)& theFillAsp, const Handle(Graphic3d_AspectLine3d)& theLineAsp)  const;
  
  //! Default calculation of center of face or link. This method if useful for shrink mode presentation
  //! theCoords is array of nodes co-ordinates in the strict order X1, Y1, Z1, X2...
  //! NbNodes is number of nodes an element consist of
  //! xG, yG, zG are co-ordinates of center whose will be returned
  Standard_EXPORT static   void CalculateCenter (const TColStd_Array1OfReal& theCoords, const Standard_Integer NbNodes, Standard_Real& xG, Standard_Real& yG, Standard_Real& zG) ;



private: 




};







#endif // _MeshVS_MeshPrsBuilder_HeaderFile
