// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_HArray1OfTabularData_HeaderFile
#define _IGESDefs_HArray1OfTabularData_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDefs_HArray1OfTabularData.hxx>

#include <IGESDefs_Array1OfTabularData.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_IGESDefs_TabularData.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDefs_TabularData;
class IGESDefs_Array1OfTabularData;



class IGESDefs_HArray1OfTabularData : public MMgt_TShared
{

public:

  
    IGESDefs_HArray1OfTabularData(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESDefs_HArray1OfTabularData(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESDefs_TabularData)& V);
  
      void Init (const Handle(IGESDefs_TabularData)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESDefs_TabularData)& Value) ;
  
     const  Handle(IGESDefs_TabularData)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESDefs_TabularData)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESDefs_Array1OfTabularData& Array1()  const;
  
      IGESDefs_Array1OfTabularData& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESDefs_HArray1OfTabularData)

protected:




private: 


  IGESDefs_Array1OfTabularData myArray;


};

#define ItemHArray1 Handle(IGESDefs_TabularData)
#define ItemHArray1_hxx <IGESDefs_TabularData.hxx>
#define TheArray1 IGESDefs_Array1OfTabularData
#define TheArray1_hxx <IGESDefs_Array1OfTabularData.hxx>
#define TCollection_HArray1 IGESDefs_HArray1OfTabularData
#define TCollection_HArray1_hxx <IGESDefs_HArray1OfTabularData.hxx>
#define Handle_TCollection_HArray1 Handle_IGESDefs_HArray1OfTabularData
#define TCollection_HArray1_Type_() IGESDefs_HArray1OfTabularData_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESDefs_HArray1OfTabularData_HeaderFile
