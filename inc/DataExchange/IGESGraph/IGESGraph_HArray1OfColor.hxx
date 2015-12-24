// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_HArray1OfColor_HeaderFile
#define _IGESGraph_HArray1OfColor_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_HArray1OfColor.hxx>

#include <DataExchange/IGESGraph/IGESGraph_Array1OfColor.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_Color.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGraph_Color;
class IGESGraph_Array1OfColor;



class IGESGraph_HArray1OfColor : public MMgt_TShared
{

public:

  
    IGESGraph_HArray1OfColor(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESGraph_HArray1OfColor(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESGraph_Color)& V);
  
      void Init (const Handle(IGESGraph_Color)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESGraph_Color)& Value) ;
  
     const  Handle(IGESGraph_Color)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESGraph_Color)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESGraph_Array1OfColor& Array1()  const;
  
      IGESGraph_Array1OfColor& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESGraph_HArray1OfColor)

protected:




private: 


  IGESGraph_Array1OfColor myArray;


};

#define ItemHArray1 Handle(IGESGraph_Color)
#define ItemHArray1_hxx <DataExchange/IGESGraph/IGESGraph_Color.hxx>
#define TheArray1 IGESGraph_Array1OfColor
#define TheArray1_hxx <DataExchange/IGESGraph/IGESGraph_Array1OfColor.hxx>
#define TCollection_HArray1 IGESGraph_HArray1OfColor
#define TCollection_HArray1_hxx <DataExchange/IGESGraph/IGESGraph_HArray1OfColor.hxx>
#define Handle_TCollection_HArray1 Handle_IGESGraph_HArray1OfColor
#define TCollection_HArray1_Type_() IGESGraph_HArray1OfColor_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESGraph_HArray1OfColor_HeaderFile
