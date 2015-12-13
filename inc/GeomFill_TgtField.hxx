// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_TgtField_HeaderFile
#define _GeomFill_TgtField_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_GeomFill_TgtField.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Law_BSpline.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Law_BSpline;
class gp_Vec;


//! Root class defining the methods we need to make an
//! algorithmic tangents field.
class GeomFill_TgtField : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   Standard_Boolean IsScalable()  const;
  
  Standard_EXPORT virtual   void Scale (const Handle(Law_BSpline)& Func) ;
  
  //! Computes  the value  of the    field of tangency    at
  //! parameter W.
  Standard_EXPORT virtual   gp_Vec Value (const Standard_Real W)  const = 0;
  
  //! Computes the  derivative of  the field of  tangency at
  //! parameter W.
  Standard_EXPORT virtual   gp_Vec D1 (const Standard_Real W)  const = 0;
  
  //! Computes the value and the  derivative of the field of
  //! tangency at parameter W.
  Standard_EXPORT virtual   void D1 (const Standard_Real W, gp_Vec& V, gp_Vec& DV)  const = 0;




  DEFINE_STANDARD_RTTI(GeomFill_TgtField)

protected:




private: 




};







#endif // _GeomFill_TgtField_HeaderFile
