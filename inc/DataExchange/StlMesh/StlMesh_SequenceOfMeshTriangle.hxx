// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_SequenceOfMeshTriangle_HeaderFile
#define _StlMesh_SequenceOfMeshTriangle_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BaseSequence.hxx>
#include <DataExchange/StlMesh/Handle_StlMesh_MeshTriangle.hxx>
#include <DataExchange/StlMesh/Handle_StlMesh_SequenceNodeOfSequenceOfMeshTriangle.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StlMesh_MeshTriangle;
class StlMesh_SequenceNodeOfSequenceOfMeshTriangle;



class StlMesh_SequenceOfMeshTriangle  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StlMesh_SequenceOfMeshTriangle();
  
  Standard_EXPORT StlMesh_SequenceOfMeshTriangle(const StlMesh_SequenceOfMeshTriangle& Other);
  
  Standard_EXPORT   void Clear() ;
~StlMesh_SequenceOfMeshTriangle()
{
  Clear();
}
  
  Standard_EXPORT  const  StlMesh_SequenceOfMeshTriangle& Assign (const StlMesh_SequenceOfMeshTriangle& Other) ;
 const  StlMesh_SequenceOfMeshTriangle& operator = (const StlMesh_SequenceOfMeshTriangle& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StlMesh_MeshTriangle)& T) ;
  
      void Append (StlMesh_SequenceOfMeshTriangle& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StlMesh_MeshTriangle)& T) ;
  
      void Prepend (StlMesh_SequenceOfMeshTriangle& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StlMesh_MeshTriangle)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StlMesh_SequenceOfMeshTriangle& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StlMesh_MeshTriangle)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StlMesh_SequenceOfMeshTriangle& S) ;
  
  Standard_EXPORT  const  Handle(StlMesh_MeshTriangle)& First()  const;
  
  Standard_EXPORT  const  Handle(StlMesh_MeshTriangle)& Last()  const;
  
      void Split (const Standard_Integer Index, StlMesh_SequenceOfMeshTriangle& Sub) ;
  
  Standard_EXPORT  const  Handle(StlMesh_MeshTriangle)& Value (const Standard_Integer Index)  const;
 const  Handle(StlMesh_MeshTriangle)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StlMesh_MeshTriangle)& I) ;
  
  Standard_EXPORT   Handle(StlMesh_MeshTriangle)& ChangeValue (const Standard_Integer Index) ;
  Handle(StlMesh_MeshTriangle)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StlMesh_MeshTriangle)
#define SeqItem_hxx <DataExchange/StlMesh/StlMesh_MeshTriangle.hxx>
#define TCollection_SequenceNode StlMesh_SequenceNodeOfSequenceOfMeshTriangle
#define TCollection_SequenceNode_hxx <DataExchange/StlMesh/StlMesh_SequenceNodeOfSequenceOfMeshTriangle.hxx>
#define Handle_TCollection_SequenceNode Handle_StlMesh_SequenceNodeOfSequenceOfMeshTriangle
#define TCollection_SequenceNode_Type_() StlMesh_SequenceNodeOfSequenceOfMeshTriangle_Type_()
#define TCollection_Sequence StlMesh_SequenceOfMeshTriangle
#define TCollection_Sequence_hxx <DataExchange/StlMesh/StlMesh_SequenceOfMeshTriangle.hxx>

#include <Foundation/TCollection/TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StlMesh_SequenceOfMeshTriangle_HeaderFile
