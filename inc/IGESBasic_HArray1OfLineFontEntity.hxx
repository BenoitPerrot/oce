// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_HArray1OfLineFontEntity_HeaderFile
#define _IGESBasic_HArray1OfLineFontEntity_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_HArray1OfLineFontEntity.hxx>

#include <IGESBasic_Array1OfLineFontEntity.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_IGESData_LineFontEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESData_LineFontEntity;
class IGESBasic_Array1OfLineFontEntity;



class IGESBasic_HArray1OfLineFontEntity : public MMgt_TShared
{

public:

  
    IGESBasic_HArray1OfLineFontEntity(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESBasic_HArray1OfLineFontEntity(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESData_LineFontEntity)& V);
  
      void Init (const Handle(IGESData_LineFontEntity)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESData_LineFontEntity)& Value) ;
  
     const  Handle(IGESData_LineFontEntity)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESData_LineFontEntity)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESBasic_Array1OfLineFontEntity& Array1()  const;
  
      IGESBasic_Array1OfLineFontEntity& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESBasic_HArray1OfLineFontEntity)

protected:




private: 


  IGESBasic_Array1OfLineFontEntity myArray;


};

#define ItemHArray1 Handle(IGESData_LineFontEntity)
#define ItemHArray1_hxx <IGESData_LineFontEntity.hxx>
#define TheArray1 IGESBasic_Array1OfLineFontEntity
#define TheArray1_hxx <IGESBasic_Array1OfLineFontEntity.hxx>
#define TCollection_HArray1 IGESBasic_HArray1OfLineFontEntity
#define TCollection_HArray1_hxx <IGESBasic_HArray1OfLineFontEntity.hxx>
#define Handle_TCollection_HArray1 Handle_IGESBasic_HArray1OfLineFontEntity
#define TCollection_HArray1_Type_() IGESBasic_HArray1OfLineFontEntity_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESBasic_HArray1OfLineFontEntity_HeaderFile
