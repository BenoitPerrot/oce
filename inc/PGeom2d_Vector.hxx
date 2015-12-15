// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_Vector_HeaderFile
#define _PGeom2d_Vector_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom2d_Vector.hxx>

#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <PGeom2d_Geometry.hxx>
class gp_Vec2d;


class PGeom2d_Vector : public PGeom2d_Geometry
{

public:

  
  //! Set the field vec.
  Standard_EXPORT   void Vec (const gp_Vec2d& aVec) ;
  
  //! Returns the value of the field vec.
  Standard_EXPORT   gp_Vec2d Vec()  const;

PGeom2d_Vector(const Storage_stCONSTclCOM& a) : PGeom2d_Geometry(a)
{
  
}
    const gp_Vec2d& _CSFDB_GetPGeom2d_Vectorvec() const { return vec; }



  DEFINE_STANDARD_RTTI(PGeom2d_Vector)

protected:

  
  //! Initializes the field(s) with default value(s).
  Standard_EXPORT PGeom2d_Vector();
  
  //! Initializes the field vec with <aVec>.
  Standard_EXPORT PGeom2d_Vector(const gp_Vec2d& aVec);

  gp_Vec2d vec;


private: 




};







#endif // _PGeom2d_Vector_HeaderFile
