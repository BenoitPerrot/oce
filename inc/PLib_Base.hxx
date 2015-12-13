// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PLib_Base_HeaderFile
#define _PLib_Base_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_PLib_Base.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
class TColStd_Array1OfReal;


//! To work with different polynomial's Bases
class PLib_Base : public MMgt_TShared
{

public:

  

  //! Convert the polynomial P(t) in the canonical base.
  Standard_EXPORT virtual   void ToCoefficients (const Standard_Integer Dimension, const Standard_Integer Degree, const TColStd_Array1OfReal& CoeffinBase, TColStd_Array1OfReal& Coefficients)  const = 0;
  
  //! Compute the values of the basis functions in u
  Standard_EXPORT virtual   void D0 (const Standard_Real U, TColStd_Array1OfReal& BasisValue)  = 0;
  
  //! Compute the values and the derivatives values of
  //! the basis functions in u
  Standard_EXPORT virtual   void D1 (const Standard_Real U, TColStd_Array1OfReal& BasisValue, TColStd_Array1OfReal& BasisD1)  = 0;
  
  //! Compute the values and the derivatives values of
  //! the basis functions in u
  Standard_EXPORT virtual   void D2 (const Standard_Real U, TColStd_Array1OfReal& BasisValue, TColStd_Array1OfReal& BasisD1, TColStd_Array1OfReal& BasisD2)  = 0;
  
  //! Compute the values and the derivatives values of
  //! the basis functions in u
  Standard_EXPORT virtual   void D3 (const Standard_Real U, TColStd_Array1OfReal& BasisValue, TColStd_Array1OfReal& BasisD1, TColStd_Array1OfReal& BasisD2, TColStd_Array1OfReal& BasisD3)  = 0;
  
  //! returns WorkDegree
  Standard_EXPORT virtual   Standard_Integer WorkDegree()  const = 0;
  

  //! Compute NewDegree <= MaxDegree so that MaxError is lower
  //! than Tol.
  //! MaxError can be greater than Tol if it is not possible
  //! to find a NewDegree <= MaxDegree.
  //! In this case NewDegree = MaxDegree
  Standard_EXPORT virtual   void ReduceDegree (const Standard_Integer Dimension, const Standard_Integer MaxDegree, const Standard_Real Tol, Standard_Real& BaseCoeff, Standard_Integer& NewDegree, Standard_Real& MaxError)  const = 0;




  DEFINE_STANDARD_RTTI(PLib_Base)

protected:




private: 




};







#endif // _PLib_Base_HeaderFile
