// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_HArray1OfTextFontDef_HeaderFile
#define _IGESGraph_HArray1OfTextFontDef_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_HArray1OfTextFontDef.hxx>

#include <DataExchange/IGESGraph/IGESGraph_Array1OfTextFontDef.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_TextFontDef.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGraph_TextFontDef;
class IGESGraph_Array1OfTextFontDef;



class IGESGraph_HArray1OfTextFontDef : public MMgt_TShared
{

public:

  
    IGESGraph_HArray1OfTextFontDef(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESGraph_HArray1OfTextFontDef(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESGraph_TextFontDef)& V);
  
      void Init (const Handle(IGESGraph_TextFontDef)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESGraph_TextFontDef)& Value) ;
  
     const  Handle(IGESGraph_TextFontDef)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESGraph_TextFontDef)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESGraph_Array1OfTextFontDef& Array1()  const;
  
      IGESGraph_Array1OfTextFontDef& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESGraph_HArray1OfTextFontDef)

protected:




private: 


  IGESGraph_Array1OfTextFontDef myArray;


};

#define ItemHArray1 Handle(IGESGraph_TextFontDef)
#define ItemHArray1_hxx <DataExchange/IGESGraph/IGESGraph_TextFontDef.hxx>
#define TheArray1 IGESGraph_Array1OfTextFontDef
#define TheArray1_hxx <DataExchange/IGESGraph/IGESGraph_Array1OfTextFontDef.hxx>
#define TCollection_HArray1 IGESGraph_HArray1OfTextFontDef
#define TCollection_HArray1_hxx <DataExchange/IGESGraph/IGESGraph_HArray1OfTextFontDef.hxx>
#define Handle_TCollection_HArray1 Handle_IGESGraph_HArray1OfTextFontDef
#define TCollection_HArray1_Type_() IGESGraph_HArray1OfTextFontDef_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESGraph_HArray1OfTextFontDef_HeaderFile
