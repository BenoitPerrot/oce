// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_HArray1OfDocument_HeaderFile
#define _StepBasic_HArray1OfDocument_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_HArray1OfDocument.hxx>

#include <DataExchange/StepBasic/StepBasic_Array1OfDocument.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_Document.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_Document;
class StepBasic_Array1OfDocument;



class StepBasic_HArray1OfDocument : public MMgt_TShared
{

public:

  
    StepBasic_HArray1OfDocument(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_HArray1OfDocument(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepBasic_Document)& V);
  
      void Init (const Handle(StepBasic_Document)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_Document)& Value) ;
  
     const  Handle(StepBasic_Document)& Value (const Standard_Integer Index)  const;
  
      Handle(StepBasic_Document)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepBasic_Array1OfDocument& Array1()  const;
  
      StepBasic_Array1OfDocument& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepBasic_HArray1OfDocument)

protected:




private: 


  StepBasic_Array1OfDocument myArray;


};

#define ItemHArray1 Handle(StepBasic_Document)
#define ItemHArray1_hxx <DataExchange/StepBasic/StepBasic_Document.hxx>
#define TheArray1 StepBasic_Array1OfDocument
#define TheArray1_hxx <DataExchange/StepBasic/StepBasic_Array1OfDocument.hxx>
#define TCollection_HArray1 StepBasic_HArray1OfDocument
#define TCollection_HArray1_hxx <DataExchange/StepBasic/StepBasic_HArray1OfDocument.hxx>
#define Handle_TCollection_HArray1 Handle_StepBasic_HArray1OfDocument
#define TCollection_HArray1_Type_() StepBasic_HArray1OfDocument_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepBasic_HArray1OfDocument_HeaderFile
