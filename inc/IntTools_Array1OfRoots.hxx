// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_Array1OfRoots_HeaderFile
#define _IntTools_Array1OfRoots_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IntTools_Root;



class IntTools_Array1OfRoots 
{
public:

  DEFINE_STANDARD_ALLOC

  
    IntTools_Array1OfRoots(const Standard_Integer Low, const Standard_Integer Up);
  
    IntTools_Array1OfRoots(const IntTools_Root& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const IntTools_Root& V) ;
  
      void Destroy() ;
~IntTools_Array1OfRoots()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  IntTools_Array1OfRoots& Assign (const IntTools_Array1OfRoots& Other) ;
 const  IntTools_Array1OfRoots& operator = (const IntTools_Array1OfRoots& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const IntTools_Root& Value) ;
  
     const  IntTools_Root& Value (const Standard_Integer Index)  const;
   const  IntTools_Root& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      IntTools_Root& ChangeValue (const Standard_Integer Index) ;
    IntTools_Root& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT IntTools_Array1OfRoots(const IntTools_Array1OfRoots& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item IntTools_Root
#define Array1Item_hxx <IntTools_Root.hxx>
#define TCollection_Array1 IntTools_Array1OfRoots
#define TCollection_Array1_hxx <IntTools_Array1OfRoots.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _IntTools_Array1OfRoots_HeaderFile
