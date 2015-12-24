// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PolygonOnTriangulation_HeaderFile
#define _PBRep_PolygonOnTriangulation_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PBRep/Handle_PBRep_PolygonOnTriangulation.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/PPoly/Handle_PPoly_PolygonOnTriangulation.hxx>
#include <OCAF/PPoly/Handle_PPoly_Triangulation.hxx>
#include <OCAF/PBRep/PBRep_CurveRepresentation.hxx>
class PPoly_PolygonOnTriangulation;
class PPoly_Triangulation;
class PTopLoc_Location;


class PBRep_PolygonOnTriangulation : public PBRep_CurveRepresentation
{

public:

  
  Standard_EXPORT PBRep_PolygonOnTriangulation(const Handle(PPoly_PolygonOnTriangulation)& P, const Handle(PPoly_Triangulation)& T, const PTopLoc_Location& L);
  
  //! returns True.
  Standard_EXPORT virtual   Standard_Boolean IsPolygonOnTriangulation()  const;
  
  Standard_EXPORT   Handle(PPoly_PolygonOnTriangulation) PolygonOnTriangulation()  const;
  
  Standard_EXPORT   Handle(PPoly_Triangulation) Triangulation()  const;

PBRep_PolygonOnTriangulation( )
{
  
}
PBRep_PolygonOnTriangulation(const Storage_stCONSTclCOM& a) : PBRep_CurveRepresentation(a)
{
  
}
    Handle(PPoly_PolygonOnTriangulation) _CSFDB_GetPBRep_PolygonOnTriangulationmyPolygon() const { return myPolygon; }
    void _CSFDB_SetPBRep_PolygonOnTriangulationmyPolygon(const Handle(PPoly_PolygonOnTriangulation)& p) { myPolygon = p; }
    Handle(PPoly_Triangulation) _CSFDB_GetPBRep_PolygonOnTriangulationmyTriangulation() const { return myTriangulation; }
    void _CSFDB_SetPBRep_PolygonOnTriangulationmyTriangulation(const Handle(PPoly_Triangulation)& p) { myTriangulation = p; }



  DEFINE_STANDARD_RTTI(PBRep_PolygonOnTriangulation)

protected:




private: 


  Handle(PPoly_PolygonOnTriangulation) myPolygon;
  Handle(PPoly_Triangulation) myTriangulation;


};







#endif // _PBRep_PolygonOnTriangulation_HeaderFile
