// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_Direction_HeaderFile
#define _Geom_Direction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Geom_Direction.hxx>

#include <Geom_Vector.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom_Vector.hxx>
#include <Handle_Geom_Geometry.hxx>
class Standard_ConstructionError;
class gp_Dir;
class Geom_Vector;
class gp_Trsf;
class Geom_Geometry;



//! The class Direction specifies a vector that is never null.
//! It is a unit vector.
class Geom_Direction : public Geom_Vector
{

public:

  
  //! Creates a unit vector with it 3 cartesian coordinates.
  //!
  //! Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
  Standard_EXPORT Geom_Direction(const Standard_Real X, const Standard_Real Y, const Standard_Real Z);
  
  //! Creates a transient copy of <me>.
  Standard_EXPORT Geom_Direction(const gp_Dir& V);
  
  //! Sets <me> to X,Y,Z coordinates.
  //!
  //! Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
  Standard_EXPORT   void SetCoord (const Standard_Real X, const Standard_Real Y, const Standard_Real Z) ;
  
  //! Converts the gp_Dir unit vector V into this unit vector.
  Standard_EXPORT   void SetDir (const gp_Dir& V) ;
  
  //! Changes the X coordinate of <me>.
  //!
  //! Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
  Standard_EXPORT   void SetX (const Standard_Real X) ;
  
  //! Changes the Y coordinate of <me>.
  //!
  //! Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
  Standard_EXPORT   void SetY (const Standard_Real Y) ;
  
  //! Changes the Z coordinate of <me>.
  //!
  //! Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
  Standard_EXPORT   void SetZ (const Standard_Real Z) ;
  

  //! Returns the non transient direction with the same
  //! coordinates as <me>.
  Standard_EXPORT   gp_Dir Dir()  const;
  
  //! returns 1.0 which is the magnitude of any unit vector.
  Standard_EXPORT   Standard_Real Magnitude()  const;
  
  //! returns 1.0 which is the square magnitude of any unit vector.
  Standard_EXPORT   Standard_Real SquareMagnitude()  const;
  

  //! Computes the cross product between <me> and <Other>.
  //!
  //! Raised if the two vectors are parallel because it is
  //! not possible to have a direction with null length.
  Standard_EXPORT   void Cross (const Handle(Geom_Vector)& Other) ;
  

  //! Computes the triple vector product  <me> ^(V1 ^ V2).
  //!
  //! Raised if V1 and V2 are parallel or <me> and (V1 ^ V2) are
  //! parallel
  Standard_EXPORT   void CrossCross (const Handle(Geom_Vector)& V1, const Handle(Geom_Vector)& V2) ;
  

  //! Computes the cross product between <me> and <Other>.
  //! A new direction is returned.
  //!
  //! Raised if the two vectors are parallel because it is
  //! not possible to have a direction with null length.
  Standard_EXPORT   Handle(Geom_Vector) Crossed (const Handle(Geom_Vector)& Other)  const;
  

  //! Computes the triple vector product <me> ^(V1 ^ V2).
  //!
  //! Raised if V1 and V2 are parallel or <me> and (V1 ^ V2) are
  //! parallel
  Standard_EXPORT   Handle(Geom_Vector) CrossCrossed (const Handle(Geom_Vector)& V1, const Handle(Geom_Vector)& V2)  const;
  
  //! Applies the transformation T to this unit vector, then normalizes it.
  Standard_EXPORT   void Transform (const gp_Trsf& T) ;
  
  //! Creates a new object which is a copy of this unit vector.
  Standard_EXPORT   Handle(Geom_Geometry) Copy()  const;




  DEFINE_STANDARD_RTTI(Geom_Direction)

protected:




private: 




};







#endif // _Geom_Direction_HeaderFile
