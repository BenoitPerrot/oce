// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_SplineSurface_HeaderFile
#define _IGESGeom_SplineSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_SplineSurface.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_IGESBasic_HArray2OfHArray1OfReal.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TColStd_HArray1OfReal;
class IGESBasic_HArray2OfHArray1OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;


//! defines IGESSplineSurface, Type <114> Form <0>
//! in package IGESGeom
//! A parametric spline surface is a grid of polynomial
//! patches. Patch could be of the type Linear, Quadratic,
//! Cubic, Wilson-Fowler, Modified Wilson-Fowler, B-Spline
//! The M * N grid of patches is defined by the 'u' break
//! points TU(1), TU(2), ..., TU(M+1) and the 'v' break
//! points TV(1), TV(2), TV(3) ..., TV(N+1).
class IGESGeom_SplineSurface : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGeom_SplineSurface();
  
  //! This method is used to set the fields of the class
  //! SplineSurface
  //! - aBoundaryType   : Type of Spline boundary
  //! 1 = Linear
  //! 2 = Quadratic
  //! 3 = Cubic
  //! 4 = Wilson-Fowler
  //! 5 = Modified Wilson-Fowler
  //! 6 = B-spline
  //! - aPatchType      : Type of patch contained in the grid
  //! 1 = Cartesian Product
  //! 0 = Unspecified
  //! - allUBreakpoints : u values of grid lines
  //! - allVBreakpoints : v values of grid lines
  //! - allXCoeffs      : X coefficients of M x N patches
  //! - allYCoeffs      : Y coefficients of M x N patches
  //! - allZCoeffs      : Z coefficients of M x N patches
  //! raises exception if allXCoeffs, allYCoeffs & allZCoeffs are not
  //! of the same size.
  //! or if the size of each element of the double array is not 16
  Standard_EXPORT   void Init (const Standard_Integer aBoundaryType, const Standard_Integer aPatchType, const Handle(TColStd_HArray1OfReal)& allUBreakpoints, const Handle(TColStd_HArray1OfReal)& allVBreakpoints, const Handle(IGESBasic_HArray2OfHArray1OfReal)& allXCoeffs, const Handle(IGESBasic_HArray2OfHArray1OfReal)& allYCoeffs, const Handle(IGESBasic_HArray2OfHArray1OfReal)& allZCoeffs) ;
  
  //! returns the number of U segments
  Standard_EXPORT   Standard_Integer NbUSegments()  const;
  
  //! returns the number of V segments
  Standard_EXPORT   Standard_Integer NbVSegments()  const;
  
  //! returns boundary type
  Standard_EXPORT   Standard_Integer BoundaryType()  const;
  
  //! returns patch type
  Standard_EXPORT   Standard_Integer PatchType()  const;
  
  //! returns U break point of the grid line referred to by anIndex
  //! raises exception if anIndex <= 0 or anIndex > NbUSegments() + 1
  Standard_EXPORT   Standard_Real UBreakPoint (const Standard_Integer anIndex)  const;
  
  //! returns V break point of the grid line referred to by anIndex
  //! raises exception if anIndex <= 0 or anIndex > NbVSegments() + 1
  Standard_EXPORT   Standard_Real VBreakPoint (const Standard_Integer anIndex)  const;
  
  //! returns X polynomial of patch referred to by anIndex1, anIndex2
  //! raises exception if anIndex1 <= 0 or anIndex1 > NbUSegments()
  //! or anIndex2 <= 0 or anIndex2 > NbVSegments()
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) XPolynomial (const Standard_Integer anIndex1, const Standard_Integer anIndex2)  const;
  
  //! returns Y polynomial of patch referred to by anIndex1, anIndex2
  //! raises exception if anIndex1 <= 0 or anIndex1 > NbUSegments()
  //! or anIndex2 <= 0 or anIndex2 > NbVSegments()
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) YPolynomial (const Standard_Integer anIndex1, const Standard_Integer anIndex2)  const;
  
  //! returns Z polynomial of patch referred to by anIndex1, anIndex2
  //! raises exception if anIndex1 <= 0 or anIndex1 > NbUSegments()
  //! or anIndex2 <= 0 or anIndex2 > NbVSegments()
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) ZPolynomial (const Standard_Integer anIndex1, const Standard_Integer anIndex2)  const;
  
  //! returns in one all the polynomial values "in bulk"
  //! usefull for massive treatements
  Standard_EXPORT   void Polynomials (Handle(IGESBasic_HArray2OfHArray1OfReal)& XCoef, Handle(IGESBasic_HArray2OfHArray1OfReal)& YCoef, Handle(IGESBasic_HArray2OfHArray1OfReal)& ZCoef)  const;




  DEFINE_STANDARD_RTTI(IGESGeom_SplineSurface)

protected:




private: 


  Standard_Integer theBoundaryType;
  Standard_Integer thePatchType;
  Handle(TColStd_HArray1OfReal) theUBreakPoints;
  Handle(TColStd_HArray1OfReal) theVBreakPoints;
  Handle(IGESBasic_HArray2OfHArray1OfReal) theXCoeffs;
  Handle(IGESBasic_HArray2OfHArray1OfReal) theYCoeffs;
  Handle(IGESBasic_HArray2OfHArray1OfReal) theZCoeffs;


};







#endif // _IGESGeom_SplineSurface_HeaderFile
