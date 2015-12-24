// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DimensionTolerance_HeaderFile
#define _IGESDimen_DimensionTolerance_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESDimen/Handle_IGESDimen_DimensionTolerance.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>


//! defines Dimension Tolerance, Type <406>, Form <29>
//! in package IGESDimen
//! Provides tolerance information for a dimension which
//! can be used by the receiving system to regenerate the
//! dimension.
class IGESDimen_DimensionTolerance : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_DimensionTolerance();
  
  //! This method is used to set the fields of the class
  //! DimensionTolerance
  //! - nbPropVal     : Number of property values, default = 8
  //! - aSecTolFlag   : Secondary Tolerance Flag
  //! 0 = Applies to primary dimension
  //! 1 = Applies to secondary dimension
  //! 2 = Display values as fractions
  //! - aTolType      : Tolerance Type
  //! 1  = Bilateral
  //! 2  = Upper/Lower
  //! 3  = Unilateral Upper
  //! 4  = Unilateral Lower
  //! 5  = Range - min before max
  //! 6  = Range - min after max
  //! 7  = Range - min above max
  //! 8  = Range - min below max
  //! 9  = Nominal + Range - min above max
  //! 10 = Nominal + Range - min below max
  //! - aTolPlaceFlag : Tolerance Placement Flag
  //! 1 = Before nominal value
  //! 2 = After nominal value
  //! 3 = Above nominal value
  //! 4 = Below nominal value
  //! - anUpperTol    : Upper Tolerance
  //! - aLowerTol     : Lower Tolerance
  //! - aSignFlag     : Sign Suppression Flag
  //! - aFracFlag     : Fraction Flag
  //! 0 = Display values as decimal numbers
  //! 1 = Display values as mixed fractions
  //! 2 = Display values as fractions
  //! - aPrecision    : Precision Value
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Standard_Integer aSecTolFlag, const Standard_Integer aTolType, const Standard_Integer aTolPlaceFlag, const Standard_Real anUpperTol, const Standard_Real aLowerTol, const Standard_Boolean aSignFlag, const Standard_Integer aFracFlag, const Standard_Integer aPrecision) ;
  
  //! returns the number of property values, always = 8
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the Secondary Tolerance Flag
  Standard_EXPORT   Standard_Integer SecondaryToleranceFlag()  const;
  
  //! returns the Tolerance Type
  Standard_EXPORT   Standard_Integer ToleranceType()  const;
  
  //! returns the Tolerance Placement Flag, default = 2
  Standard_EXPORT   Standard_Integer TolerancePlacementFlag()  const;
  
  //! returns the Upper or Bilateral Tolerance Value
  Standard_EXPORT   Standard_Real UpperTolerance()  const;
  
  //! returns the Lower Tolerance Value
  Standard_EXPORT   Standard_Real LowerTolerance()  const;
  
  //! returns the Sign Suppression Flag
  Standard_EXPORT   Standard_Boolean SignSuppressionFlag()  const;
  
  //! returns the Fraction Flag
  Standard_EXPORT   Standard_Integer FractionFlag()  const;
  
  //! returns the Precision for Value Display
  Standard_EXPORT   Standard_Integer Precision()  const;




  DEFINE_STANDARD_RTTI(IGESDimen_DimensionTolerance)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Integer theSecondaryToleranceFlag;
  Standard_Integer theToleranceType;
  Standard_Integer theTolerancePlacementFlag;
  Standard_Real theUpperTolerance;
  Standard_Real theLowerTolerance;
  Standard_Boolean theSignSuppressionFlag;
  Standard_Integer theFractionFlag;
  Standard_Integer thePrecision;


};







#endif // _IGESDimen_DimensionTolerance_HeaderFile
