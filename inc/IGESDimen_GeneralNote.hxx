// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_GeneralNote_HeaderFile
#define _IGESDimen_GeneralNote_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_GeneralNote.hxx>

#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_IGESGraph_HArray1OfTextFontDef.hxx>
#include <Handle_TColgp_HArray1OfXYZ.hxx>
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_IGESGraph_TextFontDef.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfReal;
class IGESGraph_HArray1OfTextFontDef;
class TColgp_HArray1OfXYZ;
class Interface_HArray1OfHAsciiString;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESGraph_TextFontDef;
class gp_Pnt;
class TCollection_HAsciiString;


//! defines GeneralNote, Type <212> Form <0-8, 100-200, 105>
//! in package IGESDimen
//! Used for formatting boxed text in different ways
class IGESDimen_GeneralNote : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_GeneralNote();
  
  //! This method is used to set the fields of the class
  //! GeneralNote
  //! - nNbChars      : number of chars strings
  //! - widths        : Box widths
  //! - heights       : Box heights
  //! - fontCodes     : Font codes, default = 1
  //! - fonts         : Text Font Definition Entities
  //! - slants        : Slant angles in radians
  //! - rotations     : Rotation angles in radians
  //! - mirrorFlags   : Mirror flags
  //! - rotFlags      : Rotation internal text flags
  //! - start         : Text start points
  //! - texts         : Text strings
  //! raises exception if there is mismatch between the various
  //! Array Lengths.
  Standard_EXPORT   void Init (const Handle(TColStd_HArray1OfInteger)& nbChars, const Handle(TColStd_HArray1OfReal)& widths, const Handle(TColStd_HArray1OfReal)& heights, const Handle(TColStd_HArray1OfInteger)& fontCodes, const Handle(IGESGraph_HArray1OfTextFontDef)& fonts, const Handle(TColStd_HArray1OfReal)& slants, const Handle(TColStd_HArray1OfReal)& rotations, const Handle(TColStd_HArray1OfInteger)& mirrorFlags, const Handle(TColStd_HArray1OfInteger)& rotFlags, const Handle(TColgp_HArray1OfXYZ)& start, const Handle(Interface_HArray1OfHAsciiString)& texts) ;
  
  //! Changes FormNumber (indicates Graphical Representation)
  //! Error if not in ranges [0-8] or [100-102] or 105
  Standard_EXPORT   void SetFormNumber (const Standard_Integer form) ;
  
  //! returns number of text strings in General Note
  Standard_EXPORT   Standard_Integer NbStrings()  const;
  
  //! returns number of characters of string or zero
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Integer NbCharacters (const Standard_Integer Index)  const;
  
  //! returns Box width of string
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Real BoxWidth (const Standard_Integer Index)  const;
  
  //! returns Box height of string
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Real BoxHeight (const Standard_Integer Index)  const;
  
  //! returns False if Value, True if Entity
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Boolean IsFontEntity (const Standard_Integer Index)  const;
  
  //! returns Font code (default = 1) of string
  //! returns 0 if IsFontEntity () is True
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Integer FontCode (const Standard_Integer Index)  const;
  
  //! returns Text Font Definition Entity of string
  //! returns a Null Handle if IsFontEntity () returns False
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Handle(IGESGraph_TextFontDef) FontEntity (const Standard_Integer Index)  const;
  
  //! returns Slant angle of string in radians
  //! default value = PI/2
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Real SlantAngle (const Standard_Integer Index)  const;
  
  //! returns Rotation angle of string in radians
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Real RotationAngle (const Standard_Integer Index)  const;
  
  //! returns Mirror Flag of string
  //! 0 = no mirroring
  //! 1 = mirror axis is perpendicular to the text base line
  //! 2 = mirror axis is text base line
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Integer MirrorFlag (const Standard_Integer Index)  const;
  
  //! returns Rotate internal text Flag of string
  //! 0 = text horizontal
  //! 1 = text vertical
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Integer RotateFlag (const Standard_Integer Index)  const;
  
  //! returns text start point of Index'th string
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   gp_Pnt StartPoint (const Standard_Integer Index)  const;
  
  //! returns text start point of Index'th string after Transformation
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   gp_Pnt TransformedStartPoint (const Standard_Integer Index)  const;
  
  //! returns distance from Start Point plane of string
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Standard_Real ZDepthStartPoint (const Standard_Integer Index)  const;
  
  //! returns text string
  //! raises exception if Index <= 0 or Index > NbStrings()
  Standard_EXPORT   Handle(TCollection_HAsciiString) Text (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESDimen_GeneralNote)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) theNbChars;
  Handle(TColStd_HArray1OfReal) theBoxWidths;
  Handle(TColStd_HArray1OfReal) theBoxHeights;
  Handle(TColStd_HArray1OfInteger) theFontCodes;
  Handle(IGESGraph_HArray1OfTextFontDef) theFontEntities;
  Handle(TColStd_HArray1OfReal) theSlantAngles;
  Handle(TColStd_HArray1OfReal) theRotationAngles;
  Handle(TColStd_HArray1OfInteger) theMirrorFlags;
  Handle(TColStd_HArray1OfInteger) theRotateFlags;
  Handle(TColgp_HArray1OfXYZ) theStartPoints;
  Handle(Interface_HArray1OfHAsciiString) theTexts;


};







#endif // _IGESDimen_GeneralNote_HeaderFile
