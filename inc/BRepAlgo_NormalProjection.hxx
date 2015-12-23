// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_NormalProjection_HeaderFile
#define _BRepAlgo_NormalProjection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
class Standard_ConstructionError;
class Standard_NoSuchObject;
class StdFail_NotDone;
class TopoDS_Shape;
class TopoDS_Edge;
class TopTools_ListOfShape;
class Adaptor3d_Curve;


//! This class makes the projection  of a wire on a
//! shape.
class BRepAlgo_NormalProjection 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepAlgo_NormalProjection();
  
  Standard_EXPORT BRepAlgo_NormalProjection(const TopoDS_Shape& S);
  
  Standard_EXPORT   void Init (const TopoDS_Shape& S) ;
  
  //! Add an edge or a wire to the list of shape to project
  Standard_EXPORT   void Add (const TopoDS_Shape& ToProj) ;
  
  //! Set the parameters  used  for computation
  //! Tol3d is the requiered  tolerance between the  3d projected
  //! curve  and its 2d representation
  //! InternalContinuity  is the order of constraints
  //! used for  approximation.
  //! MaxDeg and MaxSeg are the maximum degree and the maximum
  //! number of segment for BSpline resulting of an approximation.
  Standard_EXPORT   void SetParams (const Standard_Real Tol3D, const Standard_Real Tol2D, const GeomAbs_Shape InternalContinuity, const Standard_Integer MaxDegree, const Standard_Integer MaxSeg) ;
  
  //! Set the parameters  used  for computation
  //! in their default values
  Standard_EXPORT   void SetDefaultParams() ;
  
  //! Sets the maximum distance between target shape and
  //! shape to project. If this condition is not satisfied then
  //! corresponding part of solution is discarded.
  //! if MaxDist < 0 then this method does not affect the algorithm
  Standard_EXPORT   void SetMaxDistance (const Standard_Real MaxDist) ;
  
  //! if  With3d = Standard_False the 3dcurve is not computed
  //! the  initial 3dcurve is kept  to  build the  resulting edges.
  Standard_EXPORT   void Compute3d (const Standard_Boolean With3d = Standard_True) ;
  
  //! Manage  limitation  of  projected  edges.
  Standard_EXPORT   void SetLimit (const Standard_Boolean FaceBoundaries = Standard_True) ;
  
  //! Builds the result as a  compound.
  Standard_EXPORT   void Build() ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! returns the result
  Standard_EXPORT  const  TopoDS_Shape& Projection()  const;
  
  //! For a resulting edge, returns the corresponding initial edge.
  Standard_EXPORT  const  TopoDS_Shape& Ancestor (const TopoDS_Edge& E)  const;
  
  //! For a projected edge, returns the corresponding initial face.
  Standard_EXPORT  const  TopoDS_Shape& Couple (const TopoDS_Edge& E)  const;
  
  //! Returns the  list   of shapes generated   from the
  //! shape <S>.
  Standard_EXPORT  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  Standard_EXPORT   Standard_Boolean IsElementary (const Adaptor3d_Curve& C)  const;
  
  //! build the result as a list of wire if possible in --
  //! a first returns a wire only if there is only a wire.
  Standard_EXPORT   Standard_Boolean BuildWire (TopTools_ListOfShape& Liste)  const;




protected:





private:



  TopoDS_Shape myShape;
  Standard_Boolean myIsDone;
  Standard_Real myTol3d;
  Standard_Real myTol2d;
  Standard_Real myMaxDist;
  Standard_Boolean myWith3d;
  GeomAbs_Shape myContinuity;
  Standard_Integer myMaxDegree;
  Standard_Integer myMaxSeg;
  Standard_Boolean myFaceBounds;
  TopoDS_Shape myToProj;
  TopTools_DataMapOfShapeShape myAncestorMap;
  TopTools_DataMapOfShapeShape myCorresp;
  TopTools_DataMapOfShapeListOfShape myDescendants;
  TopoDS_Shape myRes;


};







#endif // _BRepAlgo_NormalProjection_HeaderFile
