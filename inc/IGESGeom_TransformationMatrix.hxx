// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_TransformationMatrix_HeaderFile
#define _IGESGeom_TransformationMatrix_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_TransformationMatrix.hxx>

#include <Handle_TColStd_HArray2OfReal.hxx>
#include <DataExchange/IGESData/IGESData_TransfEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TColStd_HArray2OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class gp_GTrsf;


//! defines IGESTransformationMatrix, Type <124> Form <0>
//! in package IGESGeom
//! The transformation matrix entity transforms three-row column
//! vectors by means of matrix multiplication and then a vector
//! addition. This entity can be considered as an "operator"
//! entity in that it starts with the input vector, operates on
//! it as described above, and produces the output vector.
class IGESGeom_TransformationMatrix : public IGESData_TransfEntity
{

public:

  
  Standard_EXPORT IGESGeom_TransformationMatrix();
  
  //! This method is used to set the fields of the class
  //! TransformationMatrix
  //! - aMatrix : 3 x 4 array containing elements of the
  //! transformation matrix
  //! raises exception if aMatrix is not 3 x 4 array
  Standard_EXPORT   void Init (const Handle(TColStd_HArray2OfReal)& aMatrix) ;
  
  //! Changes FormNumber (indicates the Type of Transf :
  //! Transformation 0-1 or Coordinate System 10-11-12)
  //! Error if not in ranges [0-1] or [10-12]
  Standard_EXPORT   void SetFormNumber (const Standard_Integer form) ;
  
  //! returns individual Data
  //! Errro if I not in [1-3] or J not in [1-4]
  Standard_EXPORT   Standard_Real Data (const Standard_Integer I, const Standard_Integer J)  const;
  
  //! returns the transformation matrix
  //! 4th row elements of GTrsf will always be 0, 0, 0, 1 (not defined)
  Standard_EXPORT   gp_GTrsf Value()  const;




  DEFINE_STANDARD_RTTI(IGESGeom_TransformationMatrix)

protected:




private: 


  Handle(TColStd_HArray2OfReal) theData;


};







#endif // _IGESGeom_TransformationMatrix_HeaderFile
