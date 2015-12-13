// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntAna_Curve_HeaderFile
#define _IntAna_Curve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <GeomAbs_SurfaceType.hxx>
#include <gp_Ax3.hxx>
class Standard_DomainError;
class gp_Cylinder;
class gp_Cone;
class gp_Pnt;
class gp_Vec;


//! Definition of a parametric Curve which is the result
//! of the intersection between two quadrics.
class IntAna_Curve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty Constructor
  Standard_EXPORT IntAna_Curve();
  
  //! Sets the parameters used to compute Points and Derivative
  //! on the curve.
  Standard_EXPORT   void SetCylinderQuadValues (const gp_Cylinder& Cylinder, const Standard_Real Qxx, const Standard_Real Qyy, const Standard_Real Qzz, const Standard_Real Qxy, const Standard_Real Qxz, const Standard_Real Qyz, const Standard_Real Qx, const Standard_Real Qy, const Standard_Real Qz, const Standard_Real Q1, const Standard_Real Tol, const Standard_Real DomInf, const Standard_Real DomSup, const Standard_Boolean TwoZForATheta, const Standard_Boolean ZIsPositive) ;
  
  //! Sets  the parameters used    to compute Points  and
  //! Derivative on the curve.
  Standard_EXPORT   void SetConeQuadValues (const gp_Cone& Cone, const Standard_Real Qxx, const Standard_Real Qyy, const Standard_Real Qzz, const Standard_Real Qxy, const Standard_Real Qxz, const Standard_Real Qyz, const Standard_Real Qx, const Standard_Real Qy, const Standard_Real Qz, const Standard_Real Q1, const Standard_Real Tol, const Standard_Real DomInf, const Standard_Real DomSup, const Standard_Boolean TwoZForATheta, const Standard_Boolean ZIsPositive) ;
  
  //! Returns TRUE if the curve is not  infinite  at the
  //! last parameter or at the first parameter of the domain.
  Standard_EXPORT   Standard_Boolean IsOpen()  const;
  
  //! Returns the paramatric domain of the curve.
  Standard_EXPORT   void Domain (Standard_Real& Theta1, Standard_Real& Theta2)  const;
  
  //! Returns TRUE if the function is constant.
  Standard_EXPORT   Standard_Boolean IsConstant()  const;
  
  //! Returns TRUE if the domain is open at the beginning.
  Standard_EXPORT   Standard_Boolean IsFirstOpen()  const;
  
  //! Returns TRUE if the domain is open at the end.
  Standard_EXPORT   Standard_Boolean IsLastOpen()  const;
  
  //! Returns the point at parameter Theta on the curve.
  Standard_EXPORT   gp_Pnt Value (const Standard_Real Theta) ;
  
  //! Returns the point and the first derivative at parameter
  //! Theta on the curve.
  Standard_EXPORT   Standard_Boolean D1u (const Standard_Real Theta, gp_Pnt& P, gp_Vec& V) ;
  
  //! Tries to find the parameter of the point P on the curve.
  //! If the method returns False, the "projection" is
  //! impossible, and the value of Para is not significant.
  //! If the method returns True, Para is the parameter of the
  //! nearest intersection between the curve and the iso-theta
  //! containing P.
  Standard_EXPORT   Standard_Boolean FindParameter (const gp_Pnt& P, Standard_Real& Para)  const;
  
  //! If flag is True, the Curve is not defined at the
  //! first parameter of its domain.
  Standard_EXPORT   void SetIsFirstOpen (const Standard_Boolean Flag) ;
  
  //! If flag is True, the Curve is not defined at the
  //! first parameter of its domain.
  Standard_EXPORT   void SetIsLastOpen (const Standard_Boolean Flag) ;
  
  //! Protected function.
  Standard_EXPORT   void InternalUVValue (const Standard_Real Param, Standard_Real& U, Standard_Real& V, Standard_Real& A, Standard_Real& B, Standard_Real& C, Standard_Real& Co, Standard_Real& Si, Standard_Real& Di)  const;
  
  Standard_EXPORT   void SetDomain (const Standard_Real Theta1, const Standard_Real Theta2) ;




protected:

  
  //! Protected function.
  Standard_EXPORT   gp_Pnt InternalValue (const Standard_Real Theta1, const Standard_Real Theta2)  const;




private:



  Standard_Real Z0Cte;
  Standard_Real Z0Sin;
  Standard_Real Z0Cos;
  Standard_Real Z0SinSin;
  Standard_Real Z0CosCos;
  Standard_Real Z0CosSin;
  Standard_Real Z1Cte;
  Standard_Real Z1Sin;
  Standard_Real Z1Cos;
  Standard_Real Z1SinSin;
  Standard_Real Z1CosCos;
  Standard_Real Z1CosSin;
  Standard_Real Z2Cte;
  Standard_Real Z2Sin;
  Standard_Real Z2Cos;
  Standard_Real Z2SinSin;
  Standard_Real Z2CosCos;
  Standard_Real Z2CosSin;
  Standard_Boolean TwoCurves;
  Standard_Boolean TakeZPositive;
  Standard_Real Tolerance;
  Standard_Real DomainInf;
  Standard_Real DomainSup;
  Standard_Boolean RestrictedInf;
  Standard_Boolean RestrictedSup;
  Standard_Boolean firstbounded;
  Standard_Boolean lastbounded;
  GeomAbs_SurfaceType typequadric;
  Standard_Real RCyl;
  Standard_Real Angle;
  gp_Ax3 Ax3;


};







#endif // _IntAna_Curve_HeaderFile
