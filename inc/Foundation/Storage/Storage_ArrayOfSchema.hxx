// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_ArrayOfSchema_HeaderFile
#define _Storage_ArrayOfSchema_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Storage/Handle_Storage_Schema.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Storage_Schema;



class Storage_ArrayOfSchema 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Storage_ArrayOfSchema(const Standard_Integer Low, const Standard_Integer Up);
  
    Storage_ArrayOfSchema(const Handle(Storage_Schema)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(Storage_Schema)& V) ;
  
      void Destroy() ;
~Storage_ArrayOfSchema()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Storage_ArrayOfSchema& Assign (const Storage_ArrayOfSchema& Other) ;
 const  Storage_ArrayOfSchema& operator = (const Storage_ArrayOfSchema& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Storage_Schema)& Value) ;
  
     const  Handle(Storage_Schema)& Value (const Standard_Integer Index)  const;
   const  Handle(Storage_Schema)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(Storage_Schema)& ChangeValue (const Standard_Integer Index) ;
    Handle(Storage_Schema)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Storage_ArrayOfSchema(const Storage_ArrayOfSchema& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(Storage_Schema)
#define Array1Item_hxx <Foundation/Storage/Storage_Schema.hxx>
#define TCollection_Array1 Storage_ArrayOfSchema
#define TCollection_Array1_hxx <Foundation/Storage/Storage_ArrayOfSchema.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Storage_ArrayOfSchema_HeaderFile
