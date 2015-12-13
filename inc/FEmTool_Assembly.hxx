// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_Assembly_HeaderFile
#define _FEmTool_Assembly_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TColStd/TColStd_Array2OfInteger.hxx>
#include <Handle_FEmTool_HAssemblyTable.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_FEmTool_ProfileMatrix.hxx>
#include <math_Vector.hxx>
#include <FEmTool_SeqOfLinConstr.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class FEmTool_HAssemblyTable;
class FEmTool_ProfileMatrix;
class StdFail_NotDone;
class Standard_DimensionError;
class Standard_DomainError;
class TColStd_Array2OfInteger;
class math_Matrix;


//! Assemble and solve system from (one dimensional) Finite Elements
class FEmTool_Assembly 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT FEmTool_Assembly(const TColStd_Array2OfInteger& Dependence, const Handle(FEmTool_HAssemblyTable)& Table);
  
  //! Nullify all Matrix 's Coefficient
  Standard_EXPORT   void NullifyMatrix() ;
  
  //! Add an elementary Matrix in the assembly Matrix
  //! if  Dependence(Dimension1,Dimension2)  is  False
  Standard_EXPORT   void AddMatrix (const Standard_Integer Element, const Standard_Integer Dimension1, const Standard_Integer Dimension2, const math_Matrix& Mat) ;
  
  //! Nullify  all  Coordinate of  assembly  Vector (second member)
  Standard_EXPORT   void NullifyVector() ;
  
  //! Add an elementary Vector in the assembly Vector (second member)
  Standard_EXPORT   void AddVector (const Standard_Integer Element, const Standard_Integer Dimension, const math_Vector& Vec) ;
  
  //! Delete all Constraints.
  Standard_EXPORT   void ResetConstraint() ;
  
  //! Nullify all Constraints.
  Standard_EXPORT   void NullifyConstraint() ;
  
  Standard_EXPORT   void AddConstraint (const Standard_Integer IndexofConstraint, const Standard_Integer Element, const Standard_Integer Dimension, const math_Vector& LinearForm, const Standard_Real Value) ;
  
  //! Solve the assembly system
  //! Returns Standard_False if the computation failed.
  Standard_EXPORT   Standard_Boolean Solve() ;
  
  Standard_EXPORT   void Solution (math_Vector& Solution)  const;
  
  Standard_EXPORT   Standard_Integer NbGlobVar()  const;
  
  Standard_EXPORT   void GetAssemblyTable (Handle(FEmTool_HAssemblyTable)& AssTable)  const;




protected:





private:



  TColStd_Array2OfInteger myDepTable;
  Handle(FEmTool_HAssemblyTable) myRefTable;
  Standard_Boolean IsSolved;
  Handle(FEmTool_ProfileMatrix) H;
  math_Vector B;
  Handle(FEmTool_ProfileMatrix) GHGt;
  FEmTool_SeqOfLinConstr G;
  TColStd_SequenceOfReal C;


};







#endif // _FEmTool_Assembly_HeaderFile
