// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_MakeOffset_HeaderFile
#define _BRepOffset_MakeOffset_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_Mode.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <GeomAbs_JoinType.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeReal.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_Analyse.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_Image.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepAlgo/Handle_BRepAlgo_AsDes.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_Error.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_MakeLoops.hxx>
class BRepAlgo_AsDes;
class TopoDS_Shape;
class TopoDS_Face;
class BRepOffset_Analyse;
class BRepAlgo_Image;
class TopTools_IndexedMapOfShape;
class TopTools_MapOfShape;
class BRepOffset_Inter3d;
class BRepOffset_DataMapOfShapeOffset;



class BRepOffset_MakeOffset 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepOffset_MakeOffset();
  
  Standard_EXPORT BRepOffset_MakeOffset(const TopoDS_Shape& S, const Standard_Real Offset, const Standard_Real Tol, const BRepOffset_Mode Mode = BRepOffset_Skin, const Standard_Boolean Intersection = Standard_False, const Standard_Boolean SelfInter = Standard_False, const GeomAbs_JoinType Join = GeomAbs_Arc, const Standard_Boolean Thickening = Standard_False);
  
  Standard_EXPORT   void Initialize (const TopoDS_Shape& S, const Standard_Real Offset, const Standard_Real Tol, const BRepOffset_Mode Mode = BRepOffset_Skin, const Standard_Boolean Intersection = Standard_False, const Standard_Boolean SelfInter = Standard_False, const GeomAbs_JoinType Join = GeomAbs_Arc, const Standard_Boolean Thickening = Standard_False) ;
  
  Standard_EXPORT   void Clear() ;
  
  //! Add Closing Faces,  <F>  has to be  in  the initial
  //! shape S.
  Standard_EXPORT   void AddFace (const TopoDS_Face& F) ;
  
  //! set the offset <Off> on the Face <F>
  Standard_EXPORT   void SetOffsetOnFace (const TopoDS_Face& F, const Standard_Real Off) ;
  
  Standard_EXPORT   void MakeOffsetShape() ;
  
  Standard_EXPORT   void MakeThickSolid() ;
  
  Standard_EXPORT  const  BRepOffset_Analyse& GetAnalyse()  const;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  //! returns information if IsDone() = FALSE.
  Standard_EXPORT   BRepOffset_Error Error()  const;
  
  //! Returns <Image> containing links between initials
  //! shapes and offset faces.
  Standard_EXPORT  const  BRepAlgo_Image& OffsetFacesFromShapes()  const;
  
  //! Returns myJoin.
  Standard_EXPORT   GeomAbs_JoinType GetJoinType()  const;
  
  //! Returns <Image> containing links between initials
  //! shapes and offset edges.
  Standard_EXPORT  const  BRepAlgo_Image& OffsetEdgesFromShapes()  const;
  
  //! Returns the list of closing faces stores by AddFace
  Standard_EXPORT  const  TopTools_IndexedMapOfShape& ClosingFaces()  const;




protected:





private:

  
  Standard_EXPORT   void BuildOffsetByArc() ;
  
  Standard_EXPORT   void BuildOffsetByInter() ;
  
  Standard_EXPORT   void SelfInter (TopTools_MapOfShape& Modif) ;
  
  Standard_EXPORT   void Intersection3D (BRepOffset_Inter3d& Inter) ;
  
  Standard_EXPORT   void Intersection2D (const TopTools_IndexedMapOfShape& Modif, const TopTools_IndexedMapOfShape& NewEdges) ;
  
  Standard_EXPORT   void MakeLoops (TopTools_IndexedMapOfShape& Modif) ;
  
  Standard_EXPORT   void MakeLoopsOnContext (TopTools_MapOfShape& Modif) ;
  
  Standard_EXPORT   void MakeFaces (TopTools_IndexedMapOfShape& Modif) ;
  
  Standard_EXPORT   void MakeShells() ;
  
  Standard_EXPORT   void SelectShells() ;
  
  Standard_EXPORT   void EncodeRegularity() ;
  
  Standard_EXPORT   void MakeSolid() ;
  
  Standard_EXPORT   void ToContext (BRepOffset_DataMapOfShapeOffset& MapSF) ;
  
  //! Private method use to update the map face<->offset
  Standard_EXPORT   void UpdateFaceOffset() ;
  
  //! Private method used to correct degenerated edges on conical faces
  Standard_EXPORT   void CorrectConicalFaces() ;
  
  //! Private method used to build walls for thickening the shell
  Standard_EXPORT   void MakeMissingWalls() ;


  Standard_Real myOffset;
  Standard_Real myTol;
  TopoDS_Shape myShape;
  BRepOffset_Mode myMode;
  Standard_Boolean myInter;
  Standard_Boolean mySelfInter;
  GeomAbs_JoinType myJoin;
  Standard_Boolean myThickening;
  TopTools_DataMapOfShapeReal myFaceOffset;
  TopTools_IndexedMapOfShape myFaces;
  BRepOffset_Analyse myAnalyse;
  TopoDS_Shape myOffsetShape;
  BRepAlgo_Image myInitOffsetFace;
  BRepAlgo_Image myInitOffsetEdge;
  BRepAlgo_Image myImageOffset;
  TopTools_ListOfShape myWalls;
  Handle(BRepAlgo_AsDes) myAsDes;
  Standard_Boolean myDone;
  BRepOffset_Error myError;
  BRepOffset_MakeLoops myMakeLoops;


};







#endif // _BRepOffset_MakeOffset_HeaderFile
