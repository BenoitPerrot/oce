// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Edge3DLaw_HeaderFile
#define _BRepFill_Edge3DLaw_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepFill/Handle_BRepFill_Edge3DLaw.hxx>

#include <ModelingAlgorithms/BRepFill/BRepFill_LocationLaw.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_LocationLaw.hxx>
class TopoDS_Wire;
class GeomFill_LocationLaw;


//! Build Location Law, with a  Wire.
class BRepFill_Edge3DLaw : public BRepFill_LocationLaw
{

public:

  
  Standard_EXPORT BRepFill_Edge3DLaw(const TopoDS_Wire& Path, const Handle(GeomFill_LocationLaw)& Law);




  DEFINE_STANDARD_RTTI(BRepFill_Edge3DLaw)

protected:




private: 




};







#endif // _BRepFill_Edge3DLaw_HeaderFile
