// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_HAttributeArray1_HeaderFile
#define _TDF_HAttributeArray1_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDF_HAttributeArray1.hxx>

#include <TDF_AttributeArray1.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TDF_Attribute;
class TDF_AttributeArray1;



class TDF_HAttributeArray1 : public MMgt_TShared
{

public:

  
    TDF_HAttributeArray1(const Standard_Integer Low, const Standard_Integer Up);
  
    TDF_HAttributeArray1(const Standard_Integer Low, const Standard_Integer Up, const Handle(TDF_Attribute)& V);
  
      void Init (const Handle(TDF_Attribute)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(TDF_Attribute)& Value) ;
  
     const  Handle(TDF_Attribute)& Value (const Standard_Integer Index)  const;
  
      Handle(TDF_Attribute)& ChangeValue (const Standard_Integer Index) ;
  
     const  TDF_AttributeArray1& Array1()  const;
  
      TDF_AttributeArray1& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TDF_HAttributeArray1)

protected:




private: 


  TDF_AttributeArray1 myArray;


};

#define ItemHArray1 Handle(TDF_Attribute)
#define ItemHArray1_hxx <TDF_Attribute.hxx>
#define TheArray1 TDF_AttributeArray1
#define TheArray1_hxx <TDF_AttributeArray1.hxx>
#define TCollection_HArray1 TDF_HAttributeArray1
#define TCollection_HArray1_hxx <TDF_HAttributeArray1.hxx>
#define Handle_TCollection_HArray1 Handle_TDF_HAttributeArray1
#define TCollection_HArray1_Type_() TDF_HAttributeArray1_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TDF_HAttributeArray1_HeaderFile
