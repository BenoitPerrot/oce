// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_MapOfTwoNodes_HeaderFile
#define _MeshVS_MapOfTwoNodes_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Visualization/MeshVS/MeshVS_TwoNodes.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_StdMapNodeOfMapOfTwoNodes.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class MeshVS_TwoNodesHasher;
class MeshVS_StdMapNodeOfMapOfTwoNodes;
class MeshVS_MapIteratorOfMapOfTwoNodes;



class MeshVS_MapOfTwoNodes  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_MapOfTwoNodes(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT MeshVS_MapOfTwoNodes(const MeshVS_MapOfTwoNodes& Other);
  
  Standard_EXPORT   MeshVS_MapOfTwoNodes& Assign (const MeshVS_MapOfTwoNodes& Other) ;
  MeshVS_MapOfTwoNodes& operator = (const MeshVS_MapOfTwoNodes& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MeshVS_MapOfTwoNodes()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const MeshVS_TwoNodes& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const MeshVS_TwoNodes& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const MeshVS_TwoNodes& aKey) ;




protected:





private:





};







#endif // _MeshVS_MapOfTwoNodes_HeaderFile
