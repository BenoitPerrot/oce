// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_Interpol_HeaderFile
#define _Law_Interpol_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Law_Interpol.hxx>

#include <Law_BSpFunc.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TColgp_Array1OfPnt2d;


//! Provides an evolution law that interpolates a set
//! of parameter and value pairs (wi, radi)
class Law_Interpol : public Law_BSpFunc
{

public:

  
  //! Constructs an empty interpolative evolution law.
  //! The function Set is used to define the law.
  Standard_EXPORT Law_Interpol();
  

  //! Defines this evolution law by interpolating the set of 2D
  //! points ParAndRad. The Y coordinate of a point of
  //! ParAndRad is the value of the function at the parameter
  //! point given by its X coordinate.
  //! If Periodic is true, this function is assumed to be periodic.
  //! Warning
  //! -   The X coordinates of points in the table ParAndRad
  //! must be given in ascendant order.
  //! -   If Periodic is true, the first and last Y coordinates of
  //! points in the table ParAndRad are assumed to be
  //! equal. In addition, with the second syntax, Dd and Df
  //! are also assumed to be equal. If this is not the case,
  //! Set uses the first value(s) as last value(s).
  Standard_EXPORT   void Set (const TColgp_Array1OfPnt2d& ParAndRad, const Standard_Boolean Periodic = Standard_False) ;
  
  Standard_EXPORT   void SetInRelative (const TColgp_Array1OfPnt2d& ParAndRad, const Standard_Real Ud, const Standard_Real Uf, const Standard_Boolean Periodic = Standard_False) ;
  

  //! Defines this evolution law by interpolating the set of 2D
  //! points ParAndRad. The Y coordinate of a point of
  //! ParAndRad is the value of the function at the parameter
  //! point given by its X coordinate.
  //! If Periodic is true, this function is assumed to be periodic.
  //! In the second syntax, Dd and Df define the values of
  //! the first derivative of the function at its first and last points.
  //! Warning
  //! -   The X coordinates of points in the table ParAndRad
  //! must be given in ascendant order.
  //! -   If Periodic is true, the first and last Y coordinates of
  //! points in the table ParAndRad are assumed to be
  //! equal. In addition, with the second syntax, Dd and Df
  //! are also assumed to be equal. If this is not the case,
  //! Set uses the first value(s) as last value(s).
  Standard_EXPORT   void Set (const TColgp_Array1OfPnt2d& ParAndRad, const Standard_Real Dd, const Standard_Real Df, const Standard_Boolean Periodic = Standard_False) ;
  
  Standard_EXPORT   void SetInRelative (const TColgp_Array1OfPnt2d& ParAndRad, const Standard_Real Ud, const Standard_Real Uf, const Standard_Real Dd, const Standard_Real Df, const Standard_Boolean Periodic = Standard_False) ;




  DEFINE_STANDARD_RTTI(Law_Interpol)

protected:




private: 




};







#endif // _Law_Interpol_HeaderFile
