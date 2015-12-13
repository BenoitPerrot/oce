// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_Powell_HeaderFile
#define _math_Powell_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <math_Vector.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <math_Status.hxx>
#include <math_Matrix.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class StdFail_NotDone;
class Standard_DimensionError;
class math_MultipleVarFunction;
class math_Matrix;



//! This class implements the Powell method to find the minimum of
//! function of multiple variables (the gradient does not have to be known).
class math_Powell 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Computes Powell minimization on the function F given
  //! StartingPoint, and an initial matrix StartingDirection
  //! whose columns contain the initial set of directions. The
  //! solution F = Fi is found when 2.0 * abs(Fi - Fi-1) =
  //! <Tolerance * (abs(Fi) + abs(Fi-1) + ZEPS). The maximum
  //! number of iterations allowed is given by NbIterations.
  Standard_EXPORT math_Powell(math_MultipleVarFunction& F, const math_Vector& StartingPoint, const math_Matrix& StartingDirections, const Standard_Real Tolerance, const Standard_Integer NbIterations = 200, const Standard_Real ZEPS = 1.0e-12);
  
  //! is used in a sub-class to initialize correctly all the fields
  //! of this class.
  Standard_EXPORT math_Powell(math_MultipleVarFunction& F, const Standard_Real Tolerance, const Standard_Integer NbIterations = 200, const Standard_Real ZEPS = 1.0e-12);
  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~math_Powell(){Delete();}
  
  //! Use this method after a call to the initialization constructor
  //! to compute the minimum of function F.
  //! Warning
  //! The initialization constructor must have been called before
  //! the Perform method is called.
  Standard_EXPORT   void Perform (math_MultipleVarFunction& F, const math_Vector& StartingPoint, const math_Matrix& StartingDirections) ;
  

  //! solution F = Fi is found when :
  //! 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1)) + ZEPS.
  //! The maximum number of iterations allowed is given by NbIterations.
  Standard_EXPORT virtual   Standard_Boolean IsSolutionReached (math_MultipleVarFunction& F) ;
  
  //! Returns true if the computations are successful, otherwise returns false.
      Standard_Boolean IsDone()  const;
  
  //! returns the location vector of the minimum.
  //! Exception NotDone is raised if the minimum was not found.
     const  math_Vector& Location()  const;
  
  //! outputs the location vector of the minimum in Loc.
  //! Exception NotDone is raised if the minimum was not found.
  //! Exception DimensionError is raised if the range of Loc is not
  //! equal to the range of the StartingPoint.
      void Location (math_Vector& Loc)  const;
  
  //! Returns the value of the minimum.
  //! Exception NotDone is raised if the minimum was not found.
      Standard_Real Minimum()  const;
  
  //! Returns the number of iterations really done during the
  //! computation of the minimum.
  //! Exception NotDone is raised if the minimum was not found.
      Standard_Integer NbIterations()  const;
  
  //! Prints information on the current state of the object.
  //! Is used to redefine the operator <<.
  Standard_EXPORT   void Dump (Standard_OStream& o)  const;




protected:



  math_Vector TheLocation;
  Standard_Real TheMinimum;
  Standard_Real TheLocationError;
  Standard_Real PreviousMinimum;
  Standard_Real XTol;
  Standard_Real EPSZ;


private:



  Standard_Boolean Done;
  Standard_Integer Iter;
  math_Status TheStatus;
  math_Matrix TheDirections;
  Standard_Integer State;
  Standard_Integer Itermax;


};


#include <math_Powell.lxx>





#endif // _math_Powell_HeaderFile
