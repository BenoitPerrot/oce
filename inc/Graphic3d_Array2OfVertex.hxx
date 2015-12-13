// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Array2OfVertex_HeaderFile
#define _Graphic3d_Array2OfVertex_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Graphic3d_Vertex.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;



class Graphic3d_Array2OfVertex 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Graphic3d_Array2OfVertex(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT Graphic3d_Array2OfVertex(const Graphic3d_Vertex& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const Graphic3d_Vertex& V) ;
  
  Standard_EXPORT   void Destroy() ;
~Graphic3d_Array2OfVertex()
{
  Destroy();
}
  
  Standard_EXPORT  const  Graphic3d_Array2OfVertex& Assign (const Graphic3d_Array2OfVertex& Other) ;
 const  Graphic3d_Array2OfVertex& operator = (const Graphic3d_Array2OfVertex& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Graphic3d_Vertex& Value) ;
  
     const  Graphic3d_Vertex& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  Graphic3d_Vertex& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      Graphic3d_Vertex& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    Graphic3d_Vertex& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT Graphic3d_Array2OfVertex(const Graphic3d_Array2OfVertex& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item Graphic3d_Vertex
#define Array2Item_hxx <Graphic3d_Vertex.hxx>
#define TCollection_Array2 Graphic3d_Array2OfVertex
#define TCollection_Array2_hxx <Graphic3d_Array2OfVertex.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _Graphic3d_Array2OfVertex_HeaderFile
