// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_Array1OfEdge_HeaderFile
#define _Aspect_Array1OfEdge_HeaderFile

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
class Aspect_Edge;



class Aspect_Array1OfEdge 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Aspect_Array1OfEdge(const Standard_Integer Low, const Standard_Integer Up);
  
    Aspect_Array1OfEdge(const Aspect_Edge& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Aspect_Edge& V) ;
  
      void Destroy() ;
~Aspect_Array1OfEdge()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Aspect_Array1OfEdge& Assign (const Aspect_Array1OfEdge& Other) ;
 const  Aspect_Array1OfEdge& operator = (const Aspect_Array1OfEdge& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Aspect_Edge& Value) ;
  
     const  Aspect_Edge& Value (const Standard_Integer Index)  const;
   const  Aspect_Edge& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Aspect_Edge& ChangeValue (const Standard_Integer Index) ;
    Aspect_Edge& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Aspect_Array1OfEdge(const Aspect_Array1OfEdge& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Aspect_Edge
#define Array1Item_hxx <Aspect_Edge.hxx>
#define TCollection_Array1 Aspect_Array1OfEdge
#define TCollection_Array1_hxx <Aspect_Array1OfEdge.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Aspect_Array1OfEdge_HeaderFile
