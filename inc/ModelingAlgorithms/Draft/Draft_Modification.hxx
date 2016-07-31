// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_Modification_HeaderFile
#define _Draft_Modification_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/Draft/Handle_Draft_Modification.hxx>

#include <ModelingAlgorithms/Draft/Draft_DataMapOfFaceFaceInfo.hxx>
#include <ModelingAlgorithms/Draft/Draft_DataMapOfEdgeEdgeInfo.hxx>
#include <ModelingAlgorithms/Draft/Draft_DataMapOfVertexVertexInfo.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/Draft/Draft_ErrorStatus.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/BRepTools/BRepTools_Modification.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Geometry/Geom/Handle_Geom_Curve.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_Curve.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
class StdFail_NotDone;
class Standard_NoSuchObject;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopoDS_Face;
class gp_Dir;
class gp_Pln;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;
class gp_Pnt;
class Geom2d_Curve;



class Draft_Modification : public BRepTools_Modification
{

public:

  
  Standard_EXPORT Draft_Modification(const TopoDS_Shape& S);
  
  //! Resets on the same shape.
  Standard_EXPORT   void Clear() ;
  
  //! Changes the basis shape and resets.
  Standard_EXPORT   void Init (const TopoDS_Shape& S) ;
  
  //! Adds  the  face  F    and propagates    the  draft
  //! modification to  its  neighbour faces if they  are
  //! tangent. If an error occurs, will return False and
  //! ProblematicShape  will  return the "bad" face.
  Standard_EXPORT   Standard_Boolean Add (const TopoDS_Face& F, const gp_Dir& Direction, const Standard_Real Angle, const gp_Pln& NeutralPlane, const Standard_Boolean Flag = Standard_True) ;
  
  //! Removes the face F and the neighbour faces if they
  //! are tangent.   It will be  necessary to  call this
  //! method if  the  method Add returns Standard_False,
  //! to unset ProblematicFace.
  Standard_EXPORT   void Remove (const TopoDS_Face& F) ;
  
  //! Performs the draft angle modification and sets the
  //! value returned by the method  IsDone.  If an error
  //! occurs, IsDone  will return Standard_False, and an
  //! error status will  be  given by the  method Error,
  //! and the  shape on which  the problem appeared will
  //! be given by ProblematicShape
  Standard_EXPORT   void Perform() ;
  
  //! Returns  True  if   Perform has  been  succesfully
  //! called. Otherwise more information can be obtained
  //! using the methods Error() and ProblematicShape().
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Draft_ErrorStatus Error()  const;
  
  //! Returns the shape (Face,  Edge or Vertex) on which
  //! an error occured.
  Standard_EXPORT  const  TopoDS_Shape& ProblematicShape()  const;
  
  //! Returns all  the  faces   which  have been   added
  //! together with the face <F>.
  Standard_EXPORT  const  TopTools_ListOfShape& ConnectedFaces (const TopoDS_Face& F) ;
  
  //! Returns all the faces  on which a modification has
  //! been given.
  Standard_EXPORT  const  TopTools_ListOfShape& ModifiedFaces() ;
  
  //! Returns Standard_True if   the face <F>  has  been
  //! modified.  In this case,  <S> is the new geometric
  //! support of the  face,  <L> the new  location,<Tol>
  //! the   new tolerance.<RevWires>  has  to  be set to
  //! Standard_True when   the modification reverses the
  //! normal   of  the  surface.(the  wires   have to be
  //! reversed).  <RevFace>    has    to  be   set    to
  //! Standard_True  if  the orientation of the modified
  //! face changes in  the shells which contain it. Here
  //! it will be set to Standard_False.
  //!
  //! Otherwise, returns Standard_False, and <S>,   <L>,
  //! <Tol> , <RevWires> ,<RevFace> are not  significant.
  Standard_EXPORT   Standard_Boolean NewSurface (const TopoDS_Face& F, Handle(Geom_Surface)& S, TopLoc_Location& L, Standard_Real& Tol, Standard_Boolean& RevWires, Standard_Boolean& RevFace) ;
  
  //! Returns Standard_True  if  the edge  <E> has  been
  //! modified.  In this case,  <C> is the new geometric
  //! support of the  edge, <L> the  new location, <Tol>
  //! the         new    tolerance.   Otherwise, returns
  //! Standard_False,    and  <C>,  <L>,   <Tol> are not
  //! significant.
  Standard_EXPORT   Standard_Boolean NewCurve (const TopoDS_Edge& E, Handle(Geom_Curve)& C, TopLoc_Location& L, Standard_Real& Tol) ;
  
  //! Returns  Standard_True if the  vertex <V> has been
  //! modified.  In this  case, <P> is the new geometric
  //! support of the vertex,   <Tol> the new  tolerance.
  //! Otherwise, returns Standard_False, and <P>,  <Tol>
  //! are not significant.
  Standard_EXPORT   Standard_Boolean NewPoint (const TopoDS_Vertex& V, gp_Pnt& P, Standard_Real& Tol) ;
  
  //! Returns Standard_True if  the edge  <E> has a  new
  //! curve on surface on the face <F>.In this case, <C>
  //! is the new geometric support of  the edge, <L> the
  //! new location, <Tol> the new tolerance.
  //!
  //! Otherwise, returns  Standard_False, and <C>,  <L>,
  //! <Tol> are not significant.
  //!
  //! <NewE> is the new  edge created from  <E>.  <NewF>
  //! is the new face created from <F>. They may be usefull.
  Standard_EXPORT   Standard_Boolean NewCurve2d (const TopoDS_Edge& E, const TopoDS_Face& F, const TopoDS_Edge& NewE, const TopoDS_Face& NewF, Handle(Geom2d_Curve)& C, Standard_Real& Tol) ;
  
  //! Returns Standard_True if the Vertex  <V> has a new
  //! parameter on the  edge <E>. In  this case,  <P> is
  //! the parameter,    <Tol>  the     new    tolerance.
  //! Otherwise, returns Standard_False, and <P>,  <Tol>
  //! are not significant.
  Standard_EXPORT   Standard_Boolean NewParameter (const TopoDS_Vertex& V, const TopoDS_Edge& E, Standard_Real& P, Standard_Real& Tol) ;
  
  //! Returns the  continuity of  <NewE> between <NewF1>
  //! and <NewF2>.
  //!
  //! <NewE> is the new  edge created from <E>.  <NewF1>
  //! (resp. <NewF2>) is the new  face created from <F1>
  //! (resp. <F2>).
  Standard_EXPORT   GeomAbs_Shape Continuity (const TopoDS_Edge& E, const TopoDS_Face& F1, const TopoDS_Face& F2, const TopoDS_Edge& NewE, const TopoDS_Face& NewF1, const TopoDS_Face& NewF2) ;




  DEFINE_STANDARD_RTTI(Draft_Modification)

protected:




private: 

  
  Standard_EXPORT   Standard_Boolean InternalAdd (const TopoDS_Face& F, const gp_Dir& Direction, const Standard_Real Angle, const gp_Pln& NeutralPlane, const Standard_Boolean Flag = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean Propagate() ;
  
  Standard_EXPORT   Handle(Geom_Curve) NewCurve (const Handle(Geom_Curve)& C, const Handle(Geom_Surface)& S, const TopAbs_Orientation OriS, const gp_Dir& Direction, const Standard_Real Angle, const gp_Pln& NeutralPlane, const Standard_Boolean Flag = Standard_True) ;
  
  Standard_EXPORT   Handle(Geom_Surface) NewSurface (const Handle(Geom_Surface)& S, const TopAbs_Orientation OriS, const gp_Dir& Direction, const Standard_Real Angle, const gp_Pln& NeutralPlane) ;

  Draft_DataMapOfFaceFaceInfo myFMap;
  Draft_DataMapOfEdgeEdgeInfo myEMap;
  Draft_DataMapOfVertexVertexInfo myVMap;
  Standard_Boolean myComp;
  TopoDS_Shape myShape;
  TopoDS_Shape badShape;
  Draft_ErrorStatus errStat;
  TopoDS_Face curFace;
  TopTools_ListOfShape conneF;
  TopTools_IndexedDataMapOfShapeListOfShape myEFMap;


};







#endif // _Draft_Modification_HeaderFile
