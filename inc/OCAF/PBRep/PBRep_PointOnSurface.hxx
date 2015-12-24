// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PointOnSurface_HeaderFile
#define _PBRep_PointOnSurface_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PBRep/Handle_PBRep_PointOnSurface.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/PBRep/PBRep_PointsOnSurface.hxx>
#include <OCAF/PGeom/Handle_PGeom_Surface.hxx>
class PGeom_Surface;
class PTopLoc_Location;


class PBRep_PointOnSurface : public PBRep_PointsOnSurface
{

public:

  
  Standard_EXPORT PBRep_PointOnSurface(const Standard_Real P1, const Standard_Real P2, const Handle(PGeom_Surface)& S, const PTopLoc_Location& L);
  
  Standard_EXPORT   Standard_Real Parameter2()  const;
  
  //! Returns True
  Standard_EXPORT virtual   Standard_Boolean IsPointOnSurface()  const;

PBRep_PointOnSurface( )
{
  
}
PBRep_PointOnSurface(const Storage_stCONSTclCOM& a) : PBRep_PointsOnSurface(a)
{
  
}
    Standard_Real _CSFDB_GetPBRep_PointOnSurfacemyParameter2() const { return myParameter2; }
    void _CSFDB_SetPBRep_PointOnSurfacemyParameter2(const Standard_Real p) { myParameter2 = p; }



  DEFINE_STANDARD_RTTI(PBRep_PointOnSurface)

protected:




private: 


  Standard_Real myParameter2;


};







#endif // _PBRep_PointOnSurface_HeaderFile
