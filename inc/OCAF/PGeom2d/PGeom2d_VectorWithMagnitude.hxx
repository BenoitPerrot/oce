// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_VectorWithMagnitude_HeaderFile
#define _PGeom2d_VectorWithMagnitude_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PGeom2d/Handle_PGeom2d_VectorWithMagnitude.hxx>

#include <OCAF/PGeom2d/PGeom2d_Vector.hxx>
class gp_Vec2d;


class PGeom2d_VectorWithMagnitude : public PGeom2d_Vector
{

public:

  
  //! Creates a VectorWithMagnitude with default values.
  Standard_EXPORT PGeom2d_VectorWithMagnitude();
  
  //! Creates a VectorWithMagnitude with <aVec>.
  Standard_EXPORT PGeom2d_VectorWithMagnitude(const gp_Vec2d& aVec);

PGeom2d_VectorWithMagnitude(const Storage_stCONSTclCOM& a) : PGeom2d_Vector(a)
{
  
}



  DEFINE_STANDARD_RTTI(PGeom2d_VectorWithMagnitude)

protected:




private: 




};







#endif // _PGeom2d_VectorWithMagnitude_HeaderFile
