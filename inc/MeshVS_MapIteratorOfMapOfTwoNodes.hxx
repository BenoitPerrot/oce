// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_MapIteratorOfMapOfTwoNodes_HeaderFile
#define _MeshVS_MapIteratorOfMapOfTwoNodes_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <MeshVS_TwoNodes.hxx>
#include <Handle_MeshVS_StdMapNodeOfMapOfTwoNodes.hxx>
class Standard_NoSuchObject;
class MeshVS_TwoNodesHasher;
class MeshVS_MapOfTwoNodes;
class MeshVS_StdMapNodeOfMapOfTwoNodes;



class MeshVS_MapIteratorOfMapOfTwoNodes  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_MapIteratorOfMapOfTwoNodes();
  
  Standard_EXPORT MeshVS_MapIteratorOfMapOfTwoNodes(const MeshVS_MapOfTwoNodes& aMap);
  
  Standard_EXPORT   void Initialize (const MeshVS_MapOfTwoNodes& aMap) ;
  
  Standard_EXPORT  const  MeshVS_TwoNodes& Key()  const;




protected:





private:





};







#endif // _MeshVS_MapIteratorOfMapOfTwoNodes_HeaderFile
