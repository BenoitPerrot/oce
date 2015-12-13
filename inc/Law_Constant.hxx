// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_Constant_HeaderFile
#define _Law_Constant_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Law_Constant.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Law_Function.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Law_Function.hxx>
class Standard_OutOfRange;
class TColStd_Array1OfReal;
class Law_Function;


//! Loi constante
class Law_Constant : public Law_Function
{

public:

  
  Standard_EXPORT Law_Constant();
  
  //! Set the radius and the range of the constant Law.
  Standard_EXPORT   void Set (const Standard_Real Radius, const Standard_Real PFirst, const Standard_Real PLast) ;
  
  //! Returns GeomAbs_CN
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! Returns  1
  Standard_EXPORT   Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
  Standard_EXPORT   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Returns the value at parameter X.
  Standard_EXPORT   Standard_Real Value (const Standard_Real X) ;
  
  //! Returns the value and the first derivative at parameter X.
  Standard_EXPORT   void D1 (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;
  
  //! Returns the value, first and second derivatives
  //! at parameter X.
  Standard_EXPORT   void D2 (const Standard_Real X, Standard_Real& F, Standard_Real& D, Standard_Real& D2) ;
  
  Standard_EXPORT   Handle(Law_Function) Trim (const Standard_Real PFirst, const Standard_Real PLast, const Standard_Real Tol)  const;
  
  //! Returns the parametric bounds of the function.
  Standard_EXPORT   void Bounds (Standard_Real& PFirst, Standard_Real& PLast) ;




  DEFINE_STANDARD_RTTI(Law_Constant)

protected:




private: 


  Standard_Real radius;
  Standard_Real first;
  Standard_Real last;


};







#endif // _Law_Constant_HeaderFile
