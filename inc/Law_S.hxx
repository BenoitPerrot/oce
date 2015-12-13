// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_S_HeaderFile
#define _Law_S_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Law_S.hxx>

#include <Law_BSpFunc.hxx>
#include <Foundation/Standard/Standard_Real.hxx>


//! Describes an "S" evolution law.
class Law_S : public Law_BSpFunc
{

public:

  
  //! Constructs an empty "S" evolution law.
  Standard_EXPORT Law_S();
  

  //! Defines this S evolution law by assigning both:
  //! -   the bounds Pdeb and Pfin of the parameter, and
  //! -   the values Valdeb and Valfin of the function at these
  //! two parametric bounds.
  //! The function is assumed to have the first derivatives
  //! equal to 0 at the two parameter points Pdeb and Pfin.
  Standard_EXPORT   void Set (const Standard_Real Pdeb, const Standard_Real Valdeb, const Standard_Real Pfin, const Standard_Real Valfin) ;
  
  //! Defines this S evolution law by assigning
  //! -   the bounds Pdeb and Pfin of the parameter,
  //! -   the values Valdeb and Valfin of the function at these
  //! two parametric bounds, and
  //! -   the values Ddeb and Dfin of the first derivative of the
  //! function at these two parametric bounds.
  Standard_EXPORT   void Set (const Standard_Real Pdeb, const Standard_Real Valdeb, const Standard_Real Ddeb, const Standard_Real Pfin, const Standard_Real Valfin, const Standard_Real Dfin) ;




  DEFINE_STANDARD_RTTI(Law_S)

protected:




private: 




};







#endif // _Law_S_HeaderFile
