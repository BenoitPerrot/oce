// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_ToroidalSurface_HeaderFile
#define _PGeom_ToroidalSurface_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_ToroidalSurface.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <PGeom_ElementarySurface.hxx>
class gp_Ax3;


class PGeom_ToroidalSurface : public PGeom_ElementarySurface
{

public:

  
  //! Creates a ToroidalSurface with default values.
  Standard_EXPORT PGeom_ToroidalSurface();
  
  //! Creates a ToroidalSurface with these values.
  Standard_EXPORT PGeom_ToroidalSurface(const gp_Ax3& aPosition, const Standard_Real aMajorRadius, const Standard_Real aMinorRadius);
  
  //! Set the field majorRadius with <aMajorRadius>.
  Standard_EXPORT   void MajorRadius (const Standard_Real aMajorRadius) ;
  
  //! Returns the value of the field majorRadius.
  Standard_EXPORT   Standard_Real MajorRadius()  const;
  
  //! Set the field minorRadius with <aMinorRadius>.
  Standard_EXPORT   void MinorRadius (const Standard_Real aMinorRadius) ;
  
  //! Returns the value of the field minorRadius.
  Standard_EXPORT   Standard_Real MinorRadius()  const;

PGeom_ToroidalSurface(const Storage_stCONSTclCOM& a) : PGeom_ElementarySurface(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom_ToroidalSurfacemajorRadius() const { return majorRadius; }
    void _CSFDB_SetPGeom_ToroidalSurfacemajorRadius(const Standard_Real p) { majorRadius = p; }
    Standard_Real _CSFDB_GetPGeom_ToroidalSurfaceminorRadius() const { return minorRadius; }
    void _CSFDB_SetPGeom_ToroidalSurfaceminorRadius(const Standard_Real p) { minorRadius = p; }



  DEFINE_STANDARD_RTTI(PGeom_ToroidalSurface)

protected:




private: 


  Standard_Real majorRadius;
  Standard_Real minorRadius;


};







#endif // _PGeom_ToroidalSurface_HeaderFile
