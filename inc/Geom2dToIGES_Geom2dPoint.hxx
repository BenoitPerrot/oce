// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dToIGES_Geom2dPoint_HeaderFile
#define _Geom2dToIGES_Geom2dPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geom2dToIGES_Geom2dEntity.hxx>
#include <Handle_IGESGeom_Point.hxx>
#include <Handle_Geom2d_Point.hxx>
#include <Handle_Geom2d_CartesianPoint.hxx>
class Geom2dToIGES_Geom2dEntity;
class IGESGeom_Point;
class Geom2d_Point;
class Geom2d_CartesianPoint;


//! This class implements the transfer of the Point Entity from Geom2d
//! to IGES . These are :
//! . 2dPoint
//! * 2dCartesianPoint
class Geom2dToIGES_Geom2dPoint  : public Geom2dToIGES_Geom2dEntity
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dToIGES_Geom2dPoint();
  
  //! Creates a tool Geom2dPoint ready to run and sets its
  //! fields as G2dE's.
  Standard_EXPORT Geom2dToIGES_Geom2dPoint(const Geom2dToIGES_Geom2dEntity& G2dE);
  
  //! Transfert  a  Point from Geom to IGES. If this
  //! Entity could not be converted, this member returns a NullEntity.
  Standard_EXPORT   Handle(IGESGeom_Point) Transfer2dPoint (const Handle(Geom2d_Point)& start) ;
  
  //! Transfert  a  CartesianPoint from Geom to IGES. If this
  //! Entity could not be converted, this member returns a NullEntity.
  Standard_EXPORT   Handle(IGESGeom_Point) Transfer2dPoint (const Handle(Geom2d_CartesianPoint)& start) ;




protected:





private:





};







#endif // _Geom2dToIGES_Geom2dPoint_HeaderFile
