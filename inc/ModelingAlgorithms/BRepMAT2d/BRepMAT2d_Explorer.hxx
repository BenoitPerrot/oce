// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_Explorer_HeaderFile
#define _BRepMAT2d_Explorer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/MAT2d/MAT2d_SequenceOfSequenceOfCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfBoolean.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeShape.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopoDS_Face;
class TopoDS_Wire;
class Geom2d_Curve;
class TopoDS_Shape;
class TColGeom2d_SequenceOfCurve;
class TColStd_SequenceOfBoolean;


//! Construct an explorer from wires, face, set of curves
//! from Geom2d to compute the bisecting Locus.
class BRepMAT2d_Explorer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepMAT2d_Explorer();
  
  Standard_EXPORT BRepMAT2d_Explorer(const TopoDS_Face& aFace);
  
  //! Clear the contents of <me>.
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Perform (const TopoDS_Face& aFace) ;
  
  //! Returns the Number of contours.
  Standard_EXPORT   Standard_Integer NumberOfContours()  const;
  
  //! Returns the Number of Curves in the Contour  number
  //! <IndexContour>.
  Standard_EXPORT   Standard_Integer NumberOfCurves (const Standard_Integer IndexContour)  const;
  
  //! Initialisation of  an Iterator on  the curves of
  //! the Contour number <IndexContour>.
  Standard_EXPORT   void Init (const Standard_Integer IndexContour) ;
  
  //! Return False if there is no more curves on the Contour
  //! initialised by the method Init.
  Standard_EXPORT   Standard_Boolean More()  const;
  
  //! Move to the next curve of the current Contour.
  Standard_EXPORT   void Next() ;
  
  //! Returns the current curve on the current Contour.
  Standard_EXPORT   Handle(Geom2d_Curve) Value()  const;
  
  Standard_EXPORT   TopoDS_Shape Shape()  const;
  
  Standard_EXPORT  const  TColGeom2d_SequenceOfCurve& Contour (const Standard_Integer IndexContour)  const;
  
  Standard_EXPORT   Standard_Boolean IsModified (const TopoDS_Shape& aShape)  const;
  
  //! If the shape is not modified, returns the shape itself.
  Standard_EXPORT   TopoDS_Shape ModifiedShape (const TopoDS_Shape& aShape)  const;
  
  Standard_EXPORT  const  TColStd_SequenceOfBoolean& GetIsClosed()  const;




protected:





private:

  
  //! Construction from a set of cuves from Geom2d.
  //! Assume  the   orientation  of  the  closed   lines are
  //! compatible. (ie if A is in B, the orientation of A and B
  //! has to be different.
  //!
  //! Assume the explo contains only lines located in the
  //! area where the bisecting locus will be computed.
  //!
  //! Assume a line don't cross itself or an other line.
  //!
  //! A contour has to be construct in adding each curve in
  //! respect to the sense of the contour.
  //!
  //! afirst point of a curve in a contour is equal to the last
  //! point of the precedent curve.
  //!
  //! No  control of this  rules is done in the construction
  //! of the explorer
  Standard_EXPORT   void Add (const TopoDS_Wire& Spine, const TopoDS_Face& aFace, TopoDS_Face& aNewFace) ;
  
  Standard_EXPORT   void NewContour() ;
  
  //! Add the curve <aCurve> at me.
  Standard_EXPORT   void Add (const Handle(Geom2d_Curve)& aCurve) ;


  MAT2d_SequenceOfSequenceOfCurve theCurves;
  Standard_Integer current;
  Standard_Integer currentContour;
  TopoDS_Shape myShape;
  TColStd_SequenceOfBoolean myIsClosed;
  TopTools_IndexedDataMapOfShapeShape myModifShapes;


};







#endif // _BRepMAT2d_Explorer_HeaderFile
