// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_BattenLaw_HeaderFile
#define _FairCurve_BattenLaw_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Optimization/math_Function.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>


//! This class compute the Heigth of an batten
class FairCurve_BattenLaw  : public math_Function
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructor of linear batten with
  //! Heigth : the Heigth at the middle point
  //! Slope  : the geometric slope of the batten
  //! Sliding : Active Length of the batten without extension
  Standard_EXPORT FairCurve_BattenLaw(const Standard_Real Heigth, const Standard_Real Slope, const Standard_Real Sliding);
  
  //! Change the value of sliding
      void SetSliding (const Standard_Real Sliding) ;
  
  //! Change the value of Heigth at the middle point.
      void SetHeigth (const Standard_Real Heigth) ;
  
  //! Change the value of the geometric slope.
      void SetSlope (const Standard_Real Slope) ;
  
  //! computes the value of  the heigth for the parameter T
  //! on  the neutral fibber
    virtual   Standard_Boolean Value (const Standard_Real T, Standard_Real& THeigth) ;




protected:





private:



  Standard_Real MiddleHeigth;
  Standard_Real GeometricSlope;
  Standard_Real LengthSliding;


};


#include <FairCurve_BattenLaw.lxx>





#endif // _FairCurve_BattenLaw_HeaderFile
