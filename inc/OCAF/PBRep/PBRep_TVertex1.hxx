// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_TVertex1_HeaderFile
#define _PBRep_TVertex1_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PBRep_TVertex1.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Handle_PBRep_PointRepresentation.hxx>
#include <OCAF/PTopoDS/PTopoDS_TVertex1.hxx>
class PBRep_PointRepresentation;
class gp_Pnt;


class PBRep_TVertex1 : public PTopoDS_TVertex1
{

public:

  
  Standard_EXPORT PBRep_TVertex1();
  
  Standard_EXPORT   Standard_Real Tolerance()  const;
  
  Standard_EXPORT   void Tolerance (const Standard_Real T) ;
  
  Standard_EXPORT   gp_Pnt Pnt()  const;
  
  Standard_EXPORT   void Pnt (const gp_Pnt& P) ;
  
  Standard_EXPORT   Handle(PBRep_PointRepresentation) Points()  const;
  
  Standard_EXPORT   void Points (const Handle(PBRep_PointRepresentation)& P) ;

PBRep_TVertex1(const Storage_stCONSTclCOM& a) : PTopoDS_TVertex1(a)
{
  
}
    Standard_Real _CSFDB_GetPBRep_TVertex1myTolerance() const { return myTolerance; }
    void _CSFDB_SetPBRep_TVertex1myTolerance(const Standard_Real p) { myTolerance = p; }
    const gp_Pnt& _CSFDB_GetPBRep_TVertex1myPnt() const { return myPnt; }
    Handle(PBRep_PointRepresentation) _CSFDB_GetPBRep_TVertex1myPoints() const { return myPoints; }
    void _CSFDB_SetPBRep_TVertex1myPoints(const Handle(PBRep_PointRepresentation)& p) { myPoints = p; }



  DEFINE_STANDARD_RTTI(PBRep_TVertex1)

protected:




private: 


  Standard_Real myTolerance;
  gp_Pnt myPnt;
  Handle(PBRep_PointRepresentation) myPoints;


};







#endif // _PBRep_TVertex1_HeaderFile
