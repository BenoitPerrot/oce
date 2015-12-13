// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Direction_HeaderFile
#define _PGeom_Direction_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PGeom_Direction.hxx>

#include <PGeom_Vector.hxx>
class gp_Vec;


class PGeom_Direction : public PGeom_Vector
{

public:

  
  //! Creates a unit vector with default values.
  Standard_EXPORT PGeom_Direction();
  
  //! Create a unit vector with <aVec>.
  Standard_EXPORT PGeom_Direction(const gp_Vec& aVec);

PGeom_Direction(const Storage_stCONSTclCOM& a) : PGeom_Vector(a)
{
  
}



  DEFINE_STANDARD_RTTI(PGeom_Direction)

protected:




private: 




};







#endif // _PGeom_Direction_HeaderFile
