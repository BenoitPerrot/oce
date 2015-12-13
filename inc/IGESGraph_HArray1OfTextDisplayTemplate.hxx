// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_HArray1OfTextDisplayTemplate_HeaderFile
#define _IGESGraph_HArray1OfTextDisplayTemplate_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGraph_HArray1OfTextDisplayTemplate.hxx>

#include <IGESGraph_Array1OfTextDisplayTemplate.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_IGESGraph_TextDisplayTemplate.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGraph_TextDisplayTemplate;
class IGESGraph_Array1OfTextDisplayTemplate;



class IGESGraph_HArray1OfTextDisplayTemplate : public MMgt_TShared
{

public:

  
    IGESGraph_HArray1OfTextDisplayTemplate(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESGraph_HArray1OfTextDisplayTemplate(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESGraph_TextDisplayTemplate)& V);
  
      void Init (const Handle(IGESGraph_TextDisplayTemplate)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESGraph_TextDisplayTemplate)& Value) ;
  
     const  Handle(IGESGraph_TextDisplayTemplate)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESGraph_TextDisplayTemplate)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESGraph_Array1OfTextDisplayTemplate& Array1()  const;
  
      IGESGraph_Array1OfTextDisplayTemplate& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESGraph_HArray1OfTextDisplayTemplate)

protected:




private: 


  IGESGraph_Array1OfTextDisplayTemplate myArray;


};

#define ItemHArray1 Handle(IGESGraph_TextDisplayTemplate)
#define ItemHArray1_hxx <IGESGraph_TextDisplayTemplate.hxx>
#define TheArray1 IGESGraph_Array1OfTextDisplayTemplate
#define TheArray1_hxx <IGESGraph_Array1OfTextDisplayTemplate.hxx>
#define TCollection_HArray1 IGESGraph_HArray1OfTextDisplayTemplate
#define TCollection_HArray1_hxx <IGESGraph_HArray1OfTextDisplayTemplate.hxx>
#define Handle_TCollection_HArray1 Handle_IGESGraph_HArray1OfTextDisplayTemplate
#define TCollection_HArray1_Type_() IGESGraph_HArray1OfTextDisplayTemplate_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESGraph_HArray1OfTextDisplayTemplate_HeaderFile
