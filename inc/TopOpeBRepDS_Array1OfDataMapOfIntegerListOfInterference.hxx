// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference_HeaderFile
#define _TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference_HeaderFile

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
class TopOpeBRepDS_DataMapOfIntegerListOfInterference;



class TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(const Standard_Integer Low, const Standard_Integer Up);
  
    TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(const TopOpeBRepDS_DataMapOfIntegerListOfInterference& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const TopOpeBRepDS_DataMapOfIntegerListOfInterference& V) ;
  
      void Destroy() ;
~TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference& Assign (const TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference& Other) ;
 const  TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference& operator = (const TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TopOpeBRepDS_DataMapOfIntegerListOfInterference& Value) ;
  
     const  TopOpeBRepDS_DataMapOfIntegerListOfInterference& Value (const Standard_Integer Index)  const;
   const  TopOpeBRepDS_DataMapOfIntegerListOfInterference& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      TopOpeBRepDS_DataMapOfIntegerListOfInterference& ChangeValue (const Standard_Integer Index) ;
    TopOpeBRepDS_DataMapOfIntegerListOfInterference& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference(const TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item TopOpeBRepDS_DataMapOfIntegerListOfInterference
#define Array1Item_hxx <TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx>
#define TCollection_Array1 TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference
#define TCollection_Array1_hxx <TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference_HeaderFile
