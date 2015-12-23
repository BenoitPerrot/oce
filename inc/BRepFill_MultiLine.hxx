// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_MultiLine_HeaderFile
#define _BRepFill_MultiLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Geometry/Geom2dAdaptor/Geom2dAdaptor_Curve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Standard_DomainError;
class TopoDS_Face;
class TopoDS_Edge;
class Geom2d_Curve;
class Geom_Curve;
class gp_Pnt;
class gp_Pnt2d;


//! Private class used to compute the 3d curve and the
//! two 2d curves resulting from the intersection of a
//! surface of linear extrusion( Bissec, Dz) and the 2
//! faces.
//! This 3 curves will  have  the same parametrization
//! as the Bissectrice.
//! This  class  is  to  be  send  to an approximation
//! routine.
class BRepFill_MultiLine 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_MultiLine();
  
  Standard_EXPORT BRepFill_MultiLine(const TopoDS_Face& Face1, const TopoDS_Face& Face2, const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, const Standard_Boolean Inv1, const Standard_Boolean Inv2, const Handle(Geom2d_Curve)& Bissec);
  
  //! Search if the Projection of the Bissectrice on the
  //! faces needs an approximation or not.
  //! Returns true if the approximation is not needed.
  Standard_EXPORT   Standard_Boolean IsParticularCase()  const;
  
  //! Returns   the continuity  betwwen  the two  faces
  //! seShape         from GeomAbsparated by myBis.
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! raises if IsParticularCase is <False>.
  Standard_EXPORT   void Curves (Handle(Geom_Curve)& Curve, Handle(Geom2d_Curve)& PCurve1, Handle(Geom2d_Curve)& PCurve2)  const;
  
  //! returns the first parameter of the Bissectrice.
  Standard_EXPORT   Standard_Real FirstParameter()  const;
  
  //! returns the last parameter of the Bissectrice.
  Standard_EXPORT   Standard_Real LastParameter()  const;
  
  //! Returns the current point on the 3d curve
  Standard_EXPORT   gp_Pnt Value (const Standard_Real U)  const;
  
  //! returns the current point on the PCurve of the
  //! first face
  Standard_EXPORT   gp_Pnt2d ValueOnF1 (const Standard_Real U)  const;
  
  //! returns the current point on the PCurve of the
  //! first face
  Standard_EXPORT   gp_Pnt2d ValueOnF2 (const Standard_Real U)  const;
  
  Standard_EXPORT   void Value3dOnF1OnF2 (const Standard_Real U, gp_Pnt& P3d, gp_Pnt2d& PF1, gp_Pnt2d& PF2)  const;




protected:





private:



  TopoDS_Face myFace1;
  TopoDS_Face myFace2;
  Geom2dAdaptor_Curve myU1;
  Geom2dAdaptor_Curve myV1;
  Geom2dAdaptor_Curve myU2;
  Geom2dAdaptor_Curve myV2;
  Standard_Boolean myIsoU1;
  Standard_Boolean myIsoU2;
  Geom2dAdaptor_Curve myBis;
  Standard_Integer myKPart;
  GeomAbs_Shape myCont;


};







#endif // _BRepFill_MultiLine_HeaderFile
