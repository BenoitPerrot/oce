// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_UnitsData_HeaderFile
#define _IGESDefs_UnitsData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDefs_UnitsData.hxx>

#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Interface_HArray1OfHAsciiString;
class TColStd_HArray1OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class TCollection_HAsciiString;


//! defines IGES UnitsData Entity, Type <316> Form <0>
//! in package IGESDefs
//! This class stores data about a model's fundamental units.
class IGESDefs_UnitsData : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDefs_UnitsData();
  
  //! This method is used to set the fields of the class
  //! UnitsData
  //! - unitTypes  : Types of the units being defined
  //! - unitValues : Unit Values of the units
  //! - unitScales : Multiplicative Scale Factors
  //! raises exception if lengths of unitTypes, unitValues and
  //! unitScale are not same
  Standard_EXPORT   void Init (const Handle(Interface_HArray1OfHAsciiString)& unitTypes, const Handle(Interface_HArray1OfHAsciiString)& unitValues, const Handle(TColStd_HArray1OfReal)& unitScales) ;
  
  //! returns the Number of units defined by this entity
  Standard_EXPORT   Standard_Integer NbUnits()  const;
  
  //! returns the Type of the UnitNum'th unit being defined
  //! raises exception if UnitNum <= 0 or UnitNum > NbUnits()
  Standard_EXPORT   Handle(TCollection_HAsciiString) UnitType (const Standard_Integer UnitNum)  const;
  
  //! returns the Units of the UnitNum'th unit being defined
  //! raises exception if UnitNum <= 0 or UnitNum > NbUnits()
  Standard_EXPORT   Handle(TCollection_HAsciiString) UnitValue (const Standard_Integer UnitNum)  const;
  
  //! returns the multiplicative scale factor to be apllied to the
  //! UnitNum'th unit being defined
  //! raises exception if UnitNum <= 0 or UnitNum > NbUnits()
  Standard_EXPORT   Standard_Real ScaleFactor (const Standard_Integer UnitNum)  const;




  DEFINE_STANDARD_RTTI(IGESDefs_UnitsData)

protected:




private: 


  Handle(Interface_HArray1OfHAsciiString) theUnitTypes;
  Handle(Interface_HArray1OfHAsciiString) theUnitValues;
  Handle(TColStd_HArray1OfReal) theUnitScales;


};







#endif // _IGESDefs_UnitsData_HeaderFile
