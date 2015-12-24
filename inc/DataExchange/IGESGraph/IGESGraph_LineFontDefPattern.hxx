// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_LineFontDefPattern_HeaderFile
#define _IGESGraph_LineFontDefPattern_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_LineFontDefPattern.hxx>

#include <Foundation/TColStd/Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/IGESData/IGESData_LineFontEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;
class Standard_OutOfRange;


//! defines IGESLineFontDefPattern, Type <304> Form <2>
//! in package IGESGraph
//!
//! Line Font may be defined by repetition of a basic pattern
//! of visible-blank(or, on-off) segments superimposed on
//! a line or a curve. The line or curve is then displayed
//! according to the basic pattern.
class IGESGraph_LineFontDefPattern : public IGESData_LineFontEntity
{

public:

  
  Standard_EXPORT IGESGraph_LineFontDefPattern();
  
  //! This method is used to set the fields of the class
  //! LineFontDefPattern
  //! - allSegLength : Containing lengths of respective segments
  //! - aPattern     : HAsciiString indicating visible-blank segments
  Standard_EXPORT   void Init (const Handle(TColStd_HArray1OfReal)& allSegLength, const Handle(TCollection_HAsciiString)& aPattern) ;
  
  //! returns the number of segments in the visible-blank pattern
  Standard_EXPORT   Standard_Integer NbSegments()  const;
  
  //! returns the Length of Index'th segment of the basic pattern
  //! raises exception if Index <= 0 or Index > NbSegments
  Standard_EXPORT   Standard_Real Length (const Standard_Integer Index)  const;
  
  //! returns the string indicating which segments of the basic
  //! pattern are visible and which are blanked.
  //! e.g:
  //! theNbSegments = 5 and if Bit Pattern = 10110, which means that
  //! segments 2, 3 and 5 are visible, whereas segments 1 and 4 are
  //! blank. The method returns "2H16" as the HAsciiString.
  //! Note: The bits are right justified. (16h = 10110)
  Standard_EXPORT   Handle(TCollection_HAsciiString) DisplayPattern()  const;
  
  //! The Display Pattern is decrypted to
  //! return True if the Index'th basic pattern is Visible,
  //! False otherwise.
  //! If Index > NbSegments or Index <= 0 then return value is
  //! False.
  Standard_EXPORT   Standard_Boolean IsVisible (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESGraph_LineFontDefPattern)

protected:




private: 


  Handle(TColStd_HArray1OfReal) theSegmentLengths;
  Handle(TCollection_HAsciiString) theDisplayPattern;


};







#endif // _IGESGraph_LineFontDefPattern_HeaderFile
