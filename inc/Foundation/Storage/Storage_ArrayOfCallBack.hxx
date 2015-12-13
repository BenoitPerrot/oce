// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_ArrayOfCallBack_HeaderFile
#define _Storage_ArrayOfCallBack_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Storage_CallBack.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Storage_CallBack;



class Storage_ArrayOfCallBack 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Storage_ArrayOfCallBack(const Standard_Integer Low, const Standard_Integer Up);
  
    Storage_ArrayOfCallBack(const Handle(Storage_CallBack)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(Storage_CallBack)& V) ;
  
      void Destroy() ;
~Storage_ArrayOfCallBack()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Storage_ArrayOfCallBack& Assign (const Storage_ArrayOfCallBack& Other) ;
 const  Storage_ArrayOfCallBack& operator = (const Storage_ArrayOfCallBack& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Storage_CallBack)& Value) ;
  
     const  Handle(Storage_CallBack)& Value (const Standard_Integer Index)  const;
   const  Handle(Storage_CallBack)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(Storage_CallBack)& ChangeValue (const Standard_Integer Index) ;
    Handle(Storage_CallBack)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Storage_ArrayOfCallBack(const Storage_ArrayOfCallBack& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(Storage_CallBack)
#define Array1Item_hxx <Foundation/Storage/Storage_CallBack.hxx>
#define TCollection_Array1 Storage_ArrayOfCallBack
#define TCollection_Array1_hxx <Foundation/Storage/Storage_ArrayOfCallBack.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Storage_ArrayOfCallBack_HeaderFile
