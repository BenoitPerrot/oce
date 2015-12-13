// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_ElementaryCriterion_HeaderFile
#define _FEmTool_ElementaryCriterion_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_FEmTool_ElementaryCriterion.hxx>

#include <Handle_TColStd_HArray2OfReal.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_TColStd_HArray2OfInteger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <math_Vector.hxx>
class TColStd_HArray2OfReal;
class Standard_NotImplemented;
class Standard_DomainError;
class TColStd_HArray2OfInteger;
class math_Matrix;


//! defined J Criteria to used in minimisation
class FEmTool_ElementaryCriterion : public MMgt_TShared
{

public:

  
  //! Set the coefficient of the Element (the  Curve)
  Standard_EXPORT   void Set (const Handle(TColStd_HArray2OfReal)& Coeff) ;
  
  //! Set the definition interval of the Element
  Standard_EXPORT virtual   void Set (const Standard_Real FirstKnot, const Standard_Real LastKnot) ;
  
  //! To know if two dimension are independent.
  Standard_EXPORT virtual   Handle(TColStd_HArray2OfInteger) DependenceTable()  const = 0;
  
  //! To Compute J(E) where E  is the current Element
  Standard_EXPORT virtual   Standard_Real Value()  = 0;
  
  //! To Compute J(E)  the coefficients of Hessian matrix of
  //! J(E) wich are crossed derivatives in dimensions <Dim1>
  //! and  <Dim2>.
  //! If DependenceTable(Dimension1,Dimension2) is False
  Standard_EXPORT virtual   void Hessian (const Standard_Integer Dim1, const Standard_Integer Dim2, math_Matrix& H)  = 0;
  
  //! To Compute the  coefficients in the dimension <dim>
  //! of  the  J(E)'s  Gradient where E  is  the current  Element
  Standard_EXPORT virtual   void Gradient (const Standard_Integer Dim, math_Vector& G)  = 0;




  DEFINE_STANDARD_RTTI(FEmTool_ElementaryCriterion)

protected:


  Handle(TColStd_HArray2OfReal) myCoeff;
  Standard_Real myFirst;
  Standard_Real myLast;


private: 




};







#endif // _FEmTool_ElementaryCriterion_HeaderFile
