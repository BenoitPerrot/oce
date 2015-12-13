// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_HPArray_HeaderFile
#define _Storage_HPArray_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Storage_HPArray.hxx>

#include <Storage_PArray.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_Persistent;
class Storage_PArray;



class Storage_HPArray : public MMgt_TShared
{

public:

  
    Storage_HPArray(const Standard_Integer Low, const Standard_Integer Up);
  
    Storage_HPArray(const Standard_Integer Low, const Standard_Integer Up, const Handle(Standard_Persistent)& V);
  
      void Init (const Handle(Standard_Persistent)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Standard_Persistent)& Value) ;
  
     const  Handle(Standard_Persistent)& Value (const Standard_Integer Index)  const;
  
      Handle(Standard_Persistent)& ChangeValue (const Standard_Integer Index) ;
  
     const  Storage_PArray& Array1()  const;
  
      Storage_PArray& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Storage_HPArray)

protected:




private: 


  Storage_PArray myArray;


};

#define ItemHArray1 Handle(Standard_Persistent)
#define ItemHArray1_hxx <Standard_Persistent.hxx>
#define TheArray1 Storage_PArray
#define TheArray1_hxx <Storage_PArray.hxx>
#define TCollection_HArray1 Storage_HPArray
#define TCollection_HArray1_hxx <Storage_HPArray.hxx>
#define Handle_TCollection_HArray1 Handle_Storage_HPArray
#define TCollection_HArray1_Type_() Storage_HPArray_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Storage_HPArray_HeaderFile
