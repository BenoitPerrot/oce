// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_Color_HeaderFile
#define _IGESGraph_Color_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESGraph_Color.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <IGESData_ColorEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TCollection_HAsciiString;


//! defines IGESColor, Type <314> Form <0>
//! in package IGESGraph
//!
//! The Color Definition Entity is used to communicate the
//! relationship of primary colors to the intensity level of
//! the respective graphics devices as a percent of full
//! intensity range.
class IGESGraph_Color : public IGESData_ColorEntity
{

public:

  
  Standard_EXPORT IGESGraph_Color();
  
  //! This method is used to set the fields of the class Color
  //! - red        : Red   color intensity (range 0.0 to 100.0)
  //! - green      : Green color intensity (range 0.0 to 100.0)
  //! - blue       : Blue  color intensity (range 0.0 to 100.0)
  //! - aColorName : Name of the color (optional)
  Standard_EXPORT   void Init (const Standard_Real red, const Standard_Real green, const Standard_Real blue, const Handle(TCollection_HAsciiString)& aColorName) ;
  
  Standard_EXPORT   void RGBIntensity (Standard_Real& Red, Standard_Real& Green, Standard_Real& Blue)  const;
  
  Standard_EXPORT   void CMYIntensity (Standard_Real& Cyan, Standard_Real& Magenta, Standard_Real& Yellow)  const;
  
  Standard_EXPORT   void HLSPercentage (Standard_Real& Hue, Standard_Real& Lightness, Standard_Real& Saturation)  const;
  
  //! returns True if optional character string is assigned,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean HasColorName()  const;
  
  //! if HasColorName() is True  returns the Verbal description of
  //! the Color.
  Standard_EXPORT   Handle(TCollection_HAsciiString) ColorName()  const;




  DEFINE_STANDARD_RTTI(IGESGraph_Color)

protected:




private: 


  Standard_Real theRed;
  Standard_Real theGreen;
  Standard_Real theBlue;
  Handle(TCollection_HAsciiString) theColorName;


};







#endif // _IGESGraph_Color_HeaderFile
