// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveTriangle_HeaderFile
#define _Select3D_SensitiveTriangle_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Select3D_SensitiveTriangle.hxx>

#include <Visualization/Select3D/Select3D_TypeOfSensitivity.hxx>
#include <Visualization/Select3D/Select3D_SensitivePoly.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/SelectBasics/SelectBasics_PickArgs.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Handle_Select3D_SensitiveEntity.hxx>
class Standard_ConstructionError;
class Standard_OutOfRange;
class SelectBasics_EntityOwner;
class gp_Pnt;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class gp_Lin;
class gp_XY;
class Select3D_SensitiveEntity;
class TopLoc_Location;


//! A framework to define selection of triangles in a view.
//! This comes into play in the detection of meshing and triangulation in surfaces.
//! In some cases this class can raise Standard_ConstructionError and
//! Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.
class Select3D_SensitiveTriangle : public Select3D_SensitivePoly
{

public:

  
  //! Constructs a sensitive triangle object defined by the
  //! owner OwnerId, the points P1, P2, P3, and the type of sensitivity Sensitivity.
  Standard_EXPORT Select3D_SensitiveTriangle(const Handle(SelectBasics_EntityOwner)& OwnerId, const gp_Pnt& P1, const gp_Pnt& P2, const gp_Pnt& P3, const Select3D_TypeOfSensitivity Sensitivity = Select3D_TOS_INTERIOR);
  
  //! Checks whether the sensitive entity matches the picking
  //! detection area (close to the picking line).
  //! For details please refer to base class declaration.
  Standard_EXPORT   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  Standard_EXPORT   Standard_Real ComputeDepth (const gp_Lin& EyeLine)  const;
  
  //! Returns the 3D points P1, P2, P3 used at the time of construction.
  Standard_EXPORT   void Points3D (gp_Pnt& P1, gp_Pnt& P2, gp_Pnt& P3)  const;
  
  //! Returns the center point of the sensitive triangle created at construction time.
  Standard_EXPORT   gp_Pnt Center3D()  const;
  
  //! WARNING : the returned Values are the original values
  //! without the stored  location (if there's one).
  //! To get the genuine value, One must apply this location
  //! (Method Location() )
  Standard_EXPORT   gp_XY Center2D()  const;
  
  Standard_EXPORT   Standard_Integer Status (const Standard_Real X, const Standard_Real Y, const Standard_Real aTol, Standard_Real& Dmin)  const;
  
  //! Dmin gives the distance between the cdg and aPoint return
  Standard_EXPORT static   Standard_Integer Status (const gp_XY& p0, const gp_XY& p1, const gp_XY& p2, const gp_XY& aPoint, const Standard_Real aTol, Standard_Real& Dmin) ;
  
  Standard_EXPORT virtual   void Dump (Standard_OStream& S, const Standard_Boolean FullDump = Standard_True)  const;
  
  //! Returns the copy of this
  Standard_EXPORT virtual   Handle(Select3D_SensitiveEntity) GetConnected (const TopLoc_Location& theLocation) ;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveTriangle)

protected:




private: 


  Select3D_TypeOfSensitivity mytype;


};







#endif // _Select3D_SensitiveTriangle_HeaderFile
