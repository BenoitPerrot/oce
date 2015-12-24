// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_NamedData_HeaderFile
#define _PDataStd_NamedData_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_NamedData.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <OCAF/PCollection/Handle_PCollection_HExtendedString.hxx>
#include <Foundation/Standard/Standard_Byte.hxx>
#include <OCAF/PColStd/Handle_PColStd_HArray1OfInteger.hxx>
#include <OCAF/PColStd/Handle_PColStd_HArray1OfReal.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/PColStd/Handle_PColStd_HArray2OfInteger.hxx>
#include <OCAF/PColStd/Handle_PColStd_HArray1OfExtendedString.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_HArray1OfByte.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_HArray1OfHArray1OfInteger.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_HArray1OfHArray1OfReal.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray2OfInteger.hxx>
class PCollection_HExtendedString;
class PColStd_HArray1OfInteger;
class PColStd_HArray1OfReal;
class PColStd_HArray2OfInteger;
class PColStd_HArray1OfExtendedString;
class PDataStd_HArray1OfByte;
class PDataStd_HArray1OfHArray1OfInteger;
class PDataStd_HArray1OfHArray1OfReal;
class TColStd_HArray2OfInteger;


class PDataStd_NamedData : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_NamedData();
  
  //! 6 pairs of (lower, upper) <theDimension> should be  initialized
  //! if  (upper  -  lower)  ==  0  and (upper  |  lower) == 0, the corresponding
  //! array is empty (not requested)
  Standard_EXPORT   void Init (const Handle(TColStd_HArray2OfInteger)& theDimension) ;
  
  Standard_EXPORT   void SetIntDataItem (const Standard_Integer index, const Handle(PCollection_HExtendedString)& key, const Standard_Integer value) ;
  
  Standard_EXPORT   Standard_Integer IntDataItemValue (const Standard_Integer index, Handle(PCollection_HExtendedString)& key)  const;
  
  Standard_EXPORT   void SetRealDataItem (const Standard_Integer index, const Handle(PCollection_HExtendedString)& key, const Standard_Real value) ;
  
  Standard_EXPORT   Standard_Real RealDataItemValue (const Standard_Integer index, Handle(PCollection_HExtendedString)& key)  const;
  
  Standard_EXPORT   void SetStrDataItem (const Standard_Integer index, const Handle(PCollection_HExtendedString)& key, const Handle(PCollection_HExtendedString)& value) ;
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) StrDataItemValue (const Standard_Integer index, Handle(PCollection_HExtendedString)& key)  const;
  
  Standard_EXPORT   void SetByteDataItem (const Standard_Integer index, const Handle(PCollection_HExtendedString)& key, const Standard_Byte value) ;
  
  Standard_EXPORT   Standard_Byte ByteDataItemValue (const Standard_Integer index, Handle(PCollection_HExtendedString)& key)  const;
  
  Standard_EXPORT   void SetArrIntDataItem (const Standard_Integer index, const Handle(PCollection_HExtendedString)& key, const Handle(PColStd_HArray1OfInteger)& value) ;
  
  Standard_EXPORT   Handle(PColStd_HArray1OfInteger) ArrIntDataItemValue (const Standard_Integer index, Handle(PCollection_HExtendedString)& key)  const;
  
  Standard_EXPORT   void SetArrRealDataItem (const Standard_Integer index, const Handle(PCollection_HExtendedString)& key, const Handle(PColStd_HArray1OfReal)& value) ;
  
  Standard_EXPORT   Handle(PColStd_HArray1OfReal) ArrRealDataItemValue (const Standard_Integer index, Handle(PCollection_HExtendedString)& key)  const;
  
  Standard_EXPORT   Standard_Integer LowerI()  const;
  
  Standard_EXPORT   Standard_Integer UpperI()  const;
  
  Standard_EXPORT   Standard_Integer LowerR()  const;
  
  Standard_EXPORT   Standard_Integer UpperR()  const;
  
  Standard_EXPORT   Standard_Integer LowerS()  const;
  
  Standard_EXPORT   Standard_Integer UpperS()  const;
  
  Standard_EXPORT   Standard_Integer LowerB()  const;
  
  Standard_EXPORT   Standard_Integer UpperB()  const;
  
  Standard_EXPORT   Standard_Integer LowerAI()  const;
  
  Standard_EXPORT   Standard_Integer UpperAI()  const;
  
  Standard_EXPORT   Standard_Integer LowerAR()  const;
  
  Standard_EXPORT   Standard_Integer UpperAR()  const;
  
  //! Returns true if at least one named integer value is kept.
  Standard_EXPORT   Standard_Boolean HasIntegers()  const;
  
  //! Returns true if at least one named real value is kept.
  Standard_EXPORT   Standard_Boolean HasReals()  const;
  
  //! Returns true if at least one named string value is kept.
  Standard_EXPORT   Standard_Boolean HasStrings()  const;
  
  //! Returns true if at least one named byte value is kept.
  Standard_EXPORT   Standard_Boolean HasBytes()  const;
  
  //! Returns true if at least one named array of integer values is kept.
  Standard_EXPORT   Standard_Boolean HasArraysOfIntegers()  const;
  
  //! Returns true if at least one named array of real values is kept.
  Standard_EXPORT   Standard_Boolean HasArraysOfReals()  const;

PDataStd_NamedData(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray2OfInteger) _CSFDB_GetPDataStd_NamedDatamyDimensions() const { return myDimensions; }
    void _CSFDB_SetPDataStd_NamedDatamyDimensions(const Handle(PColStd_HArray2OfInteger)& p) { myDimensions = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyIntKeys() const { return myIntKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyIntKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myIntKeys = p; }
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPDataStd_NamedDatamyIntValues() const { return myIntValues; }
    void _CSFDB_SetPDataStd_NamedDatamyIntValues(const Handle(PColStd_HArray1OfInteger)& p) { myIntValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyRealKeys() const { return myRealKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyRealKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myRealKeys = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPDataStd_NamedDatamyRealValues() const { return myRealValues; }
    void _CSFDB_SetPDataStd_NamedDatamyRealValues(const Handle(PColStd_HArray1OfReal)& p) { myRealValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyStrKeys() const { return myStrKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyStrKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myStrKeys = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyStrValues() const { return myStrValues; }
    void _CSFDB_SetPDataStd_NamedDatamyStrValues(const Handle(PColStd_HArray1OfExtendedString)& p) { myStrValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyByteKeys() const { return myByteKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyByteKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myByteKeys = p; }
    Handle(PDataStd_HArray1OfByte) _CSFDB_GetPDataStd_NamedDatamyByteValues() const { return myByteValues; }
    void _CSFDB_SetPDataStd_NamedDatamyByteValues(const Handle(PDataStd_HArray1OfByte)& p) { myByteValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyArrIntKeys() const { return myArrIntKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyArrIntKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myArrIntKeys = p; }
    Handle(PDataStd_HArray1OfHArray1OfInteger) _CSFDB_GetPDataStd_NamedDatamyArrIntValues() const { return myArrIntValues; }
    void _CSFDB_SetPDataStd_NamedDatamyArrIntValues(const Handle(PDataStd_HArray1OfHArray1OfInteger)& p) { myArrIntValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyArrRealKeys() const { return myArrRealKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyArrRealKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myArrRealKeys = p; }
    Handle(PDataStd_HArray1OfHArray1OfReal) _CSFDB_GetPDataStd_NamedDatamyArrRealValues() const { return myArrRealValues; }
    void _CSFDB_SetPDataStd_NamedDatamyArrRealValues(const Handle(PDataStd_HArray1OfHArray1OfReal)& p) { myArrRealValues = p; }



  DEFINE_STANDARD_RTTI(PDataStd_NamedData)

protected:




private: 


  Handle(PColStd_HArray2OfInteger) myDimensions;
  Handle(PColStd_HArray1OfExtendedString) myIntKeys;
  Handle(PColStd_HArray1OfInteger) myIntValues;
  Handle(PColStd_HArray1OfExtendedString) myRealKeys;
  Handle(PColStd_HArray1OfReal) myRealValues;
  Handle(PColStd_HArray1OfExtendedString) myStrKeys;
  Handle(PColStd_HArray1OfExtendedString) myStrValues;
  Handle(PColStd_HArray1OfExtendedString) myByteKeys;
  Handle(PDataStd_HArray1OfByte) myByteValues;
  Handle(PColStd_HArray1OfExtendedString) myArrIntKeys;
  Handle(PDataStd_HArray1OfHArray1OfInteger) myArrIntValues;
  Handle(PColStd_HArray1OfExtendedString) myArrRealKeys;
  Handle(PDataStd_HArray1OfHArray1OfReal) myArrRealValues;


};







#endif // _PDataStd_NamedData_HeaderFile
