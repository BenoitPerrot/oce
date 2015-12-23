// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_Edge_HeaderFile
#define _ShapeFix_Edge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ShapeFix_Edge.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_ShapeAnalysis_Surface.hxx>
#include <ModelingAlgorithms/ShapeExtend/ShapeExtend_Status.hxx>
class ShapeConstruct_ProjectCurveOnSurface;
class TopoDS_Edge;
class TopoDS_Face;
class Geom_Surface;
class TopLoc_Location;
class ShapeAnalysis_Surface;


//! Fixing invalid edge.
//! Geometrical and/or topological inconsistency:
//! - no 3d curve or pcurve,
//! - mismatching orientation of 3d curve and pcurve,
//! - incorrect SameParameter flag (curve deviation is greater than
//! edge tolerance),
//! - not adjacent curves (3d or pcurve) to the vertices.
class ShapeFix_Edge : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT ShapeFix_Edge();
  
  //! Returns the projector used for recomputing missing pcurves
  //! Can be used for adjusting parameters of projector
  Standard_EXPORT   Handle(ShapeConstruct_ProjectCurveOnSurface) Projector() ;
  
  Standard_EXPORT   Standard_Boolean FixRemovePCurve (const TopoDS_Edge& edge, const TopoDS_Face& face) ;
  
  //! Removes the pcurve(s) of the edge if it does not match the
  //! vertices
  //! Check is done
  //! Use    : It is to be called when pcurve of an edge can be wrong
  //! (e.g., after import from IGES)
  //! Returns: True, if does not match, removed (status DONE)
  //! False, (status OK) if matches or (status FAIL) if no pcurve,
  //! nothing done
  Standard_EXPORT   Standard_Boolean FixRemovePCurve (const TopoDS_Edge& edge, const Handle(Geom_Surface)& surface, const TopLoc_Location& location) ;
  
  //! Removes 3d curve of the edge if it does not match the vertices
  //! Returns: True,  if does not match, removed (status DONE)
  //! False, (status OK) if matches or (status FAIL) if no 3d curve,
  //! nothing done
  Standard_EXPORT   Standard_Boolean FixRemoveCurve3d (const TopoDS_Edge& edge) ;
  
  //! See method below for information
  Standard_EXPORT   Standard_Boolean FixAddPCurve (const TopoDS_Edge& edge, const TopoDS_Face& face, const Standard_Boolean isSeam, const Standard_Real prec = 0.0) ;
  
  //! See method below for information
  Standard_EXPORT   Standard_Boolean FixAddPCurve (const TopoDS_Edge& edge, const Handle(Geom_Surface)& surface, const TopLoc_Location& location, const Standard_Boolean isSeam, const Standard_Real prec = 0.0) ;
  
  //! See method below for information
  Standard_EXPORT   Standard_Boolean FixAddPCurve (const TopoDS_Edge& edge, const TopoDS_Face& face, const Standard_Boolean isSeam, const Handle(ShapeAnalysis_Surface)& surfana, const Standard_Real prec = 0.0) ;
  
  //! Adds pcurve(s) of the edge if missing (by projecting 3d curve)
  //! Parameter isSeam indicates if the edge is a seam.
  //! The parameter <prec> defines the precision for calculations.
  //! If it is 0 (default), the tolerance of the edge is taken.
  //! Remark : This method is rather for internal use since it accepts parameter
  //! <surfana> for optimization of computations
  //! Use    : It is to be called after FixRemovePCurve (if removed) or in any
  //! case when edge can have no pcurve
  //! Returns: True if pcurve was added, else False
  //! Status :
  //! OK   : Pcurve exists
  //! FAIL1: No 3d curve
  //! FAIL2: fail during projecting
  //! DONE1: Pcurve was added
  //! DONE2: specific case of pcurve going through degenerated point on
  //! sphere encountered during projection (see class
  //! ShapeConstruct_ProjectCurveOnSurface for more info)
  Standard_EXPORT   Standard_Boolean FixAddPCurve (const TopoDS_Edge& edge, const Handle(Geom_Surface)& surface, const TopLoc_Location& location, const Standard_Boolean isSeam, const Handle(ShapeAnalysis_Surface)& surfana, const Standard_Real prec = 0.0) ;
  
  //! Tries to build 3d curve of the edge if missing
  //! Use    : It is to be called after FixRemoveCurve3d (if removed) or in any
  //! case when edge can have no 3d curve
  //! Returns: True if 3d curve was added, else False
  //! Status :
  //! OK   : 3d curve exists
  //! FAIL1: BRepLib::BuildCurve3d() has failed
  //! DONE1: 3d curve was added
  Standard_EXPORT   Standard_Boolean FixAddCurve3d (const TopoDS_Edge& edge) ;
  
  Standard_EXPORT   Standard_Boolean FixVertexTolerance (const TopoDS_Edge& edge, const TopoDS_Face& face) ;
  
  //! Increases the tolerances of the edge vertices to comprise
  //! the ends of 3d curve and pcurve on the given face
  //! (first method) or all pcurves stored in an edge (second one)
  //! Returns: True, if tolerances have been increased, otherwise False
  //! Status:
  //! OK   : the original tolerances have not been changed
  //! DONE1: the tolerance of first vertex has been increased
  //! DONE2: the tolerance of last  vertex has been increased
  Standard_EXPORT   Standard_Boolean FixVertexTolerance (const TopoDS_Edge& edge) ;
  
  Standard_EXPORT   Standard_Boolean FixReversed2d (const TopoDS_Edge& edge, const TopoDS_Face& face) ;
  
  //! Fixes edge if pcurve is directed opposite to 3d curve
  //! Check is done by call to the function
  //! ShapeAnalysis_Edge::CheckCurve3dWithPCurve()
  //! Warning: For seam edge this method will check and fix the pcurve in only
  //! one direction. Hence, it should be called twice for seam edge:
  //! once with edge orientation FORWARD and once with REVERSED.
  //! Returns: False if nothing done, True if reversed (status DONE)
  //! Status:  OK    - pcurve OK, nothing done
  //! FAIL1 - no pcurve
  //! FAIL2 - no 3d curve
  //! DONE1 - pcurve was reversed
  Standard_EXPORT   Standard_Boolean FixReversed2d (const TopoDS_Edge& edge, const Handle(Geom_Surface)& surface, const TopLoc_Location& location) ;
  
  //! Tries to make edge SameParameter and sets corresponding
  //! tolerance and SameParameter flag.
  //! First, it makes edge same range if SameRange flag is not set.
  //!
  //! If flag SameParameter is set, this method calls the
  //! function ShapeAnalysis_Edge::CheckSameParameter() that
  //! calculates the maximal deviation of pcurves of the edge from
  //! its 3d curve. If deviation > tolerance, the tolerance of edge
  //! is increased to a value of deviation. If deviation < tolerance
  //! nothing happens.
  //!
  //! If flag SameParameter is not set, this method chooses the best
  //! variant (one that has minimal tolerance), either
  //! a. only after computing deviation (as above) or
  //! b. after calling standard procedure BRepLib::SameParameter
  //! and computing deviation (as above). If <tolerance> > 0, it is
  //! used as parameter for BRepLib::SameParameter, otherwise,
  //! tolerance of the edge is used.
  //!
  //! Use    : Is to be called after all pcurves and 3d curve of the edge are
  //! correctly computed
  //! Remark : SameParameter flag is always set to True after this method
  //! Returns: True, if something done, else False
  //! Status : OK    - edge was initially SameParameter, nothing is done
  //! FAIL1 - computation of deviation of pcurves from 3d curve has failed
  //! FAIL2 - BRepLib::SameParameter() has failed
  //! DONE1 - tolerance of the edge was increased
  //! DONE2 - flag SameParameter was set to True (only if
  //! BRepLib::SameParameter() did not set it)
  //! DONE3 - edge was modified by BRepLib::SameParameter() to SameParameter
  //! DONE4 - not used anymore
  //! DONE5 - if the edge resulting from BRepLib has been chosen, i.e. variant b. above
  //! (only for edges with not set SameParameter)
  Standard_EXPORT   Standard_Boolean FixSameParameter (const TopoDS_Edge& edge, const Standard_Real tolerance = 0.0) ;
  
  //! Returns the status (in the form of True/False) of last Fix
  Standard_EXPORT   Standard_Boolean Status (const ShapeExtend_Status status)  const;




  DEFINE_STANDARD_RTTI(ShapeFix_Edge)

protected:


  Standard_Integer myStatus;
  Handle(ShapeConstruct_ProjectCurveOnSurface) myProjector;


private: 




};







#endif // _ShapeFix_Edge_HeaderFile
