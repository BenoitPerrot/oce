// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_SplitCurve_HeaderFile
#define _ShapeUpgrade_SplitCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeUpgrade_SplitCurve.hxx>

#include <Handle_TColStd_HSequenceOfReal.hxx>
#include <Standard_Integer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <ShapeExtend_Status.hxx>
class TColStd_HSequenceOfReal;


//! Splits a  curve with a  criterion.
class ShapeUpgrade_SplitCurve : public MMgt_TShared
{

public:

  
  //! Empty constructor.
  Standard_EXPORT ShapeUpgrade_SplitCurve();
  
  //! Initializes with curve first and last parameters.
  Standard_EXPORT   void Init (const Standard_Real First, const Standard_Real Last) ;
  
  //! Sets the parameters where splitting has to be done.
  Standard_EXPORT   void SetSplitValues (const Handle(TColStd_HSequenceOfReal)& SplitValues) ;
  
  //! If Segment is True, the result is composed with
  //! segments of the curve bounded by the SplitValues.  If
  //! Segment is False, the result is composed with trimmed
  //! Curves all based on the same complete curve.
  Standard_EXPORT virtual   void Build (const Standard_Boolean Segment) ;
  
  //! returns all the splitting values including the
  //! First and Last parameters of the input curve
  //! Merges input split values and new ones into myGlobalKnots
  Standard_EXPORT  const  Handle(TColStd_HSequenceOfReal)& SplitValues()  const;
  
  //! Calculates points for correction/splitting of the curve
  Standard_EXPORT virtual   void Compute() ;
  
  //! Performs correction/splitting of the curve.
  //! First defines splitting values by method Compute(), then calls method Build().
  Standard_EXPORT   void Perform (const Standard_Boolean Segment = Standard_True) ;
  
  //! Returns the status
  //! OK    - no splitting is needed
  //! DONE1 - splitting required and gives more than one segment
  //! DONE2 - splitting is required, but gives only one segment (initial)
  //! DONE3 - geometric form of the curve or parametrisation is modified
  Standard_EXPORT   Standard_Boolean Status (const ShapeExtend_Status status)  const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_SplitCurve)

protected:


  Handle(TColStd_HSequenceOfReal) mySplitValues;
  Standard_Integer myNbCurves;
  Standard_Integer myStatus;


private: 




};







#endif // _ShapeUpgrade_SplitCurve_HeaderFile
