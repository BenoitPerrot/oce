// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_MeshEntityOwner.hxx>
#include <Visualization/MeshVS/Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMeshEntityOwner.hxx>
class Standard_NoSuchObject;
class MeshVS_MeshEntityOwner;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerMeshEntityOwner;
class MeshVS_DataMapNodeOfDataMapOfIntegerMeshEntityOwner;



class MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner();
  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner(const MeshVS_DataMapOfIntegerMeshEntityOwner& aMap);
  
  Standard_EXPORT   void Initialize (const MeshVS_DataMapOfIntegerMeshEntityOwner& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Handle(MeshVS_MeshEntityOwner)& Value()  const;




protected:





private:





};







#endif // _MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner_HeaderFile
