// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToIGES_GeomCurve_HeaderFile
#define _GeomToIGES_GeomCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <GeomToIGES_GeomEntity.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom_BoundedCurve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_Geom_TrimmedCurve.hxx>
#include <Handle_Geom_Conic.hxx>
#include <Handle_Geom_Circle.hxx>
#include <Handle_Geom_Ellipse.hxx>
#include <Handle_Geom_Hyperbola.hxx>
#include <Handle_Geom_Line.hxx>
#include <Handle_Geom_Parabola.hxx>
#include <Handle_Geom_OffsetCurve.hxx>
class GeomToIGES_GeomEntity;
class IGESData_IGESEntity;
class Geom_Curve;
class Geom_BoundedCurve;
class Geom_BSplineCurve;
class Geom_BezierCurve;
class Geom_TrimmedCurve;
class Geom_Conic;
class Geom_Circle;
class Geom_Ellipse;
class Geom_Hyperbola;
class Geom_Line;
class Geom_Parabola;
class Geom_OffsetCurve;


//! This class implements the transfer of the Curve Entity from Geom
//! To IGES. These can be :
//! Curve
//! . BoundedCurve
//! * BSplineCurve
//! * BezierCurve
//! * TrimmedCurve
//! . Conic
//! * Circle
//! * Ellipse
//! * Hyperbloa
//! * Line
//! * Parabola
//! . OffsetCurve
class GeomToIGES_GeomCurve  : public GeomToIGES_GeomEntity
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToIGES_GeomCurve();
  
  //! Creates a tool GeomCurve ready to run and sets its
  //! fields as GE's.
  Standard_EXPORT GeomToIGES_GeomCurve(const GeomToIGES_GeomEntity& GE);
  
  //! Transfert  a  GeometryEntity which  answer True  to  the
  //! member : BRepToIGES::IsGeomCurve(Geometry).  If this
  //! Entity could not be converted, this member returns a NullEntity.
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Curve)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_BoundedCurve)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_BSplineCurve)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_BezierCurve)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_TrimmedCurve)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Conic)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Circle)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Ellipse)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Hyperbola)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Line)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_Parabola)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;
  
  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferCurve (const Handle(Geom_OffsetCurve)& start, const Standard_Real Udeb, const Standard_Real Ufin) ;




protected:





private:





};







#endif // _GeomToIGES_GeomCurve_HeaderFile
