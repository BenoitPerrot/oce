// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_SweptSurface_HeaderFile
#define _PGeom_SweptSurface_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PGeom/Handle_PGeom_SweptSurface.hxx>

#include <OCAF/PGeom/Handle_PGeom_Curve.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <OCAF/PGeom/PGeom_Surface.hxx>
class PGeom_Curve;
class gp_Dir;


class PGeom_SweptSurface : public PGeom_Surface
{

public:

  
  //! Set the value of the field basisCurve with <aBasisCurve>.
  Standard_EXPORT   void BasisCurve (const Handle(PGeom_Curve)& aBasisCurve) ;
  
  //! Returns the value of the field basisCurve.
  Standard_EXPORT   Handle(PGeom_Curve) BasisCurve()  const;
  
  //! Set the value of the field direction with <aDirection>.
  Standard_EXPORT   void Direction (const gp_Dir& aDirection) ;
  
  //! Returns the value of the field direction.
  Standard_EXPORT   gp_Dir Direction()  const;

PGeom_SweptSurface(const Storage_stCONSTclCOM& a) : PGeom_Surface(a)
{
  
}
    Handle(PGeom_Curve) _CSFDB_GetPGeom_SweptSurfacebasisCurve() const { return basisCurve; }
    void _CSFDB_SetPGeom_SweptSurfacebasisCurve(const Handle(PGeom_Curve)& p) { basisCurve = p; }
    const gp_Dir& _CSFDB_GetPGeom_SweptSurfacedirection() const { return direction; }



  DEFINE_STANDARD_RTTI(PGeom_SweptSurface)

protected:

  
  //! Initializes the field(s) with default value(s).
  Standard_EXPORT PGeom_SweptSurface();
  
  //! Initialize the fields with these values.
  Standard_EXPORT PGeom_SweptSurface(const Handle(PGeom_Curve)& aBasisCurve, const gp_Dir& aDirection);

  Handle(PGeom_Curve) basisCurve;
  gp_Dir direction;


private: 




};







#endif // _PGeom_SweptSurface_HeaderFile
