// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Array1OfVertex_HeaderFile
#define _Graphic3d_Array1OfVertex_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Graphic3d_Vertex.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;



class Graphic3d_Array1OfVertex 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Graphic3d_Array1OfVertex(const Standard_Integer Low, const Standard_Integer Up);
  
    Graphic3d_Array1OfVertex(const Graphic3d_Vertex& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Graphic3d_Vertex& V) ;
  
      void Destroy() ;
~Graphic3d_Array1OfVertex()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Graphic3d_Array1OfVertex& Assign (const Graphic3d_Array1OfVertex& Other) ;
 const  Graphic3d_Array1OfVertex& operator = (const Graphic3d_Array1OfVertex& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Graphic3d_Vertex& Value) ;
  
     const  Graphic3d_Vertex& Value (const Standard_Integer Index)  const;
   const  Graphic3d_Vertex& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Graphic3d_Vertex& ChangeValue (const Standard_Integer Index) ;
    Graphic3d_Vertex& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Graphic3d_Array1OfVertex(const Graphic3d_Array1OfVertex& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Graphic3d_Vertex
#define Array1Item_hxx <Graphic3d_Vertex.hxx>
#define TCollection_Array1 Graphic3d_Array1OfVertex
#define TCollection_Array1_hxx <Graphic3d_Array1OfVertex.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Graphic3d_Array1OfVertex_HeaderFile
