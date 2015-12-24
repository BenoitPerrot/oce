// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_Circle_HeaderFile
#define _PGeom2d_Circle_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PGeom2d/Handle_PGeom2d_Circle.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <OCAF/PGeom2d/PGeom2d_Conic.hxx>
class gp_Ax22d;


class PGeom2d_Circle : public PGeom2d_Conic
{

public:

  
  //! Creates a circle with default values.
  Standard_EXPORT PGeom2d_Circle();
  
  //! Creates a Circle with <aPosition> and <aRadius> as field
  //! values.
  Standard_EXPORT PGeom2d_Circle(const gp_Ax22d& aPosition, const Standard_Real aRadius);
  
  //! Set the value of the field radius with <aRadius>.
  Standard_EXPORT   void Radius (const Standard_Real aRadius) ;
  
  //! Returns the value of the field radius.
  Standard_EXPORT   Standard_Real Radius()  const;

PGeom2d_Circle(const Storage_stCONSTclCOM& a) : PGeom2d_Conic(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom2d_Circleradius() const { return radius; }
    void _CSFDB_SetPGeom2d_Circleradius(const Standard_Real p) { radius = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_Circle)

protected:




private: 


  Standard_Real radius;


};







#endif // _PGeom2d_Circle_HeaderFile
