// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DimensionDisplayData_HeaderFile
#define _IGESDimen_DimensionDisplayData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_DimensionDisplayData.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <IGESData_IGESEntity.hxx>
class TCollection_HAsciiString;
class TColStd_HArray1OfInteger;
class Standard_DimensionMismatch;
class Standard_OutOfRange;


//! Defines IGES Dimension Display Data, Type <406> Form <30>,
//! in package IGESDimen
//! The Dimensional Display Data Property is optional but when
//! present must be referenced by a dimension entity.
//! The information it contains could be extracted from the text,
//! leader and witness line data with difficulty.
class IGESDimen_DimensionDisplayData : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_DimensionDisplayData();
  
  Standard_EXPORT   void Init (const Standard_Integer numProps, const Standard_Integer aDimType, const Standard_Integer aLabelPos, const Standard_Integer aCharSet, const Handle(TCollection_HAsciiString)& aString, const Standard_Integer aSymbol, const Standard_Real anAng, const Standard_Integer anAlign, const Standard_Integer aLevel, const Standard_Integer aPlace, const Standard_Integer anOrient, const Standard_Real initVal, const Handle(TColStd_HArray1OfInteger)& notes, const Handle(TColStd_HArray1OfInteger)& startInd, const Handle(TColStd_HArray1OfInteger)& endInd) ;
  
  //! returns the number of property values (14)
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the dimension type
  Standard_EXPORT   Standard_Integer DimensionType()  const;
  
  //! returns the preferred label position
  Standard_EXPORT   Standard_Integer LabelPosition()  const;
  
  //! returns the character set interpretation
  Standard_EXPORT   Standard_Integer CharacterSet()  const;
  
  //! returns e.g., 8HDIAMETER
  Standard_EXPORT   Handle(TCollection_HAsciiString) LString()  const;
  
  Standard_EXPORT   Standard_Integer DecimalSymbol()  const;
  
  //! returns the witness line angle in radians
  Standard_EXPORT   Standard_Real WitnessLineAngle()  const;
  
  //! returns the text alignment
  Standard_EXPORT   Standard_Integer TextAlignment()  const;
  
  //! returns the text level
  Standard_EXPORT   Standard_Integer TextLevel()  const;
  
  //! returns the preferred text placement
  Standard_EXPORT   Standard_Integer TextPlacement()  const;
  
  //! returns the arrowhead orientation
  Standard_EXPORT   Standard_Integer ArrowHeadOrientation()  const;
  
  //! returns the primary dimension initial value
  Standard_EXPORT   Standard_Real InitialValue()  const;
  
  //! returns the number of supplementary notes or zero
  Standard_EXPORT   Standard_Integer NbSupplementaryNotes()  const;
  
  //! returns the Index'th supplementary note
  //! raises exception if Index <= 0 or Index > NbSupplementaryNotes()
  Standard_EXPORT   Standard_Integer SupplementaryNote (const Standard_Integer Index)  const;
  
  //! returns the Index'th note start index
  //! raises exception if Index <= 0 or Index > NbSupplementaryNotes()
  Standard_EXPORT   Standard_Integer StartIndex (const Standard_Integer Index)  const;
  
  //! returns the Index'th note end index
  //! raises exception if Index <= 0 or Index > NbSupplemetaryNotes()
  Standard_EXPORT   Standard_Integer EndIndex (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESDimen_DimensionDisplayData)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Integer theDimensionType;
  Standard_Integer theLabelPosition;
  Standard_Integer theCharacterSet;
  Handle(TCollection_HAsciiString) theLString;
  Standard_Integer theDecimalSymbol;
  Standard_Real theWitnessLineAngle;
  Standard_Integer theTextAlignment;
  Standard_Integer theTextLevel;
  Standard_Integer theTextPlacement;
  Standard_Integer theArrowHeadOrientation;
  Standard_Real theInitialValue;
  Handle(TColStd_HArray1OfInteger) theSupplementaryNotes;
  Handle(TColStd_HArray1OfInteger) theStartIndex;
  Handle(TColStd_HArray1OfInteger) theEndIndex;


};







#endif // _IGESDimen_DimensionDisplayData_HeaderFile
