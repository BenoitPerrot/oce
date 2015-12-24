// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_HeaderFile
#define _Units_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Units/Handle_Units_UnitsDictionary.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Units/Handle_Units_Quantity.hxx>
#include <Foundation/Units/Handle_Units_Lexicon.hxx>
#include <Foundation/Units/Handle_Units_Dimensions.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Units_UnitsDictionary;
class Units_Quantity;
class Units_Lexicon;
class Units_Dimensions;
class Units_Dimensions;
class Units_Unit;
class Units_UtsSequence;
class Units_UnitsSequence;
class Units_ShiftedUnit;
class Units_Token;
class Units_ShiftedToken;
class Units_TksSequence;
class Units_TokensSequence;
class Units_Quantity;
class Units_QtsSequence;
class Units_QuantitiesSequence;
class Units_UnitsDictionary;
class Units_UnitsSystem;
class Units_Explorer;
class Units_Sentence;
class Units_MathSentence;
class Units_UnitSentence;
class Units_Lexicon;
class Units_UnitsLexicon;
class Units_Measurement;
class Units_SequenceNodeOfUtsSequence;
class Units_SequenceNodeOfTksSequence;
class Units_SequenceNodeOfQtsSequence;


//! This  package provides all the  facilities  to create
//! and question a dictionary of  units,  and also  to
//! manipulate measurements which are real values with
//! units.
class Units 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines the location of the file containing all the
  //! information useful in creating the dictionary of all
  //! the units known to the system.
  Standard_EXPORT static   void UnitsFile (const Standard_CString afile) ;
  
  //! Defines the location of the file containing the lexicon
  //! useful in manipulating composite units.
  Standard_EXPORT static   void LexiconFile (const Standard_CString afile) ;
  
  //! Returns a unique instance of the dictionary of units.
  //! If <amode> is True, then it forces the recomputation of
  //! the dictionary of units.
  Standard_EXPORT static   Handle(Units_UnitsDictionary) DictionaryOfUnits (const Standard_Boolean amode = Standard_False) ;
  
  //! Returns a unique quantity instance corresponding to <aquantity>.
  Standard_EXPORT static   Handle(Units_Quantity) Quantity (const Standard_CString aquantity) ;
  
  //! Returns the first quantity string founded from the unit <aUnit>.
  Standard_EXPORT static   Standard_CString FirstQuantity (const Standard_CString aunit) ;
  
  //! Returns a unique instance of the Units_Lexicon.
  //! If <amode> is True, it forces the recomputation of
  //! the dictionary of units, and by consequence the
  //! completion of the Units_Lexicon.
  Standard_EXPORT static   Handle(Units_Lexicon) LexiconUnits (const Standard_Boolean amode = Standard_True) ;
  
  //! Return a unique instance of LexiconFormula.
  Standard_EXPORT static   Handle(Units_Lexicon) LexiconFormula() ;
  
  //! Returns always the same instance of Dimensions.
  Standard_EXPORT static   Handle(Units_Dimensions) NullDimensions() ;
  
  //! Converts <avalue> expressed in <afirstunit> into the <asecondunit>.
  Standard_EXPORT static   Standard_Real Convert (const Standard_Real avalue, const Standard_CString afirstunit, const Standard_CString asecondunit) ;
  
  Standard_EXPORT static   Standard_Real ToSI (const Standard_Real aData, const Standard_CString aUnit) ;
  
  Standard_EXPORT static   Standard_Real ToSI (const Standard_Real aData, const Standard_CString aUnit, Handle(Units_Dimensions)& aDim) ;
  
  Standard_EXPORT static   Standard_Real FromSI (const Standard_Real aData, const Standard_CString aUnit) ;
  
  Standard_EXPORT static   Standard_Real FromSI (const Standard_Real aData, const Standard_CString aUnit, Handle(Units_Dimensions)& aDim) ;
  
  //! return the dimension associated to the Type
  Standard_EXPORT static   Handle(Units_Dimensions) Dimensions (const Standard_CString aType) ;




protected:





private:




friend class Units_Dimensions;
friend class Units_Unit;
friend class Units_UtsSequence;
friend class Units_UnitsSequence;
friend class Units_ShiftedUnit;
friend class Units_Token;
friend class Units_ShiftedToken;
friend class Units_TksSequence;
friend class Units_TokensSequence;
friend class Units_Quantity;
friend class Units_QtsSequence;
friend class Units_QuantitiesSequence;
friend class Units_UnitsDictionary;
friend class Units_UnitsSystem;
friend class Units_Explorer;
friend class Units_Sentence;
friend class Units_MathSentence;
friend class Units_UnitSentence;
friend class Units_Lexicon;
friend class Units_UnitsLexicon;
friend class Units_Measurement;
friend class Units_SequenceNodeOfUtsSequence;
friend class Units_SequenceNodeOfTksSequence;
friend class Units_SequenceNodeOfQtsSequence;

};







#endif // _Units_HeaderFile
